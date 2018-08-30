#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pickup
struct Pickup_t11_21;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// PickupManager
struct  PickupManager_t11_16  : public MonoBehaviour_t5_96
{
	// System.Int32 PickupManager::scoreNeededForExtraBullet
	int32_t ___scoreNeededForExtraBullet_2;
	// System.Int32 PickupManager::extraScoreNeededAfterEachPickup
	int32_t ___extraScoreNeededAfterEachPickup_3;
	// Pickup PickupManager::healthPickup
	Pickup_t11_21 * ___healthPickup_4;
	// Pickup PickupManager::bouncePickup
	Pickup_t11_21 * ___bouncePickup_5;
	// Pickup PickupManager::piercePickup
	Pickup_t11_21 * ___piercePickup_6;
	// Pickup PickupManager::bulletPickup
	Pickup_t11_21 * ___bulletPickup_7;
};
