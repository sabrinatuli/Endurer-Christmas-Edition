#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1_1018;
// MadLevelManager.MadLevelProfileWatcher
struct MadLevelProfileWatcher_t11_139;

#include "mscorlib_System_Object.h"

// MadLevelManager.MadLevelProfileBufferedBackend
struct  MadLevelProfileBufferedBackend_t11_138  : public Object_t
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> MadLevelManager.MadLevelProfileBufferedBackend::profileValues
	Dictionary_2_t1_1018 * ___profileValues_0;
	// System.Boolean MadLevelManager.MadLevelProfileBufferedBackend::started
	bool ___started_1;
	// System.Single MadLevelManager.MadLevelProfileBufferedBackend::_maxTimePause
	float ____maxTimePause_2;
	// MadLevelManager.MadLevelProfileWatcher MadLevelManager.MadLevelProfileBufferedBackend::profileWatcher
	MadLevelProfileWatcher_t11_139 * ___profileWatcher_3;
};
