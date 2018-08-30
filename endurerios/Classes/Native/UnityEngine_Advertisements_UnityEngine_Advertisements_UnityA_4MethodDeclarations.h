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

// UnityEngine.Advertisements.UnityAdsUnsupported
struct UnityAdsUnsupported_t9_11;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertisements_Advert.h"

// System.Void UnityEngine.Advertisements.UnityAdsUnsupported::.ctor()
extern "C" void UnityAdsUnsupported__ctor_m9_67 (UnityAdsUnsupported_t9_11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsUnsupported::RegisterNative(System.String)
extern "C" void UnityAdsUnsupported_RegisterNative_m9_68 (UnityAdsUnsupported_t9_11 * __this, String_t* ___extensionPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsUnsupported::Init(System.String,System.Boolean)
extern "C" void UnityAdsUnsupported_Init_m9_69 (UnityAdsUnsupported_t9_11 * __this, String_t* ___gameId, bool ___testModeEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsUnsupported::CanShowAds(System.String)
extern "C" bool UnityAdsUnsupported_CanShowAds_m9_70 (UnityAdsUnsupported_t9_11 * __this, String_t* ___zoneId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsUnsupported::SetCampaignDataURL(System.String)
extern "C" void UnityAdsUnsupported_SetCampaignDataURL_m9_71 (UnityAdsUnsupported_t9_11 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsUnsupported::SetLogLevel(UnityEngine.Advertisements.Advertisement/DebugLevel)
extern "C" void UnityAdsUnsupported_SetLogLevel_m9_72 (UnityAdsUnsupported_t9_11 * __this, int32_t ___logLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsUnsupported::Show(System.String,System.String)
extern "C" bool UnityAdsUnsupported_Show_m9_73 (UnityAdsUnsupported_t9_11 * __this, String_t* ___zoneId, String_t* ___gamerSid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
