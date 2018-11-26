/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKDEVICEGROUPPRESENTCAPABILITIESKHR_H__
#define __VK_VKDEVICEGROUPPRESENTCAPABILITIESKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDeviceGroupPresentCapabilitiesKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    std::vector<uint32_t>* vpresentMask;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> presentMask;
    static NAN_GETTER(GetpresentMask);
    static NAN_GETTER(Getmodes);

    // real instance
    VkDeviceGroupPresentCapabilitiesKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDeviceGroupPresentCapabilitiesKHR();
    ~_VkDeviceGroupPresentCapabilitiesKHR();

};

#endif