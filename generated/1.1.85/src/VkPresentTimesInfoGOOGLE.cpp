/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkPresentTimesInfoGOOGLE.h"

Nan::Persistent<v8::FunctionTemplate> _VkPresentTimesInfoGOOGLE::constructor;

_VkPresentTimesInfoGOOGLE::_VkPresentTimesInfoGOOGLE() {
  instance.sType = VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE;
  vpTimes = new std::vector<VkPresentTimeGOOGLE>;
  
}

_VkPresentTimesInfoGOOGLE::~_VkPresentTimesInfoGOOGLE() {
  //printf("VkPresentTimesInfoGOOGLE deconstructed!!\n");
  
  
  pNext.Reset();
  
  
  vpTimes->clear();
  delete vpTimes;
  
  pTimes.Reset();
  
}

void _VkPresentTimesInfoGOOGLE::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPresentTimesInfoGOOGLE::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPresentTimesInfoGOOGLE").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("swapchainCount").ToLocalChecked(), GetswapchainCount, SetswapchainCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pTimes").ToLocalChecked(), GetpTimes, SetpTimes, ctor);
  Nan::Set(target, Nan::New("VkPresentTimesInfoGOOGLE").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPresentTimesInfoGOOGLE::flush() {
  _VkPresentTimesInfoGOOGLE *self = this;
  if (!(self->pTimes.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pTimes);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.swapchainCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'swapchainCount' for 'VkPresentTimesInfoGOOGLE.pTimes'");
      return false;
    }
    std::vector<VkPresentTimeGOOGLE>* data = self->vpTimes;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkPresentTimeGOOGLE::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPresentTimeGOOGLE]' for 'VkPresentTimesInfoGOOGLE.pTimes' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkPresentTimeGOOGLE* result = Nan::ObjectWrap::Unwrap<_VkPresentTimeGOOGLE>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pTimes = data->data();
  }
  return true;
}

NAN_METHOD(_VkPresentTimesInfoGOOGLE::New) {
  if (info.IsConstructCall()) {
    _VkPresentTimesInfoGOOGLE* self = new _VkPresentTimesInfoGOOGLE();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("swapchainCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pTimes").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPresentTimesInfoGOOGLE constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPresentTimesInfoGOOGLE::GetsType) {
  _VkPresentTimesInfoGOOGLE *self = Nan::ObjectWrap::Unwrap<_VkPresentTimesInfoGOOGLE>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPresentTimesInfoGOOGLE::SetsType) {
  _VkPresentTimesInfoGOOGLE *self = Nan::ObjectWrap::Unwrap<_VkPresentTimesInfoGOOGLE>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPresentTimesInfoGOOGLE.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pNext
NAN_GETTER(_VkPresentTimesInfoGOOGLE::GetpNext) {
  _VkPresentTimesInfoGOOGLE *self = Nan::ObjectWrap::Unwrap<_VkPresentTimesInfoGOOGLE>(info.This());
}NAN_SETTER(_VkPresentTimesInfoGOOGLE::SetpNext) {
  _VkPresentTimesInfoGOOGLE *self = Nan::ObjectWrap::Unwrap<_VkPresentTimesInfoGOOGLE>(info.This());
}// swapchainCount
NAN_GETTER(_VkPresentTimesInfoGOOGLE::GetswapchainCount) {
  _VkPresentTimesInfoGOOGLE *self = Nan::ObjectWrap::Unwrap<_VkPresentTimesInfoGOOGLE>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.swapchainCount));
}NAN_SETTER(_VkPresentTimesInfoGOOGLE::SetswapchainCount) {
  _VkPresentTimesInfoGOOGLE *self = Nan::ObjectWrap::Unwrap<_VkPresentTimesInfoGOOGLE>(info.This());
  if (value->IsNumber()) {
    self->instance.swapchainCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPresentTimesInfoGOOGLE.swapchainCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pTimes
NAN_GETTER(_VkPresentTimesInfoGOOGLE::GetpTimes) {
  _VkPresentTimesInfoGOOGLE *self = Nan::ObjectWrap::Unwrap<_VkPresentTimesInfoGOOGLE>(info.This());
  if (self->pTimes.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pTimes);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPresentTimesInfoGOOGLE::SetpTimes) {
  _VkPresentTimesInfoGOOGLE *self = Nan::ObjectWrap::Unwrap<_VkPresentTimesInfoGOOGLE>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pTimes.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pTimes.Reset();
      self->instance.pTimes = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPresentTimeGOOGLE]' for 'VkPresentTimesInfoGOOGLE.pTimes' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pTimes = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPresentTimeGOOGLE]' for 'VkPresentTimesInfoGOOGLE.pTimes' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}