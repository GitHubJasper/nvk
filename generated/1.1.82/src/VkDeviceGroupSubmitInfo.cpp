/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkDeviceGroupSubmitInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkDeviceGroupSubmitInfo::constructor;

_VkDeviceGroupSubmitInfo::_VkDeviceGroupSubmitInfo() {
  instance.sType = VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO;
  
}

_VkDeviceGroupSubmitInfo::~_VkDeviceGroupSubmitInfo() {
  //printf("VkDeviceGroupSubmitInfo deconstructed!!\n");
  
  
  
  pWaitSemaphoreDeviceIndices.Reset();
  
  
  pCommandBufferDeviceMasks.Reset();
  
  
  pSignalSemaphoreDeviceIndices.Reset();
  
}

void _VkDeviceGroupSubmitInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDeviceGroupSubmitInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDeviceGroupSubmitInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("waitSemaphoreCount").ToLocalChecked(), GetwaitSemaphoreCount, SetwaitSemaphoreCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pWaitSemaphoreDeviceIndices").ToLocalChecked(), GetpWaitSemaphoreDeviceIndices, SetpWaitSemaphoreDeviceIndices, ctor);
  SetPrototypeAccessor(proto, Nan::New("commandBufferCount").ToLocalChecked(), GetcommandBufferCount, SetcommandBufferCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pCommandBufferDeviceMasks").ToLocalChecked(), GetpCommandBufferDeviceMasks, SetpCommandBufferDeviceMasks, ctor);
  SetPrototypeAccessor(proto, Nan::New("signalSemaphoreCount").ToLocalChecked(), GetsignalSemaphoreCount, SetsignalSemaphoreCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pSignalSemaphoreDeviceIndices").ToLocalChecked(), GetpSignalSemaphoreDeviceIndices, SetpSignalSemaphoreDeviceIndices, ctor);
  Nan::Set(target, Nan::New("VkDeviceGroupSubmitInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDeviceGroupSubmitInfo::flush() {
  _VkDeviceGroupSubmitInfo *self = this;
  
  return true;
}

NAN_METHOD(_VkDeviceGroupSubmitInfo::New) {
  if (info.IsConstructCall()) {
    _VkDeviceGroupSubmitInfo* self = new _VkDeviceGroupSubmitInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("waitSemaphoreCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pWaitSemaphoreDeviceIndices").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("commandBufferCount").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pCommandBufferDeviceMasks").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("signalSemaphoreCount").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("pSignalSemaphoreDeviceIndices").ToLocalChecked();
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
    Nan::ThrowError("VkDeviceGroupSubmitInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDeviceGroupSubmitInfo::GetsType) {
  _VkDeviceGroupSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSubmitInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDeviceGroupSubmitInfo::SetsType) {
  _VkDeviceGroupSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSubmitInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGroupSubmitInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// waitSemaphoreCount
NAN_GETTER(_VkDeviceGroupSubmitInfo::GetwaitSemaphoreCount) {
  _VkDeviceGroupSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSubmitInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.waitSemaphoreCount));
}NAN_SETTER(_VkDeviceGroupSubmitInfo::SetwaitSemaphoreCount) {
  _VkDeviceGroupSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSubmitInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.waitSemaphoreCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGroupSubmitInfo.waitSemaphoreCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pWaitSemaphoreDeviceIndices
NAN_GETTER(_VkDeviceGroupSubmitInfo::GetpWaitSemaphoreDeviceIndices) {
  _VkDeviceGroupSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSubmitInfo>(info.This());
  if (self->pWaitSemaphoreDeviceIndices.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pWaitSemaphoreDeviceIndices);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDeviceGroupSubmitInfo::SetpWaitSemaphoreDeviceIndices) {
  _VkDeviceGroupSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSubmitInfo>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsUint32Array()) {
        self->pWaitSemaphoreDeviceIndices.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkDeviceGroupSubmitInfo.pWaitSemaphoreDeviceIndices' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pWaitSemaphoreDeviceIndices.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkDeviceGroupSubmitInfo.pWaitSemaphoreDeviceIndices' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pWaitSemaphoreDeviceIndices = getTypedArrayData<uint32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pWaitSemaphoreDeviceIndices = nullptr;
  }
}// commandBufferCount
NAN_GETTER(_VkDeviceGroupSubmitInfo::GetcommandBufferCount) {
  _VkDeviceGroupSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSubmitInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.commandBufferCount));
}NAN_SETTER(_VkDeviceGroupSubmitInfo::SetcommandBufferCount) {
  _VkDeviceGroupSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSubmitInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.commandBufferCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGroupSubmitInfo.commandBufferCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pCommandBufferDeviceMasks
NAN_GETTER(_VkDeviceGroupSubmitInfo::GetpCommandBufferDeviceMasks) {
  _VkDeviceGroupSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSubmitInfo>(info.This());
  if (self->pCommandBufferDeviceMasks.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pCommandBufferDeviceMasks);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDeviceGroupSubmitInfo::SetpCommandBufferDeviceMasks) {
  _VkDeviceGroupSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSubmitInfo>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsUint32Array()) {
        self->pCommandBufferDeviceMasks.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkDeviceGroupSubmitInfo.pCommandBufferDeviceMasks' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pCommandBufferDeviceMasks.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkDeviceGroupSubmitInfo.pCommandBufferDeviceMasks' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pCommandBufferDeviceMasks = getTypedArrayData<uint32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pCommandBufferDeviceMasks = nullptr;
  }
}// signalSemaphoreCount
NAN_GETTER(_VkDeviceGroupSubmitInfo::GetsignalSemaphoreCount) {
  _VkDeviceGroupSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSubmitInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.signalSemaphoreCount));
}NAN_SETTER(_VkDeviceGroupSubmitInfo::SetsignalSemaphoreCount) {
  _VkDeviceGroupSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSubmitInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.signalSemaphoreCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceGroupSubmitInfo.signalSemaphoreCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pSignalSemaphoreDeviceIndices
NAN_GETTER(_VkDeviceGroupSubmitInfo::GetpSignalSemaphoreDeviceIndices) {
  _VkDeviceGroupSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSubmitInfo>(info.This());
  if (self->pSignalSemaphoreDeviceIndices.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pSignalSemaphoreDeviceIndices);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDeviceGroupSubmitInfo::SetpSignalSemaphoreDeviceIndices) {
  _VkDeviceGroupSubmitInfo *self = Nan::ObjectWrap::Unwrap<_VkDeviceGroupSubmitInfo>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsUint32Array()) {
        self->pSignalSemaphoreDeviceIndices.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkDeviceGroupSubmitInfo.pSignalSemaphoreDeviceIndices' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pSignalSemaphoreDeviceIndices.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkDeviceGroupSubmitInfo.pSignalSemaphoreDeviceIndices' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pSignalSemaphoreDeviceIndices = getTypedArrayData<uint32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pSignalSemaphoreDeviceIndices = nullptr;
  }
}