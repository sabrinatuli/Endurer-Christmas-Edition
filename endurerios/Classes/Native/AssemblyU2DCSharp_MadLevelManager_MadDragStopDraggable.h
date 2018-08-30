#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MadLevelManager.MadDragStopDraggable/DragStopCallback
struct DragStopCallback_t11_174;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1_913;

#include "AssemblyU2DCSharp_MadLevelManager_MadDraggable.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadDragStopDraggable_Direc.h"

// MadLevelManager.MadDragStopDraggable
struct  MadDragStopDraggable_t11_56  : public MadDraggable_t11_103
{
	// MadLevelManager.MadDragStopDraggable/DragStopCallback MadLevelManager.MadDragStopDraggable::dragStopCallback
	DragStopCallback_t11_174 * ___dragStopCallback_27;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> MadLevelManager.MadDragStopDraggable::dragStops
	List_1_t1_913 * ___dragStops_28;
	// System.Int32 MadLevelManager.MadDragStopDraggable::forcedDragStopIndex
	int32_t ___forcedDragStopIndex_29;
	// MadLevelManager.MadDragStopDraggable/Direction MadLevelManager.MadDragStopDraggable::direction
	int32_t ___direction_30;
	// System.Boolean MadLevelManager.MadDragStopDraggable::directionInvert
	bool ___directionInvert_31;
	// System.Single MadLevelManager.MadDragStopDraggable::avarageDistance
	float ___avarageDistance_32;
	// System.Int32 MadLevelManager.MadDragStopDraggable::<dragStopCurrentIndex>k__BackingField
	int32_t ___U3CdragStopCurrentIndexU3Ek__BackingField_33;
	// System.Boolean MadLevelManager.MadDragStopDraggable::<animating>k__BackingField
	bool ___U3CanimatingU3Ek__BackingField_34;
};
