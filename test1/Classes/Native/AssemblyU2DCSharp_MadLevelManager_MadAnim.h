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
// UnityEngine.AnimationCurve
struct AnimationCurve_t7_160;
struct AnimationCurve_t7_160_marshaled;
// UnityEngine.GameObject
struct GameObject_t7_113;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadiTween_EaseType.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadAnim_WrapMode.h"

// MadLevelManager.MadAnim
struct  MadAnim_t11_71  : public MonoBehaviour_t7_106
{
	// System.String MadLevelManager.MadAnim::animationName
	String_t* ___animationName_2;
	// MadLevelManager.MadiTween/EaseType MadLevelManager.MadAnim::easing
	int32_t ___easing_3;
	// System.Boolean MadLevelManager.MadAnim::useAnimationCurve
	bool ___useAnimationCurve_4;
	// UnityEngine.AnimationCurve MadLevelManager.MadAnim::animationCurve
	AnimationCurve_t7_160 * ___animationCurve_5;
	// System.Single MadLevelManager.MadAnim::duration
	float ___duration_6;
	// System.Single MadLevelManager.MadAnim::delay
	float ___delay_7;
	// System.Single MadLevelManager.MadAnim::offset
	float ___offset_8;
	// MadLevelManager.MadAnim/WrapMode MadLevelManager.MadAnim::wrapMode
	int32_t ___wrapMode_9;
	// System.Boolean MadLevelManager.MadAnim::queue
	bool ___queue_10;
	// System.Boolean MadLevelManager.MadAnim::playOnAwake
	bool ___playOnAwake_11;
	// System.Boolean MadLevelManager.MadAnim::destroyObjectOnFinish
	bool ___destroyObjectOnFinish_12;
	// System.Boolean MadLevelManager.MadAnim::sendMessageOnFinish
	bool ___sendMessageOnFinish_13;
	// UnityEngine.GameObject MadLevelManager.MadAnim::messageReceiver
	GameObject_t7_113 * ___messageReceiver_14;
	// System.String MadLevelManager.MadAnim::messageName
	String_t* ___messageName_15;
	// System.Boolean MadLevelManager.MadAnim::playAnimationOnFinish
	bool ___playAnimationOnFinish_16;
	// System.String MadLevelManager.MadAnim::playAnimationOnFinishName
	String_t* ___playAnimationOnFinishName_17;
	// System.Boolean MadLevelManager.MadAnim::playAnimationOnFinishFromTheBeginning
	bool ___playAnimationOnFinishFromTheBeginning_18;
	// System.Boolean MadLevelManager.MadAnim::ignoreTimeScale
	bool ___ignoreTimeScale_19;
	// System.Single MadLevelManager.MadAnim::delayTime
	float ___delayTime_20;
	// System.Single MadLevelManager.MadAnim::playTime
	float ___playTime_21;
	// System.Boolean MadLevelManager.MadAnim::firstFrame
	bool ___firstFrame_22;
	// System.Boolean MadLevelManager.MadAnim::startAnimInvoked
	bool ___startAnimInvoked_23;
	// System.Boolean MadLevelManager.MadAnim::hasOrigin
	bool ___hasOrigin_24;
	// System.String MadLevelManager.MadAnim::animationQueue
	String_t* ___animationQueue_25;
	// System.Single MadLevelManager.MadAnim::lastTime
	float ___lastTime_26;
	// System.Boolean MadLevelManager.MadAnim::<isPlaying>k__BackingField
	bool ___U3CisPlayingU3Ek__BackingField_27;
	// System.Boolean MadLevelManager.MadAnim::<isDelaying>k__BackingField
	bool ___U3CisDelayingU3Ek__BackingField_28;
};
