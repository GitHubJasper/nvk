/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkExportMemoryAllocateInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkExportMemoryAllocateInfoKHR::constructor;

_VkExportMemoryAllocateInfoKHR::_VkExportMemoryAllocateInfoKHR() {
  
  
}

_VkExportMemoryAllocateInfoKHR::~_VkExportMemoryAllocateInfoKHR() {
  //printf("VkExportMemoryAllocateInfoKHR deconstructed!!\n");
  
}

void _VkExportMemoryAllocateInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkExportMemoryAllocateInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkExportMemoryAllocateInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkExportMemoryAllocateInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkExportMemoryAllocateInfoKHR::flush() {
  _VkExportMemoryAllocateInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkExportMemoryAllocateInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkExportMemoryAllocateInfoKHR* self = new _VkExportMemoryAllocateInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkExportMemoryAllocateInfoKHR constructor cannot be invoked without 'new'");
  }
};

