/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKDISPLAYSURFACECREATEINFOKHR_H__
#define __VK_VKDISPLAYSURFACECREATEINFOKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDisplaySurfaceCreateInfoKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> displayMode;
      static NAN_GETTER(GetdisplayMode);
    static NAN_SETTER(SetdisplayMode);
    
    static NAN_GETTER(GetplaneIndex);
    static NAN_SETTER(SetplaneIndex);
    
    static NAN_GETTER(GetplaneStackIndex);
    static NAN_SETTER(SetplaneStackIndex);
    
    static NAN_GETTER(Gettransform);
    static NAN_SETTER(Settransform);
    
    static NAN_GETTER(GetglobalAlpha);
    static NAN_SETTER(SetglobalAlpha);
    
    static NAN_GETTER(GetalphaMode);
    static NAN_SETTER(SetalphaMode);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> imageExtent;
      static NAN_GETTER(GetimageExtent);
    static NAN_SETTER(SetimageExtent);
    

    // real instance
    VkDisplaySurfaceCreateInfoKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDisplaySurfaceCreateInfoKHR();
    ~_VkDisplaySurfaceCreateInfoKHR();

};

#endif