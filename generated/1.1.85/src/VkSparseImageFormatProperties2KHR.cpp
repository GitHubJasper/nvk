/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkSparseImageFormatProperties2KHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkSparseImageFormatProperties2KHR::constructor;

_VkSparseImageFormatProperties2KHR::_VkSparseImageFormatProperties2KHR() {
  
  
}

_VkSparseImageFormatProperties2KHR::~_VkSparseImageFormatProperties2KHR() {
  //printf("VkSparseImageFormatProperties2KHR deconstructed!!\n");
  
}

void _VkSparseImageFormatProperties2KHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSparseImageFormatProperties2KHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSparseImageFormatProperties2KHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkSparseImageFormatProperties2KHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkSparseImageFormatProperties2KHR::flush() {
  _VkSparseImageFormatProperties2KHR *self = this;
  
  return true;
}

NAN_METHOD(_VkSparseImageFormatProperties2KHR::New) {
  if (info.IsConstructCall()) {
    _VkSparseImageFormatProperties2KHR* self = new _VkSparseImageFormatProperties2KHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSparseImageFormatProperties2KHR constructor cannot be invoked without 'new'");
  }
};

