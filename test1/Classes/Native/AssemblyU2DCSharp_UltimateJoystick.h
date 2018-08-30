#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t7_80;
// UnityEngine.UI.Image
struct Image_t8_64;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t8_139;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t7_320;
// UnityEngine.Animator
struct Animator_t7_168;
// UnityEngine.CanvasGroup
struct CanvasGroup_t7_187;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Vector2>
struct Dictionary_2_t1_1000;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharp_UltimateJoystick_ScalingAxis.h"
#include "AssemblyU2DCSharp_UltimateJoystick_Anchor.h"
#include "AssemblyU2DCSharp_UltimateJoystick_JoystickTouchSize.h"
#include "AssemblyU2DCSharp_UltimateJoystick_UpdatePositioningOption.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DCSharp_UltimateJoystick_Axis.h"
#include "AssemblyU2DCSharp_UltimateJoystick_Boundary.h"
#include "AssemblyU2DCSharp_UltimateJoystick_DeadZoneOption.h"
#include "AssemblyU2DCSharp_UltimateJoystick_TapCountOption.h"

// UltimateJoystick
struct  UltimateJoystick_t11_266  : public MonoBehaviour_t7_106
{
	// UnityEngine.RectTransform UltimateJoystick::joystick
	RectTransform_t7_80 * ___joystick_2;
	// UnityEngine.RectTransform UltimateJoystick::joystickSizeFolder
	RectTransform_t7_80 * ___joystickSizeFolder_3;
	// UnityEngine.RectTransform UltimateJoystick::joystickBase
	RectTransform_t7_80 * ___joystickBase_4;
	// UnityEngine.RectTransform UltimateJoystick::baseTrans
	RectTransform_t7_80 * ___baseTrans_5;
	// UnityEngine.Vector2 UltimateJoystick::textureCenter
	Vector2_t7_65  ___textureCenter_6;
	// UnityEngine.Vector2 UltimateJoystick::defaultPos
	Vector2_t7_65  ___defaultPos_7;
	// UnityEngine.Vector3 UltimateJoystick::joystickCenter
	Vector3_t7_66  ___joystickCenter_8;
	// UnityEngine.UI.Image UltimateJoystick::highlightBase
	Image_t8_64 * ___highlightBase_9;
	// UnityEngine.UI.Image UltimateJoystick::highlightJoystick
	Image_t8_64 * ___highlightJoystick_10;
	// UnityEngine.UI.Image UltimateJoystick::tensionAccentUp
	Image_t8_64 * ___tensionAccentUp_11;
	// UnityEngine.UI.Image UltimateJoystick::tensionAccentDown
	Image_t8_64 * ___tensionAccentDown_12;
	// UnityEngine.UI.Image UltimateJoystick::tensionAccentLeft
	Image_t8_64 * ___tensionAccentLeft_13;
	// UnityEngine.UI.Image UltimateJoystick::tensionAccentRight
	Image_t8_64 * ___tensionAccentRight_14;
	// UltimateJoystick/ScalingAxis UltimateJoystick::scalingAxis
	int32_t ___scalingAxis_15;
	// UltimateJoystick/Anchor UltimateJoystick::anchor
	int32_t ___anchor_16;
	// UltimateJoystick/JoystickTouchSize UltimateJoystick::joystickTouchSize
	int32_t ___joystickTouchSize_17;
	// System.Single UltimateJoystick::joystickSize
	float ___joystickSize_18;
	// System.Single UltimateJoystick::radiusModifier
	float ___radiusModifier_19;
	// System.Single UltimateJoystick::radius
	float ___radius_20;
	// System.Boolean UltimateJoystick::dynamicPositioning
	bool ___dynamicPositioning_21;
	// System.Single UltimateJoystick::customTouchSize_X
	float ___customTouchSize_X_22;
	// System.Single UltimateJoystick::customTouchSize_Y
	float ___customTouchSize_Y_23;
	// System.Single UltimateJoystick::customTouchSizePos_X
	float ___customTouchSizePos_X_24;
	// System.Single UltimateJoystick::customTouchSizePos_Y
	float ___customTouchSizePos_Y_25;
	// System.Single UltimateJoystick::customSpacing_X
	float ___customSpacing_X_26;
	// System.Single UltimateJoystick::customSpacing_Y
	float ___customSpacing_Y_27;
	// UnityEngine.UI.CanvasScaler UltimateJoystick::parentScaler
	CanvasScaler_t8_139 * ___parentScaler_28;
	// UnityEngine.Vector2 UltimateJoystick::canvasSize
	Vector2_t7_65  ___canvasSize_29;
	// UltimateJoystick/UpdatePositioningOption UltimateJoystick::updatePositioningOption
	int32_t ___updatePositioningOption_30;
	// System.Boolean UltimateJoystick::touchPad
	bool ___touchPad_31;
	// System.Boolean UltimateJoystick::throwable
	bool ___throwable_32;
	// System.Boolean UltimateJoystick::draggable
	bool ___draggable_33;
	// System.Single UltimateJoystick::throwDuration
	float ___throwDuration_34;
	// System.Boolean UltimateJoystick::isThrowing
	bool ___isThrowing_35;
	// System.Boolean UltimateJoystick::showHighlight
	bool ___showHighlight_36;
	// UnityEngine.Color UltimateJoystick::highlightColor
	Color_t7_57  ___highlightColor_37;
	// System.Boolean UltimateJoystick::showTension
	bool ___showTension_38;
	// UnityEngine.Color UltimateJoystick::tensionColorNone
	Color_t7_57  ___tensionColorNone_39;
	// UnityEngine.Color UltimateJoystick::tensionColorFull
	Color_t7_57  ___tensionColorFull_40;
	// UltimateJoystick/Axis UltimateJoystick::axis
	int32_t ___axis_41;
	// UltimateJoystick/Boundary UltimateJoystick::boundary
	int32_t ___boundary_42;
	// UltimateJoystick/DeadZoneOption UltimateJoystick::deadZoneOption
	int32_t ___deadZoneOption_43;
	// System.Single UltimateJoystick::xDeadZone
	float ___xDeadZone_44;
	// System.Single UltimateJoystick::yDeadZone
	float ___yDeadZone_45;
	// UltimateJoystick/TapCountOption UltimateJoystick::tapCountOption
	int32_t ___tapCountOption_46;
	// System.Single UltimateJoystick::tapCountDuration
	float ___tapCountDuration_47;
	// UnityEngine.Events.UnityEvent UltimateJoystick::tapCountEvent
	UnityEvent_t7_320 * ___tapCountEvent_48;
	// System.Int32 UltimateJoystick::targetTapCount
	int32_t ___targetTapCount_49;
	// System.Single UltimateJoystick::currentTapTime
	float ___currentTapTime_50;
	// System.Boolean UltimateJoystick::countingDown
	bool ___countingDown_51;
	// System.Int32 UltimateJoystick::tapCount
	int32_t ___tapCount_52;
	// UnityEngine.Animator UltimateJoystick::joystickAnimator
	Animator_t7_168 * ___joystickAnimator_53;
	// System.Boolean UltimateJoystick::useAnimation
	bool ___useAnimation_54;
	// System.Boolean UltimateJoystick::useFade
	bool ___useFade_55;
	// UnityEngine.CanvasGroup UltimateJoystick::joystickGroup
	CanvasGroup_t7_187 * ___joystickGroup_56;
	// System.Single UltimateJoystick::fadeUntouched
	float ___fadeUntouched_57;
	// System.Single UltimateJoystick::fadeTouched
	float ___fadeTouched_58;
	// System.String UltimateJoystick::joystickName
	String_t* ___joystickName_59;
};
struct UltimateJoystick_t11_266_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Vector2> UltimateJoystick::JoystickPositions
	Dictionary_2_t1_1000 * ___JoystickPositions_60;
};
