/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKPHYSICALDEVICEIMAGEFORMATINFO2_H__
#define __VK_VKPHYSICALDEVICEIMAGEFORMATINFO2_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceImageFormatInfo2: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
    static NAN_GETTER(Getformat);
    static NAN_SETTER(Setformat);
    
    static NAN_GETTER(Gettype);
    static NAN_SETTER(Settype);
    
    static NAN_GETTER(Gettiling);
    static NAN_SETTER(Settiling);
    
    static NAN_GETTER(Getusage);
    static NAN_SETTER(Setusage);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    

    // real instance
    VkPhysicalDeviceImageFormatInfo2 instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceImageFormatInfo2();
    ~_VkPhysicalDeviceImageFormatInfo2();

};

#endif