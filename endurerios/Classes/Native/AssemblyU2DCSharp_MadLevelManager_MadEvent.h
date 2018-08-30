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
// UnityEngine.GameObject
struct GameObject_t7_113;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadEvent_EventType.h"

// MadLevelManager.MadEvent
struct  MadEvent_t11_179  : public MonoBehaviour_t7_106
{
	// MadLevelManager.MadEvent/EventType MadLevelManager.MadEvent::eventType
	int32_t ___eventType_2;
	// System.String MadLevelManager.MadEvent::message
	String_t* ___message_3;
	// UnityEngine.GameObject MadLevelManager.MadEvent::messageReceiver
	GameObject_t7_113 * ___messageReceiver_4;
};
