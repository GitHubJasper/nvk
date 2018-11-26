/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKCLEARATTACHMENT_H__
#define __VK_VKCLEARATTACHMENT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkClearAttachment: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetaspectMask);
    static NAN_SETTER(SetaspectMask);
    
    static NAN_GETTER(GetcolorAttachment);
    static NAN_SETTER(SetcolorAttachment);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> clearValue;
      static NAN_GETTER(GetclearValue);
    static NAN_SETTER(SetclearValue);
    

    // real instance
    VkClearAttachment instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkClearAttachment();
    ~_VkClearAttachment();

};

#endif