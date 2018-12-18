/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::constructor;

_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV;
  
}

_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::~_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV() {
  //printf("VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV deconstructed!!\n");
  
  
  
}

void _VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("representativeFragmentTest").ToLocalChecked(), GetrepresentativeFragmentTest, SetrepresentativeFragmentTest, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::flush() {
  _VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV* self = new _VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("representativeFragmentTest").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::GetsType) {
  _VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::SetsType) {
  _VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// representativeFragmentTest
NAN_GETTER(_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::GetrepresentativeFragmentTest) {
  _VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.representativeFragmentTest));
}NAN_SETTER(_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::SetrepresentativeFragmentTest) {
  _VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.representativeFragmentTest = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV.representativeFragmentTest' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}