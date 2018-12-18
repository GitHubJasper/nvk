/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkObjectTablePushConstantEntryNVX.h"

Nan::Persistent<v8::FunctionTemplate> _VkObjectTablePushConstantEntryNVX::constructor;

_VkObjectTablePushConstantEntryNVX::_VkObjectTablePushConstantEntryNVX() {
  
  
}

_VkObjectTablePushConstantEntryNVX::~_VkObjectTablePushConstantEntryNVX() {
  //printf("VkObjectTablePushConstantEntryNVX deconstructed!!\n");
  
  
  
  
  
}

void _VkObjectTablePushConstantEntryNVX::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkObjectTablePushConstantEntryNVX::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkObjectTablePushConstantEntryNVX").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("type").ToLocalChecked(), Gettype, Settype, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("pipelineLayout").ToLocalChecked(), GetpipelineLayout, SetpipelineLayout, ctor);
  SetPrototypeAccessor(proto, Nan::New("stageFlags").ToLocalChecked(), GetstageFlags, SetstageFlags, ctor);
  Nan::Set(target, Nan::New("VkObjectTablePushConstantEntryNVX").ToLocalChecked(), ctor->GetFunction());
}

bool _VkObjectTablePushConstantEntryNVX::flush() {
  _VkObjectTablePushConstantEntryNVX *self = this;
  
  return true;
}

NAN_METHOD(_VkObjectTablePushConstantEntryNVX::New) {
  if (info.IsConstructCall()) {
    _VkObjectTablePushConstantEntryNVX* self = new _VkObjectTablePushConstantEntryNVX();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("type").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("pipelineLayout").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("stageFlags").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkObjectTablePushConstantEntryNVX constructor cannot be invoked without 'new'");
  }
};

// type
NAN_GETTER(_VkObjectTablePushConstantEntryNVX::Gettype) {
  _VkObjectTablePushConstantEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTablePushConstantEntryNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.type));
}NAN_SETTER(_VkObjectTablePushConstantEntryNVX::Settype) {
  _VkObjectTablePushConstantEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTablePushConstantEntryNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.type = static_cast<VkObjectEntryTypeNVX>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkObjectTablePushConstantEntryNVX.type' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkObjectTablePushConstantEntryNVX::Getflags) {
  _VkObjectTablePushConstantEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTablePushConstantEntryNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkObjectTablePushConstantEntryNVX::Setflags) {
  _VkObjectTablePushConstantEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTablePushConstantEntryNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkObjectEntryUsageFlagsNVX>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkObjectTablePushConstantEntryNVX.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pipelineLayout
NAN_GETTER(_VkObjectTablePushConstantEntryNVX::GetpipelineLayout) {
  _VkObjectTablePushConstantEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTablePushConstantEntryNVX>(info.This());
  if (self->pipelineLayout.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pipelineLayout);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkObjectTablePushConstantEntryNVX::SetpipelineLayout) {
  _VkObjectTablePushConstantEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTablePushConstantEntryNVX>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipelineLayout::constructor)->HasInstance(obj)) {
      self->pipelineLayout.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipelineLayout* inst = Nan::ObjectWrap::Unwrap<_VkPipelineLayout>(obj);
      ;
      self->instance.pipelineLayout = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipelineLayout]' for 'VkObjectTablePushConstantEntryNVX.pipelineLayout' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->pipelineLayout.Reset();
    self->instance.pipelineLayout = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipelineLayout]' for 'VkObjectTablePushConstantEntryNVX.pipelineLayout' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// stageFlags
NAN_GETTER(_VkObjectTablePushConstantEntryNVX::GetstageFlags) {
  _VkObjectTablePushConstantEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTablePushConstantEntryNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.stageFlags));
}NAN_SETTER(_VkObjectTablePushConstantEntryNVX::SetstageFlags) {
  _VkObjectTablePushConstantEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTablePushConstantEntryNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.stageFlags = static_cast<VkShaderStageFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkObjectTablePushConstantEntryNVX.stageFlags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}