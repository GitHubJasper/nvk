/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "VkQueryPool.h"

Nan::Persistent<v8::FunctionTemplate> _VkQueryPool::constructor;

_VkQueryPool::_VkQueryPool() {}
_VkQueryPool::~_VkQueryPool() {}

void _VkQueryPool::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkQueryPool::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkQueryPool").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkQueryPool").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkQueryPool::New) {
  _VkQueryPool* self = new _VkQueryPool();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
