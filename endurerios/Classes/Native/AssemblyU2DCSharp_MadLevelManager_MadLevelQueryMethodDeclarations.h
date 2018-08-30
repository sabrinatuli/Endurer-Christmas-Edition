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

// MadLevelManager.MadLevelQuery
struct MadLevelQuery_t11_153;
// System.String[]
struct StringU5BU5D_t1_202;
// System.String
struct String_t;
// MadLevelManager.MadLevelQuery/PropertyProcessor
struct PropertyProcessor_t11_148;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1_827;
// MadLevelManager.MadLevelConfiguration/Level
struct Level_t11_14;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevel_Type.h"

// System.Void MadLevelManager.MadLevelQuery::.ctor()
extern "C" void MadLevelQuery__ctor_m11_881 (MadLevelQuery_t11_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelQuery MadLevelManager.MadLevelQuery::ForAll()
extern "C" MadLevelQuery_t11_153 * MadLevelQuery_ForAll_m11_882 (MadLevelQuery_t11_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelQuery MadLevelManager.MadLevelQuery::ForGroup(System.String[])
extern "C" MadLevelQuery_t11_153 * MadLevelQuery_ForGroup_m11_883 (MadLevelQuery_t11_153 * __this, StringU5BU5D_t1_202* ___groupName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelQuery MadLevelManager.MadLevelQuery::ForLevel(System.String[])
extern "C" MadLevelQuery_t11_153 * MadLevelQuery_ForLevel_m11_884 (MadLevelQuery_t11_153 * __this, StringU5BU5D_t1_202* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelQuery MadLevelManager.MadLevelQuery::OfLevelType(MadLevelManager.MadLevel/Type)
extern "C" MadLevelQuery_t11_153 * MadLevelQuery_OfLevelType_m11_885 (MadLevelQuery_t11_153 * __this, int32_t ___levelType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelQuery MadLevelManager.MadLevelQuery::SelectProperty(System.String[])
extern "C" MadLevelQuery_t11_153 * MadLevelQuery_SelectProperty_m11_886 (MadLevelQuery_t11_153 * __this, StringU5BU5D_t1_202* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelQuery::CountLevels()
extern "C" int32_t MadLevelQuery_CountLevels_m11_887 (MadLevelQuery_t11_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelQuery::SetLocked(System.Boolean)
extern "C" void MadLevelQuery_SetLocked_m11_888 (MadLevelQuery_t11_153 * __this, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelQuery::SetCompleted(System.Boolean)
extern "C" void MadLevelQuery_SetCompleted_m11_889 (MadLevelQuery_t11_153 * __this, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelQuery::CountProperties()
extern "C" int32_t MadLevelQuery_CountProperties_m11_890 (MadLevelQuery_t11_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelQuery::CountEnabled()
extern "C" int32_t MadLevelQuery_CountEnabled_m11_891 (MadLevelQuery_t11_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelQuery::CountDisabled()
extern "C" int32_t MadLevelQuery_CountDisabled_m11_892 (MadLevelQuery_t11_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelQuery::SetEnabled()
extern "C" void MadLevelQuery_SetEnabled_m11_893 (MadLevelQuery_t11_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelQuery::SetDisabled()
extern "C" void MadLevelQuery_SetDisabled_m11_894 (MadLevelQuery_t11_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelQuery::SetBoolean(System.Boolean)
extern "C" void MadLevelQuery_SetBoolean_m11_895 (MadLevelQuery_t11_153 * __this, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelQuery::CountLocked()
extern "C" int32_t MadLevelQuery_CountLocked_m11_896 (MadLevelQuery_t11_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelQuery::CountUnlocked()
extern "C" int32_t MadLevelQuery_CountUnlocked_m11_897 (MadLevelQuery_t11_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelQuery::CountCompleted()
extern "C" int32_t MadLevelQuery_CountCompleted_m11_898 (MadLevelQuery_t11_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelQuery::CountNotCompleted()
extern "C" int32_t MadLevelQuery_CountNotCompleted_m11_899 (MadLevelQuery_t11_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelQuery::SumIntegers()
extern "C" int32_t MadLevelQuery_SumIntegers_m11_900 (MadLevelQuery_t11_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadLevelQuery::SumFloats()
extern "C" float MadLevelQuery_SumFloats_m11_901 (MadLevelQuery_t11_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelQuery::Count(System.String)
extern "C" int32_t MadLevelQuery_Count_m11_902 (MadLevelQuery_t11_153 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelQuery::ProcessProperties(MadLevelManager.MadLevelQuery/PropertyProcessor)
extern "C" bool MadLevelQuery_ProcessProperties_m11_903 (MadLevelQuery_t11_153 * __this, PropertyProcessor_t11_148 * ___processor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> MadLevelManager.MadLevelQuery::GetLevelNames()
extern "C" List_1_t1_827 * MadLevelQuery_GetLevelNames_m11_904 (MadLevelQuery_t11_153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelQuery::<GetLevelNames>m__7B(MadLevelManager.MadLevelConfiguration/Level)
extern "C" String_t* MadLevelQuery_U3CGetLevelNamesU3Em__7B_m11_905 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelQuery::<GetLevelNames>m__7C(MadLevelManager.MadLevelConfiguration/Level)
extern "C" bool MadLevelQuery_U3CGetLevelNamesU3Em__7C_m11_906 (MadLevelQuery_t11_153 * __this, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelQuery::<GetLevelNames>m__7D(MadLevelManager.MadLevelConfiguration/Level)
extern "C" String_t* MadLevelQuery_U3CGetLevelNamesU3Em__7D_m11_907 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelQuery::<GetLevelNames>m__7E(MadLevelManager.MadLevelConfiguration/Level)
extern "C" bool MadLevelQuery_U3CGetLevelNamesU3Em__7E_m11_908 (MadLevelQuery_t11_153 * __this, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelQuery::<GetLevelNames>m__7F(MadLevelManager.MadLevelConfiguration/Level)
extern "C" String_t* MadLevelQuery_U3CGetLevelNamesU3Em__7F_m11_909 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelQuery::<GetLevelNames>m__80(MadLevelManager.MadLevelConfiguration/Level)
extern "C" bool MadLevelQuery_U3CGetLevelNamesU3Em__80_m11_910 (MadLevelQuery_t11_153 * __this, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelQuery::<GetLevelNames>m__81(MadLevelManager.MadLevelConfiguration/Level)
extern "C" String_t* MadLevelQuery_U3CGetLevelNamesU3Em__81_m11_911 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelQuery::<GetLevelNames>m__82(MadLevelManager.MadLevelConfiguration/Level)
extern "C" bool MadLevelQuery_U3CGetLevelNamesU3Em__82_m11_912 (MadLevelQuery_t11_153 * __this, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelQuery::<GetLevelNames>m__83(MadLevelManager.MadLevelConfiguration/Level)
extern "C" String_t* MadLevelQuery_U3CGetLevelNamesU3Em__83_m11_913 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelQuery::<GetLevelNames>m__84(MadLevelManager.MadLevelConfiguration/Level)
extern "C" bool MadLevelQuery_U3CGetLevelNamesU3Em__84_m11_914 (MadLevelQuery_t11_153 * __this, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelQuery::<GetLevelNames>m__85(MadLevelManager.MadLevelConfiguration/Level)
extern "C" String_t* MadLevelQuery_U3CGetLevelNamesU3Em__85_m11_915 (Object_t * __this /* static, unused */, Level_t11_14 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
