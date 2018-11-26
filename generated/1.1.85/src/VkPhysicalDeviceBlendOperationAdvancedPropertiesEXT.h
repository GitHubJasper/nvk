/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKPHYSICALDEVICEBLENDOPERATIONADVANCEDPROPERTIESEXT_H__
#define __VK_VKPHYSICALDEVICEBLENDOPERATIONADVANCEDPROPERTIESEXT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_GETTER(GetadvancedBlendMaxColorAttachments);
    static NAN_GETTER(GetadvancedBlendIndependentBlend);
    static NAN_GETTER(GetadvancedBlendNonPremultipliedSrcColor);
    static NAN_GETTER(GetadvancedBlendNonPremultipliedDstColor);
    static NAN_GETTER(GetadvancedBlendCorrelatedOverlap);
    static NAN_GETTER(GetadvancedBlendAllOperations);

    // real instance
    VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT();
    ~_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT();

};

#endif