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
// MadLevelManager.IMadLevelProfileBackend
struct IMadLevelProfileBackend_t11_136;
// MadLevelManager.MadLevelProfile/Level
struct Level_t11_130;
// System.Collections.Generic.Dictionary`2<System.String,MadLevelManager.MadLevelProfile/Level>
struct Dictionary_2_t1_1017;

#include "mscorlib_System_Object.h"

// MadLevelManager.MadLevelProfile
struct  MadLevelProfile_t11_135  : public Object_t
{
};
struct MadLevelProfile_t11_135_StaticFields{
	// MadLevelManager.IMadLevelProfileBackend MadLevelManager.MadLevelProfile::_backend
	Object_t * ____backend_9;
	// MadLevelManager.MadLevelProfile/Level MadLevelManager.MadLevelProfile::_profileLevel
	Level_t11_130 * ____profileLevel_10;
	// System.Collections.Generic.Dictionary`2<System.String,MadLevelManager.MadLevelProfile/Level> MadLevelManager.MadLevelProfile::_levels
	Dictionary_2_t1_1017 * ____levels_11;
	// System.Boolean MadLevelManager.MadLevelProfile::initialized
	bool ___initialized_12;
};
