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

// MadLevelManager.MadLevelIcon
struct MadLevelIcon_t11_44;
// MadLevelManager.MadLevelConfiguration
struct MadLevelConfiguration_t11_48;
// System.Collections.Generic.List`1<MadLevelManager.MadLevelProperty>
struct List_1_t1_1037;
// MadLevelManager.MadLevelConfiguration/Level
struct Level_t11_14;
// MadLevelManager.MadLevelProperty
struct MadLevelProperty_t11_122;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1_957;
// MadLevelManager.MadSprite
struct MadSprite_t11_13;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelProperty_SpecialTy.h"

// System.Void MadLevelManager.MadLevelIcon::.ctor()
extern "C" void MadLevelIcon__ctor_m11_652 (MadLevelIcon_t11_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelIcon::get_isTemplate()
extern "C" bool MadLevelIcon_get_isTemplate_m11_653 (MadLevelIcon_t11_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration MadLevelManager.MadLevelIcon::get_configuration()
extern "C" MadLevelConfiguration_t11_48 * MadLevelIcon_get_configuration_m11_654 (MadLevelIcon_t11_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::set_configuration(MadLevelManager.MadLevelConfiguration)
extern "C" void MadLevelIcon_set_configuration_m11_655 (MadLevelIcon_t11_44 * __this, MadLevelConfiguration_t11_48 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelIcon::get_levelGroup()
extern "C" int32_t MadLevelIcon_get_levelGroup_m11_656 (MadLevelIcon_t11_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::set_levelGroup(System.Int32)
extern "C" void MadLevelIcon_set_levelGroup_m11_657 (MadLevelIcon_t11_44 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelIcon::get_generated()
extern "C" bool MadLevelIcon_get_generated_m11_658 (MadLevelIcon_t11_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelIcon::get_completed()
extern "C" bool MadLevelIcon_get_completed_m11_659 (MadLevelIcon_t11_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::set_completed(System.Boolean)
extern "C" void MadLevelIcon_set_completed_m11_660 (MadLevelIcon_t11_44 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelIcon::get_locked()
extern "C" bool MadLevelIcon_get_locked_m11_661 (MadLevelIcon_t11_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::set_locked(System.Boolean)
extern "C" void MadLevelIcon_set_locked_m11_662 (MadLevelIcon_t11_44 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MadLevelManager.MadLevelProperty> MadLevelManager.MadLevelIcon::get_properties()
extern "C" List_1_t1_1037 * MadLevelIcon_get_properties_m11_663 (MadLevelIcon_t11_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Level MadLevelManager.MadLevelIcon::get_level()
extern "C" Level_t11_14 * MadLevelIcon_get_level_m11_664 (MadLevelIcon_t11_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::OnEnable()
extern "C" void MadLevelIcon_OnEnable_m11_665 (MadLevelIcon_t11_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::Upgrade()
extern "C" void MadLevelIcon_Upgrade_m11_666 (MadLevelIcon_t11_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::Update()
extern "C" void MadLevelIcon_Update_m11_667 (MadLevelIcon_t11_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::Activate()
extern "C" void MadLevelIcon_Activate_m11_668 (MadLevelIcon_t11_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::ApplyConnections()
extern "C" void MadLevelIcon_ApplyConnections_m11_669 (MadLevelIcon_t11_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelProperty/SpecialType MadLevelManager.MadLevelIcon::TypeFor(MadLevelManager.MadLevelProperty)
extern "C" int32_t MadLevelIcon_TypeFor_m11_670 (MadLevelIcon_t11_44 * __this, MadLevelProperty_t11_122 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::UpdateProperty(System.String,System.Boolean)
extern "C" void MadLevelIcon_UpdateProperty_m11_671 (MadLevelIcon_t11_44 * __this, String_t* ___propertyName, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::LoadLevel()
extern "C" void MadLevelIcon_LoadLevel_m11_672 (MadLevelIcon_t11_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::OnPropertyChange(MadLevelManager.MadLevelProperty)
extern "C" void MadLevelIcon_OnPropertyChange_m11_673 (MadLevelIcon_t11_44 * __this, MadLevelProperty_t11_122 * ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::UnlockOnComplete()
extern "C" void MadLevelIcon_UnlockOnComplete_m11_674 (MadLevelIcon_t11_44 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::Enable(System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C" void MadLevelIcon_Enable_m11_675 (MadLevelIcon_t11_44 * __this, List_1_t1_957 * ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::Disable(System.Collections.Generic.List`1<UnityEngine.GameObject>)
extern "C" void MadLevelIcon_Disable_m11_676 (MadLevelIcon_t11_44 * __this, List_1_t1_957 * ___objects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::ChangeState(System.Collections.Generic.List`1<UnityEngine.GameObject>,System.Boolean)
extern "C" void MadLevelIcon_ChangeState_m11_677 (MadLevelIcon_t11_44 * __this, List_1_t1_957 * ___objects, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::<Update>m__72(MadLevelManager.MadSprite)
extern "C" void MadLevelIcon_U3CUpdateU3Em__72_m11_678 (MadLevelIcon_t11_44 * __this, MadSprite_t11_13 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelIcon::<Update>m__73(MadLevelManager.MadSprite)
extern "C" void MadLevelIcon_U3CUpdateU3Em__73_m11_679 (MadLevelIcon_t11_44 * __this, MadSprite_t11_13 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
