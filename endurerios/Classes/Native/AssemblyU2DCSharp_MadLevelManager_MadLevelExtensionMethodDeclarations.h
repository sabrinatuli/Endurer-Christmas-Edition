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

// MadLevelManager.MadLevelExtension
struct MadLevelExtension_t11_92;
// System.String
struct String_t;
// MadLevelManager.MadLevelConfiguration/Level
struct Level_t11_14;
// UnityEngine.AsyncOperation
struct AsyncOperation_t7_2;
struct AsyncOperation_t7_2_marshaled;
// MadLevelManager.MadLevelScene
struct MadLevelScene_t11_105;
// System.Collections.Generic.List`1<MadLevelManager.MadLevelScene>
struct List_1_t1_1014;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadLevelExtension::.ctor(System.String)
extern "C" void MadLevelExtension__ctor_m11_640 (MadLevelExtension_t11_92 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelExtension::Load(MadLevelManager.MadLevelConfiguration/Level)
extern "C" void MadLevelExtension_Load_m11_641 (MadLevelExtension_t11_92 * __this, Level_t11_14 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevelExtension::LoadAsync(MadLevelManager.MadLevelConfiguration/Level)
extern "C" AsyncOperation_t7_2 * MadLevelExtension_LoadAsync_m11_642 (MadLevelExtension_t11_92 * __this, Level_t11_14 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelExtension::Continue(MadLevelManager.MadLevelScene,System.Int32)
extern "C" void MadLevelExtension_Continue_m11_643 (MadLevelExtension_t11_92 * __this, MadLevelScene_t11_105 * ___currentLevel, int32_t ___progress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevelExtension::ContinueAsync(MadLevelManager.MadLevelScene,System.Int32)
extern "C" AsyncOperation_t7_2 * MadLevelExtension_ContinueAsync_m11_644 (MadLevelExtension_t11_92 * __this, MadLevelScene_t11_105 * ___currentLevel, int32_t ___progress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelExtension::CheckCanContinue(MadLevelManager.MadLevelScene,System.Int32)
extern "C" bool MadLevelExtension_CheckCanContinue_m11_645 (MadLevelExtension_t11_92 * __this, MadLevelScene_t11_105 * ___currentLevel, int32_t ___progress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelExtension::CanContinue(MadLevelManager.MadLevelScene,System.Int32)
extern "C" bool MadLevelExtension_CanContinue_m11_646 (MadLevelExtension_t11_92 * __this, MadLevelScene_t11_105 * ___currentLevel, int32_t ___progress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MadLevelManager.MadLevelScene> MadLevelManager.MadLevelExtension::ScenesInOrder(MadLevelManager.MadLevelScene)
extern "C" List_1_t1_1014 * MadLevelExtension_ScenesInOrder_m11_647 (MadLevelExtension_t11_92 * __this, MadLevelScene_t11_105 * ___currentLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelExtension::IsValid()
extern "C" bool MadLevelExtension_IsValid_m11_648 (MadLevelExtension_t11_92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
