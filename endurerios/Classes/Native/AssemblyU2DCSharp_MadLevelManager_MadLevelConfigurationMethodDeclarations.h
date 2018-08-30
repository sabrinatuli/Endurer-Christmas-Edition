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

// MadLevelManager.MadLevelConfiguration
struct MadLevelConfiguration_t11_48;
// MadLevelManager.MadLevelConfiguration/Group
struct Group_t11_18;
// MadLevelManager.MadLevelConfiguration/Level
struct Level_t11_14;
// System.String
struct String_t;
// MadLevelManager.MadLevelConfiguration/Level[]
struct LevelU5BU5D_t11_270;
// MadLevelManager.MadLevelExtension
struct MadLevelExtension_t11_92;
// System.Collections.Generic.List`1<MadLevelManager.MadLevelScene>
struct List_1_t1_1014;
// MadLevelManager.MadLevelConfiguration[]
struct MadLevelConfigurationU5BU5D_t11_271;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevel_Type.h"

// System.Void MadLevelManager.MadLevelConfiguration::.ctor()
extern "C" void MadLevelConfiguration__ctor_m11_575 (MadLevelConfiguration_t11_48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelConfiguration::get_active()
extern "C" bool MadLevelConfiguration_get_active_m11_576 (MadLevelConfiguration_t11_48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelConfiguration::set_active(System.Boolean)
extern "C" void MadLevelConfiguration_set_active_m11_577 (MadLevelConfiguration_t11_48 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Group MadLevelManager.MadLevelConfiguration::get_defaultGroup()
extern "C" Group_t11_18 * MadLevelConfiguration_get_defaultGroup_m11_578 (MadLevelConfiguration_t11_48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::GetHashCode()
extern "C" int32_t MadLevelConfiguration_GetHashCode_m11_579 (MadLevelConfiguration_t11_48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelConfiguration::OnEnable()
extern "C" void MadLevelConfiguration_OnEnable_m11_580 (MadLevelConfiguration_t11_48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelConfiguration::Upgrade()
extern "C" void MadLevelConfiguration_Upgrade_m11_581 (MadLevelConfiguration_t11_48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelConfiguration::SetDirty()
extern "C" void MadLevelConfiguration_SetDirty_m11_582 (MadLevelConfiguration_t11_48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelConfiguration::Reorder()
extern "C" void MadLevelConfiguration_Reorder_m11_583 (MadLevelConfiguration_t11_48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Level MadLevelManager.MadLevelConfiguration::CreateLevel()
extern "C" Level_t11_14 * MadLevelConfiguration_CreateLevel_m11_584 (MadLevelConfiguration_t11_48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Group MadLevelManager.MadLevelConfiguration::CreateGroup()
extern "C" Group_t11_18 * MadLevelConfiguration_CreateGroup_m11_585 (MadLevelConfiguration_t11_48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelConfiguration::AddGroup(MadLevelManager.MadLevelConfiguration/Group)
extern "C" void MadLevelConfiguration_AddGroup_m11_586 (MadLevelConfiguration_t11_48 * __this, Group_t11_18 * ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Group MadLevelManager.MadLevelConfiguration::FindGroupById(System.Int32)
extern "C" Group_t11_18 * MadLevelConfiguration_FindGroupById_m11_587 (MadLevelConfiguration_t11_48 * __this, int32_t ___groupId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Group MadLevelManager.MadLevelConfiguration::FindGroupByName(System.String)
extern "C" Group_t11_18 * MadLevelConfiguration_FindGroupByName_m11_588 (MadLevelConfiguration_t11_48 * __this, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::LevelCount()
extern "C" int32_t MadLevelConfiguration_LevelCount_m11_589 (MadLevelConfiguration_t11_48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::LevelCount(MadLevelManager.MadLevel/Type)
extern "C" int32_t MadLevelConfiguration_LevelCount_m11_590 (MadLevelConfiguration_t11_48 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::LevelCount(MadLevelManager.MadLevel/Type,System.Int32)
extern "C" int32_t MadLevelConfiguration_LevelCount_m11_591 (MadLevelConfiguration_t11_48 * __this, int32_t ___type, int32_t ___groupId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Level[] MadLevelManager.MadLevelConfiguration::GetLevelsInOrder()
extern "C" LevelU5BU5D_t11_270* MadLevelConfiguration_GetLevelsInOrder_m11_592 (MadLevelConfiguration_t11_48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Level MadLevelManager.MadLevelConfiguration::GetLevel(System.Int32)
extern "C" Level_t11_14 * MadLevelConfiguration_GetLevel_m11_593 (MadLevelConfiguration_t11_48 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Level MadLevelManager.MadLevelConfiguration::GetLevel(System.Int32,System.Int32)
extern "C" Level_t11_14 * MadLevelConfiguration_GetLevel_m11_594 (MadLevelConfiguration_t11_48 * __this, int32_t ___groupId, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Level MadLevelManager.MadLevelConfiguration::GetLevel(MadLevelManager.MadLevel/Type,System.Int32)
extern "C" Level_t11_14 * MadLevelConfiguration_GetLevel_m11_595 (MadLevelConfiguration_t11_48 * __this, int32_t ___type, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Level MadLevelManager.MadLevelConfiguration::GetLevel(MadLevelManager.MadLevel/Type,System.Int32,System.Int32)
extern "C" Level_t11_14 * MadLevelConfiguration_GetLevel_m11_596 (MadLevelConfiguration_t11_48 * __this, int32_t ___type, int32_t ___groupId, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::FindLevelIndex(MadLevelManager.MadLevel/Type,System.String)
extern "C" int32_t MadLevelConfiguration_FindLevelIndex_m11_597 (MadLevelConfiguration_t11_48 * __this, int32_t ___type, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::FindLevelIndex(MadLevelManager.MadLevel/Type,System.Int32,System.String)
extern "C" int32_t MadLevelConfiguration_FindLevelIndex_m11_598 (MadLevelConfiguration_t11_48 * __this, int32_t ___type, int32_t ___groupId, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Level MadLevelManager.MadLevelConfiguration::FindLevelByName(System.String)
extern "C" Level_t11_14 * MadLevelConfiguration_FindLevelByName_m11_599 (MadLevelConfiguration_t11_48 * __this, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Level MadLevelManager.MadLevelConfiguration::FindNextLevel(System.String)
extern "C" Level_t11_14 * MadLevelConfiguration_FindNextLevel_m11_600 (MadLevelConfiguration_t11_48 * __this, String_t* ___currentLevelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Level MadLevelManager.MadLevelConfiguration::FindNextLevel(System.String,System.Boolean)
extern "C" Level_t11_14 * MadLevelConfiguration_FindNextLevel_m11_601 (MadLevelConfiguration_t11_48 * __this, String_t* ___currentLevelName, bool ___sameGroup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Level MadLevelManager.MadLevelConfiguration::FindNextLevel(System.String,MadLevelManager.MadLevel/Type)
extern "C" Level_t11_14 * MadLevelConfiguration_FindNextLevel_m11_602 (MadLevelConfiguration_t11_48 * __this, String_t* ___currentLevelName, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Level MadLevelManager.MadLevelConfiguration::FindNextLevel(System.String,MadLevelManager.MadLevel/Type,System.Boolean)
extern "C" Level_t11_14 * MadLevelConfiguration_FindNextLevel_m11_603 (MadLevelConfiguration_t11_48 * __this, String_t* ___currentLevelName, int32_t ___type, bool ___sameGroup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Level MadLevelManager.MadLevelConfiguration::FindPreviousLevel(System.String)
extern "C" Level_t11_14 * MadLevelConfiguration_FindPreviousLevel_m11_604 (MadLevelConfiguration_t11_48 * __this, String_t* ___currentLevelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Level MadLevelManager.MadLevelConfiguration::FindPreviousLevel(System.String,System.Boolean)
extern "C" Level_t11_14 * MadLevelConfiguration_FindPreviousLevel_m11_605 (MadLevelConfiguration_t11_48 * __this, String_t* ___currentLevelName, bool ___sameGroup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Level MadLevelManager.MadLevelConfiguration::FindPreviousLevel(System.String,MadLevelManager.MadLevel/Type)
extern "C" Level_t11_14 * MadLevelConfiguration_FindPreviousLevel_m11_606 (MadLevelConfiguration_t11_48 * __this, String_t* ___currentLevelName, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Level MadLevelManager.MadLevelConfiguration::FindPreviousLevel(System.String,MadLevelManager.MadLevel/Type,System.Boolean)
extern "C" Level_t11_14 * MadLevelConfiguration_FindPreviousLevel_m11_607 (MadLevelConfiguration_t11_48 * __this, String_t* ___currentLevelName, int32_t ___type, bool ___sameGroup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Level MadLevelManager.MadLevelConfiguration::FindFirstForScene(System.String,System.Boolean&)
extern "C" Level_t11_14 * MadLevelConfiguration_FindFirstForScene_m11_608 (MadLevelConfiguration_t11_48 * __this, String_t* ___levelName, bool* ___hasMany, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelExtension MadLevelManager.MadLevelConfiguration::FindExtensionByGUID(System.String)
extern "C" MadLevelExtension_t11_92 * MadLevelConfiguration_FindExtensionByGUID_m11_609 (MadLevelConfiguration_t11_48 * __this, String_t* ___guid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MadLevelManager.MadLevelScene> MadLevelManager.MadLevelConfiguration::ScenesInOrder()
extern "C" List_1_t1_1014 * MadLevelConfiguration_ScenesInOrder_m11_610 (MadLevelConfiguration_t11_48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration[] MadLevelManager.MadLevelConfiguration::FindAll()
extern "C" MadLevelConfigurationU5BU5D_t11_271* MadLevelConfiguration_FindAll_m11_611 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration MadLevelManager.MadLevelConfiguration::GetActive()
extern "C" MadLevelConfiguration_t11_48 * MadLevelConfiguration_GetActive_m11_612 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration MadLevelManager.MadLevelConfiguration::FindActive()
extern "C" MadLevelConfiguration_t11_48 * MadLevelConfiguration_FindActive_m11_613 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelConfiguration::DeactivateOthers()
extern "C" void MadLevelConfiguration_DeactivateOthers_m11_614 (MadLevelConfiguration_t11_48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelConfiguration::IsValid()
extern "C" bool MadLevelConfiguration_IsValid_m11_615 (MadLevelConfiguration_t11_48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelConfiguration::ApplyProfile()
extern "C" void MadLevelConfiguration_ApplyProfile_m11_616 (MadLevelConfiguration_t11_48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelConfiguration::<callbackChanged>m__3B()
extern "C" void MadLevelConfiguration_U3CcallbackChangedU3Em__3B_m11_617 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelConfiguration::<Upgrade>m__3C(MadLevelManager.MadLevelConfiguration/Level)
extern "C" bool MadLevelConfiguration_U3CUpgradeU3Em__3C_m11_618 (MadLevelConfiguration_t11_48 * __this, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<Upgrade>m__3D(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CUpgradeU3Em__3D_m11_619 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<Upgrade>m__3F(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CUpgradeU3Em__3F_m11_620 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<GetLevelsInOrder>m__45(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CGetLevelsInOrderU3Em__45_m11_621 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<GetLevelsInOrder>m__47(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CGetLevelsInOrderU3Em__47_m11_622 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<GetLevel>m__48(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CGetLevelU3Em__48_m11_623 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<GetLevel>m__4A(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CGetLevelU3Em__4A_m11_624 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<FindLevelIndex>m__4C(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CFindLevelIndexU3Em__4C_m11_625 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<FindLevelIndex>m__4E(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CFindLevelIndexU3Em__4E_m11_626 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<FindNextLevel>m__51(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CFindNextLevelU3Em__51_m11_627 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<FindNextLevel>m__53(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CFindNextLevelU3Em__53_m11_628 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<FindNextLevel>m__55(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CFindNextLevelU3Em__55_m11_629 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<FindNextLevel>m__57(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CFindNextLevelU3Em__57_m11_630 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<FindPreviousLevel>m__59(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CFindPreviousLevelU3Em__59_m11_631 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<FindPreviousLevel>m__5B(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CFindPreviousLevelU3Em__5B_m11_632 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<FindPreviousLevel>m__5D(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CFindPreviousLevelU3Em__5D_m11_633 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<FindPreviousLevel>m__5F(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CFindPreviousLevelU3Em__5F_m11_634 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<FindFirstForScene>m__61(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CFindFirstForSceneU3Em__61_m11_635 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<ScenesInOrder>m__63(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CScenesInOrderU3Em__63_m11_636 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<ScenesInOrder>m__64(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelConfiguration_U3CScenesInOrderU3Em__64_m11_637 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelConfiguration::<FindActive>m__65(MadLevelManager.MadLevelConfiguration)
extern "C" bool MadLevelConfiguration_U3CFindActiveU3Em__65_m11_638 (Object_t * __this /* static, unused */, MadLevelConfiguration_t11_48 * ___conf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration::<FindActive>m__66(MadLevelManager.MadLevelConfiguration)
extern "C" int32_t MadLevelConfiguration_U3CFindActiveU3Em__66_m11_639 (Object_t * __this /* static, unused */, MadLevelConfiguration_t11_48 * ___conf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
