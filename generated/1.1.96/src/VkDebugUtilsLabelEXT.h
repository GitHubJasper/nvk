/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKDEBUGUTILSLABELEXT_H__
#define __VK_VKDEBUGUTILSLABELEXT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDebugUtilsLabelEXT: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::String, v8::CopyablePersistentTraits<v8::String>> pLabelName;
    static NAN_GETTER(GetpLabelName);
    static NAN_SETTER(SetpLabelName);
    
    std::vector<float>* vcolor;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> color;
    static NAN_GETTER(Getcolor);
    static NAN_SETTER(Setcolor);
    

    // real instance
    VkDebugUtilsLabelEXT instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDebugUtilsLabelEXT();
    ~_VkDebugUtilsLabelEXT();

};

#endif