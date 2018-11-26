/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceConservativeRasterizationPropertiesEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceConservativeRasterizationPropertiesEXT::constructor;

_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::_VkPhysicalDeviceConservativeRasterizationPropertiesEXT() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT;
  
}

_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::~_VkPhysicalDeviceConservativeRasterizationPropertiesEXT() {
  //printf("VkPhysicalDeviceConservativeRasterizationPropertiesEXT deconstructed!!\n");
  
  
  
  
  
  
  
  
  
  
  
}

void _VkPhysicalDeviceConservativeRasterizationPropertiesEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceConservativeRasterizationPropertiesEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("primitiveOverestimationSize").ToLocalChecked(), GetprimitiveOverestimationSize, SetprimitiveOverestimationSize, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxExtraPrimitiveOverestimationSize").ToLocalChecked(), GetmaxExtraPrimitiveOverestimationSize, SetmaxExtraPrimitiveOverestimationSize, ctor);
  SetPrototypeAccessor(proto, Nan::New("extraPrimitiveOverestimationSizeGranularity").ToLocalChecked(), GetextraPrimitiveOverestimationSizeGranularity, SetextraPrimitiveOverestimationSizeGranularity, ctor);
  SetPrototypeAccessor(proto, Nan::New("primitiveUnderestimation").ToLocalChecked(), GetprimitiveUnderestimation, SetprimitiveUnderestimation, ctor);
  SetPrototypeAccessor(proto, Nan::New("conservativePointAndLineRasterization").ToLocalChecked(), GetconservativePointAndLineRasterization, SetconservativePointAndLineRasterization, ctor);
  SetPrototypeAccessor(proto, Nan::New("degenerateTrianglesRasterized").ToLocalChecked(), GetdegenerateTrianglesRasterized, SetdegenerateTrianglesRasterized, ctor);
  SetPrototypeAccessor(proto, Nan::New("degenerateLinesRasterized").ToLocalChecked(), GetdegenerateLinesRasterized, SetdegenerateLinesRasterized, ctor);
  SetPrototypeAccessor(proto, Nan::New("fullyCoveredFragmentShaderInputVariable").ToLocalChecked(), GetfullyCoveredFragmentShaderInputVariable, SetfullyCoveredFragmentShaderInputVariable, ctor);
  SetPrototypeAccessor(proto, Nan::New("conservativeRasterizationPostDepthCoverage").ToLocalChecked(), GetconservativeRasterizationPostDepthCoverage, SetconservativeRasterizationPostDepthCoverage, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceConservativeRasterizationPropertiesEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceConservativeRasterizationPropertiesEXT::flush() {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceConservativeRasterizationPropertiesEXT* self = new _VkPhysicalDeviceConservativeRasterizationPropertiesEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("primitiveOverestimationSize").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("maxExtraPrimitiveOverestimationSize").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("extraPrimitiveOverestimationSizeGranularity").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("primitiveUnderestimation").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("conservativePointAndLineRasterization").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("degenerateTrianglesRasterized").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("degenerateLinesRasterized").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("fullyCoveredFragmentShaderInputVariable").ToLocalChecked();
      v8::Local<v8::String> sAccess10 = Nan::New("conservativeRasterizationPostDepthCoverage").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      if (obj->Has(sAccess9)) info.This()->Set(sAccess9, obj->Get(sAccess9));
      if (obj->Has(sAccess10)) info.This()->Set(sAccess10, obj->Get(sAccess10));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceConservativeRasterizationPropertiesEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::GetsType) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::SetsType) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceConservativeRasterizationPropertiesEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// primitiveOverestimationSize
NAN_GETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::GetprimitiveOverestimationSize) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.primitiveOverestimationSize));
}NAN_SETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::SetprimitiveOverestimationSize) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.primitiveOverestimationSize = static_cast<float>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceConservativeRasterizationPropertiesEXT.primitiveOverestimationSize' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// maxExtraPrimitiveOverestimationSize
NAN_GETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::GetmaxExtraPrimitiveOverestimationSize) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxExtraPrimitiveOverestimationSize));
}NAN_SETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::SetmaxExtraPrimitiveOverestimationSize) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.maxExtraPrimitiveOverestimationSize = static_cast<float>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceConservativeRasterizationPropertiesEXT.maxExtraPrimitiveOverestimationSize' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// extraPrimitiveOverestimationSizeGranularity
NAN_GETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::GetextraPrimitiveOverestimationSizeGranularity) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.extraPrimitiveOverestimationSizeGranularity));
}NAN_SETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::SetextraPrimitiveOverestimationSizeGranularity) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.extraPrimitiveOverestimationSizeGranularity = static_cast<float>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceConservativeRasterizationPropertiesEXT.extraPrimitiveOverestimationSizeGranularity' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// primitiveUnderestimation
NAN_GETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::GetprimitiveUnderestimation) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.primitiveUnderestimation));
}NAN_SETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::SetprimitiveUnderestimation) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.primitiveUnderestimation = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceConservativeRasterizationPropertiesEXT.primitiveUnderestimation' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// conservativePointAndLineRasterization
NAN_GETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::GetconservativePointAndLineRasterization) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.conservativePointAndLineRasterization));
}NAN_SETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::SetconservativePointAndLineRasterization) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.conservativePointAndLineRasterization = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceConservativeRasterizationPropertiesEXT.conservativePointAndLineRasterization' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// degenerateTrianglesRasterized
NAN_GETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::GetdegenerateTrianglesRasterized) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.degenerateTrianglesRasterized));
}NAN_SETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::SetdegenerateTrianglesRasterized) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.degenerateTrianglesRasterized = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceConservativeRasterizationPropertiesEXT.degenerateTrianglesRasterized' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// degenerateLinesRasterized
NAN_GETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::GetdegenerateLinesRasterized) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.degenerateLinesRasterized));
}NAN_SETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::SetdegenerateLinesRasterized) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.degenerateLinesRasterized = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceConservativeRasterizationPropertiesEXT.degenerateLinesRasterized' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// fullyCoveredFragmentShaderInputVariable
NAN_GETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::GetfullyCoveredFragmentShaderInputVariable) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.fullyCoveredFragmentShaderInputVariable));
}NAN_SETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::SetfullyCoveredFragmentShaderInputVariable) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.fullyCoveredFragmentShaderInputVariable = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceConservativeRasterizationPropertiesEXT.fullyCoveredFragmentShaderInputVariable' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// conservativeRasterizationPostDepthCoverage
NAN_GETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::GetconservativeRasterizationPostDepthCoverage) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.conservativeRasterizationPostDepthCoverage));
}NAN_SETTER(_VkPhysicalDeviceConservativeRasterizationPropertiesEXT::SetconservativeRasterizationPostDepthCoverage) {
  _VkPhysicalDeviceConservativeRasterizationPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.conservativeRasterizationPostDepthCoverage = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceConservativeRasterizationPropertiesEXT.conservativeRasterizationPostDepthCoverage' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}