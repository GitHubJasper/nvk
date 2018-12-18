/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#ifndef __VK_VKINDIRECTCOMMANDSTOKENNVX_H__
#define __VK_VKINDIRECTCOMMANDSTOKENNVX_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkIndirectCommandsTokenNVX: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GettokenType);
    static NAN_SETTER(SettokenType);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> buffer;
      static NAN_GETTER(Getbuffer);
    static NAN_SETTER(Setbuffer);
    
    static NAN_GETTER(Getoffset);
    static NAN_SETTER(Setoffset);
    

    // real instance
    VkIndirectCommandsTokenNVX instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkIndirectCommandsTokenNVX();
    ~_VkIndirectCommandsTokenNVX();

};

#endif