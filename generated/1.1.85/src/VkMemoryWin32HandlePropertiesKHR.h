/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKMEMORYWIN32HANDLEPROPERTIESKHR_H__
#define __VK_VKMEMORYWIN32HANDLEPROPERTIESKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkMemoryWin32HandlePropertiesKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_GETTER(GetmemoryTypeBits);

    // real instance
    VkMemoryWin32HandlePropertiesKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkMemoryWin32HandlePropertiesKHR();
    ~_VkMemoryWin32HandlePropertiesKHR();

};

#endif