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
// MadLevelManager.MadLevelInputControl/TraverseRule
struct TraverseRule_t11_124;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelInputControl_Input.h"
#include "UnityEngine_UnityEngine_KeyCode.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelInputControl_Activ.h"

// MadLevelManager.MadLevelInputControl
struct  MadLevelInputControl_t11_129  : public MonoBehaviour_t7_106
{
	// MadLevelManager.MadLevelInputControl/InputMode MadLevelManager.MadLevelInputControl::inputMode
	int32_t ___inputMode_2;
	// UnityEngine.KeyCode MadLevelManager.MadLevelInputControl::keycodeLeft
	int32_t ___keycodeLeft_3;
	// UnityEngine.KeyCode MadLevelManager.MadLevelInputControl::keycodeRight
	int32_t ___keycodeRight_4;
	// UnityEngine.KeyCode MadLevelManager.MadLevelInputControl::keycodeUp
	int32_t ___keycodeUp_5;
	// UnityEngine.KeyCode MadLevelManager.MadLevelInputControl::keycodeDown
	int32_t ___keycodeDown_6;
	// UnityEngine.KeyCode MadLevelManager.MadLevelInputControl::keycodeEnter
	int32_t ___keycodeEnter_7;
	// System.String MadLevelManager.MadLevelInputControl::axisHorizontal
	String_t* ___axisHorizontal_8;
	// System.String MadLevelManager.MadLevelInputControl::axisVertical
	String_t* ___axisVertical_9;
	// System.String MadLevelManager.MadLevelInputControl::axisEnter
	String_t* ___axisEnter_10;
	// MadLevelManager.MadLevelInputControl/TraverseRule MadLevelManager.MadLevelInputControl::traverseRule
	TraverseRule_t11_124 * ___traverseRule_11;
	// MadLevelManager.MadLevelInputControl/ActivateOnStart MadLevelManager.MadLevelInputControl::activateOnStart
	int32_t ___activateOnStart_12;
	// System.Boolean MadLevelManager.MadLevelInputControl::onlyOnMobiles
	bool ___onlyOnMobiles_13;
	// System.Boolean MadLevelManager.MadLevelInputControl::repeat
	bool ___repeat_14;
	// System.Single MadLevelManager.MadLevelInputControl::repeatInterval
	float ___repeatInterval_15;
	// System.Boolean MadLevelManager.MadLevelInputControl::isMobile
	bool ___isMobile_16;
	// System.Single MadLevelManager.MadLevelInputControl::lastActionTime
	float ___lastActionTime_17;
	// System.Boolean MadLevelManager.MadLevelInputControl::keyDown
	bool ___keyDown_18;
	// System.Boolean MadLevelManager.MadLevelInputControl::firstUpdateExecuted
	bool ___firstUpdateExecuted_19;
};
