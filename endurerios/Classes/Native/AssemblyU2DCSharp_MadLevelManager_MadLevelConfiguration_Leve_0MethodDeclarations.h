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

// MadLevelManager.MadLevelConfiguration/Level
struct Level_t11_14;
// MadLevelManager.MadLevelConfiguration
struct MadLevelConfiguration_t11_48;
// MadLevelManager.MadLevelConfiguration/Group
struct Group_t11_18;
// MadLevelManager.MadLevelExtension
struct MadLevelExtension_t11_92;
// UnityEngine.AsyncOperation
struct AsyncOperation_t7_2;
struct AsyncOperation_t7_2_marshaled;
// System.Collections.Generic.List`1<MadLevelManager.MadLevelScene>
struct List_1_t1_1014;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadLevelConfiguration/Level::.ctor(MadLevelManager.MadLevelConfiguration)
extern "C" void Level__ctor_m11_523 (Level_t11_14 * __this, MadLevelConfiguration_t11_48 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Group MadLevelManager.MadLevelConfiguration/Level::get_group()
extern "C" Group_t11_18 * Level_get_group_m11_524 (Level_t11_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelConfiguration/Level::set_group(MadLevelManager.MadLevelConfiguration/Group)
extern "C" void Level_set_group_m11_525 (Level_t11_14 * __this, Group_t11_18 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelConfiguration/Level::get_hasExtension()
extern "C" bool Level_get_hasExtension_m11_526 (Level_t11_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelExtension MadLevelManager.MadLevelConfiguration/Level::get_extension()
extern "C" MadLevelExtension_t11_92 * Level_get_extension_m11_527 (Level_t11_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelConfiguration/Level::set_extension(MadLevelManager.MadLevelExtension)
extern "C" void Level_set_extension_m11_528 (Level_t11_14 * __this, MadLevelExtension_t11_92 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration/Group MadLevelManager.MadLevelConfiguration/Level::GetGroup()
extern "C" Group_t11_18 * Level_GetGroup_m11_529 (Level_t11_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelConfiguration/Level::Load()
extern "C" void Level_Load_m11_530 (Level_t11_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevelConfiguration/Level::LoadAsync()
extern "C" AsyncOperation_t7_2 * Level_LoadAsync_m11_531 (Level_t11_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelConfiguration/Level::IsValid()
extern "C" bool Level_IsValid_m11_532 (Level_t11_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelConfiguration/Level::HasDuplicatedName()
extern "C" bool Level_HasDuplicatedName_m11_533 (Level_t11_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelConfiguration/Level::GetHashCode()
extern "C" int32_t Level_GetHashCode_m11_534 (Level_t11_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MadLevelManager.MadLevelScene> MadLevelManager.MadLevelConfiguration/Level::StandaloneScenes()
extern "C" List_1_t1_1014 * Level_StandaloneScenes_m11_535 (Level_t11_14 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
