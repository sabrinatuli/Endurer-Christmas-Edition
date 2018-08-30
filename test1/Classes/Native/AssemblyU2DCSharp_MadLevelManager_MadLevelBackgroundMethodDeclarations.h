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

// MadLevelManager.MadLevelBackground
struct MadLevelBackground_t11_37;
// MadLevelManager.MadLevelBackgroundLayer
struct MadLevelBackgroundLayer_t11_35;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void MadLevelManager.MadLevelBackground::.ctor()
extern "C" void MadLevelBackground__ctor_m11_506 (MadLevelBackground_t11_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 MadLevelManager.MadLevelBackground::get_UserPosition()
extern "C" Vector2_t7_65  MadLevelBackground_get_UserPosition_m11_507 (MadLevelBackground_t11_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelBackground::OnEnable()
extern "C" void MadLevelBackground_OnEnable_m11_508 (MadLevelBackground_t11_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelBackground::Update()
extern "C" void MadLevelBackground_Update_m11_509 (MadLevelBackground_t11_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelBackground::UpdateLayers()
extern "C" void MadLevelBackground_UpdateLayers_m11_510 (MadLevelBackground_t11_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelBackground::UpdateDepth()
extern "C" void MadLevelBackground_UpdateDepth_m11_511 (MadLevelBackground_t11_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelBackground::RemoveLayer(MadLevelManager.MadLevelBackgroundLayer)
extern "C" void MadLevelBackground_RemoveLayer_m11_512 (MadLevelBackground_t11_37 * __this, MadLevelBackgroundLayer_t11_35 * ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelBackground::IndexOf(MadLevelManager.MadLevelBackgroundLayer)
extern "C" int32_t MadLevelBackground_IndexOf_m11_513 (MadLevelBackground_t11_37 * __this, MadLevelBackgroundLayer_t11_35 * ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelBackground::<UpdateLayers>m__3A(MadLevelManager.MadLevelBackgroundLayer)
extern "C" String_t* MadLevelBackground_U3CUpdateLayersU3Em__3A_m11_514 (Object_t * __this /* static, unused */, MadLevelBackgroundLayer_t11_35 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
