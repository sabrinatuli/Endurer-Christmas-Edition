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

// MadLevelManager.MadText
struct MadText_t11_16;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1_827;
// System.String[]
struct StringU5BU5D_t1_202;
// MadLevelManager.MadFont/Glyph
struct Glyph_t11_180;
// UnityEngine.Material
struct Material_t7_38;
// MadLevelManager.MadList`1<UnityEngine.Vector3>
struct MadList_1_t11_168;
// MadLevelManager.MadList`1<UnityEngine.Color32>
struct MadList_1_t11_169;
// MadLevelManager.MadList`1<UnityEngine.Vector2>
struct MadList_1_t11_170;
// MadLevelManager.MadList`1<System.Int32>
struct MadList_1_t11_274;
// MadLevelManager.MadAtlas/Item
struct Item_t11_165;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void MadLevelManager.MadText::.ctor()
extern "C" void MadText__ctor_m11_1282 (MadText_t11_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect MadLevelManager.MadText::GetBounds()
extern "C" Rect_t7_35  MadText_GetBounds_m11_1283 (MadText_t11_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadText::UpdateTextIfNeeded()
extern "C" void MadText_UpdateTextIfNeeded_m11_1284 (MadText_t11_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadText::UpdateText()
extern "C" void MadText_UpdateText_m11_1285 (MadText_t11_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadText::UpdateCollider()
extern "C" void MadText_UpdateCollider_m11_1286 (MadText_t11_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadText::LineWidth(System.String)
extern "C" float MadText_LineWidth_m11_1287 (MadText_t11_16 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> MadLevelManager.MadText::WordWrap(System.String,System.Single)
extern "C" List_1_t1_827 * MadText_WordWrap_m11_1288 (MadText_t11_16 * __this, String_t* ___text, float ___lineWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadText::Join(System.String[],System.Int32,System.Int32,System.String)
extern "C" String_t* MadText_Join_m11_1289 (MadText_t11_16 * __this, StringU5BU5D_t1_202* ___words, int32_t ___index, int32_t ___count, String_t* ___glue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect MadLevelManager.MadText::GlyphBounds(MadLevelManager.MadFont/Glyph,System.Single&)
extern "C" Rect_t7_35  MadText_GlyphBounds_m11_1290 (MadText_t11_16 * __this, Glyph_t11_180 * ___g, float* ___xAdvance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadText::CanDraw()
extern "C" bool MadText_CanDraw_m11_1291 (MadText_t11_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material MadLevelManager.MadText::GetMaterial()
extern "C" Material_t7_38 * MadText_GetMaterial_m11_1292 (MadText_t11_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material MadLevelManager.MadText::GetFontMaterial()
extern "C" Material_t7_38 * MadText_GetFontMaterial_m11_1293 (MadText_t11_16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadText::DrawOn(MadLevelManager.MadList`1<UnityEngine.Vector3>&,MadLevelManager.MadList`1<UnityEngine.Color32>&,MadLevelManager.MadList`1<UnityEngine.Vector2>&,MadLevelManager.MadList`1<System.Int32>&,UnityEngine.Material&)
extern "C" void MadText_DrawOn_m11_1294 (MadText_t11_16 * __this, MadList_1_t11_168 ** ___vertices, MadList_1_t11_169 ** ___colors, MadList_1_t11_170 ** ___uv, MadList_1_t11_274 ** ___triangles, Material_t7_38 ** ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MadLevelManager.MadText::FixUV(UnityEngine.Vector2,MadLevelManager.MadAtlas/Item)
extern "C" Vector2_t7_65  MadText_FixUV_m11_1295 (MadText_t11_16 * __this, Vector2_t7_65  ___uv, Item_t11_165 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
