/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkOffset3D.h"

Nan::Persistent<v8::FunctionTemplate> _VkOffset3D::constructor;

_VkOffset3D::_VkOffset3D() {
  
}

_VkOffset3D::~_VkOffset3D() {
  //printf("VkOffset3D deconstructed!!\n");
}

void _VkOffset3D::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkOffset3D::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkOffset3D").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("x").ToLocalChecked(), Getx, Setx, ctor);
  SetPrototypeAccessor(proto, Nan::New("y").ToLocalChecked(), Gety, Sety, ctor);
  SetPrototypeAccessor(proto, Nan::New("z").ToLocalChecked(), Getz, Setz, ctor);
  Nan::Set(target, Nan::New("VkOffset3D").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkOffset3D::New) {
  if (info.IsConstructCall()) {
    _VkOffset3D* self = new _VkOffset3D();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::String> sAccess0 = Nan::New("x").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("y").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("z").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkOffset3D constructor cannot be invoked without 'new'");
  }
};

// x
NAN_GETTER(_VkOffset3D::Getx) {
  _VkOffset3D *self = Nan::ObjectWrap::Unwrap<_VkOffset3D>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.x));
}NAN_SETTER(_VkOffset3D::Setx) {
  _VkOffset3D *self = Nan::ObjectWrap::Unwrap<_VkOffset3D>(info.This());
  self->instance.x = static_cast<int32_t>(value->NumberValue());
}// y
NAN_GETTER(_VkOffset3D::Gety) {
  _VkOffset3D *self = Nan::ObjectWrap::Unwrap<_VkOffset3D>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.y));
}NAN_SETTER(_VkOffset3D::Sety) {
  _VkOffset3D *self = Nan::ObjectWrap::Unwrap<_VkOffset3D>(info.This());
  self->instance.y = static_cast<int32_t>(value->NumberValue());
}// z
NAN_GETTER(_VkOffset3D::Getz) {
  _VkOffset3D *self = Nan::ObjectWrap::Unwrap<_VkOffset3D>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.z));
}NAN_SETTER(_VkOffset3D::Setz) {
  _VkOffset3D *self = Nan::ObjectWrap::Unwrap<_VkOffset3D>(info.This());
  self->instance.z = static_cast<int32_t>(value->NumberValue());
}