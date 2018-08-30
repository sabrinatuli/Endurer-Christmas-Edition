#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MadLevelManager.MadLevelLoadingScreen
struct MadLevelLoadingScreen_t11_12;
// MadLevelManager.MadSprite
struct MadSprite_t11_13;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// MadLevelLoadingBar
struct  MadLevelLoadingBar_t11_11  : public MonoBehaviour_t7_106
{
	// MadLevelManager.MadLevelLoadingScreen MadLevelLoadingBar::loadingScreen
	MadLevelLoadingScreen_t11_12 * ___loadingScreen_2;
	// MadLevelManager.MadSprite MadLevelLoadingBar::bar
	MadSprite_t11_13 * ___bar_3;
};
