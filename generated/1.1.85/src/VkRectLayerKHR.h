/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKRECTLAYERKHR_H__
#define __VK_VKRECTLAYERKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkRectLayerKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> offset;
      static NAN_GETTER(Getoffset);
    static NAN_SETTER(Setoffset);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> extent;
      static NAN_GETTER(Getextent);
    static NAN_SETTER(Setextent);
    
    static NAN_GETTER(Getlayer);
    static NAN_SETTER(Setlayer);
    

    // real instance
    VkRectLayerKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkRectLayerKHR();
    ~_VkRectLayerKHR();

};

#endif