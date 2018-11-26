/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKPIPELINEVIEWPORTSHADINGRATEIMAGESTATECREATEINFONV_H__
#define __VK_VKPIPELINEVIEWPORTSHADINGRATEIMAGESTATECREATEINFONV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipelineViewportShadingRateImageStateCreateInfoNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
    static NAN_GETTER(GetshadingRateImageEnable);
    static NAN_SETTER(SetshadingRateImageEnable);
    
    static NAN_GETTER(GetviewportCount);
    static NAN_SETTER(SetviewportCount);
    
    std::vector<VkShadingRatePaletteNV>* vpShadingRatePalettes;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pShadingRatePalettes;
    static NAN_GETTER(GetpShadingRatePalettes);
    static NAN_SETTER(SetpShadingRatePalettes);
    

    // real instance
    VkPipelineViewportShadingRateImageStateCreateInfoNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPipelineViewportShadingRateImageStateCreateInfoNV();
    ~_VkPipelineViewportShadingRateImageStateCreateInfoNV();

};

#endif