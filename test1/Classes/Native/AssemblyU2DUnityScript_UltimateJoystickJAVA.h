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
#include "AssemblyU2DUnityScript_UltimateJoystickJAVA_ScalingAxis.h"
#include "AssemblyU2DUnityScript_UltimateJoystickJAVA_Anchor.h"
#include "AssemblyU2DUnityScript_UltimateJoystickJAVA_JoystickTouchSiz.h"
#include "AssemblyU2DUnityScript_UltimateJoystickJAVA_UpdatePositionin.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "AssemblyU2DUnityScript_UltimateJoystickJAVA_Axis.h"
#include "AssemblyU2DUnityScript_UltimateJoystickJAVA_Boundary.h"
#include "AssemblyU2DUnityScript_UltimateJoystickJAVA_DeadZoneOption.h"
#include "AssemblyU2DUnityScript_UltimateJoystickJAVA_TapCountOption.h"

// UltimateJoystickJAVA
struct  UltimateJoystickJAVA_t10_21  : public MonoBehaviour_t7_106
{
	// UnityEngine.RectTransform UltimateJoystickJAVA::joystick
	RectTransform_t7_80 * ___joystick_2;
	// UnityEngine.RectTransform UltimateJoystickJAVA::joystickSizeFolder
	RectTransform_t7_80 * ___joystickSizeFolder_3;
	// UnityEngine.RectTransform UltimateJoystickJAVA::joystickBase
	RectTransform_t7_80 * ___joystickBase_4;
	// UnityEngine.RectTransform UltimateJoystickJAVA::baseTrans
	RectTransform_t7_80 * ___baseTrans_5;
	// UnityEngine.Vector2 UltimateJoystickJAVA::textureCenter
	Vector2_t7_65  ___textureCenter_6;
	// UnityEngine.Vector2 UltimateJoystickJAVA::defaultPos
	Vector2_t7_65  ___defaultPos_7;
	// UnityEngine.Vector3 UltimateJoystickJAVA::joystickCenter
	Vector3_t7_66  ___joystickCenter_8;
	// UnityEngine.UI.Image UltimateJoystickJAVA::highlightBase
	Image_t8_64 * ___highlightBase_9;
	// UnityEngine.UI.Image UltimateJoystickJAVA::highlightJoystick
	Image_t8_64 * ___highlightJoystick_10;
	// UnityEngine.UI.Image UltimateJoystickJAVA::tensionAccentUp
	Image_t8_64 * ___tensionAccentUp_11;
	// UnityEngine.UI.Image UltimateJoystickJAVA::tensionAccentDown
	Image_t8_64 * ___tensionAccentDown_12;
	// UnityEngine.UI.Image UltimateJoystickJAVA::tensionAccentLeft
	Image_t8_64 * ___tensionAccentLeft_13;
	// UnityEngine.UI.Image UltimateJoystickJAVA::tensionAccentRight
	Image_t8_64 * ___tensionAccentRight_14;
	// UltimateJoystickJAVA/ScalingAxis UltimateJoystickJAVA::scalingAxis
	int32_t ___scalingAxis_15;
	// UltimateJoystickJAVA/Anchor UltimateJoystickJAVA::anchor
	int32_t ___anchor_16;
	// UltimateJoystickJAVA/JoystickTouchSize UltimateJoystickJAVA::joystickTouchSize
	int32_t ___joystickTouchSize_17;
	// System.Single UltimateJoystickJAVA::joystickSize
	float ___joystickSize_18;
	// System.Single UltimateJoystickJAVA::radiusModifier
	float ___radiusModifier_19;
	// System.Single UltimateJoystickJAVA::radius
	float ___radius_20;
	// System.Boolean UltimateJoystickJAVA::dynamicPositioning
	bool ___dynamicPositioning_21;
	// System.Single UltimateJoystickJAVA::customTouchSize_X
	float ___customTouchSize_X_22;
	// System.Single UltimateJoystickJAVA::customTouchSize_Y
	float ___customTouchSize_Y_23;
	// System.Single UltimateJoystickJAVA::customTouchSizePos_X
	float ___customTouchSizePos_X_24;
	// System.Single UltimateJoystickJAVA::customTouchSizePos_Y
	float ___customTouchSizePos_Y_25;
	// System.Single UltimateJoystickJAVA::customSpacing_X
	float ___customSpacing_X_26;
	// System.Single UltimateJoystickJAVA::customSpacing_Y
	float ___customSpacing_Y_27;
	// UltimateJoystickJAVA/UpdatePositioningOption UltimateJoystickJAVA::updatePositioningOption
	int32_t ___updatePositioningOption_28;
	// UnityEngine.UI.CanvasScaler UltimateJoystickJAVA::parentScaler
	CanvasScaler_t8_139 * ___parentScaler_29;
	// UnityEngine.Vector2 UltimateJoystickJAVA::canvasSize
	Vector2_t7_65  ___canvasSize_30;
	// System.Boolean UltimateJoystickJAVA::touchPad
	bool ___touchPad_31;
	// System.Boolean UltimateJoystickJAVA::throwable
	bool ___throwable_32;
	// System.Boolean UltimateJoystickJAVA::draggable
	bool ___draggable_33;
	// System.Single UltimateJoystickJAVA::throwDuration
	float ___throwDuration_34;
	// System.Boolean UltimateJoystickJAVA::isThrowing
	bool ___isThrowing_35;
	// System.Boolean UltimateJoystickJAVA::showHighlight
	bool ___showHighlight_36;
	// UnityEngine.Color UltimateJoystickJAVA::highlightColor
	Color_t7_57  ___highlightColor_37;
	// System.Boolean UltimateJoystickJAVA::showTension
	bool ___showTension_38;
	// UnityEngine.Color UltimateJoystickJAVA::tensionColorNone
	Color_t7_57  ___tensionColorNone_39;
	// UnityEngine.Color UltimateJoystickJAVA::tensionColorFull
	Color_t7_57  ___tensionColorFull_40;
	// UltimateJoystickJAVA/Axis UltimateJoystickJAVA::axis
	int32_t ___axis_41;
	// UltimateJoystickJAVA/Boundary UltimateJoystickJAVA::boundary
	int32_t ___boundary_42;
	// UltimateJoystickJAVA/DeadZoneOption UltimateJoystickJAVA::deadZoneOption
	int32_t ___deadZoneOption_43;
	// System.Single UltimateJoystickJAVA::xDeadZone
	float ___xDeadZone_44;
	// System.Single UltimateJoystickJAVA::yDeadZone
	float ___yDeadZone_45;
	// UltimateJoystickJAVA/TapCountOption UltimateJoystickJAVA::tapCountOption
	int32_t ___tapCountOption_46;
	// System.Single UltimateJoystickJAVA::tapCountDuration
	float ___tapCountDuration_47;
	// UnityEngine.Events.UnityEvent UltimateJoystickJAVA::tapCountEvent
	UnityEvent_t7_320 * ___tapCountEvent_48;
	// System.Int32 UltimateJoystickJAVA::targetTapCount
	int32_t ___targetTapCount_49;
	// System.Single UltimateJoystickJAVA::currentTapTime
	float ___currentTapTime_50;
	// System.Boolean UltimateJoystickJAVA::countingDown
	bool ___countingDown_51;
	// System.Int32 UltimateJoystickJAVA::tapCount
	int32_t ___tapCount_52;
	// System.Boolean UltimateJoystickJAVA::useAnimation
	bool ___useAnimation_53;
	// UnityEngine.Animator UltimateJoystickJAVA::joystickAnimator
	Animator_t7_168 * ___joystickAnimator_54;
	// System.Boolean UltimateJoystickJAVA::useFade
	bool ___useFade_55;
	// UnityEngine.CanvasGroup UltimateJoystickJAVA::joystickGroup
	CanvasGroup_t7_187 * ___joystickGroup_56;
	// System.Single UltimateJoystickJAVA::fadeUntouched
	float ___fadeUntouched_57;
	// System.Single UltimateJoystickJAVA::fadeTouched
	float ___fadeTouched_58;
	// System.String UltimateJoystickJAVA::joystickName
	String_t* ___joystickName_59;
};
struct UltimateJoystickJAVA_t10_21_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Vector2> UltimateJoystickJAVA::JoystickPositions
	Dictionary_2_t1_1000 * ___JoystickPositions_60;
};
