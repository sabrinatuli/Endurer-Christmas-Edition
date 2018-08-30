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

// MadLevelManager.MadLevelGridLayout
struct MadLevelGridLayout_t11_66;
// MadLevelManager.MadLevelGridLayout/Page
struct Page_t11_58;
// MadLevelManager.MadLevelIcon
struct MadLevelIcon_t11_44;
// System.String
struct String_t;
// MadLevelManager.MadSprite
struct MadSprite_t11_13;
// UnityEngine.Transform
struct Transform_t7_81;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void MadLevelManager.MadLevelGridLayout::.ctor()
extern "C" void MadLevelGridLayout__ctor_m11_211 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadLevelGridLayout::get_pagesXOffset()
extern "C" float MadLevelGridLayout_get_pagesXOffset_m11_212 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadLevelGridLayout::get_pagesYOffset()
extern "C" float MadLevelGridLayout_get_pagesYOffset_m11_213 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelGridLayout/Page MadLevelManager.MadLevelGridLayout::get_currentPage()
extern "C" Page_t11_58 * MadLevelGridLayout_get_currentPage_m11_214 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelGridLayout::GetIcon(System.String)
extern "C" MadLevelIcon_t11_44 * MadLevelGridLayout_GetIcon_m11_215 (MadLevelGridLayout_t11_66 * __this, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelGridLayout::FindClosestIcon(UnityEngine.Vector3)
extern "C" MadLevelIcon_t11_44 * MadLevelGridLayout_FindClosestIcon_m11_216 (MadLevelGridLayout_t11_66 * __this, Vector3_t7_66  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::LookAtIcon(MadLevelManager.MadLevelIcon)
extern "C" void MadLevelGridLayout_LookAtIcon_m11_217 (MadLevelGridLayout_t11_66 * __this, MadLevelIcon_t11_44 * ___icon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::LookAtIconAnimate(MadLevelManager.MadLevelIcon)
extern "C" void MadLevelGridLayout_LookAtIconAnimate_m11_218 (MadLevelGridLayout_t11_66 * __this, MadLevelIcon_t11_44 * ___icon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelGridLayout::GetCurrentIcon()
extern "C" MadLevelIcon_t11_44 * MadLevelGridLayout_GetCurrentIcon_m11_219 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::Activate(MadLevelManager.MadLevelIcon)
extern "C" void MadLevelGridLayout_Activate_m11_220 (MadLevelGridLayout_t11_66 * __this, MadLevelIcon_t11_44 * ___icon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelGridLayout/Page MadLevelManager.MadLevelGridLayout::FindPageWithIcon(MadLevelManager.MadLevelIcon)
extern "C" Page_t11_58 * MadLevelGridLayout_FindPageWithIcon_m11_221 (MadLevelGridLayout_t11_66 * __this, MadLevelIcon_t11_44 * ___icon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::OnValidate()
extern "C" void MadLevelGridLayout_OnValidate_m11_222 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::OnEnable()
extern "C" void MadLevelGridLayout_OnEnable_m11_223 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::Upgrade()
extern "C" void MadLevelGridLayout_Upgrade_m11_224 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::Start()
extern "C" void MadLevelGridLayout_Start_m11_225 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::Update()
extern "C" void MadLevelGridLayout_Update_m11_226 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::UpdatePagingZoom()
extern "C" void MadLevelGridLayout_UpdatePagingZoom_m11_227 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::UpdateLayout(System.Boolean)
extern "C" void MadLevelGridLayout_UpdateLayout_m11_228 (MadLevelGridLayout_t11_66 * __this, bool ___forceDelete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::SlideIconsUpdate()
extern "C" void MadLevelGridLayout_SlideIconsUpdate_m11_229 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::SlideIconsHide()
extern "C" void MadLevelGridLayout_SlideIconsHide_m11_230 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::SlideSetActive(MadLevelManager.MadSprite,System.Boolean)
extern "C" void MadLevelGridLayout_SlideSetActive_m11_231 (Object_t * __this /* static, unused */, MadSprite_t11_13 * ___icon, bool ___act, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelGridLayout::HasNextPage()
extern "C" bool MadLevelGridLayout_HasNextPage_m11_232 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelGridLayout::HasPrevPage()
extern "C" bool MadLevelGridLayout_HasPrevPage_m11_233 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::GoToNextPage()
extern "C" void MadLevelGridLayout_GoToNextPage_m11_234 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::GoToPrevPage()
extern "C" void MadLevelGridLayout_GoToPrevPage_m11_235 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::SwitchPage(System.Int32,System.Boolean)
extern "C" void MadLevelGridLayout_SwitchPage_m11_236 (MadLevelGridLayout_t11_66 * __this, int32_t ___newIndex, bool ___now, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelGridLayout::PageIndexForLevel(System.String)
extern "C" int32_t MadLevelGridLayout_PageIndexForLevel_m11_237 (MadLevelGridLayout_t11_66 * __this, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelGridLayout::IsDirty()
extern "C" bool MadLevelGridLayout_IsDirty_m11_238 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelGridLayout::ComputeHash()
extern "C" int32_t MadLevelGridLayout_ComputeHash_m11_239 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::MakeClean()
extern "C" void MadLevelGridLayout_MakeClean_m11_240 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::CleanUp(System.Boolean)
extern "C" void MadLevelGridLayout_CleanUp_m11_241 (MadLevelGridLayout_t11_66 * __this, bool ___forceDelete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::Build(System.Boolean)
extern "C" void MadLevelGridLayout_Build_m11_242 (MadLevelGridLayout_t11_66 * __this, bool ___forceDelete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MadLevelManager.MadLevelGridLayout::ComputePageOffsetHoriz(System.Int32)
extern "C" Vector3_t7_66  MadLevelGridLayout_ComputePageOffsetHoriz_m11_243 (MadLevelGridLayout_t11_66 * __this, int32_t ___pageIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MadLevelManager.MadLevelGridLayout::ComputePageOffsetVert(System.Int32)
extern "C" Vector3_t7_66  MadLevelGridLayout_ComputePageOffsetVert_m11_244 (MadLevelGridLayout_t11_66 * __this, int32_t ___pageIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::OnDragStopCallback(System.Int32)
extern "C" void MadLevelGridLayout_OnDragStopCallback_m11_245 (MadLevelGridLayout_t11_66 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MadLevelManager.MadLevelGridLayout::IconGeneratedPosition(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" Vector3_t7_66  MadLevelGridLayout_IconGeneratedPosition_m11_246 (MadLevelGridLayout_t11_66 * __this, int32_t ___levelIndex, int32_t ___levelCount, int32_t ___xIndex, int32_t ___yIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::BuildDragging()
extern "C" void MadLevelGridLayout_BuildDragging_m11_247 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::BuildSlideIcons()
extern "C" void MadLevelGridLayout_BuildSlideIcons_m11_248 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::ClearSlide(System.String)
extern "C" void MadLevelGridLayout_ClearSlide_m11_249 (MadLevelGridLayout_t11_66 * __this, String_t* ___anchorName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadSprite MadLevelManager.MadLevelGridLayout::BuildSlide(MadLevelManager.MadSprite,System.String,System.Boolean)
extern "C" MadSprite_t11_13 * MadLevelGridLayout_BuildSlide_m11_250 (MadLevelGridLayout_t11_66 * __this, MadSprite_t11_13 * ___template, String_t* ___anchorName, bool ___left, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelGridLayout::get_generate()
extern "C" bool MadLevelGridLayout_get_generate_m11_251 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::<UpdateLayout>m__17()
extern "C" void MadLevelGridLayout_U3CUpdateLayoutU3Em__17_m11_252 (MadLevelGridLayout_t11_66 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelGridLayout::<CleanUp>m__18(MadLevelManager.MadLevelIcon)
extern "C" bool MadLevelGridLayout_U3CCleanUpU3Em__18_m11_253 (Object_t * __this /* static, unused */, MadLevelIcon_t11_44 * ___icon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelGridLayout::<CleanUp>m__19(UnityEngine.Transform)
extern "C" bool MadLevelGridLayout_U3CCleanUpU3Em__19_m11_254 (Object_t * __this /* static, unused */, Transform_t7_81 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelGridLayout::<CleanUp>m__1A(MadLevelManager.MadLevelIcon)
extern "C" int32_t MadLevelGridLayout_U3CCleanUpU3Em__1A_m11_255 (Object_t * __this /* static, unused */, MadLevelIcon_t11_44 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelGridLayout::<BuildDragging>m__1F(UnityEngine.Transform)
extern "C" bool MadLevelGridLayout_U3CBuildDraggingU3Em__1F_m11_256 (Object_t * __this /* static, unused */, Transform_t7_81 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelGridLayout::<BuildDragging>m__20(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t MadLevelGridLayout_U3CBuildDraggingU3Em__20_m11_257 (Object_t * __this /* static, unused */, Transform_t7_81 * ___a, Transform_t7_81 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::<BuildSlideIcons>m__21(MadLevelManager.MadSprite)
extern "C" void MadLevelGridLayout_U3CBuildSlideIconsU3Em__21_m11_258 (MadLevelGridLayout_t11_66 * __this, MadSprite_t11_13 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelGridLayout::<BuildSlideIcons>m__22(MadLevelManager.MadSprite)
extern "C" void MadLevelGridLayout_U3CBuildSlideIconsU3Em__22_m11_259 (MadLevelGridLayout_t11_66 * __this, MadSprite_t11_13 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
