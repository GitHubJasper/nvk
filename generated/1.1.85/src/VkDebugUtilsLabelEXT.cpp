/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include <string.h>
#include "index.h"
#include "VkDebugUtilsLabelEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkDebugUtilsLabelEXT::constructor;

_VkDebugUtilsLabelEXT::_VkDebugUtilsLabelEXT() {
  instance.sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT;
  vcolor = new std::vector<float>;
  
}

_VkDebugUtilsLabelEXT::~_VkDebugUtilsLabelEXT() {
  //printf("VkDebugUtilsLabelEXT deconstructed!!\n");
  
  
  pNext.Reset();
  
  pLabelName.Reset();
  
  vcolor->clear();
  delete vcolor;
  
  
}

void _VkDebugUtilsLabelEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDebugUtilsLabelEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDebugUtilsLabelEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("pLabelName").ToLocalChecked(), GetpLabelName, SetpLabelName, ctor);
  SetPrototypeAccessor(proto, Nan::New("color").ToLocalChecked(), Getcolor, Setcolor, ctor);
  Nan::Set(target, Nan::New("VkDebugUtilsLabelEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDebugUtilsLabelEXT::flush() {
  _VkDebugUtilsLabelEXT *self = this;
  if (!(self->color.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->color);
    
    if (value->IsArray()) {
      // validate length
      if (v8::Local<v8::Array>::Cast(value)->Length() != 4) {
        Nan::ThrowRangeError("Invalid array length, expected array length of '4' for 'VkDebugUtilsLabelEXT.color'");
        return false;
      }
      std::vector<float> array = createArrayOfV8Numbers<float>(value);
      memcpy(self->instance.color, array.data(), sizeof(float) * 4);
    } else if (value->IsNull()) {
      memset(&self->instance.color, 0, sizeof(float));
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Array' for 'VkDebugUtilsLabelEXT.color' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return false;
    }
  }
  return true;
}

NAN_METHOD(_VkDebugUtilsLabelEXT::New) {
  if (info.IsConstructCall()) {
    _VkDebugUtilsLabelEXT* self = new _VkDebugUtilsLabelEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("pLabelName").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("color").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDebugUtilsLabelEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDebugUtilsLabelEXT::GetsType) {
  _VkDebugUtilsLabelEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsLabelEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDebugUtilsLabelEXT::SetsType) {
  _VkDebugUtilsLabelEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsLabelEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDebugUtilsLabelEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pNext
NAN_GETTER(_VkDebugUtilsLabelEXT::GetpNext) {
  _VkDebugUtilsLabelEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsLabelEXT>(info.This());
}NAN_SETTER(_VkDebugUtilsLabelEXT::SetpNext) {
  _VkDebugUtilsLabelEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsLabelEXT>(info.This());
}// pLabelName
NAN_GETTER(_VkDebugUtilsLabelEXT::GetpLabelName) {
  _VkDebugUtilsLabelEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsLabelEXT>(info.This());
  if (self->pLabelName.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::String> str = Nan::New(self->pLabelName);
    info.GetReturnValue().Set(str);
  }
}NAN_SETTER(_VkDebugUtilsLabelEXT::SetpLabelName) {
  _VkDebugUtilsLabelEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsLabelEXT>(info.This());
  if (value->IsString()) {
    Nan::Persistent<v8::String, v8::CopyablePersistentTraits<v8::String>> str(Nan::To<v8::String>(value).ToLocalChecked());
    self->pLabelName = str;
    // free previous
    if (self->instance.pLabelName) {
      delete[] self->instance.pLabelName;
    }
    self->instance.pLabelName = copyV8String(value);
  } else if (value->IsNull()) {
    self->instance.pLabelName = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'String' for 'VkDebugUtilsLabelEXT.pLabelName' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// color
NAN_GETTER(_VkDebugUtilsLabelEXT::Getcolor) {
  _VkDebugUtilsLabelEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsLabelEXT>(info.This());
  if (self->color.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    info.GetReturnValue().Set(Nan::New(self->color));
  }
}NAN_SETTER(_VkDebugUtilsLabelEXT::Setcolor) {
  _VkDebugUtilsLabelEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsLabelEXT>(info.This());
  // js
  if (value->IsArray()) {
    self->color.Reset<v8::Array>(value.As<v8::Array>());
  } else if (value->IsNull()) {
    self->color.Reset();
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Array' for 'VkDebugUtilsLabelEXT.color' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}