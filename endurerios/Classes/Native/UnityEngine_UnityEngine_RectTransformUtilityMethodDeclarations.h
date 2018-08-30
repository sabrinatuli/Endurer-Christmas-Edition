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

// UnityEngine.RectTransform
struct RectTransform_t7_80;
// UnityEngine.Camera
struct Camera_t7_100;
// UnityEngine.Transform
struct Transform_t7_81;
// UnityEngine.Canvas
struct Canvas_t7_186;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.RectTransformUtility::.cctor()
extern "C" void RectTransformUtility__cctor_m7_1543 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m7_1544 (Object_t * __this /* static, unused */, RectTransform_t7_80 * ___rect, Vector2_t7_65  ___screenPoint, Camera_t7_100 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m7_1545 (Object_t * __this /* static, unused */, RectTransform_t7_80 * ___rect, Vector2_t7_65 * ___screenPoint, Camera_t7_100 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern "C" Vector2_t7_65  RectTransformUtility_PixelAdjustPoint_m7_1546 (Object_t * __this /* static, unused */, Vector2_t7_65  ___point, Transform_t7_81 * ___elementTransform, Canvas_t7_186 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_PixelAdjustPoint_m7_1547 (Object_t * __this /* static, unused */, Vector2_t7_65  ___point, Transform_t7_81 * ___elementTransform, Canvas_t7_186 * ___canvas, Vector2_t7_65 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m7_1548 (Object_t * __this /* static, unused */, Vector2_t7_65 * ___point, Transform_t7_81 * ___elementTransform, Canvas_t7_186 * ___canvas, Vector2_t7_65 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C" Rect_t7_35  RectTransformUtility_PixelAdjustRect_m7_1549 (Object_t * __this /* static, unused */, RectTransform_t7_80 * ___rectTransform, Canvas_t7_186 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m7_1550 (Object_t * __this /* static, unused */, RectTransform_t7_80 * ___rect, Vector2_t7_65  ___screenPoint, Camera_t7_100 * ___cam, Vector3_t7_66 * ___worldPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m7_1551 (Object_t * __this /* static, unused */, RectTransform_t7_80 * ___rect, Vector2_t7_65  ___screenPoint, Camera_t7_100 * ___cam, Vector2_t7_65 * ___localPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t7_71  RectTransformUtility_ScreenPointToRay_m7_1552 (Object_t * __this /* static, unused */, Camera_t7_100 * ___cam, Vector2_t7_65  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m7_1553 (Object_t * __this /* static, unused */, RectTransform_t7_80 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutAxes_m7_1554 (Object_t * __this /* static, unused */, RectTransform_t7_80 * ___rect, bool ___keepPositioning, bool ___recursive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t7_65  RectTransformUtility_GetTransposed_m7_1555 (Object_t * __this /* static, unused */, Vector2_t7_65  ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
