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

#include "AssemblyU2DCSharp_MadLevelManager_MadLevelScene.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevel_Type.h"

// MadLevelManager.MadLevelConfiguration/Level
struct  Level_t11_14  : public MadLevelScene_t11_105
{
	// MadLevelManager.MadLevelConfiguration MadLevelManager.MadLevelConfiguration/Level::parent
	MadLevelConfiguration_t11_48 * ___parent_4;
	// System.Int32 MadLevelManager.MadLevelConfiguration/Level::order
	int32_t ___order_5;
	// System.String MadLevelManager.MadLevelConfiguration/Level::name
	String_t* ___name_6;
	// MadLevelManager.MadLevel/Type MadLevelManager.MadLevelConfiguration/Level::type
	int32_t ___type_7;
	// System.String MadLevelManager.MadLevelConfiguration/Level::arguments
	String_t* ___arguments_8;
	// System.Int32 MadLevelManager.MadLevelConfiguration/Level::groupId
	int32_t ___groupId_9;
	// System.String MadLevelManager.MadLevelConfiguration/Level::extensionGUID
	String_t* ___extensionGUID_10;
	// System.Boolean MadLevelManager.MadLevelConfiguration/Level::lockedByDefault
	bool ___lockedByDefault_11;
};
