import fs from "fs";
import https from "https";

import pkg from "../package.json";

import nunjucks from "nunjucks";

import patchAST from "./generators/ast-patch";
import generateAST from "./generators/ast";
import generateCalls from "./generators/calls";
import generateEnums from "./generators/enums";
import generateIndex from "./generators/index";
import generateGyp from "./generators/gyp";
import generatePackage from "./generators/package";
import generateUtils from "./generators/utils";
import generateTS from "./generators/typescript";
import generateMemoryLayouts from "./generators/memoryLayouts";
import generateJavaScriptInterfaces from "./generators/js-interfaces";
import generateDocs from "./generators/docs";

import {
  warn,
  isSupportedWSI,
  formatVkVersion,
  getSortedIncludes,
  getPlatformRelevantIncludes,
  isCurrentPlatformSupportedExtension
} from "./utils";

const GEN_FILE_NOTICE = `/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY ${pkg.name} v${pkg.version}
 */
`;

let totalFiles = 0;
let writtenFiles = 0;
let writtenBytes = 0;
let writtenLines = 0;

function downloadVulkanSpecificationFile(version) {
  let path = `${pkg.config.SPEC_DIR}/${version}.xml`;
  return new Promise(resolve => {
    if (fs.existsSync(path)) return resolve({ error: null, path });
    console.log(`Downloading specification file for ${version}...`);
    let req = https.get(`https://raw.githubusercontent.com/KhronosGroup/Vulkan-Docs/v${version}/xml/vk.xml`, res => {
      if (res.statusCode !== 200) {
        req.abort();
        let err = `No specification file found for version ${version}! `;
        err += `Make sure the specification got released at: https://github.com/KhronosGroup/Vulkan-Docs/releases`;
        resolve({ error: err, path });
        return;
      }
      let total = res.headers["content-length"];
      let current = 0;
      let lastPercent = 0;
      res.on("error", (err) => resolve({ error: err, path }));
      res.on("end", () => {
        process.stderr.write("100%" + "\n\n");
        resolve({ error: null, path });
      });
      process.stderr.write("0% ");
      res.on("data", function(chunk) {
        current += chunk.length;
        let percent = Math.round(current * 100 / total);
        if (percent > lastPercent + 9) {
          lastPercent = percent;
          process.stderr.write(percent + "% ");
        }
      });
      res.pipe(fs.createWriteStream(path));
    });
  });
};

// bridged to only change the change data of a file if it's really necessary
// (msbuild seems to re-compile based on file change date..)
function writeAddonFile(path, data, encoding, includeNotice = false) {
  let source = null;
  try {
    source = fs.readFileSync(path, encoding);
  } catch(e) {};
  if (includeNotice) data = GEN_FILE_NOTICE + data;
  if (source !== data) {
    totalFiles++;
    fs.writeFileSync(path, data, encoding);
  }
  writtenFiles++;
  writtenBytes += data.length;
  writtenLines += data.split(/\r\n|\r|\n/).length;
};

function getEnumByName(enums, name) {
  for (let ii = 0; ii < enums.length; ++ii) {
    let enu = enums[ii];
    if (enu.name === name) return enu;
  };
  return null;
};

function insertOrReplaceEnumMember(enu, member) {
  for (let ii = 0; ii < enu.children.length; ++ii) {
    if (enu.children[ii].name === member.name) {
      let child = enu.children[ii];
      child.value = member.value;
      return;
    }
  };
  enu.children.push(member);
};

function mergeExtensionsIntoEnums(enums, extensions) {
  let enuExt = {
    kind: "ENUM",
    type: "ENUM",
    name: "API_Extensions",
    children: [],
    documentation: {
      macros: [],
      category: "Uncategorized",
      description: ""
    }
  };
  let strExt = {
    kind: "ENUM",
    type: "ENUM_STRINGS",
    name: "API_Extensions_Strings",
    children: [],
    documentation: {
      macros: [],
      category: "Uncategorized",
      description: ""
    }
  };
  enums.unshift(enuExt);
  enums.unshift(strExt);
  extensions.map(extension => {
    extension.members.map(member => {
      if (member.kind !== "EXTENSION_MEMBER_ENUM") return;
      if (member.extends) {
        let enu = getEnumByName(enums, member.extends);
        insertOrReplaceEnumMember(enu, member);
      } else {
        if (member.isNumericValue || member.isEnumValue) {
          insertOrReplaceEnumMember(enuExt, member);
        }
        else if (member.isStringValue) {
          insertOrReplaceEnumMember(strExt, member);
        }
        else {
          warn(`Cannot handle enum extension ${extension.name} in merge-extensions!`);
        }
      }
    });
  });
};

