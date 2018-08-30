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

// UnityEngine.AnimationCurve
struct AnimationCurve_t7_160;
struct AnimationCurve_t7_160_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t7_344;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Keyframe.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m7_1309 (AnimationCurve_t7_160 * __this, KeyframeU5BU5D_t7_344* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m7_1310 (AnimationCurve_t7_160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m7_1311 (AnimationCurve_t7_160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m7_1312 (AnimationCurve_t7_160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
extern "C" float AnimationCurve_Evaluate_m7_1313 (AnimationCurve_t7_160 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
extern "C" KeyframeU5BU5D_t7_344* AnimationCurve_get_keys_m7_1314 (AnimationCurve_t7_160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
extern "C" Keyframe_t7_159  AnimationCurve_get_Item_m7_1315 (AnimationCurve_t7_160 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::get_length()
extern "C" int32_t AnimationCurve_get_length_m7_1316 (AnimationCurve_t7_160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
extern "C" Keyframe_t7_159  AnimationCurve_GetKey_Internal_m7_1317 (AnimationCurve_t7_160 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
extern "C" KeyframeU5BU5D_t7_344* AnimationCurve_GetKeys_m7_1318 (AnimationCurve_t7_160 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m7_1319 (AnimationCurve_t7_160 * __this, KeyframeU5BU5D_t7_344* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t7_160_marshal(const AnimationCurve_t7_160& unmarshaled, AnimationCurve_t7_160_marshaled& marshaled);
extern "C" void AnimationCurve_t7_160_marshal_back(const AnimationCurve_t7_160_marshaled& marshaled, AnimationCurve_t7_160& unmarshaled);
extern "C" void AnimationCurve_t7_160_marshal_cleanup(AnimationCurve_t7_160_marshaled& marshaled);
