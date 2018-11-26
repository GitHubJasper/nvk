/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKBINDIMAGEMEMORYDEVICEGROUPINFO_H__
#define __VK_VKBINDIMAGEMEMORYDEVICEGROUPINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkBindImageMemoryDeviceGroupInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
    static NAN_GETTER(GetdeviceIndexCount);
    static NAN_SETTER(SetdeviceIndexCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pDeviceIndices;
    static NAN_GETTER(GetpDeviceIndices);
    static NAN_SETTER(SetpDeviceIndices);
    
    static NAN_GETTER(GetsplitInstanceBindRegionCount);
    static NAN_SETTER(SetsplitInstanceBindRegionCount);
    
    std::vector<VkRect2D>* vpSplitInstanceBindRegions;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pSplitInstanceBindRegions;
    static NAN_GETTER(GetpSplitInstanceBindRegions);
    static NAN_SETTER(SetpSplitInstanceBindRegions);
    

    // real instance
    VkBindImageMemoryDeviceGroupInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkBindImageMemoryDeviceGroupInfo();
    ~_VkBindImageMemoryDeviceGroupInfo();

};

#endif