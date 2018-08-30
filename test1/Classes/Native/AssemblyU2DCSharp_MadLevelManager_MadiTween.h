#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Collections.Hashtable>
struct List_1_t1_1031;
// UnityEngine.GameObject
struct GameObject_t7_113;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1_174;
// MadLevelManager.MadiTween/EasingFunction
struct EasingFunction_t11_74;
// MadLevelManager.MadiTween/ApplyTween
struct ApplyTween_t11_210;
// UnityEngine.AudioSource
struct AudioSource_t7_152;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t7_191;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t7_334;
// UnityEngine.Color[,]
struct ColorU5BU2CU5D_t7_379;
// System.Single[]
struct SingleU5BU5D_t1_861;
// UnityEngine.Rect[]
struct RectU5BU5D_t7_380;
// MadLevelManager.MadiTween/CRSpline
struct CRSpline_t11_209;
// UnityEngine.Transform
struct Transform_t7_81;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1_79;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadiTween_EaseType.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadiTween_LoopType.h"
#include "UnityEngine_UnityEngine_Space.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadiTween_NamedValueColor.h"

// MadLevelManager.MadiTween
struct  MadiTween_t11_212  : public MonoBehaviour_t7_106
{
	// System.String MadLevelManager.MadiTween::id
	String_t* ___id_4;
	// System.String MadLevelManager.MadiTween::type
	String_t* ___type_5;
	// System.String MadLevelManager.MadiTween::method
	String_t* ___method_6;
	// MadLevelManager.MadiTween/EaseType MadLevelManager.MadiTween::easeType
	int32_t ___easeType_7;
	// System.Single MadLevelManager.MadiTween::time
	float ___time_8;
	// System.Single MadLevelManager.MadiTween::delay
	float ___delay_9;
	// MadLevelManager.MadiTween/LoopType MadLevelManager.MadiTween::loopType
	int32_t ___loopType_10;
	// System.Boolean MadLevelManager.MadiTween::isRunning
	bool ___isRunning_11;
	// System.Boolean MadLevelManager.MadiTween::isPaused
	bool ___isPaused_12;
	// System.String MadLevelManager.MadiTween::_name
	String_t* ____name_13;
	// System.Single MadLevelManager.MadiTween::runningTime
	float ___runningTime_14;
	// System.Single MadLevelManager.MadiTween::percentage
	float ___percentage_15;
	// System.Single MadLevelManager.MadiTween::delayStarted
	float ___delayStarted_16;
	// System.Boolean MadLevelManager.MadiTween::kinematic
	bool ___kinematic_17;
	// System.Boolean MadLevelManager.MadiTween::isLocal
	bool ___isLocal_18;
	// System.Boolean MadLevelManager.MadiTween::loop
	bool ___loop_19;
	// System.Boolean MadLevelManager.MadiTween::reverse
	bool ___reverse_20;
	// System.Boolean MadLevelManager.MadiTween::wasPaused
	bool ___wasPaused_21;
	// System.Boolean MadLevelManager.MadiTween::physics
	bool ___physics_22;
	// System.Collections.Hashtable MadLevelManager.MadiTween::tweenArguments
	Hashtable_t1_174 * ___tweenArguments_23;
	// UnityEngine.Space MadLevelManager.MadiTween::space
	int32_t ___space_24;
	// MadLevelManager.MadiTween/EasingFunction MadLevelManager.MadiTween::ease
	EasingFunction_t11_74 * ___ease_25;
	// MadLevelManager.MadiTween/ApplyTween MadLevelManager.MadiTween::apply
	ApplyTween_t11_210 * ___apply_26;
	// UnityEngine.AudioSource MadLevelManager.MadiTween::audioSource
	AudioSource_t7_152 * ___audioSource_27;
	// UnityEngine.Vector3[] MadLevelManager.MadiTween::vector3s
	Vector3U5BU5D_t7_191* ___vector3s_28;
	// UnityEngine.Vector2[] MadLevelManager.MadiTween::vector2s
	Vector2U5BU5D_t7_334* ___vector2s_29;
	// UnityEngine.Color[,] MadLevelManager.MadiTween::colors
	ColorU5BU2CU5D_t7_379* ___colors_30;
	// System.Single[] MadLevelManager.MadiTween::floats
	SingleU5BU5D_t1_861* ___floats_31;
	// UnityEngine.Rect[] MadLevelManager.MadiTween::rects
	RectU5BU5D_t7_380* ___rects_32;
	// MadLevelManager.MadiTween/CRSpline MadLevelManager.MadiTween::path
	CRSpline_t11_209 * ___path_33;
	// UnityEngine.Vector3 MadLevelManager.MadiTween::preUpdate
	Vector3_t7_66  ___preUpdate_34;
	// UnityEngine.Vector3 MadLevelManager.MadiTween::postUpdate
	Vector3_t7_66  ___postUpdate_35;
	// MadLevelManager.MadiTween/NamedValueColor MadLevelManager.MadiTween::namedcolorvalue
	int32_t ___namedcolorvalue_36;
	// System.Single MadLevelManager.MadiTween::lastRealTime
	float ___lastRealTime_37;
	// System.Boolean MadLevelManager.MadiTween::useRealTime
	bool ___useRealTime_38;
	// UnityEngine.Transform MadLevelManager.MadiTween::thisTransform
	Transform_t7_81 * ___thisTransform_39;
};
struct MadiTween_t11_212_StaticFields{
	// System.Collections.Generic.List`1<System.Collections.Hashtable> MadLevelManager.MadiTween::tweens
	List_1_t1_1031 * ___tweens_2;
	// UnityEngine.GameObject MadLevelManager.MadiTween::cameraFade
	GameObject_t7_113 * ___cameraFade_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MadLevelManager.MadiTween::<>f__switch$map1
	Dictionary_2_t1_79 * ___U3CU3Ef__switchU24map1_40;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MadLevelManager.MadiTween::<>f__switch$map2
	Dictionary_2_t1_79 * ___U3CU3Ef__switchU24map2_41;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MadLevelManager.MadiTween::<>f__switch$map3
	Dictionary_2_t1_79 * ___U3CU3Ef__switchU24map3_42;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MadLevelManager.MadiTween::<>f__switch$map4
	Dictionary_2_t1_79 * ___U3CU3Ef__switchU24map4_43;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MadLevelManager.MadiTween::<>f__switch$map5
	Dictionary_2_t1_79 * ___U3CU3Ef__switchU24map5_44;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MadLevelManager.MadiTween::<>f__switch$map6
	Dictionary_2_t1_79 * ___U3CU3Ef__switchU24map6_45;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MadLevelManager.MadiTween::<>f__switch$map7
	Dictionary_2_t1_79 * ___U3CU3Ef__switchU24map7_46;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MadLevelManager.MadiTween::<>f__switch$map8
	Dictionary_2_t1_79 * ___U3CU3Ef__switchU24map8_47;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MadLevelManager.MadiTween::<>f__switch$map9
	Dictionary_2_t1_79 * ___U3CU3Ef__switchU24map9_48;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MadLevelManager.MadiTween::<>f__switch$mapA
	Dictionary_2_t1_79 * ___U3CU3Ef__switchU24mapA_49;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MadLevelManager.MadiTween::<>f__switch$mapB
	Dictionary_2_t1_79 * ___U3CU3Ef__switchU24mapB_50;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MadLevelManager.MadiTween::<>f__switch$mapC
	Dictionary_2_t1_79 * ___U3CU3Ef__switchU24mapC_51;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MadLevelManager.MadiTween::<>f__switch$mapD
	Dictionary_2_t1_79 * ___U3CU3Ef__switchU24mapD_52;
};
