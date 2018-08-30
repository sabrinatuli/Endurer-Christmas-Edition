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

// MadLevelManager.MadMath
struct MadMath_t11_219;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Bounds.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void MadLevelManager.MadMath::.ctor()
extern "C" void MadMath__ctor_m11_1612 (MadMath_t11_219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadMath::.cctor()
extern "C" void MadMath__cctor_m11_1613 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MadLevelManager.MadMath::SmoothDampVector2(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2&,System.Single)
extern "C" Vector2_t7_65  MadMath_SmoothDampVector2_m11_1614 (Object_t * __this /* static, unused */, Vector2_t7_65  ___current, Vector2_t7_65  ___target, Vector2_t7_65 * ___currentVelocity, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MadLevelManager.MadMath::ClosestPoint(UnityEngine.Rect,UnityEngine.Vector2)
extern "C" Vector2_t7_65  MadMath_ClosestPoint_m11_1615 (Object_t * __this /* static, unused */, Rect_t7_35  ___rect, Vector2_t7_65  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MadLevelManager.MadMath::ClosestPoint(UnityEngine.Bounds,UnityEngine.Vector2)
extern "C" Vector2_t7_65  MadMath_ClosestPoint_m11_1616 (Object_t * __this /* static, unused */, Bounds_t7_69  ___bounds, Vector2_t7_65  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MadLevelManager.MadMath::Round(UnityEngine.Vector3)
extern "C" Vector3_t7_66  MadMath_Round_m11_1617 (Object_t * __this /* static, unused */, Vector3_t7_66  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect MadLevelManager.MadMath::Expand(UnityEngine.Rect,UnityEngine.Rect)
extern "C" Rect_t7_35  MadMath_Expand_m11_1618 (Object_t * __this /* static, unused */, Rect_t7_35  ___a, Rect_t7_35  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect MadLevelManager.MadMath::Translate(UnityEngine.Rect,UnityEngine.Vector2)
extern "C" Rect_t7_35  MadMath_Translate_m11_1619 (Object_t * __this /* static, unused */, Rect_t7_35  ___r, Vector2_t7_65  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect MadLevelManager.MadMath::Scale(UnityEngine.Rect,UnityEngine.Vector2)
extern "C" Rect_t7_35  MadMath_Scale_m11_1620 (Object_t * __this /* static, unused */, Rect_t7_35  ___r, Vector2_t7_65  ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadMath::Overlaps(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool MadMath_Overlaps_m11_1621 (Object_t * __this /* static, unused */, Rect_t7_35  ___a, Rect_t7_35  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadMath::Approximately(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool MadMath_Approximately_m11_1622 (Object_t * __this /* static, unused */, Vector3_t7_66  ___a, Vector3_t7_66  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadMath::Approximately(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" bool MadMath_Approximately_m11_1623 (Object_t * __this /* static, unused */, Vector4_t7_70  ___a, Vector4_t7_70  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadMath::Approximately(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool MadMath_Approximately_m11_1624 (Object_t * __this /* static, unused */, Quaternion_t7_67  ___a, Quaternion_t7_67  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadMath::ToRoman(System.Int32)
extern "C" String_t* MadMath_ToRoman_m11_1625 (Object_t * __this /* static, unused */, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
