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

// MadLevelManager.MadUndo
struct MadUndo_t11_225;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t7_5;
struct Object_t7_5_marshaled;
// UnityEngine.GameObject
struct GameObject_t7_113;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadUndo::.ctor()
extern "C" void MadUndo__ctor_m11_1659 (MadUndo_t11_225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadUndo::LegacyRegisterSceneUndo(System.String)
extern "C" void MadUndo_LegacyRegisterSceneUndo_m11_1660 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadUndo::LegacyRegisterUndo(UnityEngine.Object,System.String)
extern "C" void MadUndo_LegacyRegisterUndo_m11_1661 (Object_t * __this /* static, unused */, Object_t7_5 * ___obj, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadUndo::DestroyObjectImmediate(UnityEngine.GameObject)
extern "C" void MadUndo_DestroyObjectImmediate_m11_1662 (Object_t * __this /* static, unused */, GameObject_t7_113 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadUndo::RecordObject(UnityEngine.Object,System.String)
extern "C" void MadUndo_RecordObject_m11_1663 (Object_t * __this /* static, unused */, Object_t7_5 * ___obj, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadUndo::RecordObject2(UnityEngine.Object,System.String)
extern "C" void MadUndo_RecordObject2_m11_1664 (Object_t * __this /* static, unused */, Object_t7_5 * ___obj, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadUndo::RegisterCreatedObjectUndo(UnityEngine.Object,System.String)
extern "C" void MadUndo_RegisterCreatedObjectUndo_m11_1665 (Object_t * __this /* static, unused */, Object_t7_5 * ___obj, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
