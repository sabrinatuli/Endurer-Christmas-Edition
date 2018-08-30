#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MadLevelManager.MadText
struct MadText_t11_16;
// MadLevelManager.MadSprite[]
struct MadSpriteU5BU5D_t11_20;
// System.Func`2<MadLevelManager.MadLevelConfiguration/Level,System.Int32>
struct Func_2_t4_22;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// MadLevelManager.MadLevelTesterController
struct  MadLevelTesterController_t11_19  : public MonoBehaviour_t7_106
{
	// MadLevelManager.MadText MadLevelManager.MadLevelTesterController::levelNameText
	MadText_t11_16 * ___levelNameText_2;
	// MadLevelManager.MadText MadLevelManager.MadLevelTesterController::argumentsText
	MadText_t11_16 * ___argumentsText_3;
	// MadLevelManager.MadText MadLevelManager.MadLevelTesterController::backToMenu
	MadText_t11_16 * ___backToMenu_4;
	// MadLevelManager.MadText MadLevelManager.MadLevelTesterController::levelCompletedText
	MadText_t11_16 * ___levelCompletedText_5;
	// MadLevelManager.MadText MadLevelManager.MadLevelTesterController::levelNotCompletedText
	MadText_t11_16 * ___levelNotCompletedText_6;
	// MadLevelManager.MadSprite[] MadLevelManager.MadLevelTesterController::other
	MadSpriteU5BU5D_t11_20* ___other_7;
};
struct MadLevelTesterController_t11_19_StaticFields{
	// System.Func`2<MadLevelManager.MadLevelConfiguration/Level,System.Int32> MadLevelManager.MadLevelTesterController::<>f__am$cache6
	Func_2_t4_22 * ___U3CU3Ef__amU24cache6_8;
};
