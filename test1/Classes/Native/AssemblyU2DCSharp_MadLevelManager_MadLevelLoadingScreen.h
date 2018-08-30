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
// MadLevelManager.MadLevelConfiguration/Level
struct Level_t11_14;
// UnityEngine.AsyncOperation
struct AsyncOperation_t7_2;
struct AsyncOperation_t7_2_marshaled;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// MadLevelManager.MadLevelLoadingScreen
struct  MadLevelLoadingScreen_t11_12  : public MonoBehaviour_t7_106
{
	// System.Int32 MadLevelManager.MadLevelLoadingScreen::notAsyncLoadingStartFrame
	int32_t ___notAsyncLoadingStartFrame_2;
	// System.Boolean MadLevelManager.MadLevelLoadingScreen::asyncLoading
	bool ___asyncLoading_3;
	// System.String MadLevelManager.MadLevelLoadingScreen::testModeLevelToLoad
	String_t* ___testModeLevelToLoad_4;
	// MadLevelManager.MadLevelConfiguration/Level MadLevelManager.MadLevelLoadingScreen::nextLevel
	Level_t11_14 * ___nextLevel_5;
	// UnityEngine.AsyncOperation MadLevelManager.MadLevelLoadingScreen::asyncOperation
	AsyncOperation_t7_2 * ___asyncOperation_6;
	// System.Int32 MadLevelManager.MadLevelLoadingScreen::frameNumber
	int32_t ___frameNumber_7;
	// System.Boolean MadLevelManager.MadLevelLoadingScreen::testMode
	bool ___testMode_8;
};
