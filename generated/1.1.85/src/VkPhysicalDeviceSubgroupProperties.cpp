/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceSubgroupProperties.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceSubgroupProperties::constructor;

_VkPhysicalDeviceSubgroupProperties::_VkPhysicalDeviceSubgroupProperties() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES;
  
}

_VkPhysicalDeviceSubgroupProperties::~_VkPhysicalDeviceSubgroupProperties() {
  //printf("VkPhysicalDeviceSubgroupProperties deconstructed!!\n");
  
  
  
  
  
  
}

void _VkPhysicalDeviceSubgroupProperties::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceSubgroupProperties::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceSubgroupProperties").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("subgroupSize").ToLocalChecked(), GetsubgroupSize, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("supportedStages").ToLocalChecked(), GetsupportedStages, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("supportedOperations").ToLocalChecked(), GetsupportedOperations, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("quadOperationsInAllStages").ToLocalChecked(), GetquadOperationsInAllStages, nullptr, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceSubgroupProperties").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceSubgroupProperties::flush() {
  _VkPhysicalDeviceSubgroupProperties *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceSubgroupProperties::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceSubgroupProperties* self = new _VkPhysicalDeviceSubgroupProperties();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceSubgroupProperties constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceSubgroupProperties::GetsType) {
  _VkPhysicalDeviceSubgroupProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSubgroupProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// subgroupSize
NAN_GETTER(_VkPhysicalDeviceSubgroupProperties::GetsubgroupSize) {
  _VkPhysicalDeviceSubgroupProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSubgroupProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.subgroupSize));
}// supportedStages
NAN_GETTER(_VkPhysicalDeviceSubgroupProperties::GetsupportedStages) {
  _VkPhysicalDeviceSubgroupProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSubgroupProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.supportedStages));
}// supportedOperations
NAN_GETTER(_VkPhysicalDeviceSubgroupProperties::GetsupportedOperations) {
  _VkPhysicalDeviceSubgroupProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSubgroupProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.supportedOperations));
}// quadOperationsInAllStages
NAN_GETTER(_VkPhysicalDeviceSubgroupProperties::GetquadOperationsInAllStages) {
  _VkPhysicalDeviceSubgroupProperties *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSubgroupProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.quadOperationsInAllStages));
}