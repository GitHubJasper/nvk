/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkBindBufferMemoryDeviceGroupInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkBindBufferMemoryDeviceGroupInfoKHR::constructor;

_VkBindBufferMemoryDeviceGroupInfoKHR::_VkBindBufferMemoryDeviceGroupInfoKHR() {
  
  
}

_VkBindBufferMemoryDeviceGroupInfoKHR::~_VkBindBufferMemoryDeviceGroupInfoKHR() {
  //printf("VkBindBufferMemoryDeviceGroupInfoKHR deconstructed!!\n");
  
}

void _VkBindBufferMemoryDeviceGroupInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBindBufferMemoryDeviceGroupInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBindBufferMemoryDeviceGroupInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkBindBufferMemoryDeviceGroupInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkBindBufferMemoryDeviceGroupInfoKHR::flush() {
  _VkBindBufferMemoryDeviceGroupInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkBindBufferMemoryDeviceGroupInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkBindBufferMemoryDeviceGroupInfoKHR* self = new _VkBindBufferMemoryDeviceGroupInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkBindBufferMemoryDeviceGroupInfoKHR constructor cannot be invoked without 'new'");
  }
};

