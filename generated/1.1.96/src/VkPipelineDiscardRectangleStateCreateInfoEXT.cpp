/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineDiscardRectangleStateCreateInfoEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineDiscardRectangleStateCreateInfoEXT::constructor;

_VkPipelineDiscardRectangleStateCreateInfoEXT::_VkPipelineDiscardRectangleStateCreateInfoEXT() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT;
  vpDiscardRectangles = new std::vector<VkRect2D>;
  
}

_VkPipelineDiscardRectangleStateCreateInfoEXT::~_VkPipelineDiscardRectangleStateCreateInfoEXT() {
  //printf("VkPipelineDiscardRectangleStateCreateInfoEXT deconstructed!!\n");
  
  
  
  
  
  vpDiscardRectangles->clear();
  delete vpDiscardRectangles;
  
  pDiscardRectangles.Reset();
  
}

void _VkPipelineDiscardRectangleStateCreateInfoEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineDiscardRectangleStateCreateInfoEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineDiscardRectangleStateCreateInfoEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("discardRectangleMode").ToLocalChecked(), GetdiscardRectangleMode, SetdiscardRectangleMode, ctor);
  SetPrototypeAccessor(proto, Nan::New("discardRectangleCount").ToLocalChecked(), GetdiscardRectangleCount, SetdiscardRectangleCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pDiscardRectangles").ToLocalChecked(), GetpDiscardRectangles, SetpDiscardRectangles, ctor);
  Nan::Set(target, Nan::New("VkPipelineDiscardRectangleStateCreateInfoEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPipelineDiscardRectangleStateCreateInfoEXT::flush() {
  _VkPipelineDiscardRectangleStateCreateInfoEXT *self = this;
  if (!(self->pDiscardRectangles.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pDiscardRectangles);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.discardRectangleCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'discardRectangleCount' for 'VkPipelineDiscardRectangleStateCreateInfoEXT.pDiscardRectangles'");
      return false;
    }
    std::vector<VkRect2D>* data = self->vpDiscardRectangles;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkRect2D::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkPipelineDiscardRectangleStateCreateInfoEXT.pDiscardRectangles' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkRect2D* result = Nan::ObjectWrap::Unwrap<_VkRect2D>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pDiscardRectangles = data->data();
  }
  return true;
}

NAN_METHOD(_VkPipelineDiscardRectangleStateCreateInfoEXT::New) {
  if (info.IsConstructCall()) {
    _VkPipelineDiscardRectangleStateCreateInfoEXT* self = new _VkPipelineDiscardRectangleStateCreateInfoEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("discardRectangleMode").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("discardRectangleCount").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pDiscardRectangles").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineDiscardRectangleStateCreateInfoEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineDiscardRectangleStateCreateInfoEXT::GetsType) {
  _VkPipelineDiscardRectangleStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineDiscardRectangleStateCreateInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineDiscardRectangleStateCreateInfoEXT::SetsType) {
  _VkPipelineDiscardRectangleStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineDiscardRectangleStateCreateInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineDiscardRectangleStateCreateInfoEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkPipelineDiscardRectangleStateCreateInfoEXT::Getflags) {
  _VkPipelineDiscardRectangleStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineDiscardRectangleStateCreateInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkPipelineDiscardRectangleStateCreateInfoEXT::Setflags) {
  _VkPipelineDiscardRectangleStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineDiscardRectangleStateCreateInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkPipelineDiscardRectangleStateCreateFlagsEXT>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineDiscardRectangleStateCreateInfoEXT.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// discardRectangleMode
NAN_GETTER(_VkPipelineDiscardRectangleStateCreateInfoEXT::GetdiscardRectangleMode) {
  _VkPipelineDiscardRectangleStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineDiscardRectangleStateCreateInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.discardRectangleMode));
}NAN_SETTER(_VkPipelineDiscardRectangleStateCreateInfoEXT::SetdiscardRectangleMode) {
  _VkPipelineDiscardRectangleStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineDiscardRectangleStateCreateInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.discardRectangleMode = static_cast<VkDiscardRectangleModeEXT>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineDiscardRectangleStateCreateInfoEXT.discardRectangleMode' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// discardRectangleCount
NAN_GETTER(_VkPipelineDiscardRectangleStateCreateInfoEXT::GetdiscardRectangleCount) {
  _VkPipelineDiscardRectangleStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineDiscardRectangleStateCreateInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.discardRectangleCount));
}NAN_SETTER(_VkPipelineDiscardRectangleStateCreateInfoEXT::SetdiscardRectangleCount) {
  _VkPipelineDiscardRectangleStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineDiscardRectangleStateCreateInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.discardRectangleCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineDiscardRectangleStateCreateInfoEXT.discardRectangleCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pDiscardRectangles
NAN_GETTER(_VkPipelineDiscardRectangleStateCreateInfoEXT::GetpDiscardRectangles) {
  _VkPipelineDiscardRectangleStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineDiscardRectangleStateCreateInfoEXT>(info.This());
  if (self->pDiscardRectangles.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pDiscardRectangles);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineDiscardRectangleStateCreateInfoEXT::SetpDiscardRectangles) {
  _VkPipelineDiscardRectangleStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineDiscardRectangleStateCreateInfoEXT>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pDiscardRectangles.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pDiscardRectangles.Reset();
      self->instance.pDiscardRectangles = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkPipelineDiscardRectangleStateCreateInfoEXT.pDiscardRectangles' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pDiscardRectangles = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkPipelineDiscardRectangleStateCreateInfoEXT.pDiscardRectangles' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}