/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceCornerSampledImageFeaturesNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceCornerSampledImageFeaturesNV::constructor;

_VkPhysicalDeviceCornerSampledImageFeaturesNV::_VkPhysicalDeviceCornerSampledImageFeaturesNV() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV;
  
}

_VkPhysicalDeviceCornerSampledImageFeaturesNV::~_VkPhysicalDeviceCornerSampledImageFeaturesNV() {
  //printf("VkPhysicalDeviceCornerSampledImageFeaturesNV deconstructed!!\n");
  
  
  
}

void _VkPhysicalDeviceCornerSampledImageFeaturesNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceCornerSampledImageFeaturesNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceCornerSampledImageFeaturesNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("cornerSampledImage").ToLocalChecked(), GetcornerSampledImage, SetcornerSampledImage, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceCornerSampledImageFeaturesNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceCornerSampledImageFeaturesNV::flush() {
  _VkPhysicalDeviceCornerSampledImageFeaturesNV *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceCornerSampledImageFeaturesNV::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceCornerSampledImageFeaturesNV* self = new _VkPhysicalDeviceCornerSampledImageFeaturesNV();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("cornerSampledImage").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceCornerSampledImageFeaturesNV constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceCornerSampledImageFeaturesNV::GetsType) {
  _VkPhysicalDeviceCornerSampledImageFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceCornerSampledImageFeaturesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceCornerSampledImageFeaturesNV::SetsType) {
  _VkPhysicalDeviceCornerSampledImageFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceCornerSampledImageFeaturesNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceCornerSampledImageFeaturesNV.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// cornerSampledImage
NAN_GETTER(_VkPhysicalDeviceCornerSampledImageFeaturesNV::GetcornerSampledImage) {
  _VkPhysicalDeviceCornerSampledImageFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceCornerSampledImageFeaturesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.cornerSampledImage));
}NAN_SETTER(_VkPhysicalDeviceCornerSampledImageFeaturesNV::SetcornerSampledImage) {
  _VkPhysicalDeviceCornerSampledImageFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceCornerSampledImageFeaturesNV>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.cornerSampledImage = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceCornerSampledImageFeaturesNV.cornerSampledImage' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}