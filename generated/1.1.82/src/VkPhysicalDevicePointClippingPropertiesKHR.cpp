/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDevicePointClippingPropertiesKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDevicePointClippingPropertiesKHR::constructor;

_VkPhysicalDevicePointClippingPropertiesKHR::_VkPhysicalDevicePointClippingPropertiesKHR() {
  
  
}

_VkPhysicalDevicePointClippingPropertiesKHR::~_VkPhysicalDevicePointClippingPropertiesKHR() {
  //printf("VkPhysicalDevicePointClippingPropertiesKHR deconstructed!!\n");
  
}

void _VkPhysicalDevicePointClippingPropertiesKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDevicePointClippingPropertiesKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDevicePointClippingPropertiesKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkPhysicalDevicePointClippingPropertiesKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDevicePointClippingPropertiesKHR::flush() {
  _VkPhysicalDevicePointClippingPropertiesKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDevicePointClippingPropertiesKHR::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDevicePointClippingPropertiesKHR* self = new _VkPhysicalDevicePointClippingPropertiesKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDevicePointClippingPropertiesKHR constructor cannot be invoked without 'new'");
  }
};

