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
// System.Collections.Generic.List`1<MadLevelManager.MadLevelScene>
struct List_1_t1_1014;

#include "mscorlib_System_Object.h"

// MadLevelManager.MadLevelExtension
struct  MadLevelExtension_t11_92  : public Object_t
{
	// System.String MadLevelManager.MadLevelExtension::name
	String_t* ___name_0;
	// System.String MadLevelManager.MadLevelExtension::guid
	String_t* ___guid_1;
	// System.Collections.Generic.List`1<MadLevelManager.MadLevelScene> MadLevelManager.MadLevelExtension::scenesBefore
	List_1_t1_1014 * ___scenesBefore_2;
	// System.Collections.Generic.List`1<MadLevelManager.MadLevelScene> MadLevelManager.MadLevelExtension::scenesAfter
	List_1_t1_1014 * ___scenesAfter_3;
};
