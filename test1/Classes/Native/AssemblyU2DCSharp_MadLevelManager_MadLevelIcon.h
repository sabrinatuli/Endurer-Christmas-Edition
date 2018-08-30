#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// MadLevelManager.MadLevelProperty
struct MadLevelProperty_t11_122;
// MadLevelManager.MadText
struct MadText_t11_16;
// System.Collections.Generic.List`1<MadLevelManager.MadLevelIcon>
struct List_1_t1_1015;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1_957;
// MadLevelManager.MadLevelConfiguration
struct MadLevelConfiguration_t11_48;

#include "AssemblyU2DCSharp_MadLevelManager_MadSprite.h"

// MadLevelManager.MadLevelIcon
struct  MadLevelIcon_t11_44  : public MadSprite_t11_13
{
	// System.Boolean MadLevelManager.MadLevelIcon::hasLevelConfiguration
	bool ___hasLevelConfiguration_60;
	// System.Int32 MadLevelManager.MadLevelIcon::levelIndex
	int32_t ___levelIndex_61;
	// System.String MadLevelManager.MadLevelIcon::levelSceneName
	String_t* ___levelSceneName_62;
	// System.String MadLevelManager.MadLevelIcon::levelArguments
	String_t* ___levelArguments_63;
	// MadLevelManager.MadLevelProperty MadLevelManager.MadLevelIcon::completedProperty
	MadLevelProperty_t11_122 * ___completedProperty_64;
	// MadLevelManager.MadLevelProperty MadLevelManager.MadLevelIcon::lockedProperty
	MadLevelProperty_t11_122 * ___lockedProperty_65;
	// MadLevelManager.MadText MadLevelManager.MadLevelIcon::levelNumber
	MadText_t11_16 * ___levelNumber_66;
	// System.Boolean MadLevelManager.MadLevelIcon::canFocusIfLocked
	bool ___canFocusIfLocked_67;
	// System.Collections.Generic.List`1<MadLevelManager.MadLevelIcon> MadLevelManager.MadLevelIcon::unlockOnComplete
	List_1_t1_1015 * ___unlockOnComplete_68;
	// System.Collections.Generic.List`1<MadLevelManager.MadLevelIcon> MadLevelManager.MadLevelIcon::unlockOnCompleteBackRef
	List_1_t1_1015 * ___unlockOnCompleteBackRef_69;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MadLevelManager.MadLevelIcon::showWhenLevelLocked
	List_1_t1_957 * ___showWhenLevelLocked_70;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MadLevelManager.MadLevelIcon::showWhenLevelUnlocked
	List_1_t1_957 * ___showWhenLevelUnlocked_71;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MadLevelManager.MadLevelIcon::showWhenLevelNotCompleted
	List_1_t1_957 * ___showWhenLevelNotCompleted_72;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MadLevelManager.MadLevelIcon::showWhenLevelCompleted
	List_1_t1_957 * ___showWhenLevelCompleted_73;
	// System.Int32 MadLevelManager.MadLevelIcon::version
	int32_t ___version_74;
	// System.Boolean MadLevelManager.MadLevelIcon::justEnabled
	bool ___justEnabled_75;
	// System.Boolean MadLevelManager.MadLevelIcon::_isTemplate
	bool ____isTemplate_76;
	// System.Boolean MadLevelManager.MadLevelIcon::_isTemplateCached
	bool ____isTemplateCached_77;
	// MadLevelManager.MadLevelConfiguration MadLevelManager.MadLevelIcon::_configuration
	MadLevelConfiguration_t11_48 * ____configuration_78;
	// System.Int32 MadLevelManager.MadLevelIcon::_levelGroup
	int32_t ____levelGroup_79;
};
