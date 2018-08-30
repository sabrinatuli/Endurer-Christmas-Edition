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

// MadLevelManager.MadTransform
struct MadTransform_t11_223;
// UnityEngine.GameObject
struct GameObject_t7_113;
// UnityEngine.Transform
struct Transform_t7_81;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void MadLevelManager.MadTransform::.ctor()
extern "C" void MadTransform__ctor_m11_1642 (MadTransform_t11_223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadTransform::.cctor()
extern "C" void MadTransform__cctor_m11_1643 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadTransform::get_instantiating()
extern "C" bool MadTransform_get_instantiating_m11_1644 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadTransform::set_instantiating(System.Boolean)
extern "C" void MadTransform_set_instantiating_m11_1645 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject MadLevelManager.MadTransform::CreateChild(UnityEngine.Transform,System.String)
extern "C" GameObject_t7_113 * MadTransform_CreateChild_m11_1646 (Object_t * __this /* static, unused */, Transform_t7_81 * ___parent, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject MadLevelManager.MadTransform::CreateChild(UnityEngine.Transform,System.String,UnityEngine.GameObject)
extern "C" GameObject_t7_113 * MadTransform_CreateChild_m11_1647 (Object_t * __this /* static, unused */, Transform_t7_81 * ___parent, String_t* ___name, GameObject_t7_113 * ___template, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadTransform::SetLocalScale(UnityEngine.Transform,System.Single)
extern "C" void MadTransform_SetLocalScale_m11_1648 (Object_t * __this /* static, unused */, Transform_t7_81 * ___transform, float ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadTransform::SetLocalScale(UnityEngine.Transform,System.Single,System.Single,System.Single)
extern "C" void MadTransform_SetLocalScale_m11_1649 (Object_t * __this /* static, unused */, Transform_t7_81 * ___transform, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadTransform::SetLocalScale(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void MadTransform_SetLocalScale_m11_1650 (Object_t * __this /* static, unused */, Transform_t7_81 * ___transform, Vector3_t7_66  ___localScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadTransform::SetPosition(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void MadTransform_SetPosition_m11_1651 (Object_t * __this /* static, unused */, Transform_t7_81 * ___transform, Vector3_t7_66  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadTransform::SetLocalPosition(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void MadTransform_SetLocalPosition_m11_1652 (Object_t * __this /* static, unused */, Transform_t7_81 * ___transform, Vector3_t7_66  ___localPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadTransform::SetLocalEulerAngles(UnityEngine.Transform,UnityEngine.Vector3)
extern "C" void MadTransform_SetLocalEulerAngles_m11_1653 (Object_t * __this /* static, unused */, Transform_t7_81 * ___transform, Vector3_t7_66  ___localEulerAngles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadTransform::SetRotation(UnityEngine.Transform,UnityEngine.Quaternion)
extern "C" void MadTransform_SetRotation_m11_1654 (Object_t * __this /* static, unused */, Transform_t7_81 * ___transform, Quaternion_t7_67  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadTransform::SetLocalRotation(UnityEngine.Transform,UnityEngine.Quaternion)
extern "C" void MadTransform_SetLocalRotation_m11_1655 (Object_t * __this /* static, unused */, Transform_t7_81 * ___transform, Quaternion_t7_67  ___localRotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
