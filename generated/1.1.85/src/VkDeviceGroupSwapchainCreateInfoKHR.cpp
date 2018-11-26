/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkDeviceGroupSwapchainCreateInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkDeviceGroupSwapchainCreateInfoKHR::constructor;

_VkDeviceGroupSwapchainCreateInfoKHR::_VkDeviceGroupSwapchainCreateInfoKHR() {
  instance.sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR;
  
}

_VkDeviceGroupSwapchainCreateInfoKHR::~_VkDeviceGroupSwapchainCreateInfoKHR() {
  //printf("VkDeviceGroupSwapchainCreateInfoKHR deconstructed!!\n");
  
  
  pNext.Reset();
  
  
}

void _VkDeviceGroupSwapchainCreateInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDeviceGroupSwapchainCreateInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDeviceGroupSwapchainCreateInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("modes").ToLocalChecked(), Getmodes, Setmodes, ctor);
  Nan::Set(target, Nan::New("VkDeviceGroupSwapchainCreateInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDeviceGroupSwapchainCreateInfoKHR::flush() {
  _VkDeviceGroupSwapchainCreateInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkDeviceGroupSwapchainCreateInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkDeviceGroupSwapchainCreateInfoKHR* self = new _VkDeviceGroupSwapchainCreateInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("modes").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDeviceGroupSwapchainCreateInfoKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDeviceGroupSwapchainCreateInfoKHR::GetsType) {
  _VkDeviceGroupSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDeviceGroupSwapchainCreateInfoKHR::SetsType) {
  _VkDeviceGroupSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSwapchainCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGroupSwapchainCreateInfoKHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pNext
NAN_GETTER(_VkDeviceGroupSwapchainCreateInfoKHR::GetpNext) {
  _VkDeviceGroupSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSwapchainCreateInfoKHR>(info.This());
}NAN_SETTER(_VkDeviceGroupSwapchainCreateInfoKHR::SetpNext) {
  _VkDeviceGroupSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSwapchainCreateInfoKHR>(info.This());
}// modes
NAN_GETTER(_VkDeviceGroupSwapchainCreateInfoKHR::Getmodes) {
  _VkDeviceGroupSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.modes));
}NAN_SETTER(_VkDeviceGroupSwapchainCreateInfoKHR::Setmodes) {
  _VkDeviceGroupSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSwapchainCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.modes = static_cast<VkDeviceGroupPresentModeFlagsKHR>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGroupSwapchainCreateInfoKHR.modes' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}