﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t5_111;
// UnityEngine.AudioClip
struct AudioClip_t5_137;
// UnityEngine.AudioSource
struct AudioSource_t5_139;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// Bullet
struct  Bullet_t11_25  : public MonoBehaviour_t5_96
{
	// System.Single Bullet::speed
	float ___speed_2;
	// System.Single Bullet::life
	float ___life_3;
	// UnityEngine.ParticleSystem Bullet::normalTrailParticles
	ParticleSystem_t5_111 * ___normalTrailParticles_4;
	// UnityEngine.ParticleSystem Bullet::bounceTrailParticles
	ParticleSystem_t5_111 * ___bounceTrailParticles_5;
	// UnityEngine.ParticleSystem Bullet::pierceTrailParticles
	ParticleSystem_t5_111 * ___pierceTrailParticles_6;
	// UnityEngine.ParticleSystem Bullet::ImpactParticles
	ParticleSystem_t5_111 * ___ImpactParticles_7;
	// System.Int32 Bullet::damage
	int32_t ___damage_8;
	// System.Boolean Bullet::piercing
	bool ___piercing_9;
	// System.Boolean Bullet::bounce
	bool ___bounce_10;
	// UnityEngine.Color Bullet::bulletColor
	Color_t5_50  ___bulletColor_11;
	// UnityEngine.AudioClip Bullet::bounceSound
	AudioClip_t5_137 * ___bounceSound_12;
	// UnityEngine.AudioClip Bullet::hitSound
	AudioClip_t5_137 * ___hitSound_13;
	// UnityEngine.Vector3 Bullet::velocity
	Vector3_t5_58  ___velocity_14;
	// UnityEngine.Vector3 Bullet::force
	Vector3_t5_58  ___force_15;
	// UnityEngine.Vector3 Bullet::newPos
	Vector3_t5_58  ___newPos_16;
	// UnityEngine.Vector3 Bullet::oldPos
	Vector3_t5_58  ___oldPos_17;
	// UnityEngine.Vector3 Bullet::direction
	Vector3_t5_58  ___direction_18;
	// System.Boolean Bullet::hasHit
	bool ___hasHit_19;
	// UnityEngine.RaycastHit Bullet::lastHit
	RaycastHit_t5_122  ___lastHit_20;
	// UnityEngine.AudioSource Bullet::bulletAudio
	AudioSource_t5_139 * ___bulletAudio_21;
	// System.Single Bullet::timer
	float ___timer_22;
};