async function generateBindings({xml, version, docs, incremental} = _) {
  let ast = null;
  let includes = [];
  let includeNames = [];
  let sortedIncludes = [];
  // write paths
  const baseGeneratePath = pkg.config.GEN_OUT_DIR;
  const generateVersionPath = `${baseGeneratePath}/${version}`;
  const generatePath = `${generateVersionPath}/${process.platform}`;
  const generateSrcPath = `${generatePath}/src`;
  // reserve write dirs
  {
    // generated/
    if (!fs.existsSync(baseGeneratePath)) fs.mkdirSync(baseGeneratePath);
    // generated/version/
    if (!fs.existsSync(generateVersionPath)) fs.mkdirSync(generateVersionPath);
    // generated/version/platform/
    if (!fs.existsSync(generatePath)) fs.mkdirSync(generatePath);
    // generated/version/platform/src/
    if (!fs.existsSync(generateSrcPath)) fs.mkdirSync(generateSrcPath);
  }
  // introduce
  if (incremental) console.log(`Note: Bindings will use incremental building`);
  console.log(`Generating bindings for ${version}...`);
  // generate AST
  {
    console.log(`Generating AST..`);
    ast = await generateAST({ xmlInput: xml, version, docs });
    patchAST(ast);
    let str = JSON.stringify(ast, null, 2);
    writeAddonFile(`${generatePath}/ast.json`, str, "utf-8");
  }
  // filter out ast nodes by their types
  let calls = ast.filter(node => node.kind === "COMMAND_PROTO");
  let enums = ast.filter(node => node.kind === "ENUM");
  let structs = ast.filter(node => node.kind === "STRUCT");
  let handles = ast.filter(node => node.kind === "HANDLE");
  let extensions = ast.filter(node => node.kind === "EXTENSION");
  // process extensions
  {
    extensions.map(extension => {
      let {platform} = extension;
      extension.members.map(member => {
        let isEnumExtension = member.kind === "EXTENSION_MEMBER_ENUM";
        let isStructExtension = member.kind === "EXTENSION_MEMBER_STRUCT";
        let isCommandExtension = member.kind === "EXTENSION_MEMBER_COMMAND";
        if (isStructExtension) {
          structs.map(struct => {
            if (struct.name === member.name) struct.extension = extension;
          });
        }
        else if (isCommandExtension) {
          calls.map(call => {
            if (call.name === member.name) call.extension = extension;
          });
        }
      });
    });
  }
  // filter out structs by unsupported extensions
  structs = structs.filter(struct => {
    if (struct.extension) {
      let {extension} = struct;
      if (!isCurrentPlatformSupportedExtension(extension.platform)) return false;
    }
    return true;
  });
  // filter out calls by unsupported extensions
  calls = calls.filter(call => {
    if (call.extension) {
      let {extension} = call;
      if (!isCurrentPlatformSupportedExtension(extension.platform)) return false;
    }
    return true;
  });
  // create sorted includes
  {
    structs.map(struct => {
      if (includes.indexOf(struct.name) <= -1) includes.push({ name: struct.name, include: "" });
    });
    handles.map(handle => {
      if (includes.indexOf(handle.name) <= -1) includes.push({ name: handle.name, include: "" });
    });
    sortedIncludes = getSortedIncludes(includes);
  }
  // generate js interface
  {
    console.log("Generating Vk JavaScript interfaces..");
    let out = `
"use strict";

const {platform} = process;
const nvk = require("./build/Release/addon-" + platform + ".node");

const getAddressFromArrayBuffer = nvk.getAddressFromArrayBuffer;
const getArrayBufferFromAddress = nvk.getArrayBufferFromAddress;

global.ArrayBuffer.prototype.getAddress = function() {
  return getAddressFromArrayBuffer(this);
};

global.ArrayBuffer.fromAddress = function(address, byteLength) {
  return getArrayBufferFromAddress(address, byteLength);
};

const BI0 = BigInt(0);
const NULLT = String.fromCharCode(0x0);

const textEncoder = new TextEncoder();
const textDecoder = new TextDecoder();

function decodeNullTerminatedUTF8String(view) {
  let terminator = view.indexOf(0x0);
  let subview = view.subarray(0, terminator > -1 ? terminator : view.length);
  return textDecoder.decode(subview);
};

class NativeStringArray {
  constructor(array) {
    this.array = array;
    this.address = BI0;
    let stringBuffers = [];
    let addressView = new BigInt64Array(array.length);
    let addressBuffer = addressView.buffer;
    let addressBufferAddress = getAddressFromArrayBuffer(addressBuffer);
    for (let ii = 0; ii < array.length; ++ii) {
      let strBuffer = textEncoder.encode(array[ii] + NULLT).buffer;
      addressView[ii] = getAddressFromArrayBuffer(strBuffer);
      stringBuffers.push(strBuffer);
    };
    this.address = addressBufferAddress;
    // keep references to prevent deallocation
    this.addressBuffer = addressBuffer;
    this.stringBuffers = stringBuffers;
  }
};

class NativeObjectArray {
  constructor(array) {
    this.array = array;
    this.address = BI0;
    let byteStride = array[0].memoryBuffer.byteLength;
    let objectBuffer = new ArrayBuffer(array.length * byteStride);
    let objectBufferView = new Uint8Array(objectBuffer);
    let objectBufferAddress = getAddressFromArrayBuffer(objectBuffer);
    for (let ii = 0; ii < array.length; ++ii) {
      let byteOffset = ii * byteStride;
      let srcView = new Uint8Array(array[ii].memoryBuffer);
      let dstView = objectBufferView.subarray(byteOffset, byteOffset + byteStride);
      dstView.set(srcView, 0x0);
    };
    this.address = objectBufferAddress;
    // keep reference to prevent deallocation
    this.objectBuffer = objectBuffer;
  }
};

class NativeObjectReferenceArray {
  constructor(array) {
    this.array = array;
    this.address = BI0;
    let addressView = new BigInt64Array(array.length);
    let addressBuffer = addressView.buffer;
    let addressBufferAddress = getAddressFromArrayBuffer(addressBuffer);
    for (let ii = 0; ii < array.length; ++ii) {
      let object = array[ii];
      let objectAddress = object.address;
      addressView[ii] = objectAddress;
    };
    this.address = addressBufferAddress;
    // keep reference to prevent deallocation
    this.addressBuffer = addressBuffer;
  }
};
`;
    out += generateJavaScriptInterfaces(ast, handles, structs);
    out += `\nmodule.exports = {\n`;
    // add exports
    {
      // add additional c++ content
      out += `  ...(nvk.$getVulkanEnumerations()),\n`;
      out += `  VK_MAKE_VERSION: nvk.VK_MAKE_VERSION,\n`;
      out += `  VK_VERSION_MAJOR: nvk.VK_VERSION_MAJOR,\n`;
      out += `  VK_VERSION_MINOR: nvk.VK_VERSION_MINOR,\n`;
      out += `  VK_VERSION_PATCH: nvk.VK_VERSION_PATCH,\n`;
      out += `  VK_API_VERSION_1_0: nvk.VK_API_VERSION_1_0,\n`;
      out += `  VK_API_VERSION_1_1: nvk.VK_API_VERSION_1_1,\n`;
      out += `  vkUseDevice: nvk.vkUseDevice,\n`;
      out += `  vkUseInstance: nvk.vkUseInstance,\n`;
      // add VulkanWindow
      out += `  VulkanWindow: nvk.VulkanWindow,\n`;
      calls.map(call => {
        out += `  ${call.name}: nvk.${call.name},\n`;
      });
      handles.map(handle => {
        out += `  ${handle.name},\n`;
      });
      structs.map((struct, index) => {
        let comma = index < structs.length - 1 ? `,\n` : ``;
        out += `  ${struct.name}${comma}`;
      });
    }
    out += `\n};\n`;
    writeAddonFile(`${generatePath}/interfaces.js`, out, "utf-8", true);
  }
  // generate enums
  {
    console.log("Generating Vk enums..");
    mergeExtensionsIntoEnums(enums, extensions);
    let result = generateEnums(ast, enums);
    writeAddonFile(`${generateSrcPath}/enums.h`, result.source, "utf-8", true);
  }
  // generate calls
  {
    console.log("Generating Vk calls..");
    let result = generateCalls(ast, calls);
    writeAddonFile(`${generateSrcPath}/calls.h`, result.source, "utf-8", true);
  }
  // generate includes
  {
    console.log("Generating Vk includes..");
  }
  // generate typescript definition
  {
    let data = { structs, handles, calls, enums, includes: sortedIncludes };
    let result = generateTS(ast, data);
    console.log("Generating Typescript definition..");
    writeAddonFile(`${generatePath}/index.d.ts`, result.source, "utf-8", true);
  }
  // generate binding.gyp
  {
    console.log("Generating binding.gyp..");
    let result = await generateGyp(ast, version, incremental, [`"./src/index.cpp"`]);
    writeAddonFile(`${generatePath}/binding.gyp`, result.gyp, "utf-8");
  }
  // generate package.json
  {
    console.log("Generating package.json..");
    let result = generatePackage(ast, version);
    writeAddonFile(`${generatePath}/package.json`, result.json, "utf-8");
  }
  // generate utils
  {
    console.log("Generating utils..");
    let utilsFile = generateUtils(includes, structs);
    writeAddonFile(`${generateSrcPath}/utils.h`, utilsFile.header, "utf-8", true);
  }
  // generate indices
  {
    console.log("Generating indices..");
    let indexFile = generateIndex(ast, sortedIncludes, calls);
    writeAddonFile(`${generateSrcPath}/index.h`, indexFile.header, "utf-8", true);
    writeAddonFile(`${generateSrcPath}/index.cpp`, indexFile.source, "utf-8", true);
  }
  // generate enum layouts
  {
    let data = { structs };
    let result = generateMemoryLayouts(ast, data);
    console.log("Generating Memory layouts..");
    writeAddonFile(`${generateSrcPath}/memoryLayouts.h`, result, "utf-8", true);
  }
  // generate memory layouts
  {
    let data = { structs };
    let result = generateMemoryLayouts(ast, data);
    console.log("Generating Memory layouts..");
    writeAddonFile(`${generateSrcPath}/memoryLayouts.h`, result, "utf-8", true);
  }
  // generate typescript index
  {
    console.log("Generating typescript index..");
    let source = `module.exports = require("${pkg.config.TS_ROOT}");`;
    writeAddonFile(`${generatePath}/index.js`, source, "utf-8");
  }
  // docs
  if (docs) {
    console.log("Generating docs..");
    let data = { structs, handles, calls, enums, includes: sortedIncludes };
    generateDocs(ast, data, version);
  }
  console.log(``);
  console.log(`Generation stats:`);
  console.log(`Total files: ${totalFiles}/${writtenFiles}`);
  console.log(`Total size: ${writtenBytes * 1e-3}kb`);
  console.log(`Total lines: ${(writtenLines).toLocaleString().replace(",", ".")}lines`);
};

let vkVersion = process.env.npm_config_vkversion;
if (!vkVersion) throw `No specification version --vkversion specified!`;
vkVersion = formatVkVersion(vkVersion);
global.vkVersion = vkVersion;

let WSI = process.env.npm_config_wsi;
if (process.platform === "linux") {
  if (WSI && !isSupportedWSI(WSI)) throw `Invalid or unsupported WSI: ${WSI}`;
}

let docs = process.env.npm_config_docs === "true";
let incremental = process.env.npm_config_incremental === "true";

downloadVulkanSpecificationFile(vkVersion).then(out => {
  // read specification file
  if (out.error) throw out.error;
  const xml = fs.readFileSync(out.path, "utf-8");
  generateBindings({ xml, version: vkVersion, docs, incremental });
});
