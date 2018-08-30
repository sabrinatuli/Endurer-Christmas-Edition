#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.UnitySerializationHolder
struct UnitySerializationHolder_t1_772;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_179;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1_702;
// System.Reflection.Module
struct Module_t1_288;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m1_5433 (UnitySerializationHolder_t1_772 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m1_5434 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m1_5435 (Object_t * __this /* static, unused */, DBNull_t1_702 * ___instance, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m1_5436 (Object_t * __this /* static, unused */, Module_t1_288 * ___instance, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m1_5437 (UnitySerializationHolder_t1_772 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m1_5438 (UnitySerializationHolder_t1_772 * __this, StreamingContext_t1_511  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
