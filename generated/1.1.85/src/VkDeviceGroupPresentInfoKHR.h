/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKDEVICEGROUPPRESENTINFOKHR_H__
#define __VK_VKDEVICEGROUPPRESENTINFOKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDeviceGroupPresentInfoKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
    static NAN_GETTER(GetswapchainCount);
    static NAN_SETTER(SetswapchainCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pDeviceMasks;
    static NAN_GETTER(GetpDeviceMasks);
    static NAN_SETTER(SetpDeviceMasks);
    
    static NAN_GETTER(Getmode);
    static NAN_SETTER(Setmode);
    

    // real instance
    VkDeviceGroupPresentInfoKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDeviceGroupPresentInfoKHR();
    ~_VkDeviceGroupPresentInfoKHR();

};

#endif