#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_MadLevelManager_MadDraggable.h"
#include "UnityEngine_UnityEngine_Bounds.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadFreeDraggable_ScaleMode.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadiTween_EaseType.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Rect.h"

// MadLevelManager.MadFreeDraggable
struct  MadFreeDraggable_t11_54  : public MadDraggable_t11_103
{
	// UnityEngine.Bounds MadLevelManager.MadFreeDraggable::dragBounds
	Bounds_t7_69  ___dragBounds_27;
	// MadLevelManager.MadFreeDraggable/ScaleMode MadLevelManager.MadFreeDraggable::scaleMode
	int32_t ___scaleMode_28;
	// System.Single MadLevelManager.MadFreeDraggable::scalingMax
	float ___scalingMax_29;
	// System.Single MadLevelManager.MadFreeDraggable::scalingMin
	float ___scalingMin_30;
	// System.Boolean MadLevelManager.MadFreeDraggable::moveEasing
	bool ___moveEasing_31;
	// System.Boolean MadLevelManager.MadFreeDraggable::scaleEasing
	bool ___scaleEasing_32;
	// MadLevelManager.MadiTween/EaseType MadLevelManager.MadFreeDraggable::scaleEasingType
	int32_t ___scaleEasingType_33;
	// System.Single MadLevelManager.MadFreeDraggable::scaleEasingDuration
	float ___scaleEasingDuration_34;
	// UnityEngine.Vector3 MadLevelManager.MadFreeDraggable::scaleSource
	Vector3_t7_66  ___scaleSource_35;
	// UnityEngine.Vector3 MadLevelManager.MadFreeDraggable::scaleTarget
	Vector3_t7_66  ___scaleTarget_36;
	// System.Single MadLevelManager.MadFreeDraggable::scaleStartTime
	float ___scaleStartTime_37;
	// System.Boolean MadLevelManager.MadFreeDraggable::moveAnim
	bool ___moveAnim_38;
	// UnityEngine.Vector3 MadLevelManager.MadFreeDraggable::moveAnimStartPosition
	Vector3_t7_66  ___moveAnimStartPosition_39;
	// UnityEngine.Vector3 MadLevelManager.MadFreeDraggable::moveAnimEndPosition
	Vector3_t7_66  ___moveAnimEndPosition_40;
	// System.Single MadLevelManager.MadFreeDraggable::moveAnimStartTime
	float ___moveAnimStartTime_41;
	// System.Single MadLevelManager.MadFreeDraggable::moveAnimDuration
	float ___moveAnimDuration_42;
	// MadLevelManager.MadiTween/EaseType MadLevelManager.MadFreeDraggable::moveAnimEaseType
	int32_t ___moveAnimEaseType_43;
	// UnityEngine.Rect MadLevelManager.MadFreeDraggable::dragArea
	Rect_t7_35  ___dragArea_44;
	// System.Boolean MadLevelManager.MadFreeDraggable::scaling
	bool ___scaling_45;
};
