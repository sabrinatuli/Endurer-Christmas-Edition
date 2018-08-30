#pragma once

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

// HellephantBullet
struct  HellephantBullet_t11_28  : public MonoBehaviour_t5_96
{
	// System.Single HellephantBullet::speed
	float ___speed_2;
	// System.Single HellephantBullet::life
	float ___life_3;
	// UnityEngine.ParticleSystem HellephantBullet::normalTrailParticles
	ParticleSystem_t5_111 * ___normalTrailParticles_4;
	// UnityEngine.ParticleSystem HellephantBullet::ImpactParticles
	ParticleSystem_t5_111 * ___ImpactParticles_5;
	// System.Int32 HellephantBullet::damage
	int32_t ___damage_6;
	// UnityEngine.Color HellephantBullet::bulletColor
	Color_t5_50  ___bulletColor_7;
	// UnityEngine.AudioClip HellephantBullet::hitSound
	AudioClip_t5_137 * ___hitSound_8;
	// UnityEngine.Vector3 HellephantBullet::velocity
	Vector3_t5_58  ___velocity_9;
	// UnityEngine.Vector3 HellephantBullet::force
	Vector3_t5_58  ___force_10;
	// UnityEngine.Vector3 HellephantBullet::newPos
	Vector3_t5_58  ___newPos_11;
	// UnityEngine.Vector3 HellephantBullet::oldPos
	Vector3_t5_58  ___oldPos_12;
	// UnityEngine.Vector3 HellephantBullet::direction
	Vector3_t5_58  ___direction_13;
	// System.Boolean HellephantBullet::hasHit
	bool ___hasHit_14;
	// UnityEngine.RaycastHit HellephantBullet::lastHit
	RaycastHit_t5_122  ___lastHit_15;
	// UnityEngine.AudioSource HellephantBullet::bulletAudio
	AudioSource_t5_139 * ___bulletAudio_16;
	// System.Single HellephantBullet::timer
	float ___timer_17;
};
