#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t7_123;
// UnityEngine.AudioClip
struct AudioClip_t7_150;
// UnityEngine.AudioSource
struct AudioSource_t7_152;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// HellephantBullet
struct  HellephantBullet_t11_248  : public MonoBehaviour_t7_106
{
	// System.Single HellephantBullet::speed
	float ___speed_2;
	// System.Single HellephantBullet::life
	float ___life_3;
	// UnityEngine.ParticleSystem HellephantBullet::normalTrailParticles
	ParticleSystem_t7_123 * ___normalTrailParticles_4;
	// UnityEngine.ParticleSystem HellephantBullet::ImpactParticles
	ParticleSystem_t7_123 * ___ImpactParticles_5;
	// System.Int32 HellephantBullet::damage
	int32_t ___damage_6;
	// UnityEngine.Color HellephantBullet::bulletColor
	Color_t7_57  ___bulletColor_7;
	// UnityEngine.AudioClip HellephantBullet::hitSound
	AudioClip_t7_150 * ___hitSound_8;
	// UnityEngine.Vector3 HellephantBullet::velocity
	Vector3_t7_66  ___velocity_9;
	// UnityEngine.Vector3 HellephantBullet::force
	Vector3_t7_66  ___force_10;
	// UnityEngine.Vector3 HellephantBullet::newPos
	Vector3_t7_66  ___newPos_11;
	// UnityEngine.Vector3 HellephantBullet::oldPos
	Vector3_t7_66  ___oldPos_12;
	// UnityEngine.Vector3 HellephantBullet::direction
	Vector3_t7_66  ___direction_13;
	// System.Boolean HellephantBullet::hasHit
	bool ___hasHit_14;
	// UnityEngine.RaycastHit HellephantBullet::lastHit
	RaycastHit_t7_135  ___lastHit_15;
	// UnityEngine.AudioSource HellephantBullet::bulletAudio
	AudioSource_t7_152 * ___bulletAudio_16;
	// System.Single HellephantBullet::timer
	float ___timer_17;
};
