/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkSparseImageMemoryRequirements2KHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkSparseImageMemoryRequirements2KHR::constructor;

_VkSparseImageMemoryRequirements2KHR::_VkSparseImageMemoryRequirements2KHR() {
  
  
}

_VkSparseImageMemoryRequirements2KHR::~_VkSparseImageMemoryRequirements2KHR() {
  //printf("VkSparseImageMemoryRequirements2KHR deconstructed!!\n");
  
}

void _VkSparseImageMemoryRequirements2KHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSparseImageMemoryRequirements2KHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSparseImageMemoryRequirements2KHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkSparseImageMemoryRequirements2KHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkSparseImageMemoryRequirements2KHR::flush() {
  _VkSparseImageMemoryRequirements2KHR *self = this;
  
  return true;
}

NAN_METHOD(_VkSparseImageMemoryRequirements2KHR::New) {
  if (info.IsConstructCall()) {
    _VkSparseImageMemoryRequirements2KHR* self = new _VkSparseImageMemoryRequirements2KHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSparseImageMemoryRequirements2KHR constructor cannot be invoked without 'new'");
  }
};

