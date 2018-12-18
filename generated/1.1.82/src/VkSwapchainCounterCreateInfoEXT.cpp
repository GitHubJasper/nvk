/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkSwapchainCounterCreateInfoEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkSwapchainCounterCreateInfoEXT::constructor;

_VkSwapchainCounterCreateInfoEXT::_VkSwapchainCounterCreateInfoEXT() {
  instance.sType = VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT;
  
}

_VkSwapchainCounterCreateInfoEXT::~_VkSwapchainCounterCreateInfoEXT() {
  //printf("VkSwapchainCounterCreateInfoEXT deconstructed!!\n");
  
  
  
}

void _VkSwapchainCounterCreateInfoEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSwapchainCounterCreateInfoEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSwapchainCounterCreateInfoEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("surfaceCounters").ToLocalChecked(), GetsurfaceCounters, SetsurfaceCounters, ctor);
  Nan::Set(target, Nan::New("VkSwapchainCounterCreateInfoEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkSwapchainCounterCreateInfoEXT::flush() {
  _VkSwapchainCounterCreateInfoEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkSwapchainCounterCreateInfoEXT::New) {
  if (info.IsConstructCall()) {
    _VkSwapchainCounterCreateInfoEXT* self = new _VkSwapchainCounterCreateInfoEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("surfaceCounters").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSwapchainCounterCreateInfoEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkSwapchainCounterCreateInfoEXT::GetsType) {
  _VkSwapchainCounterCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCounterCreateInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkSwapchainCounterCreateInfoEXT::SetsType) {
  _VkSwapchainCounterCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCounterCreateInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkSwapchainCounterCreateInfoEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// surfaceCounters
NAN_GETTER(_VkSwapchainCounterCreateInfoEXT::GetsurfaceCounters) {
  _VkSwapchainCounterCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCounterCreateInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.surfaceCounters));
}NAN_SETTER(_VkSwapchainCounterCreateInfoEXT::SetsurfaceCounters) {
  _VkSwapchainCounterCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCounterCreateInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.surfaceCounters = static_cast<VkSurfaceCounterFlagsEXT>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkSwapchainCounterCreateInfoEXT.surfaceCounters' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}