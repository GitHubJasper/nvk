/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#ifndef __VK_VKPIPELINEREPRESENTATIVEFRAGMENTTESTSTATECREATEINFONV_H__
#define __VK_VKPIPELINEREPRESENTATIVEFRAGMENTTESTSTATECREATEINFONV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipelineRepresentativeFragmentTestStateCreateInfoNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetrepresentativeFragmentTestEnable);
    static NAN_SETTER(SetrepresentativeFragmentTestEnable);
    

    // real instance
    VkPipelineRepresentativeFragmentTestStateCreateInfoNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPipelineRepresentativeFragmentTestStateCreateInfoNV();
    ~_VkPipelineRepresentativeFragmentTestStateCreateInfoNV();

};

#endif