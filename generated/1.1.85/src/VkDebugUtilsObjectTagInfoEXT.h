/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKDEBUGUTILSOBJECTTAGINFOEXT_H__
#define __VK_VKDEBUGUTILSOBJECTTAGINFOEXT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDebugUtilsObjectTagInfoEXT: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetobjectType);
    static NAN_SETTER(SetobjectType);
    
    static NAN_GETTER(GetobjectHandle);
    static NAN_SETTER(SetobjectHandle);
    
    static NAN_GETTER(GettagName);
    static NAN_SETTER(SettagName);
    
    static NAN_GETTER(GettagSize);
    static NAN_SETTER(SettagSize);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pTag;
    static NAN_GETTER(GetpTag);
    static NAN_SETTER(SetpTag);
    

    // real instance
    VkDebugUtilsObjectTagInfoEXT instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDebugUtilsObjectTagInfoEXT();
    ~_VkDebugUtilsObjectTagInfoEXT();

};

#endif