/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkExternalImageFormatPropertiesKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkExternalImageFormatPropertiesKHR::constructor;

_VkExternalImageFormatPropertiesKHR::_VkExternalImageFormatPropertiesKHR() {
  
  
}

_VkExternalImageFormatPropertiesKHR::~_VkExternalImageFormatPropertiesKHR() {
  //printf("VkExternalImageFormatPropertiesKHR deconstructed!!\n");
  
}

void _VkExternalImageFormatPropertiesKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkExternalImageFormatPropertiesKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkExternalImageFormatPropertiesKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkExternalImageFormatPropertiesKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkExternalImageFormatPropertiesKHR::flush() {
  _VkExternalImageFormatPropertiesKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkExternalImageFormatPropertiesKHR::New) {
  if (info.IsConstructCall()) {
    _VkExternalImageFormatPropertiesKHR* self = new _VkExternalImageFormatPropertiesKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkExternalImageFormatPropertiesKHR constructor cannot be invoked without 'new'");
  }
};

