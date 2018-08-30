#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t5_155;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t5_121;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// BotControlScript
struct  BotControlScript_t11_35  : public MonoBehaviour_t5_96
{
	// System.Single BotControlScript::animSpeed
	float ___animSpeed_2;
	// System.Single BotControlScript::lookSmoother
	float ___lookSmoother_3;
	// UnityEngine.Animator BotControlScript::anim
	Animator_t5_155 * ___anim_4;
	// UnityEngine.AnimatorStateInfo BotControlScript::currentBaseState
	AnimatorStateInfo_t5_144  ___currentBaseState_5;
	// UnityEngine.AnimatorStateInfo BotControlScript::layer2CurrentState
	AnimatorStateInfo_t5_144  ___layer2CurrentState_6;
	// UnityEngine.CapsuleCollider BotControlScript::col
	CapsuleCollider_t5_121 * ___col_7;
};
struct BotControlScript_t11_35_StaticFields{
	// System.Int32 BotControlScript::idleState
	int32_t ___idleState_8;
	// System.Int32 BotControlScript::locoState
	int32_t ___locoState_9;
	// System.Int32 BotControlScript::jumpState
	int32_t ___jumpState_10;
	// System.Int32 BotControlScript::jumpDownState
	int32_t ___jumpDownState_11;
	// System.Int32 BotControlScript::fallState
	int32_t ___fallState_12;
	// System.Int32 BotControlScript::rollState
	int32_t ___rollState_13;
	// System.Int32 BotControlScript::waveState
	int32_t ___waveState_14;
};
