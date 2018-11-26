/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkDescriptorUpdateTemplateCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkDescriptorUpdateTemplateCreateInfo::constructor;

_VkDescriptorUpdateTemplateCreateInfo::_VkDescriptorUpdateTemplateCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO;
  vpDescriptorUpdateEntries = new std::vector<VkDescriptorUpdateTemplateEntry>;
  
}

_VkDescriptorUpdateTemplateCreateInfo::~_VkDescriptorUpdateTemplateCreateInfo() {
  //printf("VkDescriptorUpdateTemplateCreateInfo deconstructed!!\n");
  
  
  
  
  vpDescriptorUpdateEntries->clear();
  delete vpDescriptorUpdateEntries;
  
  pDescriptorUpdateEntries.Reset();
  
  
  
  
  
  
}

void _VkDescriptorUpdateTemplateCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDescriptorUpdateTemplateCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDescriptorUpdateTemplateCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("descriptorUpdateEntryCount").ToLocalChecked(), GetdescriptorUpdateEntryCount, SetdescriptorUpdateEntryCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pDescriptorUpdateEntries").ToLocalChecked(), GetpDescriptorUpdateEntries, SetpDescriptorUpdateEntries, ctor);
  SetPrototypeAccessor(proto, Nan::New("templateType").ToLocalChecked(), GettemplateType, SettemplateType, ctor);
  SetPrototypeAccessor(proto, Nan::New("descriptorSetLayout").ToLocalChecked(), GetdescriptorSetLayout, SetdescriptorSetLayout, ctor);
  SetPrototypeAccessor(proto, Nan::New("pipelineBindPoint").ToLocalChecked(), GetpipelineBindPoint, SetpipelineBindPoint, ctor);
  SetPrototypeAccessor(proto, Nan::New("pipelineLayout").ToLocalChecked(), GetpipelineLayout, SetpipelineLayout, ctor);
  SetPrototypeAccessor(proto, Nan::New("set").ToLocalChecked(), Getset, Setset, ctor);
  Nan::Set(target, Nan::New("VkDescriptorUpdateTemplateCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDescriptorUpdateTemplateCreateInfo::flush() {
  _VkDescriptorUpdateTemplateCreateInfo *self = this;
  if (!(self->pDescriptorUpdateEntries.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pDescriptorUpdateEntries);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.descriptorUpdateEntryCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'descriptorUpdateEntryCount' for 'VkDescriptorUpdateTemplateCreateInfo.pDescriptorUpdateEntries'");
      return false;
    }
    std::vector<VkDescriptorUpdateTemplateEntry>* data = self->vpDescriptorUpdateEntries;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkDescriptorUpdateTemplateEntry::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorUpdateTemplateEntry]' for 'VkDescriptorUpdateTemplateCreateInfo.pDescriptorUpdateEntries' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkDescriptorUpdateTemplateEntry* result = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateEntry>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pDescriptorUpdateEntries = data->data();
  }
  return true;
}

