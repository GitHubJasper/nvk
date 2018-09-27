/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkDescriptorPoolSize.h"

Nan::Persistent<v8::FunctionTemplate> _VkDescriptorPoolSize::constructor;

_VkDescriptorPoolSize::_VkDescriptorPoolSize() {
  
}

_VkDescriptorPoolSize::~_VkDescriptorPoolSize() {
  //printf("VkDescriptorPoolSize deconstructed!!\n");
}

void _VkDescriptorPoolSize::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDescriptorPoolSize::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDescriptorPoolSize").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("type").ToLocalChecked(), Gettype, Settype, ctor);
  SetPrototypeAccessor(proto, Nan::New("descriptorCount").ToLocalChecked(), GetdescriptorCount, SetdescriptorCount, ctor);
  Nan::Set(target, Nan::New("VkDescriptorPoolSize").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkDescriptorPoolSize::New) {
  if (info.IsConstructCall()) {
    _VkDescriptorPoolSize* self = new _VkDescriptorPoolSize();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("type").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("descriptorCount").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDescriptorPoolSize constructor cannot be invoked without 'new'");
  }
};

// type
NAN_GETTER(_VkDescriptorPoolSize::Gettype) {
  _VkDescriptorPoolSize *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolSize>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.type));
}NAN_SETTER(_VkDescriptorPoolSize::Settype) {
  _VkDescriptorPoolSize *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolSize>(info.This());
  self->instance.type = static_cast<VkDescriptorType>((int32_t)value->NumberValue());
}// descriptorCount
NAN_GETTER(_VkDescriptorPoolSize::GetdescriptorCount) {
  _VkDescriptorPoolSize *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolSize>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.descriptorCount));
}NAN_SETTER(_VkDescriptorPoolSize::SetdescriptorCount) {
  _VkDescriptorPoolSize *self = Nan::ObjectWrap::Unwrap<_VkDescriptorPoolSize>(info.This());
  self->instance.descriptorCount = static_cast<uint32_t>(value->NumberValue());
}