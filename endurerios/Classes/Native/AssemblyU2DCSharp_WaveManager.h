#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerHealth
struct PlayerHealth_t11_228;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t7_340;
// UnityEngine.UI.Text
struct Text_t8_63;
// UnityEngine.AudioSource
struct AudioSource_t7_152;
// WaveManager/Wave
struct Wave_t11_243;
// System.Collections.Generic.List`1<WaveManager/Wave>
struct List_1_t1_1035;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// WaveManager
struct  WaveManager_t11_232  : public MonoBehaviour_t7_106
{
	// PlayerHealth WaveManager::playerHealth
	PlayerHealth_t11_228 * ___playerHealth_2;
	// UnityEngine.GameObject[] WaveManager::enemies
	GameObjectU5BU5D_t7_340* ___enemies_3;
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
	Text_t8_63 * ___number_9;
	// UnityEngine.AudioSource WaveManager::backgroundAudio
	AudioSource_t7_152 * ___backgroundAudio_10;
	// System.Int32 WaveManager::enemiesAlive
	int32_t ___enemiesAlive_11;
	// UnityEngine.Vector3 WaveManager::spawnPosition
	Vector3_t7_66  ___spawnPosition_12;
	// System.Int32 WaveManager::waveNumber
	int32_t ___waveNumber_13;
	// System.Single WaveManager::timer
	float ___timer_14;
	// WaveManager/Wave WaveManager::currentWave
	Wave_t11_243 * ___currentWave_15;
	// System.Int32 WaveManager::spawnedThisWave
	int32_t ___spawnedThisWave_16;
	// System.Int32 WaveManager::totalToSpawnForWave
	int32_t ___totalToSpawnForWave_17;
	// System.Boolean WaveManager::shouldSpawn
	bool ___shouldSpawn_18;
	// System.Int32 WaveManager::difficulty
	int32_t ___difficulty_19;
	// System.Collections.Generic.List`1<WaveManager/Wave> WaveManager::waves
	List_1_t1_1035 * ___waves_20;
};
