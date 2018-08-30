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

// UnityEngine.UI.RectMask2D
struct RectMask2D_t8_102;
// UnityEngine.RectTransform
struct RectTransform_t7_80;
// UnityEngine.Camera
struct Camera_t7_100;
// UnityEngine.UI.IClippable
struct IClippable_t8_178;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.RectMask2D::.ctor()
extern "C" void RectMask2D__ctor_m8_809 (RectMask2D_t8_102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.RectMask2D::get_canvasRect()
extern "C" Rect_t7_35  RectMask2D_get_canvasRect_m8_810 (RectMask2D_t8_102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.RectMask2D::get_rectTransform()
extern "C" RectTransform_t7_80 * RectMask2D_get_rectTransform_m8_811 (RectMask2D_t8_102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnEnable()
extern "C" void RectMask2D_OnEnable_m8_812 (RectMask2D_t8_102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnDisable()
extern "C" void RectMask2D_OnDisable_m8_813 (RectMask2D_t8_102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.RectMask2D::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool RectMask2D_IsRaycastLocationValid_m8_814 (RectMask2D_t8_102 * __this, Vector2_t7_65  ___sp, Camera_t7_100 * ___eventCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::PerformClipping()
extern "C" void RectMask2D_PerformClipping_m8_815 (RectMask2D_t8_102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::AddClippable(UnityEngine.UI.IClippable)
extern "C" void RectMask2D_AddClippable_m8_816 (RectMask2D_t8_102 * __this, Object_t * ___clippable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::RemoveClippable(UnityEngine.UI.IClippable)
extern "C" void RectMask2D_RemoveClippable_m8_817 (RectMask2D_t8_102 * __this, Object_t * ___clippable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnTransformParentChanged()
extern "C" void RectMask2D_OnTransformParentChanged_m8_818 (RectMask2D_t8_102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RectMask2D::OnCanvasHierarchyChanged()
extern "C" void RectMask2D_OnCanvasHierarchyChanged_m8_819 (RectMask2D_t8_102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
