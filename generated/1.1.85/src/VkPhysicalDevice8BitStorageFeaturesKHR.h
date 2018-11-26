/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKPHYSICALDEVICE8BITSTORAGEFEATURESKHR_H__
#define __VK_VKPHYSICALDEVICE8BITSTORAGEFEATURESKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDevice8BitStorageFeaturesKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetstorageBuffer8BitAccess);
    static NAN_SETTER(SetstorageBuffer8BitAccess);
    
    static NAN_GETTER(GetuniformAndStorageBuffer8BitAccess);
    static NAN_SETTER(SetuniformAndStorageBuffer8BitAccess);
    
    static NAN_GETTER(GetstoragePushConstant8);
    static NAN_SETTER(SetstoragePushConstant8);
    

    // real instance
    VkPhysicalDevice8BitStorageFeaturesKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDevice8BitStorageFeaturesKHR();
    ~_VkPhysicalDevice8BitStorageFeaturesKHR();

};

#endif