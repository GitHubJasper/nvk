/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkBaseInStructure.h"

Nan::Persistent<v8::FunctionTemplate> _VkBaseInStructure::constructor;

_VkBaseInStructure::_VkBaseInStructure() {
  
  
}

_VkBaseInStructure::~_VkBaseInStructure() {
  //printf("VkBaseInStructure deconstructed!!\n");
  
  
  pNext.Reset();
  
}

void _VkBaseInStructure::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBaseInStructure::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBaseInStructure").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  Nan::Set(target, Nan::New("VkBaseInStructure").ToLocalChecked(), ctor->GetFunction());
}

bool _VkBaseInStructure::flush() {
  _VkBaseInStructure *self = this;
  
  return true;
}

NAN_METHOD(_VkBaseInStructure::New) {
  if (info.IsConstructCall()) {
    _VkBaseInStructure* self = new _VkBaseInStructure();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkBaseInStructure constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkBaseInStructure::GetsType) {
  _VkBaseInStructure *self = Nan::ObjectWrap::Unwrap<_VkBaseInStructure>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkBaseInStructure::SetsType) {
  _VkBaseInStructure *self = Nan::ObjectWrap::Unwrap<_VkBaseInStructure>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBaseInStructure.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pNext
NAN_GETTER(_VkBaseInStructure::GetpNext) {
  _VkBaseInStructure *self = Nan::ObjectWrap::Unwrap<_VkBaseInStructure>(info.This());
  if (self->pNext.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pNext);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBaseInStructure::SetpNext) {
  _VkBaseInStructure *self = Nan::ObjectWrap::Unwrap<_VkBaseInStructure>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkBaseInStructure::constructor)->HasInstance(obj)) {
      self->pNext.Reset<v8::Object>(value.As<v8::Object>());
      _VkBaseInStructure* inst = Nan::ObjectWrap::Unwrap<_VkBaseInStructure>(obj);
      inst->flush();
      self->instance.pNext = &inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkBaseInStructure]' for 'VkBaseInStructure.pNext' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->pNext.Reset();
    self->instance.pNext = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkBaseInStructure]' for 'VkBaseInStructure.pNext' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}