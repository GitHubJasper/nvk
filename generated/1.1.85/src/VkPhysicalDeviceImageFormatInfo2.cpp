/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceImageFormatInfo2.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceImageFormatInfo2::constructor;

_VkPhysicalDeviceImageFormatInfo2::_VkPhysicalDeviceImageFormatInfo2() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2;
  
}

_VkPhysicalDeviceImageFormatInfo2::~_VkPhysicalDeviceImageFormatInfo2() {
  //printf("VkPhysicalDeviceImageFormatInfo2 deconstructed!!\n");
  
  
  pNext.Reset();
  
  
  
  
  
  
}

void _VkPhysicalDeviceImageFormatInfo2::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceImageFormatInfo2::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceImageFormatInfo2").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("format").ToLocalChecked(), Getformat, Setformat, ctor);
  SetPrototypeAccessor(proto, Nan::New("type").ToLocalChecked(), Gettype, Settype, ctor);
  SetPrototypeAccessor(proto, Nan::New("tiling").ToLocalChecked(), Gettiling, Settiling, ctor);
  SetPrototypeAccessor(proto, Nan::New("usage").ToLocalChecked(), Getusage, Setusage, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceImageFormatInfo2").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceImageFormatInfo2::flush() {
  _VkPhysicalDeviceImageFormatInfo2 *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceImageFormatInfo2::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceImageFormatInfo2* self = new _VkPhysicalDeviceImageFormatInfo2();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("format").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("type").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("tiling").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("usage").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("flags").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceImageFormatInfo2 constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceImageFormatInfo2::GetsType) {
  _VkPhysicalDeviceImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageFormatInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceImageFormatInfo2::SetsType) {
  _VkPhysicalDeviceImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageFormatInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceImageFormatInfo2.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pNext
NAN_GETTER(_VkPhysicalDeviceImageFormatInfo2::GetpNext) {
  _VkPhysicalDeviceImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageFormatInfo2>(info.This());
}NAN_SETTER(_VkPhysicalDeviceImageFormatInfo2::SetpNext) {
  _VkPhysicalDeviceImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageFormatInfo2>(info.This());
}// format
NAN_GETTER(_VkPhysicalDeviceImageFormatInfo2::Getformat) {
  _VkPhysicalDeviceImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageFormatInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.format));
}NAN_SETTER(_VkPhysicalDeviceImageFormatInfo2::Setformat) {
  _VkPhysicalDeviceImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageFormatInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.format = static_cast<VkFormat>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceImageFormatInfo2.format' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// type
NAN_GETTER(_VkPhysicalDeviceImageFormatInfo2::Gettype) {
  _VkPhysicalDeviceImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageFormatInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.type));
}NAN_SETTER(_VkPhysicalDeviceImageFormatInfo2::Settype) {
  _VkPhysicalDeviceImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageFormatInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.type = static_cast<VkImageType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceImageFormatInfo2.type' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// tiling
NAN_GETTER(_VkPhysicalDeviceImageFormatInfo2::Gettiling) {
  _VkPhysicalDeviceImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageFormatInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.tiling));
}NAN_SETTER(_VkPhysicalDeviceImageFormatInfo2::Settiling) {
  _VkPhysicalDeviceImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageFormatInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.tiling = static_cast<VkImageTiling>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceImageFormatInfo2.tiling' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// usage
NAN_GETTER(_VkPhysicalDeviceImageFormatInfo2::Getusage) {
  _VkPhysicalDeviceImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageFormatInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.usage));
}NAN_SETTER(_VkPhysicalDeviceImageFormatInfo2::Setusage) {
  _VkPhysicalDeviceImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageFormatInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.usage = static_cast<VkImageUsageFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceImageFormatInfo2.usage' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkPhysicalDeviceImageFormatInfo2::Getflags) {
  _VkPhysicalDeviceImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageFormatInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkPhysicalDeviceImageFormatInfo2::Setflags) {
  _VkPhysicalDeviceImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageFormatInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkImageCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceImageFormatInfo2.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}