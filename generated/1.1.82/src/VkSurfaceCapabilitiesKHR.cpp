/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkSurfaceCapabilitiesKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkSurfaceCapabilitiesKHR::constructor;

_VkSurfaceCapabilitiesKHR::_VkSurfaceCapabilitiesKHR() {
  
  
}

_VkSurfaceCapabilitiesKHR::~_VkSurfaceCapabilitiesKHR() {
  //printf("VkSurfaceCapabilitiesKHR deconstructed!!\n");
  
  
  
  
  
  
  
  
  
  
  
}

void _VkSurfaceCapabilitiesKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSurfaceCapabilitiesKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSurfaceCapabilitiesKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("minImageCount").ToLocalChecked(), GetminImageCount, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxImageCount").ToLocalChecked(), GetmaxImageCount, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("currentExtent").ToLocalChecked(), GetcurrentExtent, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("minImageExtent").ToLocalChecked(), GetminImageExtent, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxImageExtent").ToLocalChecked(), GetmaxImageExtent, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxImageArrayLayers").ToLocalChecked(), GetmaxImageArrayLayers, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("supportedTransforms").ToLocalChecked(), GetsupportedTransforms, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("currentTransform").ToLocalChecked(), GetcurrentTransform, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("supportedCompositeAlpha").ToLocalChecked(), GetsupportedCompositeAlpha, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("supportedUsageFlags").ToLocalChecked(), GetsupportedUsageFlags, nullptr, ctor);
  Nan::Set(target, Nan::New("VkSurfaceCapabilitiesKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkSurfaceCapabilitiesKHR::flush() {
  _VkSurfaceCapabilitiesKHR *self = this;
  if (!(self->currentExtent.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->currentExtent);
    
  }if (!(self->minImageExtent.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->minImageExtent);
    
  }if (!(self->maxImageExtent.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->maxImageExtent);
    
  }
  return true;
}

NAN_METHOD(_VkSurfaceCapabilitiesKHR::New) {
  if (info.IsConstructCall()) {
    _VkSurfaceCapabilitiesKHR* self = new _VkSurfaceCapabilitiesKHR();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSurfaceCapabilitiesKHR constructor cannot be invoked without 'new'");
  }
};

// minImageCount
NAN_GETTER(_VkSurfaceCapabilitiesKHR::GetminImageCount) {
  _VkSurfaceCapabilitiesKHR *self = Nan::ObjectWrap::Unwrap<_VkSurfaceCapabilitiesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.minImageCount));
}// maxImageCount
NAN_GETTER(_VkSurfaceCapabilitiesKHR::GetmaxImageCount) {
  _VkSurfaceCapabilitiesKHR *self = Nan::ObjectWrap::Unwrap<_VkSurfaceCapabilitiesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxImageCount));
}// currentExtent
NAN_GETTER(_VkSurfaceCapabilitiesKHR::GetcurrentExtent) {
  _VkSurfaceCapabilitiesKHR *self = Nan::ObjectWrap::Unwrap<_VkSurfaceCapabilitiesKHR>(info.This());
  if (self->currentExtent.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->currentExtent);
    info.GetReturnValue().Set(obj);
  }
}// minImageExtent
NAN_GETTER(_VkSurfaceCapabilitiesKHR::GetminImageExtent) {
  _VkSurfaceCapabilitiesKHR *self = Nan::ObjectWrap::Unwrap<_VkSurfaceCapabilitiesKHR>(info.This());
  if (self->minImageExtent.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->minImageExtent);
    info.GetReturnValue().Set(obj);
  }
}// maxImageExtent
NAN_GETTER(_VkSurfaceCapabilitiesKHR::GetmaxImageExtent) {
  _VkSurfaceCapabilitiesKHR *self = Nan::ObjectWrap::Unwrap<_VkSurfaceCapabilitiesKHR>(info.This());
  if (self->maxImageExtent.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->maxImageExtent);
    info.GetReturnValue().Set(obj);
  }
}// maxImageArrayLayers
NAN_GETTER(_VkSurfaceCapabilitiesKHR::GetmaxImageArrayLayers) {
  _VkSurfaceCapabilitiesKHR *self = Nan::ObjectWrap::Unwrap<_VkSurfaceCapabilitiesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxImageArrayLayers));
}// supportedTransforms
NAN_GETTER(_VkSurfaceCapabilitiesKHR::GetsupportedTransforms) {
  _VkSurfaceCapabilitiesKHR *self = Nan::ObjectWrap::Unwrap<_VkSurfaceCapabilitiesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.supportedTransforms));
}// currentTransform
NAN_GETTER(_VkSurfaceCapabilitiesKHR::GetcurrentTransform) {
  _VkSurfaceCapabilitiesKHR *self = Nan::ObjectWrap::Unwrap<_VkSurfaceCapabilitiesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.currentTransform));
}// supportedCompositeAlpha
NAN_GETTER(_VkSurfaceCapabilitiesKHR::GetsupportedCompositeAlpha) {
  _VkSurfaceCapabilitiesKHR *self = Nan::ObjectWrap::Unwrap<_VkSurfaceCapabilitiesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.supportedCompositeAlpha));
}// supportedUsageFlags
NAN_GETTER(_VkSurfaceCapabilitiesKHR::GetsupportedUsageFlags) {
  _VkSurfaceCapabilitiesKHR *self = Nan::ObjectWrap::Unwrap<_VkSurfaceCapabilitiesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.supportedUsageFlags));
}