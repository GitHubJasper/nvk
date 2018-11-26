/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKSPARSEMEMORYBIND_H__
#define __VK_VKSPARSEMEMORYBIND_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkSparseMemoryBind: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetresourceOffset);
    static NAN_SETTER(SetresourceOffset);
    
    static NAN_GETTER(Getsize);
    static NAN_SETTER(Setsize);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> memory;
      static NAN_GETTER(Getmemory);
    static NAN_SETTER(Setmemory);
    
    static NAN_GETTER(GetmemoryOffset);
    static NAN_SETTER(SetmemoryOffset);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    

    // real instance
    VkSparseMemoryBind instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkSparseMemoryBind();
    ~_VkSparseMemoryBind();

};

#endif