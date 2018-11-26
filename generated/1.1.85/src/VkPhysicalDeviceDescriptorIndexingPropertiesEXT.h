/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKPHYSICALDEVICEDESCRIPTORINDEXINGPROPERTIESEXT_H__
#define __VK_VKPHYSICALDEVICEDESCRIPTORINDEXINGPROPERTIESEXT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceDescriptorIndexingPropertiesEXT: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_GETTER(GetmaxUpdateAfterBindDescriptorsInAllPools);
    static NAN_GETTER(GetshaderUniformBufferArrayNonUniformIndexingNative);
    static NAN_GETTER(GetshaderSampledImageArrayNonUniformIndexingNative);
    static NAN_GETTER(GetshaderStorageBufferArrayNonUniformIndexingNative);
    static NAN_GETTER(GetshaderStorageImageArrayNonUniformIndexingNative);
    static NAN_GETTER(GetshaderInputAttachmentArrayNonUniformIndexingNative);
    static NAN_GETTER(GetrobustBufferAccessUpdateAfterBind);
    static NAN_GETTER(GetquadDivergentImplicitLod);
    static NAN_GETTER(GetmaxPerStageDescriptorUpdateAfterBindSamplers);
    static NAN_GETTER(GetmaxPerStageDescriptorUpdateAfterBindUniformBuffers);
    static NAN_GETTER(GetmaxPerStageDescriptorUpdateAfterBindStorageBuffers);
    static NAN_GETTER(GetmaxPerStageDescriptorUpdateAfterBindSampledImages);
    static NAN_GETTER(GetmaxPerStageDescriptorUpdateAfterBindStorageImages);
    static NAN_GETTER(GetmaxPerStageDescriptorUpdateAfterBindInputAttachments);
    static NAN_GETTER(GetmaxPerStageUpdateAfterBindResources);
    static NAN_GETTER(GetmaxDescriptorSetUpdateAfterBindSamplers);
    static NAN_GETTER(GetmaxDescriptorSetUpdateAfterBindUniformBuffers);
    static NAN_GETTER(GetmaxDescriptorSetUpdateAfterBindUniformBuffersDynamic);
    static NAN_GETTER(GetmaxDescriptorSetUpdateAfterBindStorageBuffers);
    static NAN_GETTER(GetmaxDescriptorSetUpdateAfterBindStorageBuffersDynamic);
    static NAN_GETTER(GetmaxDescriptorSetUpdateAfterBindSampledImages);
    static NAN_GETTER(GetmaxDescriptorSetUpdateAfterBindStorageImages);
    static NAN_GETTER(GetmaxDescriptorSetUpdateAfterBindInputAttachments);

    // real instance
    VkPhysicalDeviceDescriptorIndexingPropertiesEXT instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceDescriptorIndexingPropertiesEXT();
    ~_VkPhysicalDeviceDescriptorIndexingPropertiesEXT();

};

#endif