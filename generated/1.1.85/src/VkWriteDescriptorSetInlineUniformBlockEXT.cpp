/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkWriteDescriptorSetInlineUniformBlockEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkWriteDescriptorSetInlineUniformBlockEXT::constructor;

_VkWriteDescriptorSetInlineUniformBlockEXT::_VkWriteDescriptorSetInlineUniformBlockEXT() {
  instance.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT;
  
}

_VkWriteDescriptorSetInlineUniformBlockEXT::~_VkWriteDescriptorSetInlineUniformBlockEXT() {
  //printf("VkWriteDescriptorSetInlineUniformBlockEXT deconstructed!!\n");
  
  
  pNext.Reset();
  
  
  pData.Reset();
  
}

void _VkWriteDescriptorSetInlineUniformBlockEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkWriteDescriptorSetInlineUniformBlockEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkWriteDescriptorSetInlineUniformBlockEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("dataSize").ToLocalChecked(), GetdataSize, SetdataSize, ctor);
  SetPrototypeAccessor(proto, Nan::New("pData").ToLocalChecked(), GetpData, SetpData, ctor);
  Nan::Set(target, Nan::New("VkWriteDescriptorSetInlineUniformBlockEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkWriteDescriptorSetInlineUniformBlockEXT::flush() {
  _VkWriteDescriptorSetInlineUniformBlockEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkWriteDescriptorSetInlineUniformBlockEXT::New) {
  if (info.IsConstructCall()) {
    _VkWriteDescriptorSetInlineUniformBlockEXT* self = new _VkWriteDescriptorSetInlineUniformBlockEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("dataSize").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pData").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkWriteDescriptorSetInlineUniformBlockEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkWriteDescriptorSetInlineUniformBlockEXT::GetsType) {
  _VkWriteDescriptorSetInlineUniformBlockEXT *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSetInlineUniformBlockEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkWriteDescriptorSetInlineUniformBlockEXT::SetsType) {
  _VkWriteDescriptorSetInlineUniformBlockEXT *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSetInlineUniformBlockEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkWriteDescriptorSetInlineUniformBlockEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pNext
NAN_GETTER(_VkWriteDescriptorSetInlineUniformBlockEXT::GetpNext) {
  _VkWriteDescriptorSetInlineUniformBlockEXT *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSetInlineUniformBlockEXT>(info.This());
}NAN_SETTER(_VkWriteDescriptorSetInlineUniformBlockEXT::SetpNext) {
  _VkWriteDescriptorSetInlineUniformBlockEXT *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSetInlineUniformBlockEXT>(info.This());
}// dataSize
NAN_GETTER(_VkWriteDescriptorSetInlineUniformBlockEXT::GetdataSize) {
  _VkWriteDescriptorSetInlineUniformBlockEXT *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSetInlineUniformBlockEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dataSize));
}NAN_SETTER(_VkWriteDescriptorSetInlineUniformBlockEXT::SetdataSize) {
  _VkWriteDescriptorSetInlineUniformBlockEXT *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSetInlineUniformBlockEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.dataSize = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkWriteDescriptorSetInlineUniformBlockEXT.dataSize' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pData
NAN_GETTER(_VkWriteDescriptorSetInlineUniformBlockEXT::GetpData) {
  _VkWriteDescriptorSetInlineUniformBlockEXT *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSetInlineUniformBlockEXT>(info.This());
}NAN_SETTER(_VkWriteDescriptorSetInlineUniformBlockEXT::SetpData) {
  _VkWriteDescriptorSetInlineUniformBlockEXT *self = Nan::ObjectWrap::Unwrap<_VkWriteDescriptorSetInlineUniformBlockEXT>(info.This());
}