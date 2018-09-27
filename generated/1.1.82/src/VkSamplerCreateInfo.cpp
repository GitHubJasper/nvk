/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkSamplerCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkSamplerCreateInfo::constructor;

_VkSamplerCreateInfo::_VkSamplerCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
}

_VkSamplerCreateInfo::~_VkSamplerCreateInfo() {
  //printf("VkSamplerCreateInfo deconstructed!!\n");
}

void _VkSamplerCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSamplerCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSamplerCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("magFilter").ToLocalChecked(), GetmagFilter, SetmagFilter, ctor);
  SetPrototypeAccessor(proto, Nan::New("minFilter").ToLocalChecked(), GetminFilter, SetminFilter, ctor);
  SetPrototypeAccessor(proto, Nan::New("mipmapMode").ToLocalChecked(), GetmipmapMode, SetmipmapMode, ctor);
  SetPrototypeAccessor(proto, Nan::New("addressModeU").ToLocalChecked(), GetaddressModeU, SetaddressModeU, ctor);
  SetPrototypeAccessor(proto, Nan::New("addressModeV").ToLocalChecked(), GetaddressModeV, SetaddressModeV, ctor);
  SetPrototypeAccessor(proto, Nan::New("addressModeW").ToLocalChecked(), GetaddressModeW, SetaddressModeW, ctor);
  SetPrototypeAccessor(proto, Nan::New("mipLodBias").ToLocalChecked(), GetmipLodBias, SetmipLodBias, ctor);
  SetPrototypeAccessor(proto, Nan::New("anisotropyEnable").ToLocalChecked(), GetanisotropyEnable, SetanisotropyEnable, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxAnisotropy").ToLocalChecked(), GetmaxAnisotropy, SetmaxAnisotropy, ctor);
  SetPrototypeAccessor(proto, Nan::New("compareEnable").ToLocalChecked(), GetcompareEnable, SetcompareEnable, ctor);
  SetPrototypeAccessor(proto, Nan::New("compareOp").ToLocalChecked(), GetcompareOp, SetcompareOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("minLod").ToLocalChecked(), GetminLod, SetminLod, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxLod").ToLocalChecked(), GetmaxLod, SetmaxLod, ctor);
  SetPrototypeAccessor(proto, Nan::New("borderColor").ToLocalChecked(), GetborderColor, SetborderColor, ctor);
  SetPrototypeAccessor(proto, Nan::New("unnormalizedCoordinates").ToLocalChecked(), GetunnormalizedCoordinates, SetunnormalizedCoordinates, ctor);
  Nan::Set(target, Nan::New("VkSamplerCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkSamplerCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkSamplerCreateInfo* self = new _VkSamplerCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("magFilter").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("minFilter").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("mipmapMode").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("addressModeU").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("addressModeV").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("addressModeW").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("mipLodBias").ToLocalChecked();
      v8::Local<v8::String> sAccess10 = Nan::New("anisotropyEnable").ToLocalChecked();
      v8::Local<v8::String> sAccess11 = Nan::New("maxAnisotropy").ToLocalChecked();
      v8::Local<v8::String> sAccess12 = Nan::New("compareEnable").ToLocalChecked();
      v8::Local<v8::String> sAccess13 = Nan::New("compareOp").ToLocalChecked();
      v8::Local<v8::String> sAccess14 = Nan::New("minLod").ToLocalChecked();
      v8::Local<v8::String> sAccess15 = Nan::New("maxLod").ToLocalChecked();
      v8::Local<v8::String> sAccess16 = Nan::New("borderColor").ToLocalChecked();
      v8::Local<v8::String> sAccess17 = Nan::New("unnormalizedCoordinates").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      if (obj->Has(sAccess9)) info.This()->Set(sAccess9, obj->Get(sAccess9));
      if (obj->Has(sAccess10)) info.This()->Set(sAccess10, obj->Get(sAccess10));
      if (obj->Has(sAccess11)) info.This()->Set(sAccess11, obj->Get(sAccess11));
      if (obj->Has(sAccess12)) info.This()->Set(sAccess12, obj->Get(sAccess12));
      if (obj->Has(sAccess13)) info.This()->Set(sAccess13, obj->Get(sAccess13));
      if (obj->Has(sAccess14)) info.This()->Set(sAccess14, obj->Get(sAccess14));
      if (obj->Has(sAccess15)) info.This()->Set(sAccess15, obj->Get(sAccess15));
      if (obj->Has(sAccess16)) info.This()->Set(sAccess16, obj->Get(sAccess16));
      if (obj->Has(sAccess17)) info.This()->Set(sAccess17, obj->Get(sAccess17));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSamplerCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkSamplerCreateInfo::GetsType) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkSamplerCreateInfo::SetsType) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  self->instance.sType = static_cast<VkStructureType>((int32_t)value->NumberValue());
}// flags
NAN_GETTER(_VkSamplerCreateInfo::Getflags) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkSamplerCreateInfo::Setflags) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  self->instance.flags = static_cast<VkSamplerCreateFlags>((int32_t)value->NumberValue());
}// magFilter
NAN_GETTER(_VkSamplerCreateInfo::GetmagFilter) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.magFilter));
}NAN_SETTER(_VkSamplerCreateInfo::SetmagFilter) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  self->instance.magFilter = static_cast<VkFilter>((int32_t)value->NumberValue());
}// minFilter
NAN_GETTER(_VkSamplerCreateInfo::GetminFilter) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.minFilter));
}NAN_SETTER(_VkSamplerCreateInfo::SetminFilter) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  self->instance.minFilter = static_cast<VkFilter>((int32_t)value->NumberValue());
}// mipmapMode
NAN_GETTER(_VkSamplerCreateInfo::GetmipmapMode) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.mipmapMode));
}NAN_SETTER(_VkSamplerCreateInfo::SetmipmapMode) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  self->instance.mipmapMode = static_cast<VkSamplerMipmapMode>((int32_t)value->NumberValue());
}// addressModeU
NAN_GETTER(_VkSamplerCreateInfo::GetaddressModeU) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.addressModeU));
}NAN_SETTER(_VkSamplerCreateInfo::SetaddressModeU) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  self->instance.addressModeU = static_cast<VkSamplerAddressMode>((int32_t)value->NumberValue());
}// addressModeV
NAN_GETTER(_VkSamplerCreateInfo::GetaddressModeV) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.addressModeV));
}NAN_SETTER(_VkSamplerCreateInfo::SetaddressModeV) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  self->instance.addressModeV = static_cast<VkSamplerAddressMode>((int32_t)value->NumberValue());
}// addressModeW
NAN_GETTER(_VkSamplerCreateInfo::GetaddressModeW) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.addressModeW));
}NAN_SETTER(_VkSamplerCreateInfo::SetaddressModeW) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  self->instance.addressModeW = static_cast<VkSamplerAddressMode>((int32_t)value->NumberValue());
}// mipLodBias
NAN_GETTER(_VkSamplerCreateInfo::GetmipLodBias) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.mipLodBias));
}NAN_SETTER(_VkSamplerCreateInfo::SetmipLodBias) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  self->instance.mipLodBias = static_cast<float>(value->NumberValue());
}// anisotropyEnable
NAN_GETTER(_VkSamplerCreateInfo::GetanisotropyEnable) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.anisotropyEnable));
}NAN_SETTER(_VkSamplerCreateInfo::SetanisotropyEnable) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  self->instance.anisotropyEnable = static_cast<uint32_t>(value->NumberValue());
}// maxAnisotropy
NAN_GETTER(_VkSamplerCreateInfo::GetmaxAnisotropy) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxAnisotropy));
}NAN_SETTER(_VkSamplerCreateInfo::SetmaxAnisotropy) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  self->instance.maxAnisotropy = static_cast<float>(value->NumberValue());
}// compareEnable
NAN_GETTER(_VkSamplerCreateInfo::GetcompareEnable) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.compareEnable));
}NAN_SETTER(_VkSamplerCreateInfo::SetcompareEnable) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  self->instance.compareEnable = static_cast<uint32_t>(value->NumberValue());
}// compareOp
NAN_GETTER(_VkSamplerCreateInfo::GetcompareOp) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.compareOp));
}NAN_SETTER(_VkSamplerCreateInfo::SetcompareOp) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  self->instance.compareOp = static_cast<VkCompareOp>((int32_t)value->NumberValue());
}// minLod
NAN_GETTER(_VkSamplerCreateInfo::GetminLod) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.minLod));
}NAN_SETTER(_VkSamplerCreateInfo::SetminLod) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  self->instance.minLod = static_cast<float>(value->NumberValue());
}// maxLod
NAN_GETTER(_VkSamplerCreateInfo::GetmaxLod) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxLod));
}NAN_SETTER(_VkSamplerCreateInfo::SetmaxLod) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  self->instance.maxLod = static_cast<float>(value->NumberValue());
}// borderColor
NAN_GETTER(_VkSamplerCreateInfo::GetborderColor) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.borderColor));
}NAN_SETTER(_VkSamplerCreateInfo::SetborderColor) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  self->instance.borderColor = static_cast<VkBorderColor>((int32_t)value->NumberValue());
}// unnormalizedCoordinates
NAN_GETTER(_VkSamplerCreateInfo::GetunnormalizedCoordinates) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.unnormalizedCoordinates));
}NAN_SETTER(_VkSamplerCreateInfo::SetunnormalizedCoordinates) {
  _VkSamplerCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSamplerCreateInfo>(info.This());
  self->instance.unnormalizedCoordinates = static_cast<uint32_t>(value->NumberValue());
}