/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#ifndef __VK_VKSUBRESOURCELAYOUT_H__
#define __VK_VKSUBRESOURCELAYOUT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkSubresourceLayout: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(Getoffset);
    static NAN_GETTER(Getsize);
    static NAN_GETTER(GetrowPitch);
    static NAN_GETTER(GetarrayPitch);
    static NAN_GETTER(GetdepthPitch);

    // real instance
    VkSubresourceLayout instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkSubresourceLayout();
    ~_VkSubresourceLayout();

};

#endif