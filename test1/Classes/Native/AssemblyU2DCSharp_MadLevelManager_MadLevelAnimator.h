#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MadLevelManager.MadAnimator/Action
struct Action_t11_81;
// System.Collections.Generic.List`1<MadLevelManager.MadLevelAnimator/Modifier>
struct List_1_t1_1009;
// MadLevelManager.MadLevelAnimator/Modifier/ValueGetter
struct ValueGetter_t11_97;
// MadLevelManager.MadLevelAnimator/Modifier/ValueSetter
struct ValueSetter_t11_98;

#include "AssemblyU2DCSharp_MadLevelManager_MadAnimator.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelAnimator_ApplyMeth.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// MadLevelManager.MadLevelAnimator
struct  MadLevelAnimator_t11_102  : public MadAnimator_t11_83
{
	// MadLevelManager.MadAnimator/Action MadLevelManager.MadLevelAnimator::onLevelLocked
	Action_t11_81 * ___onLevelLocked_10;
	// MadLevelManager.MadAnimator/Action MadLevelManager.MadLevelAnimator::onLevelUnlocked
	Action_t11_81 * ___onLevelUnlocked_11;
	// System.Collections.Generic.List`1<MadLevelManager.MadLevelAnimator/Modifier> MadLevelManager.MadLevelAnimator::delayModifiers
	List_1_t1_1009 * ___delayModifiers_12;
	// System.Collections.Generic.List`1<MadLevelManager.MadLevelAnimator/Modifier> MadLevelManager.MadLevelAnimator::offsetModifiers
	List_1_t1_1009 * ___offsetModifiers_13;
	// System.Boolean MadLevelManager.MadLevelAnimator::startupScaleForce
	bool ___startupScaleForce_14;
	// MadLevelManager.MadLevelAnimator/ApplyMethod MadLevelManager.MadLevelAnimator::startupPositionApplyMethod
	int32_t ___startupPositionApplyMethod_15;
	// UnityEngine.Vector3 MadLevelManager.MadLevelAnimator::startupPosition
	Vector3_t7_66  ___startupPosition_16;
	// MadLevelManager.MadLevelAnimator/ApplyMethod MadLevelManager.MadLevelAnimator::startupRotationApplyMethod
	int32_t ___startupRotationApplyMethod_17;
	// UnityEngine.Vector3 MadLevelManager.MadLevelAnimator::startupRotation
	Vector3_t7_66  ___startupRotation_18;
	// MadLevelManager.MadLevelAnimator/ApplyMethod MadLevelManager.MadLevelAnimator::startupScaleApplyMethod
	int32_t ___startupScaleApplyMethod_19;
	// UnityEngine.Vector3 MadLevelManager.MadLevelAnimator::startupScale
	Vector3_t7_66  ___startupScale_20;
	// System.Boolean MadLevelManager.MadLevelAnimator::modifiersApplied
	bool ___modifiersApplied_21;
};
struct MadLevelAnimator_t11_102_StaticFields{
	// MadLevelManager.MadLevelAnimator/Modifier/ValueGetter MadLevelManager.MadLevelAnimator::<>f__am$cacheC
	ValueGetter_t11_97 * ___U3CU3Ef__amU24cacheC_22;
	// MadLevelManager.MadLevelAnimator/Modifier/ValueSetter MadLevelManager.MadLevelAnimator::<>f__am$cacheD
	ValueSetter_t11_98 * ___U3CU3Ef__amU24cacheD_23;
	// MadLevelManager.MadLevelAnimator/Modifier/ValueGetter MadLevelManager.MadLevelAnimator::<>f__am$cacheE
	ValueGetter_t11_97 * ___U3CU3Ef__amU24cacheE_24;
	// MadLevelManager.MadLevelAnimator/Modifier/ValueSetter MadLevelManager.MadLevelAnimator::<>f__am$cacheF
	ValueSetter_t11_98 * ___U3CU3Ef__amU24cacheF_25;
};
