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

// MadLevelManager.MadAnim
struct MadAnim_t11_71;
// MadLevelManager.MadiTween/EasingFunction
struct EasingFunction_t11_74;
// UnityEngine.GameObject
struct GameObject_t7_113;
// System.String
struct String_t;
// System.Collections.Generic.List`1<MadLevelManager.MadAnim>
struct List_1_t1_1036;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadAnim::.ctor()
extern "C" void MadAnim__ctor_m11_265 (MadAnim_t11_71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadAnim::get_isPlaying()
extern "C" bool MadAnim_get_isPlaying_m11_266 (MadAnim_t11_71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnim::set_isPlaying(System.Boolean)
extern "C" void MadAnim_set_isPlaying_m11_267 (MadAnim_t11_71 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadAnim::get_isDelaying()
extern "C" bool MadAnim_get_isDelaying_m11_268 (MadAnim_t11_71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnim::set_isDelaying(System.Boolean)
extern "C" void MadAnim_set_isDelaying_m11_269 (MadAnim_t11_71 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadAnim::get_deltaTime()
extern "C" float MadAnim_get_deltaTime_m11_270 (MadAnim_t11_71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnim::Play()
extern "C" void MadAnim_Play_m11_271 (MadAnim_t11_71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnim::PlayNow()
extern "C" void MadAnim_PlayNow_m11_272 (MadAnim_t11_71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnim::Stop()
extern "C" void MadAnim_Stop_m11_273 (MadAnim_t11_71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnim::Reset()
extern "C" void MadAnim_Reset_m11_274 (MadAnim_t11_71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadiTween/EasingFunction MadLevelManager.MadAnim::GetEasingFunction()
extern "C" EasingFunction_t11_74 * MadAnim_GetEasingFunction_m11_275 (MadAnim_t11_71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadAnim::EasingFromCurve(System.Single,System.Single,System.Single)
extern "C" float MadAnim_EasingFromCurve_m11_276 (MadAnim_t11_71 * __this, float ___start, float ___end, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnim::Start()
extern "C" void MadAnim_Start_m11_277 (MadAnim_t11_71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnim::TryStartPlaying()
extern "C" void MadAnim_TryStartPlaying_m11_278 (MadAnim_t11_71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnim::Update()
extern "C" void MadAnim_Update_m11_279 (MadAnim_t11_71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadAnim MadLevelManager.MadAnim::OtherAnimationPlaying()
extern "C" MadAnim_t11_71 * MadAnim_OtherAnimationPlaying_m11_280 (MadAnim_t11_71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnim::AnimWrapOnce(System.Single)
extern "C" void MadAnim_AnimWrapOnce_m11_281 (MadAnim_t11_71 * __this, float ___animTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnim::AnimLoop(System.Single)
extern "C" void MadAnim_AnimLoop_m11_282 (MadAnim_t11_71 * __this, float ___animTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnim::AnimPingPong(System.Single)
extern "C" void MadAnim_AnimPingPong_m11_283 (MadAnim_t11_71 * __this, float ___animTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnim::AnimClampForever(System.Single)
extern "C" void MadAnim_AnimClampForever_m11_284 (MadAnim_t11_71 * __this, float ___animTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnim::UpdateOrigin()
extern "C" void MadAnim_UpdateOrigin_m11_285 (MadAnim_t11_71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnim::Finish()
extern "C" void MadAnim_Finish_m11_286 (MadAnim_t11_71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadAnim::PlayAnimation(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" int32_t MadAnim_PlayAnimation_m11_287 (Object_t * __this /* static, unused */, GameObject_t7_113 * ___gameObject, String_t* ___animationName, bool ___fromTheBeginning, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadAnim::PlayAnimationNow(UnityEngine.GameObject,System.String,System.Boolean)
extern "C" int32_t MadAnim_PlayAnimationNow_m11_288 (Object_t * __this /* static, unused */, GameObject_t7_113 * ___gameObject, String_t* ___animationName, bool ___fromTheBeginning, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadAnim::StopAnimation(UnityEngine.GameObject,System.String)
extern "C" int32_t MadAnim_StopAnimation_m11_289 (Object_t * __this /* static, unused */, GameObject_t7_113 * ___gameObject, String_t* ___animationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MadLevelManager.MadAnim> MadLevelManager.MadAnim::FindAnimations(UnityEngine.GameObject,System.String)
extern "C" List_1_t1_1036 * MadAnim_FindAnimations_m11_290 (Object_t * __this /* static, unused */, GameObject_t7_113 * ___gameObject, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MadLevelManager.MadAnim> MadLevelManager.MadAnim::AllAnimations(UnityEngine.GameObject)
extern "C" List_1_t1_1036 * MadAnim_AllAnimations_m11_291 (Object_t * __this /* static, unused */, GameObject_t7_113 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadAnim MadLevelManager.MadAnim::PlayingAnimation(UnityEngine.GameObject,System.Type)
extern "C" MadAnim_t11_71 * MadAnim_PlayingAnimation_m11_292 (Object_t * __this /* static, unused */, GameObject_t7_113 * ___gameObject, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
