/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKPIPELINESAMPLELOCATIONSSTATECREATEINFOEXT_H__
#define __VK_VKPIPELINESAMPLELOCATIONSSTATECREATEINFOEXT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipelineSampleLocationsStateCreateInfoEXT: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetsampleLocationsEnable);
    static NAN_SETTER(SetsampleLocationsEnable);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> sampleLocationsInfo;
      static NAN_GETTER(GetsampleLocationsInfo);
    static NAN_SETTER(SetsampleLocationsInfo);
    

    // real instance
    VkPipelineSampleLocationsStateCreateInfoEXT instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPipelineSampleLocationsStateCreateInfoEXT();
    ~_VkPipelineSampleLocationsStateCreateInfoEXT();

};

#endif