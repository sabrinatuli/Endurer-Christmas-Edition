#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerHealth
struct PlayerHealth_t11_10;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t5_321;
// UnityEngine.UI.Text
struct Text_t6_63;
// WaveManager/Wave
struct Wave_t11_23;
// System.Collections.Generic.List`1<WaveManager/Wave>
struct List_1_t1_1006;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// WaveManager
struct  WaveManager_t11_14  : public MonoBehaviour_t5_96
{
	// PlayerHealth WaveManager::playerHealth
	PlayerHealth_t11_10 * ___playerHealth_2;
	// UnityEngine.GameObject[] WaveManager::enemies
	GameObjectU5BU5D_t5_321* ___enemies_3;
	// System.Single WaveManager::bufferDistance
	float ___bufferDistance_4;
	// System.Single WaveManager::timeBetweenWaves
	float ___timeBetweenWaves_5;
	// System.Single WaveManager::spawnTime
	float ___spawnTime_6;
	// System.Int32 WaveManager::startingWave
	int32_t ___startingWave_7;
	// System.Int32 WaveManager::startingDifficulty
	int32_t ___startingDifficulty_8;
	// UnityEngine.UI.Text WaveManager::number
	Text_t6_63 * ___number_9;
	// System.Int32 WaveManager::enemiesAlive
	int32_t ___enemiesAlive_10;
	// UnityEngine.Vector3 WaveManager::spawnPosition
	Vector3_t5_58  ___spawnPosition_11;
	// System.Int32 WaveManager::waveNumber
	int32_t ___waveNumber_12;
	// System.Single WaveManager::timer
	float ___timer_13;
	// WaveManager/Wave WaveManager::currentWave
	Wave_t11_23 * ___currentWave_14;
	// System.Int32 WaveManager::spawnedThisWave
	int32_t ___spawnedThisWave_15;
	// System.Int32 WaveManager::totalToSpawnForWave
	int32_t ___totalToSpawnForWave_16;
	// System.Boolean WaveManager::shouldSpawn
	bool ___shouldSpawn_17;
	// System.Int32 WaveManager::difficulty
	int32_t ___difficulty_18;
	// System.Collections.Generic.List`1<WaveManager/Wave> WaveManager::waves
	List_1_t1_1006 * ___waves_19;
};
