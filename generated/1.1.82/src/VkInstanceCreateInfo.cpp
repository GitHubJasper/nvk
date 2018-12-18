/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkInstanceCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkInstanceCreateInfo::constructor;

_VkInstanceCreateInfo::_VkInstanceCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
  vppEnabledLayerNames = new std::vector<char*>;
  vppEnabledExtensionNames = new std::vector<char*>;
  
}

_VkInstanceCreateInfo::~_VkInstanceCreateInfo() {
  //printf("VkInstanceCreateInfo deconstructed!!\n");
  
  
  
  pApplicationInfo.Reset();
  
  
  for (int ii = 0; ii < vppEnabledLayerNames->size(); ++ii) {
    delete ((char*) vppEnabledLayerNames->at(ii));
  };
  vppEnabledLayerNames->clear();
  delete vppEnabledLayerNames;
  
  ppEnabledLayerNames.Reset();
  
  
  for (int ii = 0; ii < vppEnabledExtensionNames->size(); ++ii) {
    delete ((char*) vppEnabledExtensionNames->at(ii));
  };
  vppEnabledExtensionNames->clear();
  delete vppEnabledExtensionNames;
  
  ppEnabledExtensionNames.Reset();
  
}

void _VkInstanceCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkInstanceCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkInstanceCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("pApplicationInfo").ToLocalChecked(), GetpApplicationInfo, SetpApplicationInfo, ctor);
  SetPrototypeAccessor(proto, Nan::New("enabledLayerCount").ToLocalChecked(), GetenabledLayerCount, SetenabledLayerCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("ppEnabledLayerNames").ToLocalChecked(), GetppEnabledLayerNames, SetppEnabledLayerNames, ctor);
  SetPrototypeAccessor(proto, Nan::New("enabledExtensionCount").ToLocalChecked(), GetenabledExtensionCount, SetenabledExtensionCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("ppEnabledExtensionNames").ToLocalChecked(), GetppEnabledExtensionNames, SetppEnabledExtensionNames, ctor);
  Nan::Set(target, Nan::New("VkInstanceCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkInstanceCreateInfo::flush() {
  _VkInstanceCreateInfo *self = this;
  if (!(self->ppEnabledLayerNames.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->ppEnabledLayerNames);
    
    std::vector<char*>* data = self->vppEnabledLayerNames;
    data->clear();
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Value> item = Nan::Get(array, ii).ToLocalChecked();
      if (!item->IsString()) return false;
      char *copy = copyV8String(item);
      data->push_back(copy);
    };
    self->instance.ppEnabledLayerNames = data->data();
  }if (!(self->ppEnabledExtensionNames.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->ppEnabledExtensionNames);
    
    std::vector<char*>* data = self->vppEnabledExtensionNames;
    data->clear();
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Value> item = Nan::Get(array, ii).ToLocalChecked();
      if (!item->IsString()) return false;
      char *copy = copyV8String(item);
      data->push_back(copy);
    };
    self->instance.ppEnabledExtensionNames = data->data();
  }
  return true;
}

NAN_METHOD(_VkInstanceCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkInstanceCreateInfo* self = new _VkInstanceCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pApplicationInfo").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("enabledLayerCount").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("ppEnabledLayerNames").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("enabledExtensionCount").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("ppEnabledExtensionNames").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkInstanceCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkInstanceCreateInfo::GetsType) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkInstanceCreateInfo::SetsType) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkInstanceCreateInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkInstanceCreateInfo::Getflags) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkInstanceCreateInfo::Setflags) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkInstanceCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkInstanceCreateInfo.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pApplicationInfo
NAN_GETTER(_VkInstanceCreateInfo::GetpApplicationInfo) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  if (self->pApplicationInfo.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pApplicationInfo);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkInstanceCreateInfo::SetpApplicationInfo) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkApplicationInfo::constructor)->HasInstance(obj)) {
      self->pApplicationInfo.Reset<v8::Object>(value.As<v8::Object>());
      _VkApplicationInfo* inst = Nan::ObjectWrap::Unwrap<_VkApplicationInfo>(obj);
      inst->flush();
      self->instance.pApplicationInfo = &inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkApplicationInfo]' for 'VkInstanceCreateInfo.pApplicationInfo' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->pApplicationInfo.Reset();
    self->instance.pApplicationInfo = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkApplicationInfo]' for 'VkInstanceCreateInfo.pApplicationInfo' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// enabledLayerCount
NAN_GETTER(_VkInstanceCreateInfo::GetenabledLayerCount) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.enabledLayerCount));
}NAN_SETTER(_VkInstanceCreateInfo::SetenabledLayerCount) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.enabledLayerCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkInstanceCreateInfo.enabledLayerCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// ppEnabledLayerNames
NAN_GETTER(_VkInstanceCreateInfo::GetppEnabledLayerNames) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  if (self->ppEnabledLayerNames.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->ppEnabledLayerNames);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkInstanceCreateInfo::SetppEnabledLayerNames) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->ppEnabledLayerNames.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->ppEnabledLayerNames.Reset();
      self->instance.ppEnabledLayerNames = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Array' for 'VkInstanceCreateInfo.ppEnabledLayerNames' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
}// enabledExtensionCount
NAN_GETTER(_VkInstanceCreateInfo::GetenabledExtensionCount) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.enabledExtensionCount));
}NAN_SETTER(_VkInstanceCreateInfo::SetenabledExtensionCount) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.enabledExtensionCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkInstanceCreateInfo.enabledExtensionCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// ppEnabledExtensionNames
NAN_GETTER(_VkInstanceCreateInfo::GetppEnabledExtensionNames) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  if (self->ppEnabledExtensionNames.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->ppEnabledExtensionNames);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkInstanceCreateInfo::SetppEnabledExtensionNames) {
  _VkInstanceCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkInstanceCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->ppEnabledExtensionNames.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->ppEnabledExtensionNames.Reset();
      self->instance.ppEnabledExtensionNames = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Array' for 'VkInstanceCreateInfo.ppEnabledExtensionNames' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
}