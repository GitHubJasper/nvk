/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#ifndef __VK_VKACCELERATIONSTRUCTURECREATEINFONVX_H__
#define __VK_VKACCELERATIONSTRUCTURECREATEINFONVX_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkAccelerationStructureCreateInfoNVX: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Gettype);
    static NAN_SETTER(Settype);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetcompactedSize);
    static NAN_SETTER(SetcompactedSize);
    
    static NAN_GETTER(GetinstanceCount);
    static NAN_SETTER(SetinstanceCount);
    
    static NAN_GETTER(GetgeometryCount);
    static NAN_SETTER(SetgeometryCount);
    
    std::vector<VkGeometryNVX>* vpGeometries;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pGeometries;
    static NAN_GETTER(GetpGeometries);
    static NAN_SETTER(SetpGeometries);
    

    // real instance
    VkAccelerationStructureCreateInfoNVX instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkAccelerationStructureCreateInfoNVX();
    ~_VkAccelerationStructureCreateInfoNVX();

};

#endif