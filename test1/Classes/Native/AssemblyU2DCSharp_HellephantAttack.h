﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t7_113;
// UnityEngine.AudioClip
struct AudioClip_t7_150;
// EnemyHealth
struct EnemyHealth_t11_229;
// UnityEngine.Animator
struct Animator_t7_168;
// HellephantMovement
struct HellephantMovement_t11_237;
// UnityEngine.AudioSource
struct AudioSource_t7_152;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// HellephantAttack
struct  HellephantAttack_t11_236  : public MonoBehaviour_t7_106
{
	// System.Single HellephantAttack::timeBetweenAttacks
	float ___timeBetweenAttacks_2;
	// System.Int32 HellephantAttack::bulletsPerVolley
	int32_t ___bulletsPerVolley_3;
	// System.Single HellephantAttack::timeBetweenBullets
	float ___timeBetweenBullets_4;
	// System.Int32 HellephantAttack::numberOfBullets
	int32_t ___numberOfBullets_5;
	// System.Single HellephantAttack::angleBetweenBullets
	float ___angleBetweenBullets_6;
	// UnityEngine.GameObject HellephantAttack::bullet
	GameObject_t7_113 * ___bullet_7;
	// System.Int32 HellephantAttack::attacksPerSpecialAttack
	int32_t ___attacksPerSpecialAttack_8;
	// UnityEngine.AudioClip HellephantAttack::shootClip
	AudioClip_t7_150 * ___shootClip_9;
	// UnityEngine.AudioClip HellephantAttack::specialClip
	AudioClip_t7_150 * ___specialClip_10;
	// UnityEngine.GameObject HellephantAttack::player
	GameObject_t7_113 * ___player_11;
	// EnemyHealth HellephantAttack::enemyHealth
	EnemyHealth_t11_229 * ___enemyHealth_12;
	// System.Boolean HellephantAttack::playerInRange
	bool ___playerInRange_13;
	// UnityEngine.Animator HellephantAttack::anim
	Animator_t7_168 * ___anim_14;
	// System.Single HellephantAttack::attackTimer
	float ___attackTimer_15;
	// System.Single HellephantAttack::bulletTimer
	float ___bulletTimer_16;
	// System.Int32 HellephantAttack::attackCount
	int32_t ___attackCount_17;
	// System.Int32 HellephantAttack::bulletCount
	int32_t ___bulletCount_18;
	// HellephantMovement HellephantAttack::helleMovement
	HellephantMovement_t11_237 * ___helleMovement_19;
	// System.Single HellephantAttack::floatHeight
	float ___floatHeight_20;
	// System.Single HellephantAttack::landingTime
	float ___landingTime_21;
	// System.Boolean HellephantAttack::usedSpecial
	bool ___usedSpecial_22;
	// System.Boolean HellephantAttack::landed
	bool ___landed_23;
	// UnityEngine.AudioSource HellephantAttack::enemyAudio
	AudioSource_t7_152 * ___enemyAudio_24;
};