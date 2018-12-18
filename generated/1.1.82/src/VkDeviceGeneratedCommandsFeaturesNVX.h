/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#ifndef __VK_VKDEVICEGENERATEDCOMMANDSFEATURESNVX_H__
#define __VK_VKDEVICEGENERATEDCOMMANDSFEATURESNVX_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDeviceGeneratedCommandsFeaturesNVX: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetcomputeBindingPointSupport);
    static NAN_SETTER(SetcomputeBindingPointSupport);
    

    // real instance
    VkDeviceGeneratedCommandsFeaturesNVX instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDeviceGeneratedCommandsFeaturesNVX();
    ~_VkDeviceGeneratedCommandsFeaturesNVX();

};

#endif