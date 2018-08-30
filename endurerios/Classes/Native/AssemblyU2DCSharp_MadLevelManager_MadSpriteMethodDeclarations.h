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

// MadLevelManager.MadSprite
struct MadSprite_t11_13;
// UnityEngine.Texture2D
struct Texture2D_t7_49;
// MadLevelManager.MadSprite/Action
struct Action_t11_27;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t7_191;
// MadLevelManager.MadPanel
struct MadPanel_t11_161;
// System.String
struct String_t;
// MadLevelManager.MadSprite/SetupShader
struct SetupShader_t11_203;
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

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Color32.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadiTween_EaseType.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void MadLevelManager.MadSprite::.ctor()
extern "C" void MadSprite__ctor_m11_1202 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D MadLevelManager.MadSprite::get_currentTexture()
extern "C" Texture2D_t7_49 * MadSprite_get_currentTexture_m11_1203 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadSprite::get_currentTextureWidth()
extern "C" int32_t MadSprite_get_currentTextureWidth_m11_1204 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadSprite::get_currentTextureHeight()
extern "C" int32_t MadSprite_get_currentTextureHeight_m11_1205 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MadLevelManager.MadSprite::get_initialSize()
extern "C" Vector2_t7_65  MadSprite_get_initialSize_m11_1206 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::set_initialSize(UnityEngine.Vector2)
extern "C" void MadSprite_set_initialSize_m11_1207 (MadSprite_t11_13 * __this, Vector2_t7_65  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::set_size(UnityEngine.Vector2)
extern "C" void MadSprite_set_size_m11_1208 (MadSprite_t11_13 * __this, Vector2_t7_65  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MadLevelManager.MadSprite::get_size()
extern "C" Vector2_t7_65  MadSprite_get_size_m11_1209 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::set_hasFocus(System.Boolean)
extern "C" void MadSprite_set_hasFocus_m11_1210 (MadSprite_t11_13 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadSprite::get_hasFocus()
extern "C" bool MadSprite_get_hasFocus_m11_1211 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::get_onMouseEnter()
extern "C" Action_t11_27 * MadSprite_get_onMouseEnter_m11_1212 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::set_onMouseEnter(MadLevelManager.MadSprite/Action)
extern "C" void MadSprite_set_onMouseEnter_m11_1213 (MadSprite_t11_13 * __this, Action_t11_27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::get_onMouseExit()
extern "C" Action_t11_27 * MadSprite_get_onMouseExit_m11_1214 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::set_onMouseExit(MadLevelManager.MadSprite/Action)
extern "C" void MadSprite_set_onMouseExit_m11_1215 (MadSprite_t11_13 * __this, Action_t11_27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::get_onTouchEnter()
extern "C" Action_t11_27 * MadSprite_get_onTouchEnter_m11_1216 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::set_onTouchEnter(MadLevelManager.MadSprite/Action)
extern "C" void MadSprite_set_onTouchEnter_m11_1217 (MadSprite_t11_13 * __this, Action_t11_27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::get_onTouchExit()
extern "C" Action_t11_27 * MadSprite_get_onTouchExit_m11_1218 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::set_onTouchExit(MadLevelManager.MadSprite/Action)
extern "C" void MadSprite_set_onTouchExit_m11_1219 (MadSprite_t11_13 * __this, Action_t11_27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::get_onMouseDown()
extern "C" Action_t11_27 * MadSprite_get_onMouseDown_m11_1220 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::set_onMouseDown(MadLevelManager.MadSprite/Action)
extern "C" void MadSprite_set_onMouseDown_m11_1221 (MadSprite_t11_13 * __this, Action_t11_27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::get_onMouseUp()
extern "C" Action_t11_27 * MadSprite_get_onMouseUp_m11_1222 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::set_onMouseUp(MadLevelManager.MadSprite/Action)
extern "C" void MadSprite_set_onMouseUp_m11_1223 (MadSprite_t11_13 * __this, Action_t11_27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::get_onTap()
extern "C" Action_t11_27 * MadSprite_get_onTap_m11_1224 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::set_onTap(MadLevelManager.MadSprite/Action)
extern "C" void MadSprite_set_onTap_m11_1225 (MadSprite_t11_13 * __this, Action_t11_27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::get_onFocus()
extern "C" Action_t11_27 * MadSprite_get_onFocus_m11_1226 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::set_onFocus(MadLevelManager.MadSprite/Action)
extern "C" void MadSprite_set_onFocus_m11_1227 (MadSprite_t11_13 * __this, Action_t11_27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadSprite/Action MadLevelManager.MadSprite::get_onFocusLost()
extern "C" Action_t11_27 * MadSprite_get_onFocusLost_m11_1228 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::set_onFocusLost(MadLevelManager.MadSprite/Action)
extern "C" void MadSprite_set_onFocusLost_m11_1229 (MadSprite_t11_13 * __this, Action_t11_27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::NullAction(MadLevelManager.MadSprite)
extern "C" void MadSprite_NullAction_m11_1230 (MadSprite_t11_13 * __this, MadSprite_t11_13 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect MadLevelManager.MadSprite::GetBounds()
extern "C" Rect_t7_35  MadSprite_GetBounds_m11_1231 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect MadLevelManager.MadSprite::GetTransformedBounds()
extern "C" Rect_t7_35  MadSprite_GetTransformedBounds_m11_1232 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect MadLevelManager.MadSprite::GetLiveBounds()
extern "C" Rect_t7_35  MadSprite_GetLiveBounds_m11_1233 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::GetWorldCorners(UnityEngine.Vector3[]&)
extern "C" void MadSprite_GetWorldCorners_m11_1234 (MadSprite_t11_13 * __this, Vector3U5BU5D_t7_191** ___arr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::OnEnable()
extern "C" void MadSprite_OnEnable_m11_1235 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::TryFocus()
extern "C" void MadSprite_TryFocus_m11_1236 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::OnDisable()
extern "C" void MadSprite_OnDisable_m11_1237 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::Start()
extern "C" void MadSprite_Start_m11_1238 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::OnDestroy()
extern "C" void MadSprite_OnDestroy_m11_1239 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::RegisterSpriteIfNeeded()
extern "C" void MadSprite_RegisterSpriteIfNeeded_m11_1240 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::RegisterSprite()
extern "C" void MadSprite_RegisterSprite_m11_1241 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::UnregisterSprite(MadLevelManager.MadPanel)
extern "C" void MadSprite_UnregisterSprite_m11_1242 (MadSprite_t11_13 * __this, MadPanel_t11_161 * ___panel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::Update()
extern "C" void MadSprite_Update_m11_1243 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::UpdateRenderMode()
extern "C" void MadSprite_UpdateRenderMode_m11_1244 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::UpdateTexture()
extern "C" void MadSprite_UpdateTexture_m11_1245 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadSprite::NeedLiveBounds()
extern "C" bool MadSprite_NeedLiveBounds_m11_1246 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::SetMaterial(System.String,MadLevelManager.MadSprite/SetupShader)
extern "C" void MadSprite_SetMaterial_m11_1247 (MadSprite_t11_13 * __this, String_t* ___shader, SetupShader_t11_203 * ___setupShader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::InitActions()
extern "C" void MadSprite_InitActions_m11_1248 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadSprite::CanDraw()
extern "C" bool MadSprite_CanDraw_m11_1249 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material MadLevelManager.MadSprite::GetMaterial()
extern "C" Material_t7_38 * MadSprite_GetMaterial_m11_1250 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::DrawOn(MadLevelManager.MadList`1<UnityEngine.Vector3>&,MadLevelManager.MadList`1<UnityEngine.Color32>&,MadLevelManager.MadList`1<UnityEngine.Vector2>&,MadLevelManager.MadList`1<System.Int32>&,UnityEngine.Material&)
extern "C" void MadSprite_DrawOn_m11_1251 (MadSprite_t11_13 * __this, MadList_1_t11_168 ** ___vertices, MadList_1_t11_169 ** ___colors, MadList_1_t11_170 ** ___uv, MadList_1_t11_274 ** ___triangles, Material_t7_38 ** ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::DrawOnRegular(MadLevelManager.MadList`1<UnityEngine.Vector3>&,MadLevelManager.MadList`1<UnityEngine.Color32>&,MadLevelManager.MadList`1<UnityEngine.Vector2>&,MadLevelManager.MadList`1<System.Int32>&)
extern "C" void MadSprite_DrawOnRegular_m11_1252 (MadSprite_t11_13 * __this, MadList_1_t11_168 ** ___vertices, MadList_1_t11_169 ** ___colors, MadList_1_t11_170 ** ___uv, MadList_1_t11_274 ** ___triangles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::DrawOnQuad(MadLevelManager.MadList`1<UnityEngine.Vector3>&,MadLevelManager.MadList`1<UnityEngine.Color32>&,MadLevelManager.MadList`1<UnityEngine.Vector2>&,MadLevelManager.MadList`1<System.Int32>&)
extern "C" void MadSprite_DrawOnQuad_m11_1253 (MadSprite_t11_13 * __this, MadList_1_t11_168 ** ___vertices, MadList_1_t11_169 ** ___colors, MadList_1_t11_170 ** ___uv, MadList_1_t11_274 ** ___triangles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadSprite::LiveCoordX(System.Single)
extern "C" float MadSprite_LiveCoordX_m11_1254 (MadSprite_t11_13 * __this, float ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadSprite::LiveCoordY(System.Single)
extern "C" float MadSprite_LiveCoordY_m11_1255 (MadSprite_t11_13 * __this, float ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MadLevelManager.MadSprite::FixUV(UnityEngine.Vector2)
extern "C" Vector2_t7_65  MadSprite_FixUV_m11_1256 (MadSprite_t11_13 * __this, Vector2_t7_65  ___uv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 MadLevelManager.MadSprite::TransformMatrix()
extern "C" Matrix4x4_t7_68  MadSprite_TransformMatrix_m11_1257 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::UpdatePivotPoint()
extern "C" void MadSprite_UpdatePivotPoint_m11_1258 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MadLevelManager.MadSprite::PivotPointTranslate(UnityEngine.Vector3,UnityEngine.Rect)
extern "C" Vector3_t7_66  MadSprite_PivotPointTranslate_m11_1259 (MadSprite_t11_13 * __this, Vector3_t7_66  ___p, Rect_t7_35  ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::ResizeToTexture()
extern "C" void MadSprite_ResizeToTexture_m11_1260 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::MinMaxDepthRecursively(System.Int32&,System.Int32&)
extern "C" void MadSprite_MinMaxDepthRecursively_m11_1261 (MadSprite_t11_13 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::RecalculateLiveBounds()
extern "C" void MadSprite_RecalculateLiveBounds_m11_1262 (MadSprite_t11_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadSprite::IsOpaque(UnityEngine.Color32)
extern "C" bool MadSprite_IsOpaque_m11_1263 (MadSprite_t11_13 * __this, Color32_t7_37  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::AnimScale(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,MadLevelManager.MadiTween/EaseType)
extern "C" void MadSprite_AnimScale_m11_1264 (MadSprite_t11_13 * __this, Vector3_t7_66  ___from, Vector3_t7_66  ___to, float ___time, int32_t ___easing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::AnimScaleTo(UnityEngine.Vector3,System.Single,MadLevelManager.MadiTween/EaseType)
extern "C" void MadSprite_AnimScaleTo_m11_1265 (MadSprite_t11_13 * __this, Vector3_t7_66  ___scale, float ___time, int32_t ___easing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::AnimMove(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,MadLevelManager.MadiTween/EaseType)
extern "C" void MadSprite_AnimMove_m11_1266 (MadSprite_t11_13 * __this, Vector3_t7_66  ___from, Vector3_t7_66  ___to, float ___time, int32_t ___easing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::AnimMoveTo(UnityEngine.Vector3,System.Single,MadLevelManager.MadiTween/EaseType)
extern "C" void MadSprite_AnimMoveTo_m11_1267 (MadSprite_t11_13 * __this, Vector3_t7_66  ___target, float ___time, int32_t ___easing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::AnimRotate(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,MadLevelManager.MadiTween/EaseType)
extern "C" void MadSprite_AnimRotate_m11_1268 (MadSprite_t11_13 * __this, Vector3_t7_66  ___from, Vector3_t7_66  ___to, float ___time, int32_t ___easing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::AnimRotateTo(UnityEngine.Vector3,System.Single,MadLevelManager.MadiTween/EaseType)
extern "C" void MadSprite_AnimRotateTo_m11_1269 (MadSprite_t11_13 * __this, Vector3_t7_66  ___rotation, float ___time, int32_t ___easing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::AnimColor(UnityEngine.Color,UnityEngine.Color,System.Single,MadLevelManager.MadiTween/EaseType)
extern "C" void MadSprite_AnimColor_m11_1270 (MadSprite_t11_13 * __this, Color_t7_57  ___from, Color_t7_57  ___to, float ___time, int32_t ___easing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::AnimColorTo(UnityEngine.Color,System.Single,MadLevelManager.MadiTween/EaseType)
extern "C" void MadSprite_AnimColorTo_m11_1271 (MadSprite_t11_13 * __this, Color_t7_57  ___color, float ___time, int32_t ___easing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::OnTintChange(UnityEngine.Color)
extern "C" void MadSprite_OnTintChange_m11_1272 (MadSprite_t11_13 * __this, Color_t7_57  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::<_onMouseEnter>m__69(MadLevelManager.MadSprite)
extern "C" void MadSprite_U3C_onMouseEnterU3Em__69_m11_1273 (Object_t * __this /* static, unused */, MadSprite_t11_13 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::<_onMouseExit>m__6A(MadLevelManager.MadSprite)
extern "C" void MadSprite_U3C_onMouseExitU3Em__6A_m11_1274 (Object_t * __this /* static, unused */, MadSprite_t11_13 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::<_onTouchEnter>m__6B(MadLevelManager.MadSprite)
extern "C" void MadSprite_U3C_onTouchEnterU3Em__6B_m11_1275 (Object_t * __this /* static, unused */, MadSprite_t11_13 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::<_onTouchExit>m__6C(MadLevelManager.MadSprite)
extern "C" void MadSprite_U3C_onTouchExitU3Em__6C_m11_1276 (Object_t * __this /* static, unused */, MadSprite_t11_13 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::<_onMouseDown>m__6D(MadLevelManager.MadSprite)
extern "C" void MadSprite_U3C_onMouseDownU3Em__6D_m11_1277 (Object_t * __this /* static, unused */, MadSprite_t11_13 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::<_onMouseUp>m__6E(MadLevelManager.MadSprite)
extern "C" void MadSprite_U3C_onMouseUpU3Em__6E_m11_1278 (Object_t * __this /* static, unused */, MadSprite_t11_13 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::<_onTap>m__6F(MadLevelManager.MadSprite)
extern "C" void MadSprite_U3C_onTapU3Em__6F_m11_1279 (Object_t * __this /* static, unused */, MadSprite_t11_13 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::<_onFocus>m__70(MadLevelManager.MadSprite)
extern "C" void MadSprite_U3C_onFocusU3Em__70_m11_1280 (Object_t * __this /* static, unused */, MadSprite_t11_13 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadSprite::<_onFocusLost>m__71(MadLevelManager.MadSprite)
extern "C" void MadSprite_U3C_onFocusLostU3Em__71_m11_1281 (Object_t * __this /* static, unused */, MadSprite_t11_13 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
