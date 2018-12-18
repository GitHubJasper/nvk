/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkMultisamplePropertiesEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkMultisamplePropertiesEXT::constructor;

_VkMultisamplePropertiesEXT::_VkMultisamplePropertiesEXT() {
  instance.sType = VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT;
  
}

_VkMultisamplePropertiesEXT::~_VkMultisamplePropertiesEXT() {
  //printf("VkMultisamplePropertiesEXT deconstructed!!\n");
  
  
  
}

void _VkMultisamplePropertiesEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkMultisamplePropertiesEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkMultisamplePropertiesEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxSampleLocationGridSize").ToLocalChecked(), GetmaxSampleLocationGridSize, nullptr, ctor);
  Nan::Set(target, Nan::New("VkMultisamplePropertiesEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkMultisamplePropertiesEXT::flush() {
  _VkMultisamplePropertiesEXT *self = this;
  if (!(self->maxSampleLocationGridSize.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->maxSampleLocationGridSize);
    
  }
  return true;
}

NAN_METHOD(_VkMultisamplePropertiesEXT::New) {
  if (info.IsConstructCall()) {
    _VkMultisamplePropertiesEXT* self = new _VkMultisamplePropertiesEXT();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkMultisamplePropertiesEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkMultisamplePropertiesEXT::GetsType) {
  _VkMultisamplePropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkMultisamplePropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// maxSampleLocationGridSize
NAN_GETTER(_VkMultisamplePropertiesEXT::GetmaxSampleLocationGridSize) {
  _VkMultisamplePropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkMultisamplePropertiesEXT>(info.This());
  if (self->maxSampleLocationGridSize.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->maxSampleLocationGridSize);
    info.GetReturnValue().Set(obj);
  }
}