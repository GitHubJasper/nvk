/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKRENDERPASSMULTIVIEWCREATEINFO_H__
#define __VK_VKRENDERPASSMULTIVIEWCREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkRenderPassMultiviewCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
    static NAN_GETTER(GetsubpassCount);
    static NAN_SETTER(SetsubpassCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pViewMasks;
    static NAN_GETTER(GetpViewMasks);
    static NAN_SETTER(SetpViewMasks);
    
    static NAN_GETTER(GetdependencyCount);
    static NAN_SETTER(SetdependencyCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pViewOffsets;
    static NAN_GETTER(GetpViewOffsets);
    static NAN_SETTER(SetpViewOffsets);
    
    static NAN_GETTER(GetcorrelationMaskCount);
    static NAN_SETTER(SetcorrelationMaskCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pCorrelationMasks;
    static NAN_GETTER(GetpCorrelationMasks);
    static NAN_SETTER(SetpCorrelationMasks);
    

    // real instance
    VkRenderPassMultiviewCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkRenderPassMultiviewCreateInfo();
    ~_VkRenderPassMultiviewCreateInfo();

};

#endif