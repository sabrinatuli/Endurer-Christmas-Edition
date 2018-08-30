#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t6_63;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t5_360;
// UnityEngine.GameObject
struct GameObject_t5_103;
// UnityEngine.Light
struct Light_t5_102;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_Pickup_PickupType.h"

// Pickup
struct  Pickup_t11_21  : public MonoBehaviour_t5_96
{
	// Pickup/PickupType Pickup::pickupType
	int32_t ___pickupType_2;
	// System.Single Pickup::rotateSpeed
	float ___rotateSpeed_3;
	// UnityEngine.UI.Text Pickup::label
	Text_t6_63 * ___label_4;
	// UnityEngine.Renderer[] Pickup::quadRenderers
	RendererU5BU5D_t5_360* ___quadRenderers_5;
	// UnityEngine.GameObject Pickup::player
	GameObject_t5_103 * ___player_6;
	// UnityEngine.GameObject Pickup::canvas
	GameObject_t5_103 * ___canvas_7;
	// UnityEngine.Light Pickup::pickupLight
	Light_t5_102 * ___pickupLight_8;
	// System.Boolean Pickup::used
	bool ___used_9;
};
