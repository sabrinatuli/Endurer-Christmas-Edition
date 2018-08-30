#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t7_113;
// PlayerHealth
struct PlayerHealth_t11_228;
// EnemyHealth
struct EnemyHealth_t11_229;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// EnemyAttack
struct  EnemyAttack_t11_227  : public MonoBehaviour_t7_106
{
	// System.Single EnemyAttack::timeBetweenAttacks
	float ___timeBetweenAttacks_2;
	// System.Int32 EnemyAttack::attackDamage
	int32_t ___attackDamage_3;
	// UnityEngine.GameObject EnemyAttack::player
	GameObject_t7_113 * ___player_4;
	// PlayerHealth EnemyAttack::playerHealth
	PlayerHealth_t11_228 * ___playerHealth_5;
	// EnemyHealth EnemyAttack::enemyHealth
	EnemyHealth_t11_229 * ___enemyHealth_6;
	// System.Boolean EnemyAttack::playerInRange
	bool ___playerInRange_7;
	// System.Single EnemyAttack::timer
	float ___timer_8;
};
