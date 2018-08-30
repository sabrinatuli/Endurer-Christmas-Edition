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

// MadLevelManager.MadLevelAnimator/Modifier
struct Modifier_t11_99;
// MadLevelManager.MadLevelIcon
struct MadLevelIcon_t11_44;
// MadLevelManager.MadLevelAnimator/Modifier/ValueGetter
struct ValueGetter_t11_97;
// MadLevelManager.MadLevelAnimator/Modifier/ValueSetter
struct ValueSetter_t11_98;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelAnimator_Modifier_.h"

// System.Void MadLevelManager.MadLevelAnimator/Modifier::.ctor()
extern "C" void Modifier__ctor_m11_484 (Modifier_t11_99 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAnimator/Modifier::Execute(MadLevelManager.MadLevelIcon,MadLevelManager.MadLevelAnimator/Modifier/ValueGetter,MadLevelManager.MadLevelAnimator/Modifier/ValueSetter)
extern "C" void Modifier_Execute_m11_485 (Modifier_t11_99 * __this, MadLevelIcon_t11_44 * ___icon, ValueGetter_t11_97 * ___getter, ValueSetter_t11_98 * ___setter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadLevelAnimator/Modifier::GetFirstParameterValue(MadLevelManager.MadLevelIcon)
extern "C" float Modifier_GetFirstParameterValue_m11_486 (Modifier_t11_99 * __this, MadLevelIcon_t11_44 * ___icon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadLevelAnimator/Modifier::Compute(System.Single,System.Single,MadLevelManager.MadLevelAnimator/Modifier/Operator)
extern "C" float Modifier_Compute_m11_487 (Modifier_t11_99 * __this, float ___first, float ___second, int32_t ___op, const MethodInfo* method) IL2CPP_METHOD_ATTR;
