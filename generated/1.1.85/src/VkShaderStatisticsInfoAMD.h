/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKSHADERSTATISTICSINFOAMD_H__
#define __VK_VKSHADERSTATISTICSINFOAMD_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkShaderStatisticsInfoAMD: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetshaderStageMask);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> resourceUsage;
      static NAN_GETTER(GetresourceUsage);
    static NAN_GETTER(GetnumPhysicalVgprs);
    static NAN_GETTER(GetnumPhysicalSgprs);
    static NAN_GETTER(GetnumAvailableVgprs);
    static NAN_GETTER(GetnumAvailableSgprs);
    std::vector<uint32_t>* vcomputeWorkGroupSize;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> computeWorkGroupSize;
    static NAN_GETTER(GetcomputeWorkGroupSize);

    // real instance
    VkShaderStatisticsInfoAMD instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkShaderStatisticsInfoAMD();
    ~_VkShaderStatisticsInfoAMD();

};

#endif