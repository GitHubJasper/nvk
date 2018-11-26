/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkCoarseSampleOrderCustomNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkCoarseSampleOrderCustomNV::constructor;

_VkCoarseSampleOrderCustomNV::_VkCoarseSampleOrderCustomNV() {
  
  vpSampleLocations = new std::vector<VkCoarseSampleLocationNV>;
  
}

_VkCoarseSampleOrderCustomNV::~_VkCoarseSampleOrderCustomNV() {
  //printf("VkCoarseSampleOrderCustomNV deconstructed!!\n");
  
  
  
  
  vpSampleLocations->clear();
  delete vpSampleLocations;
  
  pSampleLocations.Reset();
  
}

void _VkCoarseSampleOrderCustomNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkCoarseSampleOrderCustomNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkCoarseSampleOrderCustomNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("shadingRate").ToLocalChecked(), GetshadingRate, SetshadingRate, ctor);
  SetPrototypeAccessor(proto, Nan::New("sampleCount").ToLocalChecked(), GetsampleCount, SetsampleCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("sampleLocationCount").ToLocalChecked(), GetsampleLocationCount, SetsampleLocationCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pSampleLocations").ToLocalChecked(), GetpSampleLocations, SetpSampleLocations, ctor);
  Nan::Set(target, Nan::New("VkCoarseSampleOrderCustomNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkCoarseSampleOrderCustomNV::flush() {
  _VkCoarseSampleOrderCustomNV *self = this;
  if (!(self->pSampleLocations.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pSampleLocations);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.sampleLocationCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'sampleLocationCount' for 'VkCoarseSampleOrderCustomNV.pSampleLocations'");
      return false;
    }
    std::vector<VkCoarseSampleLocationNV>* data = self->vpSampleLocations;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkCoarseSampleLocationNV::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkCoarseSampleLocationNV]' for 'VkCoarseSampleOrderCustomNV.pSampleLocations' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkCoarseSampleLocationNV* result = Nan::ObjectWrap::Unwrap<_VkCoarseSampleLocationNV>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pSampleLocations = data->data();
  }
  return true;
}

NAN_METHOD(_VkCoarseSampleOrderCustomNV::New) {
  if (info.IsConstructCall()) {
    _VkCoarseSampleOrderCustomNV* self = new _VkCoarseSampleOrderCustomNV();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("shadingRate").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("sampleCount").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("sampleLocationCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pSampleLocations").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkCoarseSampleOrderCustomNV constructor cannot be invoked without 'new'");
  }
};

// shadingRate
NAN_GETTER(_VkCoarseSampleOrderCustomNV::GetshadingRate) {
  _VkCoarseSampleOrderCustomNV *self = Nan::ObjectWrap::Unwrap<_VkCoarseSampleOrderCustomNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.shadingRate));
}NAN_SETTER(_VkCoarseSampleOrderCustomNV::SetshadingRate) {
  _VkCoarseSampleOrderCustomNV *self = Nan::ObjectWrap::Unwrap<_VkCoarseSampleOrderCustomNV>(info.This());
  if (value->IsNumber()) {
    self->instance.shadingRate = static_cast<VkShadingRatePaletteEntryNV>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkCoarseSampleOrderCustomNV.shadingRate' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// sampleCount
NAN_GETTER(_VkCoarseSampleOrderCustomNV::GetsampleCount) {
  _VkCoarseSampleOrderCustomNV *self = Nan::ObjectWrap::Unwrap<_VkCoarseSampleOrderCustomNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sampleCount));
}NAN_SETTER(_VkCoarseSampleOrderCustomNV::SetsampleCount) {
  _VkCoarseSampleOrderCustomNV *self = Nan::ObjectWrap::Unwrap<_VkCoarseSampleOrderCustomNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sampleCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkCoarseSampleOrderCustomNV.sampleCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// sampleLocationCount
NAN_GETTER(_VkCoarseSampleOrderCustomNV::GetsampleLocationCount) {
  _VkCoarseSampleOrderCustomNV *self = Nan::ObjectWrap::Unwrap<_VkCoarseSampleOrderCustomNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sampleLocationCount));
}NAN_SETTER(_VkCoarseSampleOrderCustomNV::SetsampleLocationCount) {
  _VkCoarseSampleOrderCustomNV *self = Nan::ObjectWrap::Unwrap<_VkCoarseSampleOrderCustomNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sampleLocationCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkCoarseSampleOrderCustomNV.sampleLocationCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pSampleLocations
NAN_GETTER(_VkCoarseSampleOrderCustomNV::GetpSampleLocations) {
  _VkCoarseSampleOrderCustomNV *self = Nan::ObjectWrap::Unwrap<_VkCoarseSampleOrderCustomNV>(info.This());
  if (self->pSampleLocations.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pSampleLocations);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkCoarseSampleOrderCustomNV::SetpSampleLocations) {
  _VkCoarseSampleOrderCustomNV *self = Nan::ObjectWrap::Unwrap<_VkCoarseSampleOrderCustomNV>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pSampleLocations.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pSampleLocations.Reset();
      self->instance.pSampleLocations = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkCoarseSampleLocationNV]' for 'VkCoarseSampleOrderCustomNV.pSampleLocations' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pSampleLocations = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkCoarseSampleLocationNV]' for 'VkCoarseSampleOrderCustomNV.pSampleLocations' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}