#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t8_125;
// UnityEngine.UI.Image
struct Image_t8_64;
// UnityEngine.AudioClip
struct AudioClip_t7_150;
// UnityEngine.Animator
struct Animator_t7_168;
// UnityEngine.AudioSource
struct AudioSource_t7_152;
// PlayerMovement
struct PlayerMovement_t11_252;
// PlayerShooting
struct PlayerShooting_t11_253;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t7_31;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"

// PlayerHealth
struct  PlayerHealth_t11_228  : public MonoBehaviour_t7_106
{
	// System.Int32 PlayerHealth::startingHealth
	int32_t ___startingHealth_2;
	// System.Int32 PlayerHealth::currentHealth
	int32_t ___currentHealth_3;
	// System.Single PlayerHealth::invulnerabilityTime
	float ___invulnerabilityTime_4;
	// System.Single PlayerHealth::timeAfterWeLastTookDamage
	float ___timeAfterWeLastTookDamage_5;
	// UnityEngine.UI.Slider PlayerHealth::healthSliderForeground
	Slider_t8_125 * ___healthSliderForeground_6;
	// UnityEngine.UI.Slider PlayerHealth::healthSliderBackground
	Slider_t8_125 * ___healthSliderBackground_7;
	// UnityEngine.UI.Image PlayerHealth::damageImage
	Image_t8_64 * ___damageImage_8;
	// UnityEngine.AudioClip PlayerHealth::deathClip
	AudioClip_t7_150 * ___deathClip_9;
	// System.Single PlayerHealth::flashSpeed
	float ___flashSpeed_10;
	// UnityEngine.Color PlayerHealth::flashColour
	Color_t7_57  ___flashColour_11;
	// UnityEngine.Animator PlayerHealth::anim
	Animator_t7_168 * ___anim_12;
	// UnityEngine.AudioSource PlayerHealth::playerAudio
	AudioSource_t7_152 * ___playerAudio_13;
	// PlayerMovement PlayerHealth::playerMovement
	PlayerMovement_t11_252 * ___playerMovement_14;
	// PlayerShooting PlayerHealth::playerShooting
	PlayerShooting_t11_253 * ___playerShooting_15;
	// System.Boolean PlayerHealth::isDead
	bool ___isDead_16;
	// System.Boolean PlayerHealth::damaged
	bool ___damaged_17;
	// System.Single PlayerHealth::timer
	float ___timer_18;
	// UnityEngine.SkinnedMeshRenderer PlayerHealth::myRenderer
	SkinnedMeshRenderer_t7_31 * ___myRenderer_19;
	// UnityEngine.Color PlayerHealth::rimColor
	Color_t7_57  ___rimColor_20;
};
