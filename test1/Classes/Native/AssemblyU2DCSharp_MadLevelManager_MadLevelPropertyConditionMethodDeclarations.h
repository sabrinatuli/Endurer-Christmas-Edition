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

// MadLevelManager.MadLevelPropertyCondition
struct MadLevelPropertyCondition_t11_145;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelPropertyCondition__1.h"

// System.Void MadLevelManager.MadLevelPropertyCondition::.ctor()
extern "C" void MadLevelPropertyCondition__ctor_m11_858 (MadLevelPropertyCondition_t11_145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelPropertyCondition::Start()
extern "C" void MadLevelPropertyCondition_Start_m11_859 (MadLevelPropertyCondition_t11_145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelPropertyCondition::Apply()
extern "C" void MadLevelPropertyCondition_Apply_m11_860 (MadLevelPropertyCondition_t11_145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelPropertyCondition/Action MadLevelManager.MadLevelPropertyCondition::Opposite(MadLevelManager.MadLevelPropertyCondition/Action)
extern "C" int32_t MadLevelPropertyCondition_Opposite_m11_861 (MadLevelPropertyCondition_t11_145 * __this, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelPropertyCondition::GetPropertyValue()
extern "C" String_t* MadLevelPropertyCondition_GetPropertyValue_m11_862 (MadLevelPropertyCondition_t11_145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelPropertyCondition::Compare(System.String)
extern "C" bool MadLevelPropertyCondition_Compare_m11_863 (MadLevelPropertyCondition_t11_145 * __this, String_t* ___leftSideValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelPropertyCondition::CompareDoubles(System.String,System.String)
extern "C" int32_t MadLevelPropertyCondition_CompareDoubles_m11_864 (MadLevelPropertyCondition_t11_145 * __this, String_t* ___a, String_t* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelPropertyCondition::ApplyAction(MadLevelManager.MadLevelPropertyCondition/Action)
extern "C" void MadLevelPropertyCondition_ApplyAction_m11_865 (MadLevelPropertyCondition_t11_145 * __this, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
