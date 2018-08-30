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

// UnityEngine.Animator
struct Animator_t7_168;
// System.String
struct String_t;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t7_172;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_AvatarTarget.h"
#include "UnityEngine_UnityEngine_MatchTargetWeightMask.h"

// System.Single UnityEngine.Animator::GetFloat(System.String)
extern "C" float Animator_GetFloat_m7_1353 (Animator_t7_168 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C" void Animator_SetFloat_m7_1354 (Animator_t7_168 * __this, String_t* ___name, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C" void Animator_SetBool_m7_1355 (Animator_t7_168 * __this, String_t* ___name, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" void Animator_SetTrigger_m7_1356 (Animator_t7_168 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m7_1357 (Animator_t7_168 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::get_layerCount()
extern "C" int32_t Animator_get_layerCount_m7_1358 (Animator_t7_168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
extern "C" void Animator_SetLayerWeight_m7_1359 (Animator_t7_168 * __this, int32_t ___layerIndex, float ___weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C" AnimatorStateInfo_t7_157  Animator_GetCurrentAnimatorStateInfo_m7_1360 (Animator_t7_168 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
extern "C" bool Animator_IsInTransition_m7_1361 (Animator_t7_168 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.AvatarTarget,UnityEngine.MatchTargetWeightMask,System.Single,System.Single)
extern "C" void Animator_MatchTarget_m7_1362 (Animator_t7_168 * __this, Vector3_t7_66  ___matchPosition, Quaternion_t7_67  ___matchRotation, int32_t ___targetBodyPart, MatchTargetWeightMask_t7_167  ___weightMask, float ___startNormalizedTime, float ___targetNormalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::INTERNAL_CALL_MatchTarget(UnityEngine.Animator,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.AvatarTarget,UnityEngine.MatchTargetWeightMask&,System.Single,System.Single)
extern "C" void Animator_INTERNAL_CALL_MatchTarget_m7_1363 (Object_t * __this /* static, unused */, Animator_t7_168 * ___self, Vector3_t7_66 * ___matchPosition, Quaternion_t7_67 * ___matchRotation, int32_t ___targetBodyPart, MatchTargetWeightMask_t7_167 * ___weightMask, float ___startNormalizedTime, float ___targetNormalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::set_speed(System.Single)
extern "C" void Animator_set_speed_m7_1364 (Animator_t7_168 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single)
extern "C" void Animator_CrossFade_m7_1365 (Animator_t7_168 * __this, String_t* ___stateName, float ___transitionDuration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single)
extern "C" void Animator_CrossFade_m7_1366 (Animator_t7_168 * __this, String_t* ___stateName, float ___transitionDuration, int32_t ___layer, float ___normalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single)
extern "C" void Animator_CrossFade_m7_1367 (Animator_t7_168 * __this, int32_t ___stateNameHash, float ___transitionDuration, int32_t ___layer, float ___normalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.String)
extern "C" void Animator_Play_m7_1368 (Animator_t7_168 * __this, String_t* ___stateName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
extern "C" void Animator_Play_m7_1369 (Animator_t7_168 * __this, String_t* ___stateName, int32_t ___layer, float ___normalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C" void Animator_Play_m7_1370 (Animator_t7_168 * __this, int32_t ___stateNameHash, int32_t ___layer, float ___normalizedTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t7_172 * Animator_get_runtimeAnimatorController_m7_1371 (Animator_t7_168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m7_1372 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C" void Animator_SetFloatString_m7_1373 (Animator_t7_168 * __this, String_t* ___name, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetFloatString(System.String)
extern "C" float Animator_GetFloatString_m7_1374 (Animator_t7_168 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C" void Animator_SetBoolString_m7_1375 (Animator_t7_168 * __this, String_t* ___name, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m7_1376 (Animator_t7_168 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m7_1377 (Animator_t7_168 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
