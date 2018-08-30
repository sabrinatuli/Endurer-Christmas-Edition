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

// MadLevelManager.MadGameObject
struct MadGameObject_t11_217;
// UnityEngine.GameObject
struct GameObject_t7_113;
// UnityEngine.Object
struct Object_t7_5;
struct Object_t7_5_marshaled;
// System.Object[]
struct ObjectU5BU5D_t1_159;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadGameObject::.ctor()
extern "C" void MadGameObject__ctor_m11_1593 (MadGameObject_t11_217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadGameObject::SetActive(UnityEngine.GameObject,System.Boolean)
extern "C" void MadGameObject_SetActive_m11_1594 (Object_t * __this /* static, unused */, GameObject_t7_113 * ___go, bool ___active, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadGameObject::IsActive(UnityEngine.GameObject)
extern "C" bool MadGameObject_IsActive_m11_1595 (Object_t * __this /* static, unused */, GameObject_t7_113 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadGameObject::SafeDestroy(UnityEngine.Object)
extern "C" void MadGameObject_SafeDestroy_m11_1596 (Object_t * __this /* static, unused */, Object_t7_5 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadGameObject::AnyNull(System.Object[])
extern "C" bool MadGameObject_AnyNull_m11_1597 (Object_t * __this /* static, unused */, ObjectU5BU5D_t1_159* ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
