/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKPRESENTTIMESINFOGOOGLE_H__
#define __VK_VKPRESENTTIMESINFOGOOGLE_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPresentTimesInfoGOOGLE: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
    static NAN_GETTER(GetswapchainCount);
    static NAN_SETTER(SetswapchainCount);
    
    std::vector<VkPresentTimeGOOGLE>* vpTimes;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pTimes;
    static NAN_GETTER(GetpTimes);
    static NAN_SETTER(SetpTimes);
    

    // real instance
    VkPresentTimesInfoGOOGLE instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPresentTimesInfoGOOGLE();
    ~_VkPresentTimesInfoGOOGLE();

};

#endif