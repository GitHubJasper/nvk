/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKQUEUEFAMILYPROPERTIES2_H__
#define __VK_VKQUEUEFAMILYPROPERTIES2_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkQueueFamilyProperties2: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> queueFamilyProperties;
      static NAN_GETTER(GetqueueFamilyProperties);

    // real instance
    VkQueueFamilyProperties2 instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkQueueFamilyProperties2();
    ~_VkQueueFamilyProperties2();

};

#endif