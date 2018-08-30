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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// UnityEngine.Vector2 UnityEngine.GUIClip::Unclip(UnityEngine.Vector2)
extern "C" Vector2_t7_65  GUIClip_Unclip_m7_1900 (Object_t * __this /* static, unused */, Vector2_t7_65  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::Push(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" void GUIClip_Push_m7_1901 (Object_t * __this /* static, unused */, Rect_t7_35  ___screenRect, Vector2_t7_65  ___scrollOffset, Vector2_t7_65  ___renderOffset, bool ___resetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_Push(UnityEngine.Rect&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Boolean)
extern "C" void GUIClip_INTERNAL_CALL_Push_m7_1902 (Object_t * __this /* static, unused */, Rect_t7_35 * ___screenRect, Vector2_t7_65 * ___scrollOffset, Vector2_t7_65 * ___renderOffset, bool ___resetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::Pop()
extern "C" void GUIClip_Pop_m7_1903 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::Unclip_Vector2(UnityEngine.Vector2&)
extern "C" void GUIClip_Unclip_Vector2_m7_1904 (Object_t * __this /* static, unused */, Vector2_t7_65 * ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_Unclip_Vector2(UnityEngine.Vector2&)
extern "C" void GUIClip_INTERNAL_CALL_Unclip_Vector2_m7_1905 (Object_t * __this /* static, unused */, Vector2_t7_65 * ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.GUIClip::GetMatrix()
extern "C" Matrix4x4_t7_68  GUIClip_GetMatrix_m7_1906 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::SetMatrix(UnityEngine.Matrix4x4)
extern "C" void GUIClip_SetMatrix_m7_1907 (Object_t * __this /* static, unused */, Matrix4x4_t7_68  ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_SetMatrix(UnityEngine.Matrix4x4&)
extern "C" void GUIClip_INTERNAL_CALL_SetMatrix_m7_1908 (Object_t * __this /* static, unused */, Matrix4x4_t7_68 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
