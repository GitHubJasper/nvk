/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKMEMORYGETWIN32HANDLEINFOKHR_H__
#define __VK_VKMEMORYGETWIN32HANDLEINFOKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkMemoryGetWin32HandleInfoKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> memory;
      static NAN_GETTER(Getmemory);
    static NAN_SETTER(Setmemory);
    
    static NAN_GETTER(GethandleType);
    static NAN_SETTER(SethandleType);
    

    // real instance
    VkMemoryGetWin32HandleInfoKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkMemoryGetWin32HandleInfoKHR();
    ~_VkMemoryGetWin32HandleInfoKHR();

};

#endif