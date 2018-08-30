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

// UnityEngine.Texture2D
struct Texture2D_t7_49;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void MadLevelManager.MadDrawing::.cctor()
extern "C" void MadDrawing__cctor_m11_1065 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D MadLevelManager.MadDrawing::get_adLineTex()
extern "C" Texture2D_t7_49 * MadDrawing_get_adLineTex_m11_1066 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D MadLevelManager.MadDrawing::get_lineTex()
extern "C" Texture2D_t7_49 * MadDrawing_get_lineTex_m11_1067 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDrawing::DrawLineMac(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single,System.Boolean)
extern "C" void MadDrawing_DrawLineMac_m11_1068 (Object_t * __this /* static, unused */, Vector2_t7_65  ___pointA, Vector2_t7_65  ___pointB, Color_t7_57  ___color, float ___width, bool ___antiAlias, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDrawing::DrawLineWindows(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single,System.Boolean)
extern "C" void MadDrawing_DrawLineWindows_m11_1069 (Object_t * __this /* static, unused */, Vector2_t7_65  ___pointA, Vector2_t7_65  ___pointB, Color_t7_57  ___color, float ___width, bool ___antiAlias, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDrawing::DrawLine(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single,System.Boolean)
extern "C" void MadDrawing_DrawLine_m11_1070 (Object_t * __this /* static, unused */, Vector2_t7_65  ___pointA, Vector2_t7_65  ___pointB, Color_t7_57  ___color, float ___width, bool ___antiAlias, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadDrawing::BezierLine(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single,System.Boolean,System.Int32)
extern "C" void MadDrawing_BezierLine_m11_1071 (Object_t * __this /* static, unused */, Vector2_t7_65  ___start, Vector2_t7_65  ___startTangent, Vector2_t7_65  ___end, Vector2_t7_65  ___endTangent, Color_t7_57  ___color, float ___width, bool ___antiAlias, int32_t ___segments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MadLevelManager.MadDrawing::cubeBezier(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" Vector2_t7_65  MadDrawing_cubeBezier_m11_1072 (Object_t * __this /* static, unused */, Vector2_t7_65  ___s, Vector2_t7_65  ___st, Vector2_t7_65  ___e, Vector2_t7_65  ___et, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 MadLevelManager.MadDrawing::translationMatrix(UnityEngine.Vector3)
extern "C" Matrix4x4_t7_68  MadDrawing_translationMatrix_m11_1073 (Object_t * __this /* static, unused */, Vector3_t7_66  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