NAN_METHOD(_VkDescriptorUpdateTemplateCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkDescriptorUpdateTemplateCreateInfo* self = new _VkDescriptorUpdateTemplateCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("descriptorUpdateEntryCount").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pDescriptorUpdateEntries").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("templateType").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("descriptorSetLayout").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("pipelineBindPoint").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("pipelineLayout").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("set").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      if (obj->Has(sAccess9)) info.This()->Set(sAccess9, obj->Get(sAccess9));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDescriptorUpdateTemplateCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDescriptorUpdateTemplateCreateInfo::GetsType) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDescriptorUpdateTemplateCreateInfo::SetsType) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorUpdateTemplateCreateInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkDescriptorUpdateTemplateCreateInfo::Getflags) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkDescriptorUpdateTemplateCreateInfo::Setflags) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkDescriptorUpdateTemplateCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorUpdateTemplateCreateInfo.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// descriptorUpdateEntryCount
NAN_GETTER(_VkDescriptorUpdateTemplateCreateInfo::GetdescriptorUpdateEntryCount) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.descriptorUpdateEntryCount));
}NAN_SETTER(_VkDescriptorUpdateTemplateCreateInfo::SetdescriptorUpdateEntryCount) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.descriptorUpdateEntryCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorUpdateTemplateCreateInfo.descriptorUpdateEntryCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pDescriptorUpdateEntries
NAN_GETTER(_VkDescriptorUpdateTemplateCreateInfo::GetpDescriptorUpdateEntries) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  if (self->pDescriptorUpdateEntries.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pDescriptorUpdateEntries);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDescriptorUpdateTemplateCreateInfo::SetpDescriptorUpdateEntries) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pDescriptorUpdateEntries.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pDescriptorUpdateEntries.Reset();
      self->instance.pDescriptorUpdateEntries = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorUpdateTemplateEntry]' for 'VkDescriptorUpdateTemplateCreateInfo.pDescriptorUpdateEntries' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pDescriptorUpdateEntries = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorUpdateTemplateEntry]' for 'VkDescriptorUpdateTemplateCreateInfo.pDescriptorUpdateEntries' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// templateType
NAN_GETTER(_VkDescriptorUpdateTemplateCreateInfo::GettemplateType) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.templateType));
}NAN_SETTER(_VkDescriptorUpdateTemplateCreateInfo::SettemplateType) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.templateType = static_cast<VkDescriptorUpdateTemplateType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorUpdateTemplateCreateInfo.templateType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// descriptorSetLayout
NAN_GETTER(_VkDescriptorUpdateTemplateCreateInfo::GetdescriptorSetLayout) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  if (self->descriptorSetLayout.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->descriptorSetLayout);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDescriptorUpdateTemplateCreateInfo::SetdescriptorSetLayout) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkDescriptorSetLayout::constructor)->HasInstance(obj)) {
      self->descriptorSetLayout.Reset<v8::Object>(value.As<v8::Object>());
      _VkDescriptorSetLayout* inst = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayout>(obj);
      ;
      self->instance.descriptorSetLayout = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorSetLayout]' for 'VkDescriptorUpdateTemplateCreateInfo.descriptorSetLayout' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->descriptorSetLayout.Reset();
    self->instance.descriptorSetLayout = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDescriptorSetLayout]' for 'VkDescriptorUpdateTemplateCreateInfo.descriptorSetLayout' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pipelineBindPoint
NAN_GETTER(_VkDescriptorUpdateTemplateCreateInfo::GetpipelineBindPoint) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.pipelineBindPoint));
}NAN_SETTER(_VkDescriptorUpdateTemplateCreateInfo::SetpipelineBindPoint) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.pipelineBindPoint = static_cast<VkPipelineBindPoint>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorUpdateTemplateCreateInfo.pipelineBindPoint' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pipelineLayout
NAN_GETTER(_VkDescriptorUpdateTemplateCreateInfo::GetpipelineLayout) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  if (self->pipelineLayout.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pipelineLayout);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDescriptorUpdateTemplateCreateInfo::SetpipelineLayout) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipelineLayout::constructor)->HasInstance(obj)) {
      self->pipelineLayout.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipelineLayout* inst = Nan::ObjectWrap::Unwrap<_VkPipelineLayout>(obj);
      ;
      self->instance.pipelineLayout = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipelineLayout]' for 'VkDescriptorUpdateTemplateCreateInfo.pipelineLayout' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->pipelineLayout.Reset();
    self->instance.pipelineLayout = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipelineLayout]' for 'VkDescriptorUpdateTemplateCreateInfo.pipelineLayout' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// set
NAN_GETTER(_VkDescriptorUpdateTemplateCreateInfo::Getset) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.set));
}NAN_SETTER(_VkDescriptorUpdateTemplateCreateInfo::Setset) {
  _VkDescriptorUpdateTemplateCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorUpdateTemplateCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.set = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDescriptorUpdateTemplateCreateInfo.set' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}