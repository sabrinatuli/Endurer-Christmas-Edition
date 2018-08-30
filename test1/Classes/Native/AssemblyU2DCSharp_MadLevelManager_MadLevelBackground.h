#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MadLevelManager.MadDraggable
struct MadDraggable_t11_103;
// System.Collections.Generic.List`1<MadLevelManager.MadLevelBackgroundLayer>
struct List_1_t1_1010;
// System.Func`2<MadLevelManager.MadLevelBackgroundLayer,System.String>
struct Func_2_t4_25;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// MadLevelManager.MadLevelBackground
struct  MadLevelBackground_t11_37  : public MonoBehaviour_t7_106
{
	// MadLevelManager.MadDraggable MadLevelManager.MadLevelBackground::draggable
	MadDraggable_t11_103 * ___draggable_2;
	// System.Int32 MadLevelManager.MadLevelBackground::startDepth
	int32_t ___startDepth_3;
	// System.Boolean MadLevelManager.MadLevelBackground::ignoreYMovement
	bool ___ignoreYMovement_4;
	// System.Boolean MadLevelManager.MadLevelBackground::ignoreXMovement
	bool ___ignoreXMovement_5;
	// System.Collections.Generic.List`1<MadLevelManager.MadLevelBackgroundLayer> MadLevelManager.MadLevelBackground::layers
	List_1_t1_1010 * ___layers_6;
};
struct MadLevelBackground_t11_37_StaticFields{
	// System.Func`2<MadLevelManager.MadLevelBackgroundLayer,System.String> MadLevelManager.MadLevelBackground::<>f__am$cache5
	Func_2_t4_25 * ___U3CU3Ef__amU24cache5_7;
};
