/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkImagePlaneMemoryRequirementsInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkImagePlaneMemoryRequirementsInfo::constructor;

_VkImagePlaneMemoryRequirementsInfo::_VkImagePlaneMemoryRequirementsInfo() {
  instance.sType = VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO;
  
}

_VkImagePlaneMemoryRequirementsInfo::~_VkImagePlaneMemoryRequirementsInfo() {
  //printf("VkImagePlaneMemoryRequirementsInfo deconstructed!!\n");
  
  
  pNext.Reset();
  
  
}

void _VkImagePlaneMemoryRequirementsInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkImagePlaneMemoryRequirementsInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkImagePlaneMemoryRequirementsInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("planeAspect").ToLocalChecked(), GetplaneAspect, SetplaneAspect, ctor);
  Nan::Set(target, Nan::New("VkImagePlaneMemoryRequirementsInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkImagePlaneMemoryRequirementsInfo::flush() {
  _VkImagePlaneMemoryRequirementsInfo *self = this;
  
  return true;
}

NAN_METHOD(_VkImagePlaneMemoryRequirementsInfo::New) {
  if (info.IsConstructCall()) {
    _VkImagePlaneMemoryRequirementsInfo* self = new _VkImagePlaneMemoryRequirementsInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("planeAspect").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkImagePlaneMemoryRequirementsInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkImagePlaneMemoryRequirementsInfo::GetsType) {
  _VkImagePlaneMemoryRequirementsInfo *self = Nan::ObjectWrap::Unwrap<_VkImagePlaneMemoryRequirementsInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkImagePlaneMemoryRequirementsInfo::SetsType) {
  _VkImagePlaneMemoryRequirementsInfo *self = Nan::ObjectWrap::Unwrap<_VkImagePlaneMemoryRequirementsInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkImagePlaneMemoryRequirementsInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pNext
NAN_GETTER(_VkImagePlaneMemoryRequirementsInfo::GetpNext) {
  _VkImagePlaneMemoryRequirementsInfo *self = Nan::ObjectWrap::Unwrap<_VkImagePlaneMemoryRequirementsInfo>(info.This());
}NAN_SETTER(_VkImagePlaneMemoryRequirementsInfo::SetpNext) {
  _VkImagePlaneMemoryRequirementsInfo *self = Nan::ObjectWrap::Unwrap<_VkImagePlaneMemoryRequirementsInfo>(info.This());
}// planeAspect
NAN_GETTER(_VkImagePlaneMemoryRequirementsInfo::GetplaneAspect) {
  _VkImagePlaneMemoryRequirementsInfo *self = Nan::ObjectWrap::Unwrap<_VkImagePlaneMemoryRequirementsInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.planeAspect));
}NAN_SETTER(_VkImagePlaneMemoryRequirementsInfo::SetplaneAspect) {
  _VkImagePlaneMemoryRequirementsInfo *self = Nan::ObjectWrap::Unwrap<_VkImagePlaneMemoryRequirementsInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.planeAspect = static_cast<VkImageAspectFlagBits>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkImagePlaneMemoryRequirementsInfo.planeAspect' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}