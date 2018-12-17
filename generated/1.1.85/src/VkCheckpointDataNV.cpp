/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkCheckpointDataNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkCheckpointDataNV::constructor;

_VkCheckpointDataNV::_VkCheckpointDataNV() {
  instance.sType = VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV;
  
}

_VkCheckpointDataNV::~_VkCheckpointDataNV() {
  //printf("VkCheckpointDataNV deconstructed!!\n");
  
  
  
}

void _VkCheckpointDataNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkCheckpointDataNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkCheckpointDataNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("stage").ToLocalChecked(), Getstage, nullptr, ctor);
  Nan::Set(target, Nan::New("VkCheckpointDataNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkCheckpointDataNV::flush() {
  _VkCheckpointDataNV *self = this;
  
  return true;
}

NAN_METHOD(_VkCheckpointDataNV::New) {
  if (info.IsConstructCall()) {
    _VkCheckpointDataNV* self = new _VkCheckpointDataNV();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkCheckpointDataNV constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkCheckpointDataNV::GetsType) {
  _VkCheckpointDataNV *self = Nan::ObjectWrap::Unwrap<_VkCheckpointDataNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// stage
NAN_GETTER(_VkCheckpointDataNV::Getstage) {
  _VkCheckpointDataNV *self = Nan::ObjectWrap::Unwrap<_VkCheckpointDataNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.stage));
}