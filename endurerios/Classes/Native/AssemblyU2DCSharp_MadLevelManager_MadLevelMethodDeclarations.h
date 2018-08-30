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

// MadLevelManager.MadLevel
struct MadLevel_t11_91;
// System.String
struct String_t;
// MadLevelManager.MadLevelConfiguration
struct MadLevelConfiguration_t11_48;
// MadLevelManager.MadLevelExtension
struct MadLevelExtension_t11_92;
// UnityEngine.AsyncOperation
struct AsyncOperation_t7_2;
struct AsyncOperation_t7_2_marshaled;
// System.String[]
struct StringU5BU5D_t1_202;
// MadLevelManager.MadLevel/LevelPredicate
struct LevelPredicate_t11_86;
// MadLevelManager.MadLevelConfiguration/Level
struct Level_t11_14;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevel_Type.h"

// System.Void MadLevelManager.MadLevel::.ctor()
extern "C" void MadLevel__ctor_m11_356 (MadLevel_t11_91 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::.cctor()
extern "C" void MadLevel__cctor_m11_357 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::get_extensionDefined()
extern "C" bool MadLevel_get_extensionDefined_m11_358 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::set_extensionDefined(System.Boolean)
extern "C" void MadLevel_set_extensionDefined_m11_359 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::get_defaultGroupName()
extern "C" String_t* MadLevel_get_defaultGroupName_m11_360 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelConfiguration MadLevelManager.MadLevel::get_activeConfiguration()
extern "C" MadLevelConfiguration_t11_48 * MadLevel_get_activeConfiguration_m11_361 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::get_hasActiveConfiguration()
extern "C" bool MadLevel_get_hasActiveConfiguration_m11_362 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::get_arguments()
extern "C" String_t* MadLevel_get_arguments_m11_363 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::set_arguments(System.String)
extern "C" void MadLevel_set_arguments_m11_364 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::get_currentLevelName()
extern "C" String_t* MadLevel_get_currentLevelName_m11_365 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::set_currentLevelName(System.String)
extern "C" void MadLevel_set_currentLevelName_m11_366 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::get_currentGroupName()
extern "C" String_t* MadLevel_get_currentGroupName_m11_367 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::get_hasExtension()
extern "C" bool MadLevel_get_hasExtension_m11_368 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelExtension MadLevelManager.MadLevel::get_currentExtension()
extern "C" MadLevelExtension_t11_92 * MadLevel_get_currentExtension_m11_369 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::set_currentExtension(MadLevelManager.MadLevelExtension)
extern "C" void MadLevel_set_currentExtension_m11_370 (Object_t * __this /* static, unused */, MadLevelExtension_t11_92 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevel::get_currentExtensionProgress()
extern "C" int32_t MadLevel_get_currentExtensionProgress_m11_371 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::set_currentExtensionProgress(System.Int32)
extern "C" void MadLevel_set_currentExtensionProgress_m11_372 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::FindCurrentSceneLevel()
extern "C" void MadLevel_FindCurrentSceneLevel_m11_373 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::get_lastLevelName()
extern "C" String_t* MadLevel_get_lastLevelName_m11_374 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::set_lastLevelName(System.String)
extern "C" void MadLevel_set_lastLevelName_m11_375 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::get_lastPlayedLevelName()
extern "C" String_t* MadLevel_get_lastPlayedLevelName_m11_376 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::set_lastPlayedLevelName(System.String)
extern "C" void MadLevel_set_lastPlayedLevelName_m11_377 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::ReloadCurrent()
extern "C" void MadLevel_ReloadCurrent_m11_378 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::ReloadCurrentAsync()
extern "C" AsyncOperation_t7_2 * MadLevel_ReloadCurrentAsync_m11_379 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::LoadLevelByName(System.String)
extern "C" void MadLevel_LoadLevelByName_m11_380 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::LoadLevelByNameAsync(System.String)
extern "C" AsyncOperation_t7_2 * MadLevel_LoadLevelByNameAsync_m11_381 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::CanStreamedLevelBeLoaded(System.String)
extern "C" bool MadLevel_CanStreamedLevelBeLoaded_m11_382 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadLevel::GetStreamProgressForLevel(System.String)
extern "C" float MadLevel_GetStreamProgressForLevel_m11_383 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::HasNext()
extern "C" bool MadLevel_HasNext_m11_384 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::HasNextInGroup()
extern "C" bool MadLevel_HasNextInGroup_m11_385 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::HasNext(MadLevelManager.MadLevel/Type)
extern "C" bool MadLevel_HasNext_m11_386 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::HasNextInGroup(MadLevelManager.MadLevel/Type)
extern "C" bool MadLevel_HasNextInGroup_m11_387 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::LoadNext()
extern "C" void MadLevel_LoadNext_m11_388 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::LoadNextInGroup()
extern "C" void MadLevel_LoadNextInGroup_m11_389 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::LoadNextAsync()
extern "C" AsyncOperation_t7_2 * MadLevel_LoadNextAsync_m11_390 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::LoadNextInGroupAsync()
extern "C" AsyncOperation_t7_2 * MadLevel_LoadNextInGroupAsync_m11_391 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::LoadNext(MadLevelManager.MadLevel/Type)
extern "C" void MadLevel_LoadNext_m11_392 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::LoadNextInGroup(MadLevelManager.MadLevel/Type)
extern "C" void MadLevel_LoadNextInGroup_m11_393 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::LoadNextAsync(MadLevelManager.MadLevel/Type)
extern "C" AsyncOperation_t7_2 * MadLevel_LoadNextAsync_m11_394 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::LoadNextInGroupAsync(MadLevelManager.MadLevel/Type)
extern "C" AsyncOperation_t7_2 * MadLevel_LoadNextInGroupAsync_m11_395 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::HasPrevious()
extern "C" bool MadLevel_HasPrevious_m11_396 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::HasPreviousInGroup()
extern "C" bool MadLevel_HasPreviousInGroup_m11_397 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::HasPrevious(MadLevelManager.MadLevel/Type)
extern "C" bool MadLevel_HasPrevious_m11_398 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::HasPreviousInGroup(MadLevelManager.MadLevel/Type)
extern "C" bool MadLevel_HasPreviousInGroup_m11_399 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::LoadPrevious()
extern "C" void MadLevel_LoadPrevious_m11_400 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::LoadPreviousInGroup()
extern "C" void MadLevel_LoadPreviousInGroup_m11_401 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::LoadPreviousAsync()
extern "C" AsyncOperation_t7_2 * MadLevel_LoadPreviousAsync_m11_402 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::LoadPreviousInGroupAsync()
extern "C" AsyncOperation_t7_2 * MadLevel_LoadPreviousInGroupAsync_m11_403 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::LoadPrevious(MadLevelManager.MadLevel/Type)
extern "C" void MadLevel_LoadPrevious_m11_404 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::LoadPreviousInGroup(MadLevelManager.MadLevel/Type)
extern "C" void MadLevel_LoadPreviousInGroup_m11_405 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::LoadPreviousAsync(MadLevelManager.MadLevel/Type)
extern "C" AsyncOperation_t7_2 * MadLevel_LoadPreviousAsync_m11_406 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::LoadPreviousInGroupAsync(MadLevelManager.MadLevel/Type)
extern "C" AsyncOperation_t7_2 * MadLevel_LoadPreviousInGroupAsync_m11_407 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::HasFirst()
extern "C" bool MadLevel_HasFirst_m11_408 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::HasFirstInGroup()
extern "C" bool MadLevel_HasFirstInGroup_m11_409 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::HasFirstInGroup(System.String)
extern "C" bool MadLevel_HasFirstInGroup_m11_410 (Object_t * __this /* static, unused */, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::HasFirst(MadLevelManager.MadLevel/Type)
extern "C" bool MadLevel_HasFirst_m11_411 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::HasFirstInGroup(MadLevelManager.MadLevel/Type)
extern "C" bool MadLevel_HasFirstInGroup_m11_412 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::HasFirstInGroup(MadLevelManager.MadLevel/Type,System.String)
extern "C" bool MadLevel_HasFirstInGroup_m11_413 (Object_t * __this /* static, unused */, int32_t ___levelType, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::LoadFirst()
extern "C" void MadLevel_LoadFirst_m11_414 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::LoadFirstInGroup()
extern "C" void MadLevel_LoadFirstInGroup_m11_415 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::LoadFirstInGroup(System.String)
extern "C" void MadLevel_LoadFirstInGroup_m11_416 (Object_t * __this /* static, unused */, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::LoadFirstAsync()
extern "C" AsyncOperation_t7_2 * MadLevel_LoadFirstAsync_m11_417 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::LoadFirstInGroupAsync()
extern "C" AsyncOperation_t7_2 * MadLevel_LoadFirstInGroupAsync_m11_418 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::LoadFirstInGroupAsync(System.String)
extern "C" AsyncOperation_t7_2 * MadLevel_LoadFirstInGroupAsync_m11_419 (Object_t * __this /* static, unused */, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::LoadFirst(MadLevelManager.MadLevel/Type)
extern "C" void MadLevel_LoadFirst_m11_420 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::LoadFirstInGroup(MadLevelManager.MadLevel/Type)
extern "C" void MadLevel_LoadFirstInGroup_m11_421 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::LoadFirstInGroup(MadLevelManager.MadLevel/Type,System.String)
extern "C" void MadLevel_LoadFirstInGroup_m11_422 (Object_t * __this /* static, unused */, int32_t ___levelType, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::LoadFirstAsync(MadLevelManager.MadLevel/Type)
extern "C" AsyncOperation_t7_2 * MadLevel_LoadFirstAsync_m11_423 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::LoadFirstInGroupAsync(MadLevelManager.MadLevel/Type)
extern "C" AsyncOperation_t7_2 * MadLevel_LoadFirstInGroupAsync_m11_424 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::LoadFirstInGroupAsync(MadLevelManager.MadLevel/Type,System.String)
extern "C" AsyncOperation_t7_2 * MadLevel_LoadFirstInGroupAsync_m11_425 (Object_t * __this /* static, unused */, int32_t ___levelType, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::CanContinue()
extern "C" bool MadLevel_CanContinue_m11_426 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::Continue()
extern "C" void MadLevel_Continue_m11_427 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::ContinueAsync()
extern "C" AsyncOperation_t7_2 * MadLevel_ContinueAsync_m11_428 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] MadLevelManager.MadLevel::GetAllLevelNames(System.String)
extern "C" StringU5BU5D_t1_202* MadLevel_GetAllLevelNames_m11_429 (Object_t * __this /* static, unused */, String_t* ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] MadLevelManager.MadLevel::GetAllLevelNames(MadLevelManager.MadLevel/Type,System.String)
extern "C" StringU5BU5D_t1_202* MadLevel_GetAllLevelNames_m11_430 (Object_t * __this /* static, unused */, int32_t ___type, String_t* ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindFirstCompletedLevelName()
extern "C" String_t* MadLevel_FindFirstCompletedLevelName_m11_431 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindFirstCompletedLevelName(System.String)
extern "C" String_t* MadLevel_FindFirstCompletedLevelName_m11_432 (Object_t * __this /* static, unused */, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindLastCompletedLevelName()
extern "C" String_t* MadLevel_FindLastCompletedLevelName_m11_433 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindLastCompletedLevelName(System.String)
extern "C" String_t* MadLevel_FindLastCompletedLevelName_m11_434 (Object_t * __this /* static, unused */, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindFirstLockedLevelName()
extern "C" String_t* MadLevel_FindFirstLockedLevelName_m11_435 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindFirstLockedLevelName(System.String)
extern "C" String_t* MadLevel_FindFirstLockedLevelName_m11_436 (Object_t * __this /* static, unused */, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindLastLockedLevelName()
extern "C" String_t* MadLevel_FindLastLockedLevelName_m11_437 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindLastLockedLevelName(System.String)
extern "C" String_t* MadLevel_FindLastLockedLevelName_m11_438 (Object_t * __this /* static, unused */, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindFirstUnlockedLevelName()
extern "C" String_t* MadLevel_FindFirstUnlockedLevelName_m11_439 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindFirstUnlockedLevelName(System.String)
extern "C" String_t* MadLevel_FindFirstUnlockedLevelName_m11_440 (Object_t * __this /* static, unused */, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindLastUnlockedLevelName()
extern "C" String_t* MadLevel_FindLastUnlockedLevelName_m11_441 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindLastUnlockedLevelName(System.String)
extern "C" String_t* MadLevel_FindLastUnlockedLevelName_m11_442 (Object_t * __this /* static, unused */, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::LayoutUninitializedCheck()
extern "C" void MadLevel_LayoutUninitializedCheck_m11_443 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindFirstLevelName(System.String,MadLevelManager.MadLevel/LevelPredicate)
extern "C" String_t* MadLevel_FindFirstLevelName_m11_444 (Object_t * __this /* static, unused */, String_t* ___groupName, LevelPredicate_t11_86 * ___predicate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindFirstLevelName(MadLevelManager.MadLevel/LevelPredicate)
extern "C" String_t* MadLevel_FindFirstLevelName_m11_445 (Object_t * __this /* static, unused */, LevelPredicate_t11_86 * ___predicate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindFirstLevelName(MadLevelManager.MadLevel/Type,System.String)
extern "C" String_t* MadLevel_FindFirstLevelName_m11_446 (Object_t * __this /* static, unused */, int32_t ___levelType, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindFirstLevelName(MadLevelManager.MadLevel/Type)
extern "C" String_t* MadLevel_FindFirstLevelName_m11_447 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindLastLevelName(System.String,MadLevelManager.MadLevel/LevelPredicate)
extern "C" String_t* MadLevel_FindLastLevelName_m11_448 (Object_t * __this /* static, unused */, String_t* ___groupName, LevelPredicate_t11_86 * ___predicate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindLastLevelName(MadLevelManager.MadLevel/LevelPredicate)
extern "C" String_t* MadLevel_FindLastLevelName_m11_449 (Object_t * __this /* static, unused */, LevelPredicate_t11_86 * ___predicate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindLastLevelName(MadLevelManager.MadLevel/Type,System.String)
extern "C" String_t* MadLevel_FindLastLevelName_m11_450 (Object_t * __this /* static, unused */, int32_t ___levelType, String_t* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::FindLastLevelName(MadLevelManager.MadLevel/Type)
extern "C" String_t* MadLevel_FindLastLevelName_m11_451 (Object_t * __this /* static, unused */, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::GetPreviousLevelName()
extern "C" String_t* MadLevel_GetPreviousLevelName_m11_452 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::GetPreviousLevelName(MadLevelManager.MadLevel/Type)
extern "C" String_t* MadLevel_GetPreviousLevelName_m11_453 (Object_t * __this /* static, unused */, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::GetPreviousLevelNameTo(System.String)
extern "C" String_t* MadLevel_GetPreviousLevelNameTo_m11_454 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::GetPreviousLevelNameTo(System.String,MadLevelManager.MadLevel/Type)
extern "C" String_t* MadLevel_GetPreviousLevelNameTo_m11_455 (Object_t * __this /* static, unused */, String_t* ___levelName, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::GetNextLevelName()
extern "C" String_t* MadLevel_GetNextLevelName_m11_456 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::GetNextLevelName(MadLevelManager.MadLevel/Type)
extern "C" String_t* MadLevel_GetNextLevelName_m11_457 (Object_t * __this /* static, unused */, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::GetNextLevelNameTo(System.String)
extern "C" String_t* MadLevel_GetNextLevelNameTo_m11_458 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevel::GetNextLevelNameTo(System.String,MadLevelManager.MadLevel/Type)
extern "C" String_t* MadLevel_GetNextLevelNameTo_m11_459 (Object_t * __this /* static, unused */, String_t* ___levelName, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevel::GetOrdeal(System.String,MadLevelManager.MadLevel/Type)
extern "C" int32_t MadLevel_GetOrdeal_m11_460 (Object_t * __this /* static, unused */, String_t* ___levelName, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::CheckLevelExists(System.String)
extern "C" void MadLevel_CheckLevelExists_m11_461 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::CheckLevelLoading()
extern "C" bool MadLevel_CheckLevelLoading_m11_462 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::CheckHasConfiguration()
extern "C" void MadLevel_CheckHasConfiguration_m11_463 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevel::LoadLevel(MadLevelManager.MadLevelConfiguration/Level)
extern "C" void MadLevel_LoadLevel_m11_464 (Object_t * __this /* static, unused */, Level_t11_14 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation MadLevelManager.MadLevel::LoadLevelAsync(MadLevelManager.MadLevelConfiguration/Level)
extern "C" AsyncOperation_t7_2 * MadLevel_LoadLevelAsync_m11_465 (Object_t * __this /* static, unused */, Level_t11_14 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::<FindFirstCompletedLevelName>m__2C(MadLevelManager.MadLevelConfiguration/Level)
extern "C" bool MadLevel_U3CFindFirstCompletedLevelNameU3Em__2C_m11_466 (Object_t * __this /* static, unused */, Level_t11_14 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::<FindLastCompletedLevelName>m__2D(MadLevelManager.MadLevelConfiguration/Level)
extern "C" bool MadLevel_U3CFindLastCompletedLevelNameU3Em__2D_m11_467 (Object_t * __this /* static, unused */, Level_t11_14 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::<FindFirstLockedLevelName>m__2E(MadLevelManager.MadLevelConfiguration/Level)
extern "C" bool MadLevel_U3CFindFirstLockedLevelNameU3Em__2E_m11_468 (Object_t * __this /* static, unused */, Level_t11_14 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::<FindLastLockedLevelName>m__2F(MadLevelManager.MadLevelConfiguration/Level)
extern "C" bool MadLevel_U3CFindLastLockedLevelNameU3Em__2F_m11_469 (Object_t * __this /* static, unused */, Level_t11_14 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::<FindFirstUnlockedLevelName>m__30(MadLevelManager.MadLevelConfiguration/Level)
extern "C" bool MadLevel_U3CFindFirstUnlockedLevelNameU3Em__30_m11_470 (Object_t * __this /* static, unused */, Level_t11_14 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevel::<FindLastUnlockedLevelName>m__31(MadLevelManager.MadLevelConfiguration/Level)
extern "C" bool MadLevel_U3CFindLastUnlockedLevelNameU3Em__31_m11_471 (Object_t * __this /* static, unused */, Level_t11_14 * ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
