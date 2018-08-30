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

// UnityEngine.ScriptableObject
struct ScriptableObject_t5_16;
struct ScriptableObject_t5_16_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" void ScriptableObject__ctor_m5_16 (ScriptableObject_t5_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m5_17 (Object_t * __this /* static, unused */, ScriptableObject_t5_16 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C" ScriptableObject_t5_16 * ScriptableObject_CreateInstance_m5_18 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" ScriptableObject_t5_16 * ScriptableObject_CreateInstance_m5_19 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t5_16 * ScriptableObject_CreateInstanceFromType_m5_20 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void ScriptableObject_t5_16_marshal(const ScriptableObject_t5_16& unmarshaled, ScriptableObject_t5_16_marshaled& marshaled);
extern "C" void ScriptableObject_t5_16_marshal_back(const ScriptableObject_t5_16_marshaled& marshaled, ScriptableObject_t5_16& unmarshaled);
extern "C" void ScriptableObject_t5_16_marshal_cleanup(ScriptableObject_t5_16_marshaled& marshaled);
