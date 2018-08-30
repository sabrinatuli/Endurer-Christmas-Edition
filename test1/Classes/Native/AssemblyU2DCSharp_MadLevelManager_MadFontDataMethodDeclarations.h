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

// MadLevelManager.MadFontData
struct MadFontData_t11_184;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t7_49;
// System.Int32[]
struct Int32U5BU5D_t1_162;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadFontData::.ctor()
extern "C" void MadFontData__ctor_m11_1102 (MadFontData_t11_184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadFontData MadLevelManager.MadFontData::Parse(System.String,UnityEngine.Texture2D)
extern "C" MadFontData_t11_184 * MadFontData_Parse_m11_1103 (Object_t * __this /* static, unused */, String_t* ___text, Texture2D_t7_49 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadFontData::DoParse(System.String)
extern "C" void MadFontData_DoParse_m11_1104 (MadFontData_t11_184 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadFontData::UseLine(System.String)
extern "C" void MadFontData_UseLine_m11_1105 (MadFontData_t11_184 * __this, String_t* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadFontData::ReadPair(System.String)
extern "C" void MadFontData_ReadPair_m11_1106 (MadFontData_t11_184 * __this, String_t* ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadFontData::ParseInfo()
extern "C" void MadFontData_ParseInfo_m11_1107 (MadFontData_t11_184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadFontData::ParseCommon()
extern "C" void MadFontData_ParseCommon_m11_1108 (MadFontData_t11_184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadFontData::ParsePage()
extern "C" void MadFontData_ParsePage_m11_1109 (MadFontData_t11_184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadFontData::ParseChars()
extern "C" void MadFontData_ParseChars_m11_1110 (MadFontData_t11_184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadFontData::ParseChar()
extern "C" void MadFontData_ParseChar_m11_1111 (MadFontData_t11_184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadFontData::ParseKernings()
extern "C" void MadFontData_ParseKernings_m11_1112 (MadFontData_t11_184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadFontData::ParseKerning()
extern "C" void MadFontData_ParseKerning_m11_1113 (MadFontData_t11_184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadFontData::GetString(System.String)
extern "C" String_t* MadFontData_GetString_m11_1114 (MadFontData_t11_184 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadFontData::GetBool(System.String)
extern "C" bool MadFontData_GetBool_m11_1115 (MadFontData_t11_184 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadFontData::GetInt(System.String)
extern "C" int32_t MadFontData_GetInt_m11_1116 (MadFontData_t11_184 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] MadLevelManager.MadFontData::GetIntArray(System.String)
extern "C" Int32U5BU5D_t1_162* MadFontData_GetIntArray_m11_1117 (MadFontData_t11_184 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadFontData::GetValue(System.String)
extern "C" String_t* MadFontData_GetValue_m11_1118 (MadFontData_t11_184 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadFontData::DoParseLegacy(System.String,UnityEngine.Texture2D)
extern "C" void MadFontData_DoParseLegacy_m11_1119 (MadFontData_t11_184 * __this, String_t* ___data, Texture2D_t7_49 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
