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

// System.String
struct String_t;
// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_t9_3;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisements_Advert.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisements_ShowRe.h"

// System.Void UnityEngine.Advertisements.Advertisement::.cctor()
extern "C" void Advertisement__cctor_m9_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::LoadRuntime()
extern "C" void Advertisement_LoadRuntime_m9_1 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::LoadEditor(System.String)
extern "C" void Advertisement_LoadEditor_m9_2 (Object_t * __this /* static, unused */, String_t* ___extensionPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Load()
extern "C" void Advertisement_Load_m9_3 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_initializeOnStartup()
extern "C" bool Advertisement_get_initializeOnStartup_m9_4 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::RegisterNative()
extern "C" void Advertisement_RegisterNative_m9_5 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Advertisements.Advertisement/DebugLevel UnityEngine.Advertisements.Advertisement::get_debugLevel()
extern "C" int32_t Advertisement_get_debugLevel_m9_6 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::set_debugLevel(UnityEngine.Advertisements.Advertisement/DebugLevel)
extern "C" void Advertisement_set_debugLevel_m9_7 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isSupported()
extern "C" bool Advertisement_get_isSupported_m9_8 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsEnabled()
extern "C" bool Advertisement_IsEnabled_m9_9 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
extern "C" bool Advertisement_get_isInitialized_m9_10 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String)
extern "C" void Advertisement_Initialize_m9_11 (Object_t * __this /* static, unused */, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
extern "C" void Advertisement_Initialize_m9_12 (Object_t * __this /* static, unused */, String_t* ___appId, bool ___testMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Show()
extern "C" void Advertisement_Show_m9_13 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String)
extern "C" void Advertisement_Show_m9_14 (Object_t * __this /* static, unused */, String_t* ___zoneId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions)
extern "C" void Advertisement_Show_m9_15 (Object_t * __this /* static, unused */, String_t* ___zoneId, ShowOptions_t9_3 * ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady()
extern "C" bool Advertisement_IsReady_m9_16 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady(System.String)
extern "C" bool Advertisement_IsReady_m9_17 (Object_t * __this /* static, unused */, String_t* ___zoneId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isShowing()
extern "C" bool Advertisement_get_isShowing_m9_18 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::SetCampaignDataURL(System.String)
extern "C" void Advertisement_SetCampaignDataURL_m9_19 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::OnHide()
extern "C" void Advertisement_OnHide_m9_20 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::OnShow()
extern "C" void Advertisement_OnShow_m9_21 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::OnVideoCompleted(System.String,System.Boolean)
extern "C" void Advertisement_OnVideoCompleted_m9_22 (Object_t * __this /* static, unused */, String_t* ___rewardItemKey, bool ___skipped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.Advertisement::get_testMode()
extern "C" bool Advertisement_get_testMode_m9_23 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Advertisements.Advertisement::get_gameId()
extern "C" String_t* Advertisement_get_gameId_m9_24 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.Advertisement::DeliverResult(UnityEngine.Advertisements.ShowResult)
extern "C" void Advertisement_DeliverResult_m9_25 (Object_t * __this /* static, unused */, int32_t ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
