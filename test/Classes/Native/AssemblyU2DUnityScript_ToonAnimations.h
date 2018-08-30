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
// System.String[]
struct StringU5BU5D_t1_202;
// System.String
struct String_t;
// UnityEngine.GUITexture
struct GUITexture_t5_41;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ToonAnimations
struct  ToonAnimations_t10_11  : public MonoBehaviour_t5_96
{
	// UnityEngine.Animator ToonAnimations::_animator
	Animator_t5_155 * ____animator_2;
	// System.String[] ToonAnimations::_animations
	StringU5BU5D_t1_202* ____animations_3;
	// System.Boolean ToonAnimations::_crossFade
	bool ____crossFade_4;
	// System.Int32 ToonAnimations::maxButtons
	int32_t ___maxButtons_5;
	// System.String ToonAnimations::removeTextFromButton
	String_t* ___removeTextFromButton_6;
	// System.Single ToonAnimations::autoChangeDelay
	float ___autoChangeDelay_7;
	// UnityEngine.GUITexture ToonAnimations::image
	GUITexture_t5_41 * ___image_8;
	// System.String ToonAnimations::_lastAnim
	String_t* ____lastAnim_9;
	// System.Int32 ToonAnimations::page
	int32_t ___page_10;
	// System.Int32 ToonAnimations::pages
	int32_t ___pages_11;
	// System.Boolean ToonAnimations::_active
	bool ____active_12;
	// System.Int32 ToonAnimations::counter
	int32_t ___counter_13;
};
