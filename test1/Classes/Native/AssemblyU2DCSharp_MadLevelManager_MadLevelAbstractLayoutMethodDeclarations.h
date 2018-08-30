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

// MadLevelManager.MadLevelAbstractLayout
struct MadLevelAbstractLayout_t11_46;
// MadLevelManager.MadLevelAbstractLayout/IconActivationEvent
struct IconActivationEvent_t11_43;
// MadLevelManager.MadLevelConfiguration
struct MadLevelConfiguration_t11_48;
// MadLevelManager.MadLevelIcon
struct MadLevelIcon_t11_44;
// MadLevelManager.MadLevelIcon[]
struct MadLevelIconU5BU5D_t11_59;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// UnityEngine.Transform
struct Transform_t7_81;
// MadLevelManager.MadLevelConfiguration/Level
struct Level_t11_14;
// MadLevelManager.MadSprite
struct MadSprite_t11_13;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadLevelAbstractLayout::.ctor()
extern "C" void MadLevelAbstractLayout__ctor_m11_120 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::add_onIconActivate(MadLevelManager.MadLevelAbstractLayout/IconActivationEvent)
extern "C" void MadLevelAbstractLayout_add_onIconActivate_m11_121 (MadLevelAbstractLayout_t11_46 * __this, IconActivationEvent_t11_43 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::remove_onIconActivate(MadLevelManager.MadLevelAbstractLayout/IconActivationEvent)
extern "C" void MadLevelAbstractLayout_remove_onIconActivate_m11_122 (MadLevelAbstractLayout_t11_46 * __this, IconActivationEvent_t11_43 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::add_onIconDeactivate(MadLevelManager.MadLevelAbstractLayout/IconActivationEvent)
extern "C" void MadLevelAbstractLayout_add_onIconDeactivate_m11_123 (MadLevelAbstractLayout_t11_46 * __this, IconActivationEvent_t11_43 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::remove_onIconDeactivate(MadLevelManager.MadLevelAbstractLayout/IconActivationEvent)
extern "C" void MadLevelAbstractLayout_remove_onIconDeactivate_m11_124 (MadLevelAbstractLayout_t11_46 * __this, IconActivationEvent_t11_43 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration MadLevelManager.MadLevelAbstractLayout::get_currentConfiguration()
extern "C" MadLevelConfiguration_t11_48 * MadLevelAbstractLayout_get_currentConfiguration_m11_125 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelAbstractLayout::CurrentConfigurationValid()
extern "C" bool MadLevelAbstractLayout_CurrentConfigurationValid_m11_126 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::Update()
extern "C" void MadLevelAbstractLayout_Update_m11_127 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::UpdateHandleMobileBackButton()
extern "C" void MadLevelAbstractLayout_UpdateHandleMobileBackButton_m11_128 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelAbstractLayout::GetFirstIcon()
extern "C" MadLevelIcon_t11_44 * MadLevelAbstractLayout_GetFirstIcon_m11_129 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelAbstractLayout::GetLastIcon()
extern "C" MadLevelIcon_t11_44 * MadLevelAbstractLayout_GetLastIcon_m11_130 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelAbstractLayout::GetLastCompletedIcon()
extern "C" MadLevelIcon_t11_44 * MadLevelAbstractLayout_GetLastCompletedIcon_m11_131 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelAbstractLayout::GetLastUnlockedIcon()
extern "C" MadLevelIcon_t11_44 * MadLevelAbstractLayout_GetLastUnlockedIcon_m11_132 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelAbstractLayout::GetActiveIcon()
extern "C" MadLevelIcon_t11_44 * MadLevelAbstractLayout_GetActiveIcon_m11_133 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelAbstractLayout::GetCurrentIcon()
extern "C" MadLevelIcon_t11_44 * MadLevelAbstractLayout_GetCurrentIcon_m11_134 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelAbstractLayout::GetNextIcon(MadLevelManager.MadLevelIcon)
extern "C" MadLevelIcon_t11_44 * MadLevelAbstractLayout_GetNextIcon_m11_135 (MadLevelAbstractLayout_t11_46 * __this, MadLevelIcon_t11_44 * ___icon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelAbstractLayout::GetPreviousIcon(MadLevelManager.MadLevelIcon)
extern "C" MadLevelIcon_t11_44 * MadLevelAbstractLayout_GetPreviousIcon_m11_136 (MadLevelAbstractLayout_t11_46 * __this, MadLevelIcon_t11_44 * ___icon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon[] MadLevelManager.MadLevelAbstractLayout::GetAllIcons()
extern "C" MadLevelIconU5BU5D_t11_59* MadLevelAbstractLayout_GetAllIcons_m11_137 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelAbstractLayout::LookAtLevel(System.String)
extern "C" bool MadLevelAbstractLayout_LookAtLevel_m11_138 (MadLevelAbstractLayout_t11_46 * __this, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelAbstractLayout::LookAtLastPlayedLevel()
extern "C" bool MadLevelAbstractLayout_LookAtLastPlayedLevel_m11_139 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::OnEnable()
extern "C" void MadLevelAbstractLayout_OnEnable_m11_140 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::Start()
extern "C" void MadLevelAbstractLayout_Start_m11_141 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::LateUpdate()
extern "C" void MadLevelAbstractLayout_LateUpdate_m11_142 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::LookAtLevel()
extern "C" void MadLevelAbstractLayout_LookAtLevel_m11_143 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::LookAtLastCompletedLevel()
extern "C" void MadLevelAbstractLayout_LookAtLastCompletedLevel_m11_144 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::LookAtFirstLevel()
extern "C" void MadLevelAbstractLayout_LookAtFirstLevel_m11_145 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::LookAtLastUnlockedLevel()
extern "C" void MadLevelAbstractLayout_LookAtLastUnlockedLevel_m11_146 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelAbstractLayout::CanActivate(MadLevelManager.MadLevelIcon)
extern "C" bool MadLevelAbstractLayout_CanActivate_m11_147 (MadLevelAbstractLayout_t11_46 * __this, MadLevelIcon_t11_44 * ___icon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::Activate(MadLevelManager.MadLevelIcon)
extern "C" void MadLevelAbstractLayout_Activate_m11_148 (MadLevelAbstractLayout_t11_46 * __this, MadLevelIcon_t11_44 * ___icon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::Activate1st(MadLevelManager.MadLevelIcon)
extern "C" void MadLevelAbstractLayout_Activate1st_m11_149 (MadLevelAbstractLayout_t11_46 * __this, MadLevelIcon_t11_44 * ___icon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::DeactivateActiveIcon()
extern "C" void MadLevelAbstractLayout_DeactivateActiveIcon_m11_150 (MadLevelAbstractLayout_t11_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MadLevelManager.MadLevelAbstractLayout::Activate2nd(MadLevelManager.MadLevelIcon)
extern "C" Object_t * MadLevelAbstractLayout_Activate2nd_m11_151 (MadLevelAbstractLayout_t11_46 * __this, MadLevelIcon_t11_44 * ___icon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelIcon MadLevelManager.MadLevelAbstractLayout::CreateIcon(UnityEngine.Transform,System.String,MadLevelManager.MadLevelIcon)
extern "C" MadLevelIcon_t11_44 * MadLevelAbstractLayout_CreateIcon_m11_152 (MadLevelAbstractLayout_t11_46 * __this, Transform_t7_81 * ___parent, String_t* ___name, MadLevelIcon_t11_44 * ___template, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelAbstractLayout::GetEnumerationValue(System.Int32)
extern "C" String_t* MadLevelAbstractLayout_GetEnumerationValue_m11_153 (MadLevelAbstractLayout_t11_46 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelAbstractLayout::EnumerationLetter(System.Int32)
extern "C" String_t* MadLevelAbstractLayout_EnumerationLetter_m11_154 (MadLevelAbstractLayout_t11_46 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelAbstractLayout::<GetLastCompletedIcon>m__7(MadLevelManager.MadLevelConfiguration/Level)
extern "C" bool MadLevelAbstractLayout_U3CGetLastCompletedIconU3Em__7_m11_155 (MadLevelAbstractLayout_t11_46 * __this, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelAbstractLayout::<GetLastCompletedIcon>m__8(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelAbstractLayout_U3CGetLastCompletedIconU3Em__8_m11_156 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelAbstractLayout::<GetLastUnlockedIcon>m__9(MadLevelManager.MadLevelConfiguration/Level)
extern "C" bool MadLevelAbstractLayout_U3CGetLastUnlockedIconU3Em__9_m11_157 (MadLevelAbstractLayout_t11_46 * __this, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelAbstractLayout::<GetLastUnlockedIcon>m__A(MadLevelManager.MadLevelConfiguration/Level)
extern "C" int32_t MadLevelAbstractLayout_U3CGetLastUnlockedIconU3Em__A_m11_158 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelAbstractLayout::<GetAllIcons>m__B(MadLevelManager.MadLevelIcon)
extern "C" bool MadLevelAbstractLayout_U3CGetAllIconsU3Em__B_m11_159 (Object_t * __this /* static, unused */, MadLevelIcon_t11_44 * ___ic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::<OnEnable>m__C(MadLevelManager.MadSprite)
extern "C" void MadLevelAbstractLayout_U3COnEnableU3Em__C_m11_160 (MadLevelAbstractLayout_t11_46 * __this, MadSprite_t11_13 * ___sprite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::<OnEnable>m__D(MadLevelManager.MadLevelIcon,System.String)
extern "C" void MadLevelAbstractLayout_U3COnEnableU3Em__D_m11_161 (MadLevelAbstractLayout_t11_46 * __this, MadLevelIcon_t11_44 * ___icon, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelAbstractLayout::<OnEnable>m__E(MadLevelManager.MadLevelIcon,System.String)
extern "C" void MadLevelAbstractLayout_U3COnEnableU3Em__E_m11_162 (MadLevelAbstractLayout_t11_46 * __this, MadLevelIcon_t11_44 * ___icon, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
