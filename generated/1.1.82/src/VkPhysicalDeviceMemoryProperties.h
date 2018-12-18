/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#ifndef __VK_VKPHYSICALDEVICEMEMORYPROPERTIES_H__
#define __VK_VKPHYSICALDEVICEMEMORYPROPERTIES_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceMemoryProperties: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetmemoryTypeCount);
    std::vector<VkMemoryType>* vmemoryTypes;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> memoryTypes;
    static NAN_GETTER(GetmemoryTypes);
    static NAN_GETTER(GetmemoryHeapCount);
    std::vector<VkMemoryHeap>* vmemoryHeaps;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> memoryHeaps;
    static NAN_GETTER(GetmemoryHeaps);

    // real instance
    VkPhysicalDeviceMemoryProperties instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceMemoryProperties();
    ~_VkPhysicalDeviceMemoryProperties();

};

#endif