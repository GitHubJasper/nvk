/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkMemoryDedicatedAllocateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkMemoryDedicatedAllocateInfo::constructor;

_VkMemoryDedicatedAllocateInfo::_VkMemoryDedicatedAllocateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO;
  
}

_VkMemoryDedicatedAllocateInfo::~_VkMemoryDedicatedAllocateInfo() {
  //printf("VkMemoryDedicatedAllocateInfo deconstructed!!\n");
  
  
  pNext.Reset();
  
  
  
}

void _VkMemoryDedicatedAllocateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkMemoryDedicatedAllocateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkMemoryDedicatedAllocateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("image").ToLocalChecked(), Getimage, Setimage, ctor);
  SetPrototypeAccessor(proto, Nan::New("buffer").ToLocalChecked(), Getbuffer, Setbuffer, ctor);
  Nan::Set(target, Nan::New("VkMemoryDedicatedAllocateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkMemoryDedicatedAllocateInfo::flush() {
  _VkMemoryDedicatedAllocateInfo *self = this;
  
  return true;
}

NAN_METHOD(_VkMemoryDedicatedAllocateInfo::New) {
  if (info.IsConstructCall()) {
    _VkMemoryDedicatedAllocateInfo* self = new _VkMemoryDedicatedAllocateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("image").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("buffer").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkMemoryDedicatedAllocateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkMemoryDedicatedAllocateInfo::GetsType) {
  _VkMemoryDedicatedAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkMemoryDedicatedAllocateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkMemoryDedicatedAllocateInfo::SetsType) {
  _VkMemoryDedicatedAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkMemoryDedicatedAllocateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkMemoryDedicatedAllocateInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pNext
NAN_GETTER(_VkMemoryDedicatedAllocateInfo::GetpNext) {
  _VkMemoryDedicatedAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkMemoryDedicatedAllocateInfo>(info.This());
}NAN_SETTER(_VkMemoryDedicatedAllocateInfo::SetpNext) {
  _VkMemoryDedicatedAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkMemoryDedicatedAllocateInfo>(info.This());
}// image
NAN_GETTER(_VkMemoryDedicatedAllocateInfo::Getimage) {
  _VkMemoryDedicatedAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkMemoryDedicatedAllocateInfo>(info.This());
  if (self->image.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->image);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkMemoryDedicatedAllocateInfo::Setimage) {
  _VkMemoryDedicatedAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkMemoryDedicatedAllocateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkImage::constructor)->HasInstance(obj)) {
      self->image.Reset<v8::Object>(value.As<v8::Object>());
      _VkImage* inst = Nan::ObjectWrap::Unwrap<_VkImage>(obj);
      ;
      self->instance.image = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkImage]' for 'VkMemoryDedicatedAllocateInfo.image' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->image.Reset();
    self->instance.image = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkImage]' for 'VkMemoryDedicatedAllocateInfo.image' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// buffer
NAN_GETTER(_VkMemoryDedicatedAllocateInfo::Getbuffer) {
  _VkMemoryDedicatedAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkMemoryDedicatedAllocateInfo>(info.This());
  if (self->buffer.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->buffer);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkMemoryDedicatedAllocateInfo::Setbuffer) {
  _VkMemoryDedicatedAllocateInfo *self = Nan::ObjectWrap::Unwrap<_VkMemoryDedicatedAllocateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkBuffer::constructor)->HasInstance(obj)) {
      self->buffer.Reset<v8::Object>(value.As<v8::Object>());
      _VkBuffer* inst = Nan::ObjectWrap::Unwrap<_VkBuffer>(obj);
      ;
      self->instance.buffer = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkBuffer]' for 'VkMemoryDedicatedAllocateInfo.buffer' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->buffer.Reset();
    self->instance.buffer = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkBuffer]' for 'VkMemoryDedicatedAllocateInfo.buffer' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}