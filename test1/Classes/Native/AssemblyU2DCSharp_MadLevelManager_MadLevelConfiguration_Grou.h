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
// MadLevelManager.MadLevelConfiguration
struct MadLevelConfiguration_t11_48;

#include "mscorlib_System_Object.h"

// MadLevelManager.MadLevelConfiguration/Group
struct  Group_t11_18  : public Object_t
{
	// System.String MadLevelManager.MadLevelConfiguration/Group::name
	String_t* ___name_0;
	// System.Int32 MadLevelManager.MadLevelConfiguration/Group::_id
	int32_t ____id_1;
	// MadLevelManager.MadLevelConfiguration MadLevelManager.MadLevelConfiguration/Group::parent
	MadLevelConfiguration_t11_48 * ___parent_2;
};
