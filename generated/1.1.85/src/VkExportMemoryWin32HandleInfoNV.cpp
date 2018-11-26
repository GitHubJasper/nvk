/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkExportMemoryWin32HandleInfoNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkExportMemoryWin32HandleInfoNV::constructor;

_VkExportMemoryWin32HandleInfoNV::_VkExportMemoryWin32HandleInfoNV() {
  instance.sType = VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV;
  
}

_VkExportMemoryWin32HandleInfoNV::~_VkExportMemoryWin32HandleInfoNV() {
  //printf("VkExportMemoryWin32HandleInfoNV deconstructed!!\n");
  
  
  pNext.Reset();
  
}

void _VkExportMemoryWin32HandleInfoNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkExportMemoryWin32HandleInfoNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkExportMemoryWin32HandleInfoNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  Nan::Set(target, Nan::New("VkExportMemoryWin32HandleInfoNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkExportMemoryWin32HandleInfoNV::flush() {
  _VkExportMemoryWin32HandleInfoNV *self = this;
  
  return true;
}

NAN_METHOD(_VkExportMemoryWin32HandleInfoNV::New) {
  if (info.IsConstructCall()) {
    _VkExportMemoryWin32HandleInfoNV* self = new _VkExportMemoryWin32HandleInfoNV();
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
    Nan::ThrowError("VkExportMemoryWin32HandleInfoNV constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkExportMemoryWin32HandleInfoNV::GetsType) {
  _VkExportMemoryWin32HandleInfoNV *self = Nan::ObjectWrap::Unwrap<_VkExportMemoryWin32HandleInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkExportMemoryWin32HandleInfoNV::SetsType) {
  _VkExportMemoryWin32HandleInfoNV *self = Nan::ObjectWrap::Unwrap<_VkExportMemoryWin32HandleInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkExportMemoryWin32HandleInfoNV.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pNext
NAN_GETTER(_VkExportMemoryWin32HandleInfoNV::GetpNext) {
  _VkExportMemoryWin32HandleInfoNV *self = Nan::ObjectWrap::Unwrap<_VkExportMemoryWin32HandleInfoNV>(info.This());
}NAN_SETTER(_VkExportMemoryWin32HandleInfoNV::SetpNext) {
  _VkExportMemoryWin32HandleInfoNV *self = Nan::ObjectWrap::Unwrap<_VkExportMemoryWin32HandleInfoNV>(info.This());
}