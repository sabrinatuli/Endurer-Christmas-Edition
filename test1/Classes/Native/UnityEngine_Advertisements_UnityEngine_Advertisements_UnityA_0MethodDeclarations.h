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

// UnityEngine.Advertisements.UnityAdsEditor
struct UnityAdsEditor_t9_8;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// System.Action`1<UnityEngine.WWW>
struct Action_1_t1_997;
// UnityEngine.WWW
struct WWW_t7_93;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1_923;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1_926;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisements_Advert.h"

// System.Void UnityEngine.Advertisements.UnityAdsEditor::.ctor()
extern "C" void UnityAdsEditor__ctor_m9_40 (UnityAdsEditor_t9_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::RegisterNative(System.String)
extern "C" void UnityAdsEditor_RegisterNative_m9_41 (UnityAdsEditor_t9_8 * __this, String_t* ___extensionPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::Init(System.String,System.Boolean)
extern "C" void UnityAdsEditor_Init_m9_42 (UnityAdsEditor_t9_8 * __this, String_t* ___gameId, bool ___testModeEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Advertisements.UnityAdsEditor::GetAdPlan(System.String,System.Action`1<UnityEngine.WWW>)
extern "C" Object_t * UnityAdsEditor_GetAdPlan_m9_43 (UnityAdsEditor_t9_8 * __this, String_t* ___URL, Action_1_t1_997 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::HandleResponse(UnityEngine.WWW)
extern "C" void UnityAdsEditor_HandleResponse_m9_44 (UnityAdsEditor_t9_8 * __this, WWW_t7_93 * ___www, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> UnityEngine.Advertisements.UnityAdsEditor::CollectZoneIds(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Object_t* UnityAdsEditor_CollectZoneIds_m9_45 (UnityAdsEditor_t9_8 * __this, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsEditor::CanShowAds(System.String)
extern "C" bool UnityAdsEditor_CanShowAds_m9_46 (UnityAdsEditor_t9_8 * __this, String_t* ___zoneId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::SetLogLevel(UnityEngine.Advertisements.Advertisement/DebugLevel)
extern "C" void UnityAdsEditor_SetLogLevel_m9_47 (UnityAdsEditor_t9_8 * __this, int32_t ___logLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsEditor::SetCampaignDataURL(System.String)
extern "C" void UnityAdsEditor_SetCampaignDataURL_m9_48 (UnityAdsEditor_t9_8 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsEditor::Show(System.String,System.String)
extern "C" bool UnityAdsEditor_Show_m9_49 (UnityAdsEditor_t9_8 * __this, String_t* ___zoneId, String_t* ___gamerSid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
