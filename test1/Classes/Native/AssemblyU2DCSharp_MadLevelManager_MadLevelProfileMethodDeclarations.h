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

// MadLevelManager.MadLevelProfile
struct MadLevelProfile_t11_135;
// MadLevelManager.IMadLevelProfileBackend
struct IMadLevelProfileBackend_t11_136;
// MadLevelManager.MadLevelProfile/Level
struct Level_t11_130;
// System.Collections.Generic.Dictionary`2<System.String,MadLevelManager.MadLevelProfile/Level>
struct Dictionary_2_t1_1017;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1_202;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1_827;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadLevelProfile::.ctor()
extern "C" void MadLevelProfile__ctor_m11_750 (MadLevelProfile_t11_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.IMadLevelProfileBackend MadLevelManager.MadLevelProfile::get_backend()
extern "C" Object_t * MadLevelProfile_get_backend_m11_751 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::set_backend(MadLevelManager.IMadLevelProfileBackend)
extern "C" void MadLevelProfile_set_backend_m11_752 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelProfile/Level MadLevelManager.MadLevelProfile::get_profileLevel()
extern "C" Level_t11_130 * MadLevelProfile_get_profileLevel_m11_753 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,MadLevelManager.MadLevelProfile/Level> MadLevelManager.MadLevelProfile::get_levels()
extern "C" Dictionary_2_t1_1017 * MadLevelProfile_get_levels_m11_754 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::LoadProfileFromString(System.String)
extern "C" void MadLevelProfile_LoadProfileFromString_m11_755 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::Init()
extern "C" void MadLevelProfile_Init_m11_756 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::Reload()
extern "C" void MadLevelProfile_Reload_m11_757 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::LoadProfile()
extern "C" void MadLevelProfile_LoadProfile_m11_758 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile::SaveProfileToString()
extern "C" String_t* MadLevelProfile_SaveProfileToString_m11_759 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::WriteProfile()
extern "C" void MadLevelProfile_WriteProfile_m11_760 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::EraseProfileData()
extern "C" void MadLevelProfile_EraseProfileData_m11_761 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile::get_profile()
extern "C" String_t* MadLevelProfile_get_profile_m11_762 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::set_profile(System.String)
extern "C" void MadLevelProfile_set_profile_m11_763 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::RegisterProfile(System.String)
extern "C" void MadLevelProfile_RegisterProfile_m11_764 (Object_t * __this /* static, unused */, String_t* ___profileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::UnregisterProfile(System.String)
extern "C" void MadLevelProfile_UnregisterProfile_m11_765 (Object_t * __this /* static, unused */, String_t* ___profileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] MadLevelManager.MadLevelProfile::get_profileList()
extern "C" StringU5BU5D_t1_202* MadLevelProfile_get_profileList_m11_766 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::set_profileList(System.String[])
extern "C" void MadLevelProfile_set_profileList_m11_767 (Object_t * __this /* static, unused */, StringU5BU5D_t1_202* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile::get_recentLevelSelected()
extern "C" String_t* MadLevelProfile_get_recentLevelSelected_m11_768 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::set_recentLevelSelected(System.String)
extern "C" void MadLevelProfile_set_recentLevelSelected_m11_769 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> MadLevelManager.MadLevelProfile::GetLevelNames()
extern "C" List_1_t1_827 * MadLevelProfile_GetLevelNames_m11_770 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> MadLevelManager.MadLevelProfile::GetLevelPropertyNames(System.String)
extern "C" List_1_t1_827 * MadLevelProfile_GetLevelPropertyNames_m11_771 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> MadLevelManager.MadLevelProfile::GetProfilePropertyNames()
extern "C" List_1_t1_827 * MadLevelProfile_GetProfilePropertyNames_m11_772 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile::GetLevelAny(System.String,System.String)
extern "C" String_t* MadLevelProfile_GetLevelAny_m11_773 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile::GetLevelAny(System.String,System.String,System.String)
extern "C" String_t* MadLevelProfile_GetLevelAny_m11_774 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, String_t* ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile::GetProfileAny(System.String)
extern "C" String_t* MadLevelProfile_GetProfileAny_m11_775 (Object_t * __this /* static, unused */, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile::GetLevelBoolean(System.String,System.String)
extern "C" bool MadLevelProfile_GetLevelBoolean_m11_776 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile::GetLevelBoolean(System.String,System.String,System.Boolean)
extern "C" bool MadLevelProfile_GetLevelBoolean_m11_777 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, bool ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::SetLevelBoolean(System.String,System.String,System.Boolean)
extern "C" void MadLevelProfile_SetLevelBoolean_m11_778 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::SetProfileBoolean(System.String,System.Boolean)
extern "C" void MadLevelProfile_SetProfileBoolean_m11_779 (Object_t * __this /* static, unused */, String_t* ___property, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile::GetProfileBoolean(System.String)
extern "C" bool MadLevelProfile_GetProfileBoolean_m11_780 (Object_t * __this /* static, unused */, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile::GetProfileBoolean(System.String,System.Boolean)
extern "C" bool MadLevelProfile_GetProfileBoolean_m11_781 (Object_t * __this /* static, unused */, String_t* ___property, bool ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelProfile::GetLevelInteger(System.String,System.String)
extern "C" int32_t MadLevelProfile_GetLevelInteger_m11_782 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelProfile::GetLevelInteger(System.String,System.String,System.Int32)
extern "C" int32_t MadLevelProfile_GetLevelInteger_m11_783 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, int32_t ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::SetLevelInteger(System.String,System.String,System.Int32)
extern "C" void MadLevelProfile_SetLevelInteger_m11_784 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::SetProfileInteger(System.String,System.Int32)
extern "C" void MadLevelProfile_SetProfileInteger_m11_785 (Object_t * __this /* static, unused */, String_t* ___property, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelProfile::GetProfileInteger(System.String)
extern "C" int32_t MadLevelProfile_GetProfileInteger_m11_786 (Object_t * __this /* static, unused */, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelProfile::GetProfileInteger(System.String,System.Int32)
extern "C" int32_t MadLevelProfile_GetProfileInteger_m11_787 (Object_t * __this /* static, unused */, String_t* ___property, int32_t ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadLevelProfile::GetLevelFloat(System.String,System.String)
extern "C" float MadLevelProfile_GetLevelFloat_m11_788 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadLevelProfile::GetLevelFloat(System.String,System.String,System.Single)
extern "C" float MadLevelProfile_GetLevelFloat_m11_789 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, float ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::SetLevelFloat(System.String,System.String,System.Single)
extern "C" void MadLevelProfile_SetLevelFloat_m11_790 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::SetProfileFloat(System.String,System.Single)
extern "C" void MadLevelProfile_SetProfileFloat_m11_791 (Object_t * __this /* static, unused */, String_t* ___property, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadLevelProfile::GetProfileFloat(System.String)
extern "C" float MadLevelProfile_GetProfileFloat_m11_792 (Object_t * __this /* static, unused */, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadLevelProfile::GetProfileFloat(System.String,System.Single)
extern "C" float MadLevelProfile_GetProfileFloat_m11_793 (Object_t * __this /* static, unused */, String_t* ___property, float ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile::GetLevelString(System.String,System.String)
extern "C" String_t* MadLevelProfile_GetLevelString_m11_794 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile::GetLevelString(System.String,System.String,System.String)
extern "C" String_t* MadLevelProfile_GetLevelString_m11_795 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, String_t* ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::SetLevelString(System.String,System.String,System.String)
extern "C" void MadLevelProfile_SetLevelString_m11_796 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::SetProfileString(System.String,System.String)
extern "C" void MadLevelProfile_SetProfileString_m11_797 (Object_t * __this /* static, unused */, String_t* ___property, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile::GetProfileString(System.String)
extern "C" String_t* MadLevelProfile_GetProfileString_m11_798 (Object_t * __this /* static, unused */, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile::GetProfileString(System.String,System.String)
extern "C" String_t* MadLevelProfile_GetProfileString_m11_799 (Object_t * __this /* static, unused */, String_t* ___property, String_t* ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile::IsPropertyEnabled(System.String,System.String)
extern "C" bool MadLevelProfile_IsPropertyEnabled_m11_800 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::SetPropertyEnabled(System.String,System.String,System.Boolean)
extern "C" void MadLevelProfile_SetPropertyEnabled_m11_801 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile::IsProfilePropertySet(System.String)
extern "C" bool MadLevelProfile_IsProfilePropertySet_m11_802 (Object_t * __this /* static, unused */, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile::IsLevelPropertySet(System.String,System.String)
extern "C" bool MadLevelProfile_IsLevelPropertySet_m11_803 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile::IsPropertySet(System.String,System.String)
extern "C" bool MadLevelProfile_IsPropertySet_m11_804 (Object_t * __this /* static, unused */, String_t* ___levelName, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile::IsCompleted(System.String)
extern "C" bool MadLevelProfile_IsCompleted_m11_805 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile::IsCompleted(System.String,System.Boolean)
extern "C" bool MadLevelProfile_IsCompleted_m11_806 (Object_t * __this /* static, unused */, String_t* ___levelName, bool ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::SetCompleted(System.String,System.Boolean)
extern "C" void MadLevelProfile_SetCompleted_m11_807 (Object_t * __this /* static, unused */, String_t* ___levelName, bool ___completed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile::IsCompletedSet(System.String)
extern "C" bool MadLevelProfile_IsCompletedSet_m11_808 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile::IsLocked(System.String)
extern "C" bool MadLevelProfile_IsLocked_m11_809 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile::IsLocked(System.String,System.Boolean)
extern "C" bool MadLevelProfile_IsLocked_m11_810 (Object_t * __this /* static, unused */, String_t* ___levelName, bool ___def, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::SetLocked(System.String,System.Boolean)
extern "C" void MadLevelProfile_SetLocked_m11_811 (Object_t * __this /* static, unused */, String_t* ___levelName, bool ___locked, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile::IsLockedSet(System.String)
extern "C" bool MadLevelProfile_IsLockedSet_m11_812 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile::IsLevelSet(System.String)
extern "C" bool MadLevelProfile_IsLevelSet_m11_813 (Object_t * __this /* static, unused */, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::RenameLevel(System.String,System.String)
extern "C" void MadLevelProfile_RenameLevel_m11_814 (Object_t * __this /* static, unused */, String_t* ___oldName, String_t* ___newName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::Save()
extern "C" void MadLevelProfile_Save_m11_815 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::Reset()
extern "C" void MadLevelProfile_Reset_m11_816 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::ResetLevelScope()
extern "C" void MadLevelProfile_ResetLevelScope_m11_817 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelProfile::ResetProfileScope()
extern "C" void MadLevelProfile_ResetProfileScope_m11_818 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
