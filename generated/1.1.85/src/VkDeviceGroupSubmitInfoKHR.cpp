/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkDeviceGroupSubmitInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkDeviceGroupSubmitInfoKHR::constructor;

_VkDeviceGroupSubmitInfoKHR::_VkDeviceGroupSubmitInfoKHR() {
  
  
}

_VkDeviceGroupSubmitInfoKHR::~_VkDeviceGroupSubmitInfoKHR() {
  //printf("VkDeviceGroupSubmitInfoKHR deconstructed!!\n");
  
}

void _VkDeviceGroupSubmitInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDeviceGroupSubmitInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDeviceGroupSubmitInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkDeviceGroupSubmitInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDeviceGroupSubmitInfoKHR::flush() {
  _VkDeviceGroupSubmitInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkDeviceGroupSubmitInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkDeviceGroupSubmitInfoKHR* self = new _VkDeviceGroupSubmitInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDeviceGroupSubmitInfoKHR constructor cannot be invoked without 'new'");
  }
};

