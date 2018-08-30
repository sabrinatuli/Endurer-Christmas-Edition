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

// MadLevelManager.MadLevelProfile/Level
struct Level_t11_130;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1_827;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadLevelProfile/Level::.ctor(System.String)
extern "C" void Level__ctor_m11_710 (Level_t11_130 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> MadLevelManager.MadLevelProfile/Level::GetPropertyNames()
extern "C" List_1_t1_827 * Level_GetPropertyNames_m11_711 (Level_t11_130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile/Level::SetPropertyBoolean(System.String,System.Boolean)
extern "C" bool Level_SetPropertyBoolean_m11_712 (Level_t11_130 * __this, String_t* ___key, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile/Level::SetPropertyInteger(System.String,System.Int32)
extern "C" bool Level_SetPropertyInteger_m11_713 (Level_t11_130 * __this, String_t* ___key, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile/Level::SetPropertyFloat(System.String,System.Single)
extern "C" bool Level_SetPropertyFloat_m11_714 (Level_t11_130 * __this, String_t* ___key, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile/Level::SetPropertyString(System.String,System.String)
extern "C" bool Level_SetPropertyString_m11_715 (Level_t11_130 * __this, String_t* ___key, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile/Level::HasProperty(System.String)
extern "C" bool Level_HasProperty_m11_716 (Level_t11_130 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile/Level::GetPropertyBoolean(System.String)
extern "C" bool Level_GetPropertyBoolean_m11_717 (Level_t11_130 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelProfile/Level::GetPropertyInteger(System.String)
extern "C" int32_t Level_GetPropertyInteger_m11_718 (Level_t11_130 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadLevelProfile/Level::GetPropertyFloat(System.String)
extern "C" float Level_GetPropertyFloat_m11_719 (Level_t11_130 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile/Level::GetPropertyString(System.String)
extern "C" String_t* Level_GetPropertyString_m11_720 (Level_t11_130 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile/Level::GetPropertyAny(System.String)
extern "C" String_t* Level_GetPropertyAny_m11_721 (Level_t11_130 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelProfile/Level MadLevelManager.MadLevelProfile/Level::Read(System.String)
extern "C" Level_t11_130 * Level_Read_m11_722 (Object_t * __this /* static, unused */, String_t* ___line, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile/Level::Write()
extern "C" String_t* Level_Write_m11_723 (Level_t11_130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile/Level::Out(System.String)
extern "C" String_t* Level_Out_m11_724 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile/Level::In(System.String)
extern "C" String_t* Level_In_m11_725 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
