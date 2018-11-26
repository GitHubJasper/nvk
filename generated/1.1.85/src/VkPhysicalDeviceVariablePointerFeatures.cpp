/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceVariablePointerFeatures.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceVariablePointerFeatures::constructor;

_VkPhysicalDeviceVariablePointerFeatures::_VkPhysicalDeviceVariablePointerFeatures() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES;
  
}

_VkPhysicalDeviceVariablePointerFeatures::~_VkPhysicalDeviceVariablePointerFeatures() {
  //printf("VkPhysicalDeviceVariablePointerFeatures deconstructed!!\n");
  
  
  
  
}

void _VkPhysicalDeviceVariablePointerFeatures::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceVariablePointerFeatures::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceVariablePointerFeatures").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("variablePointersStorageBuffer").ToLocalChecked(), GetvariablePointersStorageBuffer, SetvariablePointersStorageBuffer, ctor);
  SetPrototypeAccessor(proto, Nan::New("variablePointers").ToLocalChecked(), GetvariablePointers, SetvariablePointers, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceVariablePointerFeatures").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceVariablePointerFeatures::flush() {
  _VkPhysicalDeviceVariablePointerFeatures *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceVariablePointerFeatures::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceVariablePointerFeatures* self = new _VkPhysicalDeviceVariablePointerFeatures();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("variablePointersStorageBuffer").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("variablePointers").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceVariablePointerFeatures constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceVariablePointerFeatures::GetsType) {
  _VkPhysicalDeviceVariablePointerFeatures *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVariablePointerFeatures>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceVariablePointerFeatures::SetsType) {
  _VkPhysicalDeviceVariablePointerFeatures *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVariablePointerFeatures>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceVariablePointerFeatures.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// variablePointersStorageBuffer
NAN_GETTER(_VkPhysicalDeviceVariablePointerFeatures::GetvariablePointersStorageBuffer) {
  _VkPhysicalDeviceVariablePointerFeatures *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVariablePointerFeatures>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.variablePointersStorageBuffer));
}NAN_SETTER(_VkPhysicalDeviceVariablePointerFeatures::SetvariablePointersStorageBuffer) {
  _VkPhysicalDeviceVariablePointerFeatures *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVariablePointerFeatures>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.variablePointersStorageBuffer = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceVariablePointerFeatures.variablePointersStorageBuffer' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// variablePointers
NAN_GETTER(_VkPhysicalDeviceVariablePointerFeatures::GetvariablePointers) {
  _VkPhysicalDeviceVariablePointerFeatures *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVariablePointerFeatures>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.variablePointers));
}NAN_SETTER(_VkPhysicalDeviceVariablePointerFeatures::SetvariablePointers) {
  _VkPhysicalDeviceVariablePointerFeatures *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVariablePointerFeatures>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.variablePointers = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceVariablePointerFeatures.variablePointers' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}