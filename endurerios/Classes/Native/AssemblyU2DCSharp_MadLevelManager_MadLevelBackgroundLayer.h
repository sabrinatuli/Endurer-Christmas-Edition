#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t7_49;
// MadLevelManager.MadRootNode
struct MadRootNode_t11_36;
// MadLevelManager.MadLevelBackground
struct MadLevelBackground_t11_37;
// MadLevelManager.MadSprite
struct MadSprite_t11_13;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelBackgroundLayer_Sc.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelBackgroundLayer_Al.h"

// MadLevelManager.MadLevelBackgroundLayer
struct  MadLevelBackgroundLayer_t11_35  : public MonoBehaviour_t7_106
{
	// UnityEngine.Texture2D MadLevelManager.MadLevelBackgroundLayer::texture
	Texture2D_t7_49 * ___texture_3;
	// UnityEngine.Color MadLevelManager.MadLevelBackgroundLayer::tint
	Color_t7_57  ___tint_4;
	// UnityEngine.Vector2 MadLevelManager.MadLevelBackgroundLayer::scale
	Vector2_t7_65  ___scale_5;
	// MadLevelManager.MadLevelBackgroundLayer/ScaleMode MadLevelManager.MadLevelBackgroundLayer::scaleMode
	int32_t ___scaleMode_6;
	// MadLevelManager.MadLevelBackgroundLayer/Align MadLevelManager.MadLevelBackgroundLayer::align
	int32_t ___align_7;
	// System.Boolean MadLevelManager.MadLevelBackgroundLayer::repeatX
	bool ___repeatX_8;
	// System.Boolean MadLevelManager.MadLevelBackgroundLayer::repeatY
	bool ___repeatY_9;
	// System.Single MadLevelManager.MadLevelBackgroundLayer::fillMarginLeft
	float ___fillMarginLeft_10;
	// System.Single MadLevelManager.MadLevelBackgroundLayer::fillMarginTop
	float ___fillMarginTop_11;
	// System.Single MadLevelManager.MadLevelBackgroundLayer::fillMarginRight
	float ___fillMarginRight_12;
	// System.Single MadLevelManager.MadLevelBackgroundLayer::fillMarginBottom
	float ___fillMarginBottom_13;
	// System.Boolean MadLevelManager.MadLevelBackgroundLayer::dontStretch
	bool ___dontStretch_14;
	// UnityEngine.Vector2 MadLevelManager.MadLevelBackgroundLayer::position
	Vector2_t7_65  ___position_15;
	// System.Single MadLevelManager.MadLevelBackgroundLayer::followSpeed
	float ___followSpeed_16;
	// UnityEngine.Vector2 MadLevelManager.MadLevelBackgroundLayer::scrollSpeed
	Vector2_t7_65  ___scrollSpeed_17;
	// System.Boolean MadLevelManager.MadLevelBackgroundLayer::ignoreTimeScale
	bool ___ignoreTimeScale_18;
	// UnityEngine.Vector2 MadLevelManager.MadLevelBackgroundLayer::scrollAccel
	Vector2_t7_65  ___scrollAccel_19;
	// MadLevelManager.MadRootNode MadLevelManager.MadLevelBackgroundLayer::_root
	MadRootNode_t11_36 * ____root_20;
	// MadLevelManager.MadLevelBackground MadLevelManager.MadLevelBackgroundLayer::_parent
	MadLevelBackground_t11_37 * ____parent_21;
	// MadLevelManager.MadSprite MadLevelManager.MadLevelBackgroundLayer::_sprite
	MadSprite_t11_13 * ____sprite_22;
	// System.Single MadLevelManager.MadLevelBackgroundLayer::lastTime
	float ___lastTime_23;
};
