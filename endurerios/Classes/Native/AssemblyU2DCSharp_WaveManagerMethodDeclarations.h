#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// WaveManager
struct WaveManager_t11_232;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// WaveManager/Wave/Entry
struct Entry_t11_242;

#include "codegen/il2cpp-codegen.h"

// System.Void WaveManager::.ctor()
extern "C" void WaveManager__ctor_m11_1741 (WaveManager_t11_232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaveManager::Start()
extern "C" void WaveManager_Start_m11_1742 (WaveManager_t11_232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaveManager::Update()
extern "C" void WaveManager_Update_m11_1743 (WaveManager_t11_232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaveManager::Pause()
extern "C" void WaveManager_Pause_m11_1744 (WaveManager_t11_232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaveManager::ShowAd()
extern "C" void WaveManager_ShowAd_m11_1745 (WaveManager_t11_232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WaveManager::StartNextWave()
extern "C" Object_t * WaveManager_StartNextWave_m11_1746 (WaveManager_t11_232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaveManager::Spawn(WaveManager/Wave/Entry)
extern "C" void WaveManager_Spawn_m11_1747 (WaveManager_t11_232 * __this, Entry_t11_242 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WaveManager::CreateWaves()
extern "C" void WaveManager_CreateWaves_m11_1748 (WaveManager_t11_232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
