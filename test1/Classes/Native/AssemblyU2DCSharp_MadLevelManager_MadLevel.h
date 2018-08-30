#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MadLevelManager.MadLevelConfiguration
struct MadLevelConfiguration_t11_48;
// System.String
struct String_t;
// MadLevelManager.MadLevelExtension
struct MadLevelExtension_t11_92;
// MadLevelManager.MadLevel/LevelPredicate
struct LevelPredicate_t11_86;

#include "mscorlib_System_Object.h"

// MadLevelManager.MadLevel
struct  MadLevel_t11_91  : public Object_t
{
};
struct MadLevel_t11_91_StaticFields{
	// MadLevelManager.MadLevelConfiguration MadLevelManager.MadLevel::_configuration
	MadLevelConfiguration_t11_48 * ____configuration_0;
	// System.String MadLevelManager.MadLevel::_arguments
	String_t* ____arguments_1;
	// System.String MadLevelManager.MadLevel::_currentLevelName
	String_t* ____currentLevelName_2;
	// MadLevelManager.MadLevelExtension MadLevelManager.MadLevel::_currentExtension
	MadLevelExtension_t11_92 * ____currentExtension_3;
	// System.Boolean MadLevelManager.MadLevel::<extensionDefined>k__BackingField
	bool ___U3CextensionDefinedU3Ek__BackingField_4;
	// System.Int32 MadLevelManager.MadLevel::<currentExtensionProgress>k__BackingField
	int32_t ___U3CcurrentExtensionProgressU3Ek__BackingField_5;
	// System.String MadLevelManager.MadLevel::<lastPlayedLevelName>k__BackingField
	String_t* ___U3ClastPlayedLevelNameU3Ek__BackingField_6;
	// MadLevelManager.MadLevel/LevelPredicate MadLevelManager.MadLevel::<>f__am$cache7
	LevelPredicate_t11_86 * ___U3CU3Ef__amU24cache7_7;
	// MadLevelManager.MadLevel/LevelPredicate MadLevelManager.MadLevel::<>f__am$cache8
	LevelPredicate_t11_86 * ___U3CU3Ef__amU24cache8_8;
	// MadLevelManager.MadLevel/LevelPredicate MadLevelManager.MadLevel::<>f__am$cache9
	LevelPredicate_t11_86 * ___U3CU3Ef__amU24cache9_9;
	// MadLevelManager.MadLevel/LevelPredicate MadLevelManager.MadLevel::<>f__am$cacheA
	LevelPredicate_t11_86 * ___U3CU3Ef__amU24cacheA_10;
	// MadLevelManager.MadLevel/LevelPredicate MadLevelManager.MadLevel::<>f__am$cacheB
	LevelPredicate_t11_86 * ___U3CU3Ef__amU24cacheB_11;
	// MadLevelManager.MadLevel/LevelPredicate MadLevelManager.MadLevel::<>f__am$cacheC
	LevelPredicate_t11_86 * ___U3CU3Ef__amU24cacheC_12;
};
