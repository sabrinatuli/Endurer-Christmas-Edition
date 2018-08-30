#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t5_103;
// PlayerHealth
struct PlayerHealth_t11_10;
// EnemyHealth
struct EnemyHealth_t11_11;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// EnemyAttack
struct  EnemyAttack_t11_9  : public MonoBehaviour_t5_96
{
	// System.Single EnemyAttack::timeBetweenAttacks
	float ___timeBetweenAttacks_2;
	// System.Int32 EnemyAttack::attackDamage
	int32_t ___attackDamage_3;
	// UnityEngine.GameObject EnemyAttack::player
	GameObject_t5_103 * ___player_4;
	// PlayerHealth EnemyAttack::playerHealth
	PlayerHealth_t11_10 * ___playerHealth_5;
	// EnemyHealth EnemyAttack::enemyHealth
	EnemyHealth_t11_11 * ___enemyHealth_6;
	// System.Boolean EnemyAttack::playerInRange
	bool ___playerInRange_7;
	// System.Single EnemyAttack::timer
	float ___timer_8;
};
