/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKATTACHMENTSAMPLELOCATIONSEXT_H__
#define __VK_VKATTACHMENTSAMPLELOCATIONSEXT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkAttachmentSampleLocationsEXT: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetattachmentIndex);
    static NAN_SETTER(SetattachmentIndex);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> sampleLocationsInfo;
      static NAN_GETTER(GetsampleLocationsInfo);
    static NAN_SETTER(SetsampleLocationsInfo);
    

    // real instance
    VkAttachmentSampleLocationsEXT instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkAttachmentSampleLocationsEXT();
    ~_VkAttachmentSampleLocationsEXT();

};

#endif