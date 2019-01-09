/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkImageSparseMemoryRequirementsInfo2.h"

Nan::Persistent<v8::FunctionTemplate> _VkImageSparseMemoryRequirementsInfo2::constructor;

_VkImageSparseMemoryRequirementsInfo2::_VkImageSparseMemoryRequirementsInfo2() {
  instance.sType = VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2;
  
}

_VkImageSparseMemoryRequirementsInfo2::~_VkImageSparseMemoryRequirementsInfo2() {
  //printf("VkImageSparseMemoryRequirementsInfo2 deconstructed!!\n");
  
  
  
}

void _VkImageSparseMemoryRequirementsInfo2::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkImageSparseMemoryRequirementsInfo2::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkImageSparseMemoryRequirementsInfo2").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("image").ToLocalChecked(), Getimage, Setimage, ctor);
  Nan::Set(target, Nan::New("VkImageSparseMemoryRequirementsInfo2").ToLocalChecked(), ctor->GetFunction());
}

bool _VkImageSparseMemoryRequirementsInfo2::flush() {
  _VkImageSparseMemoryRequirementsInfo2 *self = this;
  
  return true;
}

NAN_METHOD(_VkImageSparseMemoryRequirementsInfo2::New) {
  if (info.IsConstructCall()) {
    _VkImageSparseMemoryRequirementsInfo2* self = new _VkImageSparseMemoryRequirementsInfo2();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("image").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkImageSparseMemoryRequirementsInfo2 constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkImageSparseMemoryRequirementsInfo2::GetsType) {
  _VkImageSparseMemoryRequirementsInfo2 *self = Nan::ObjectWrap::Unwrap<_VkImageSparseMemoryRequirementsInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkImageSparseMemoryRequirementsInfo2::SetsType) {
  _VkImageSparseMemoryRequirementsInfo2 *self = Nan::ObjectWrap::Unwrap<_VkImageSparseMemoryRequirementsInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkImageSparseMemoryRequirementsInfo2.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// image
NAN_GETTER(_VkImageSparseMemoryRequirementsInfo2::Getimage) {
  _VkImageSparseMemoryRequirementsInfo2 *self = Nan::ObjectWrap::Unwrap<_VkImageSparseMemoryRequirementsInfo2>(info.This());
  if (self->image.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->image);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkImageSparseMemoryRequirementsInfo2::Setimage) {
  _VkImageSparseMemoryRequirementsInfo2 *self = Nan::ObjectWrap::Unwrap<_VkImageSparseMemoryRequirementsInfo2>(info.This());
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
    std::string msg = "Expected '[object VkImage]' for 'VkImageSparseMemoryRequirementsInfo2.image' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->image.Reset();
    self->instance.image = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkImage]' for 'VkImageSparseMemoryRequirementsInfo2.image' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}