/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkExternalSemaphoreProperties.h"

Nan::Persistent<v8::FunctionTemplate> _VkExternalSemaphoreProperties::constructor;

_VkExternalSemaphoreProperties::_VkExternalSemaphoreProperties() {
  instance.sType = VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES;
  
}

_VkExternalSemaphoreProperties::~_VkExternalSemaphoreProperties() {
  //printf("VkExternalSemaphoreProperties deconstructed!!\n");
  
  
  
  
  
}

void _VkExternalSemaphoreProperties::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkExternalSemaphoreProperties::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkExternalSemaphoreProperties").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("exportFromImportedHandleTypes").ToLocalChecked(), GetexportFromImportedHandleTypes, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("compatibleHandleTypes").ToLocalChecked(), GetcompatibleHandleTypes, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("externalSemaphoreFeatures").ToLocalChecked(), GetexternalSemaphoreFeatures, nullptr, ctor);
  Nan::Set(target, Nan::New("VkExternalSemaphoreProperties").ToLocalChecked(), ctor->GetFunction());
}

bool _VkExternalSemaphoreProperties::flush() {
  _VkExternalSemaphoreProperties *self = this;
  
  return true;
}

NAN_METHOD(_VkExternalSemaphoreProperties::New) {
  if (info.IsConstructCall()) {
    _VkExternalSemaphoreProperties* self = new _VkExternalSemaphoreProperties();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkExternalSemaphoreProperties constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkExternalSemaphoreProperties::GetsType) {
  _VkExternalSemaphoreProperties *self = Nan::ObjectWrap::Unwrap<_VkExternalSemaphoreProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// exportFromImportedHandleTypes
NAN_GETTER(_VkExternalSemaphoreProperties::GetexportFromImportedHandleTypes) {
  _VkExternalSemaphoreProperties *self = Nan::ObjectWrap::Unwrap<_VkExternalSemaphoreProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.exportFromImportedHandleTypes));
}// compatibleHandleTypes
NAN_GETTER(_VkExternalSemaphoreProperties::GetcompatibleHandleTypes) {
  _VkExternalSemaphoreProperties *self = Nan::ObjectWrap::Unwrap<_VkExternalSemaphoreProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.compatibleHandleTypes));
}// externalSemaphoreFeatures
NAN_GETTER(_VkExternalSemaphoreProperties::GetexternalSemaphoreFeatures) {
  _VkExternalSemaphoreProperties *self = Nan::ObjectWrap::Unwrap<_VkExternalSemaphoreProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.externalSemaphoreFeatures));
}