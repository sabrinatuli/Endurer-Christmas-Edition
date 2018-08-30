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

// MadLevelManager.MadAnimMove
struct MadAnimMove_t11_76;
// MadLevelManager.MadiTween/EasingFunction
struct EasingFunction_t11_74;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadAnimMove_ValueType.h"

// System.Void MadLevelManager.MadAnimMove::.ctor()
extern "C" void MadAnimMove__ctor_m11_300 (MadAnimMove_t11_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadiTween/EasingFunction MadLevelManager.MadAnimMove::get_easingFunction()
extern "C" EasingFunction_t11_74 * MadAnimMove_get_easingFunction_m11_301 (MadAnimMove_t11_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnimMove::Start()
extern "C" void MadAnimMove_Start_m11_302 (MadAnimMove_t11_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnimMove::UpdateOrigin()
extern "C" void MadAnimMove_UpdateOrigin_m11_303 (MadAnimMove_t11_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnimMove::StartAnim()
extern "C" void MadAnimMove_StartAnim_m11_304 (MadAnimMove_t11_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadAnimMove::Anim(System.Single)
extern "C" void MadAnimMove_Anim_m11_305 (MadAnimMove_t11_76 * __this, float ___progress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MadLevelManager.MadAnimMove::GetFrom()
extern "C" Vector3_t7_66  MadAnimMove_GetFrom_m11_306 (MadAnimMove_t11_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MadLevelManager.MadAnimMove::GetTo()
extern "C" Vector3_t7_66  MadAnimMove_GetTo_m11_307 (MadAnimMove_t11_76 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MadLevelManager.MadAnimMove::GetPosition(MadLevelManager.MadAnimMove/ValueType,UnityEngine.Vector3)
extern "C" Vector3_t7_66  MadAnimMove_GetPosition_m11_308 (MadAnimMove_t11_76 * __this, int32_t ___valueType, Vector3_t7_66  ___modifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
