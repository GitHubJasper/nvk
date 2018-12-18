/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#ifndef __VK_VKPIPELINEVIEWPORTCOARSESAMPLEORDERSTATECREATEINFONV_H__
#define __VK_VKPIPELINEVIEWPORTCOARSESAMPLEORDERSTATECREATEINFONV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipelineViewportCoarseSampleOrderStateCreateInfoNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetsampleOrderType);
    static NAN_SETTER(SetsampleOrderType);
    
    static NAN_GETTER(GetcustomSampleOrderCount);
    static NAN_SETTER(SetcustomSampleOrderCount);
    
    std::vector<VkCoarseSampleOrderCustomNV>* vpCustomSampleOrders;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pCustomSampleOrders;
    static NAN_GETTER(GetpCustomSampleOrders);
    static NAN_SETTER(SetpCustomSampleOrders);
    

    // real instance
    VkPipelineViewportCoarseSampleOrderStateCreateInfoNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPipelineViewportCoarseSampleOrderStateCreateInfoNV();
    ~_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV();

};

#endif