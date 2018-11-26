/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkGeometryNVX.h"

Nan::Persistent<v8::FunctionTemplate> _VkGeometryNVX::constructor;

_VkGeometryNVX::_VkGeometryNVX() {
  instance.sType = VK_STRUCTURE_TYPE_GEOMETRY_NVX;
  
}

_VkGeometryNVX::~_VkGeometryNVX() {
  //printf("VkGeometryNVX deconstructed!!\n");
  
  
  pNext.Reset();
  
  
  
  
}

void _VkGeometryNVX::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkGeometryNVX::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkGeometryNVX").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("geometryType").ToLocalChecked(), GetgeometryType, SetgeometryType, ctor);
  SetPrototypeAccessor(proto, Nan::New("geometry").ToLocalChecked(), Getgeometry, Setgeometry, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  Nan::Set(target, Nan::New("VkGeometryNVX").ToLocalChecked(), ctor->GetFunction());
}

bool _VkGeometryNVX::flush() {
  _VkGeometryNVX *self = this;
  if (!(self->geometry.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->geometry);
    
    _VkGeometryDataNVX* result = Nan::ObjectWrap::Unwrap<_VkGeometryDataNVX>(Nan::To<v8::Object>(value).ToLocalChecked());
    if (!result->flush()) return false;
    self->instance.geometry = result->instance;
  }
  return true;
}

NAN_METHOD(_VkGeometryNVX::New) {
  if (info.IsConstructCall()) {
    _VkGeometryNVX* self = new _VkGeometryNVX();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("geometryType").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("geometry").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("flags").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkGeometryNVX constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkGeometryNVX::GetsType) {
  _VkGeometryNVX *self = Nan::ObjectWrap::Unwrap<_VkGeometryNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkGeometryNVX::SetsType) {
  _VkGeometryNVX *self = Nan::ObjectWrap::Unwrap<_VkGeometryNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkGeometryNVX.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pNext
NAN_GETTER(_VkGeometryNVX::GetpNext) {
  _VkGeometryNVX *self = Nan::ObjectWrap::Unwrap<_VkGeometryNVX>(info.This());
}NAN_SETTER(_VkGeometryNVX::SetpNext) {
  _VkGeometryNVX *self = Nan::ObjectWrap::Unwrap<_VkGeometryNVX>(info.This());
}// geometryType
NAN_GETTER(_VkGeometryNVX::GetgeometryType) {
  _VkGeometryNVX *self = Nan::ObjectWrap::Unwrap<_VkGeometryNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.geometryType));
}NAN_SETTER(_VkGeometryNVX::SetgeometryType) {
  _VkGeometryNVX *self = Nan::ObjectWrap::Unwrap<_VkGeometryNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.geometryType = static_cast<VkGeometryTypeNVX>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkGeometryNVX.geometryType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// geometry
NAN_GETTER(_VkGeometryNVX::Getgeometry) {
  _VkGeometryNVX *self = Nan::ObjectWrap::Unwrap<_VkGeometryNVX>(info.This());
  if (self->geometry.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->geometry);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGeometryNVX::Setgeometry) {
  _VkGeometryNVX *self = Nan::ObjectWrap::Unwrap<_VkGeometryNVX>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkGeometryDataNVX::constructor)->HasInstance(obj)) {
      self->geometry.Reset<v8::Object>(value.As<v8::Object>());
      _VkGeometryDataNVX* inst = Nan::ObjectWrap::Unwrap<_VkGeometryDataNVX>(obj);
      inst->flush();
      self->instance.geometry = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkGeometryDataNVX]' for 'VkGeometryNVX.geometry' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->geometry.Reset();
    memset(&self->instance.geometry, 0, sizeof(VkGeometryDataNVX));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkGeometryDataNVX]' for 'VkGeometryNVX.geometry' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkGeometryNVX::Getflags) {
  _VkGeometryNVX *self = Nan::ObjectWrap::Unwrap<_VkGeometryNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkGeometryNVX::Setflags) {
  _VkGeometryNVX *self = Nan::ObjectWrap::Unwrap<_VkGeometryNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkGeometryFlagsNVX>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkGeometryNVX.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}