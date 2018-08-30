#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.LinkedList`1<UnityEngine.Vector2>
struct LinkedList_1_t3_160;
// System.Collections.Generic.List`1<UnityEngine.Touch>
struct List_1_t1_1025;

#include "AssemblyU2DCSharp_MadLevelManager_MadNode.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadiTween_EaseType.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "mscorlib_System_Nullable_1_gen_0.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadDraggable_DragMode.h"
#include "UnityEngine_UnityEngine_Rect.h"

// MadLevelManager.MadDraggable
struct  MadDraggable_t11_103  : public MadNode_t11_47
{
	// MadLevelManager.MadiTween/EaseType MadLevelManager.MadDraggable::moveEasingType
	int32_t ___moveEasingType_4;
	// System.Single MadLevelManager.MadDraggable::moveEasingDuration
	float ___moveEasingDuration_5;
	// UnityEngine.Vector2 MadLevelManager.MadDraggable::lastPosition
	Vector2_t7_65  ___lastPosition_6;
	// UnityEngine.Vector2 MadLevelManager.MadDraggable::interiaForce
	Vector2_t7_65  ___interiaForce_7;
	// System.Collections.Generic.LinkedList`1<UnityEngine.Vector2> MadLevelManager.MadDraggable::lastDeltas
	LinkedList_1_t3_160 * ___lastDeltas_8;
	// System.Int32 MadLevelManager.MadDraggable::lastDeltasCount
	int32_t ___lastDeltasCount_9;
	// System.Single MadLevelManager.MadDraggable::dragDistance
	float ___dragDistance_10;
	// System.Single MadLevelManager.MadDraggable::deadDistance
	float ___deadDistance_11;
	// UnityEngine.Vector2 MadLevelManager.MadDraggable::cachedCamPos
	Vector2_t7_65  ___cachedCamPos_12;
	// UnityEngine.Vector2 MadLevelManager.MadDraggable::estaminatedPos
	Vector2_t7_65  ___estaminatedPos_13;
	// System.Nullable`1<UnityEngine.Touch> MadLevelManager.MadDraggable::singleTouch
	Nullable_1_t1_1024  ___singleTouch_14;
	// System.Boolean MadLevelManager.MadDraggable::singleTouchEnded
	bool ___singleTouchEnded_15;
	// System.Collections.Generic.List`1<UnityEngine.Touch> MadLevelManager.MadDraggable::multiTouches
	List_1_t1_1025 * ___multiTouches_16;
	// MadLevelManager.MadDraggable/DragMode MadLevelManager.MadDraggable::dragMode
	int32_t ___dragMode_17;
	// UnityEngine.Rect MadLevelManager.MadDraggable::freeDragArea
	Rect_t7_35  ___freeDragArea_18;
	// System.Boolean MadLevelManager.MadDraggable::allowScaling
	bool ___allowScaling_19;
	// System.Single MadLevelManager.MadDraggable::scaleMax
	float ___scaleMax_20;
	// System.Single MadLevelManager.MadDraggable::scaleMin
	float ___scaleMin_21;
	// System.Single MadLevelManager.MadDraggable::lastDoubleTouchDistance
	float ___lastDoubleTouchDistance_22;
	// System.Boolean MadLevelManager.MadDraggable::addInteriaForce
	bool ___addInteriaForce_23;
	// System.Single MadLevelManager.MadDraggable::<lastTouchTime>k__BackingField
	float ___U3ClastTouchTimeU3Ek__BackingField_24;
	// UnityEngine.Vector2 MadLevelManager.MadDraggable::<lastTouchCameraPos>k__BackingField
	Vector2_t7_65  ___U3ClastTouchCameraPosU3Ek__BackingField_25;
	// System.Boolean MadLevelManager.MadDraggable::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_26;
};
