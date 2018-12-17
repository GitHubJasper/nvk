/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkAttachmentReference2KHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkAttachmentReference2KHR::constructor;

_VkAttachmentReference2KHR::_VkAttachmentReference2KHR() {
  instance.sType = VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR;
  
}

_VkAttachmentReference2KHR::~_VkAttachmentReference2KHR() {
  //printf("VkAttachmentReference2KHR deconstructed!!\n");
  
  
  
  
  
}

void _VkAttachmentReference2KHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkAttachmentReference2KHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkAttachmentReference2KHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("attachment").ToLocalChecked(), Getattachment, Setattachment, ctor);
  SetPrototypeAccessor(proto, Nan::New("layout").ToLocalChecked(), Getlayout, Setlayout, ctor);
  SetPrototypeAccessor(proto, Nan::New("aspectMask").ToLocalChecked(), GetaspectMask, SetaspectMask, ctor);
  Nan::Set(target, Nan::New("VkAttachmentReference2KHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkAttachmentReference2KHR::flush() {
  _VkAttachmentReference2KHR *self = this;
  
  return true;
}

NAN_METHOD(_VkAttachmentReference2KHR::New) {
  if (info.IsConstructCall()) {
    _VkAttachmentReference2KHR* self = new _VkAttachmentReference2KHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("attachment").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("layout").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("aspectMask").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkAttachmentReference2KHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkAttachmentReference2KHR::GetsType) {
  _VkAttachmentReference2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentReference2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkAttachmentReference2KHR::SetsType) {
  _VkAttachmentReference2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentReference2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAttachmentReference2KHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// attachment
NAN_GETTER(_VkAttachmentReference2KHR::Getattachment) {
  _VkAttachmentReference2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentReference2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.attachment));
}NAN_SETTER(_VkAttachmentReference2KHR::Setattachment) {
  _VkAttachmentReference2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentReference2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.attachment = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAttachmentReference2KHR.attachment' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// layout
NAN_GETTER(_VkAttachmentReference2KHR::Getlayout) {
  _VkAttachmentReference2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentReference2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.layout));
}NAN_SETTER(_VkAttachmentReference2KHR::Setlayout) {
  _VkAttachmentReference2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentReference2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.layout = static_cast<VkImageLayout>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAttachmentReference2KHR.layout' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// aspectMask
NAN_GETTER(_VkAttachmentReference2KHR::GetaspectMask) {
  _VkAttachmentReference2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentReference2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.aspectMask));
}NAN_SETTER(_VkAttachmentReference2KHR::SetaspectMask) {
  _VkAttachmentReference2KHR *self = Nan::ObjectWrap::Unwrap<_VkAttachmentReference2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.aspectMask = static_cast<VkImageAspectFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAttachmentReference2KHR.aspectMask' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}