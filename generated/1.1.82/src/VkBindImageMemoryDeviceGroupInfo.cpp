/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkBindImageMemoryDeviceGroupInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkBindImageMemoryDeviceGroupInfo::constructor;

_VkBindImageMemoryDeviceGroupInfo::_VkBindImageMemoryDeviceGroupInfo() {
  instance.sType = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO;
  vpSplitInstanceBindRegions = new std::vector<VkRect2D>;
  
}

_VkBindImageMemoryDeviceGroupInfo::~_VkBindImageMemoryDeviceGroupInfo() {
  //printf("VkBindImageMemoryDeviceGroupInfo deconstructed!!\n");
  
  
  
  pDeviceIndices.Reset();
  
  
  vpSplitInstanceBindRegions->clear();
  delete vpSplitInstanceBindRegions;
  
  pSplitInstanceBindRegions.Reset();
  
}

void _VkBindImageMemoryDeviceGroupInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBindImageMemoryDeviceGroupInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBindImageMemoryDeviceGroupInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("deviceIndexCount").ToLocalChecked(), GetdeviceIndexCount, SetdeviceIndexCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pDeviceIndices").ToLocalChecked(), GetpDeviceIndices, SetpDeviceIndices, ctor);
  SetPrototypeAccessor(proto, Nan::New("splitInstanceBindRegionCount").ToLocalChecked(), GetsplitInstanceBindRegionCount, SetsplitInstanceBindRegionCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pSplitInstanceBindRegions").ToLocalChecked(), GetpSplitInstanceBindRegions, SetpSplitInstanceBindRegions, ctor);
  Nan::Set(target, Nan::New("VkBindImageMemoryDeviceGroupInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkBindImageMemoryDeviceGroupInfo::flush() {
  _VkBindImageMemoryDeviceGroupInfo *self = this;
  if (!(self->pSplitInstanceBindRegions.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pSplitInstanceBindRegions);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.splitInstanceBindRegionCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'splitInstanceBindRegionCount' for 'VkBindImageMemoryDeviceGroupInfo.pSplitInstanceBindRegions'");
      return false;
    }
    std::vector<VkRect2D>* data = self->vpSplitInstanceBindRegions;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkRect2D::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkBindImageMemoryDeviceGroupInfo.pSplitInstanceBindRegions' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkRect2D* result = Nan::ObjectWrap::Unwrap<_VkRect2D>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pSplitInstanceBindRegions = data->data();
  }
  return true;
}

NAN_METHOD(_VkBindImageMemoryDeviceGroupInfo::New) {
  if (info.IsConstructCall()) {
    _VkBindImageMemoryDeviceGroupInfo* self = new _VkBindImageMemoryDeviceGroupInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("deviceIndexCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pDeviceIndices").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("splitInstanceBindRegionCount").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pSplitInstanceBindRegions").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkBindImageMemoryDeviceGroupInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkBindImageMemoryDeviceGroupInfo::GetsType) {
  _VkBindImageMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImageMemoryDeviceGroupInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkBindImageMemoryDeviceGroupInfo::SetsType) {
  _VkBindImageMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImageMemoryDeviceGroupInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBindImageMemoryDeviceGroupInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// deviceIndexCount
NAN_GETTER(_VkBindImageMemoryDeviceGroupInfo::GetdeviceIndexCount) {
  _VkBindImageMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImageMemoryDeviceGroupInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.deviceIndexCount));
}NAN_SETTER(_VkBindImageMemoryDeviceGroupInfo::SetdeviceIndexCount) {
  _VkBindImageMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImageMemoryDeviceGroupInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.deviceIndexCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBindImageMemoryDeviceGroupInfo.deviceIndexCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pDeviceIndices
NAN_GETTER(_VkBindImageMemoryDeviceGroupInfo::GetpDeviceIndices) {
  _VkBindImageMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImageMemoryDeviceGroupInfo>(info.This());
  if (self->pDeviceIndices.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pDeviceIndices);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBindImageMemoryDeviceGroupInfo::SetpDeviceIndices) {
  _VkBindImageMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImageMemoryDeviceGroupInfo>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsUint32Array()) {
        self->pDeviceIndices.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkBindImageMemoryDeviceGroupInfo.pDeviceIndices' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pDeviceIndices.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkBindImageMemoryDeviceGroupInfo.pDeviceIndices' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pDeviceIndices = getTypedArrayData<uint32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pDeviceIndices = nullptr;
  }
}// splitInstanceBindRegionCount
NAN_GETTER(_VkBindImageMemoryDeviceGroupInfo::GetsplitInstanceBindRegionCount) {
  _VkBindImageMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImageMemoryDeviceGroupInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.splitInstanceBindRegionCount));
}NAN_SETTER(_VkBindImageMemoryDeviceGroupInfo::SetsplitInstanceBindRegionCount) {
  _VkBindImageMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImageMemoryDeviceGroupInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.splitInstanceBindRegionCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkBindImageMemoryDeviceGroupInfo.splitInstanceBindRegionCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pSplitInstanceBindRegions
NAN_GETTER(_VkBindImageMemoryDeviceGroupInfo::GetpSplitInstanceBindRegions) {
  _VkBindImageMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImageMemoryDeviceGroupInfo>(info.This());
  if (self->pSplitInstanceBindRegions.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pSplitInstanceBindRegions);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkBindImageMemoryDeviceGroupInfo::SetpSplitInstanceBindRegions) {
  _VkBindImageMemoryDeviceGroupInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImageMemoryDeviceGroupInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pSplitInstanceBindRegions.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pSplitInstanceBindRegions.Reset();
      self->instance.pSplitInstanceBindRegions = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkBindImageMemoryDeviceGroupInfo.pSplitInstanceBindRegions' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pSplitInstanceBindRegions = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkBindImageMemoryDeviceGroupInfo.pSplitInstanceBindRegions' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}