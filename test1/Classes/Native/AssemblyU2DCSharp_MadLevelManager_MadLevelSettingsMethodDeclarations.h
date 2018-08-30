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

// MadLevelManager.MadLevelSettings
struct MadLevelSettings_t11_157;
// MadLevelManager.IMadLevelProfileBackend
struct IMadLevelProfileBackend_t11_136;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.Reflection.FieldInfo>
struct List_1_t1_1038;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1_272;
// System.Object[]
struct ObjectU5BU5D_t1_159;
// MadLevelManager.MadLevelSettings/Property
struct Property_t11_156;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadLevelSettings::.ctor()
extern "C" void MadLevelSettings__ctor_m11_933 (MadLevelSettings_t11_157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelSettings MadLevelManager.MadLevelSettings::get_current()
extern "C" MadLevelSettings_t11_157 * MadLevelSettings_get_current_m11_934 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.IMadLevelProfileBackend MadLevelManager.MadLevelSettings::CreateBackend()
extern "C" Object_t * MadLevelSettings_CreateBackend_m11_935 (MadLevelSettings_t11_157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelSettings::ConfigureProperties(System.Object)
extern "C" void MadLevelSettings_ConfigureProperties_m11_936 (MadLevelSettings_t11_157 * __this, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelSettings::AssignFields(System.Object,System.Collections.Generic.List`1<System.Reflection.FieldInfo>)
extern "C" bool MadLevelSettings_AssignFields_m11_937 (MadLevelSettings_t11_157 * __this, Object_t * ___instance, List_1_t1_1038 * ___fields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelSettings::SetValue(System.Reflection.FieldInfo,System.Object,System.String)
extern "C" void MadLevelSettings_SetValue_m11_938 (MadLevelSettings_t11_157 * __this, FieldInfo_t * ___field, Object_t * ___instance, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Reflection.FieldInfo> MadLevelManager.MadLevelSettings::GetRequiredFields(System.Type)
extern "C" List_1_t1_1038 * MadLevelSettings_GetRequiredFields_m11_939 (MadLevelSettings_t11_157 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Reflection.FieldInfo> MadLevelManager.MadLevelSettings::GetOptionalFields(System.Type)
extern "C" List_1_t1_1038 * MadLevelSettings_GetOptionalFields_m11_940 (MadLevelSettings_t11_157 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Reflection.FieldInfo> MadLevelManager.MadLevelSettings::GetFieldsWithAttribute(System.Type,System.Type)
extern "C" List_1_t1_1038 * MadLevelSettings_GetFieldsWithAttribute_m11_941 (MadLevelSettings_t11_157 * __this, Type_t * ___type, Type_t * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MadLevelManager.MadLevelSettings::CreateInstance(System.Reflection.ConstructorInfo)
extern "C" Object_t * MadLevelSettings_CreateInstance_m11_942 (MadLevelSettings_t11_157 * __this, ConstructorInfo_t1_272 * ___constructor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelSettings::CreateParameters(System.Reflection.ConstructorInfo,System.Object[]&)
extern "C" bool MadLevelSettings_CreateParameters_m11_943 (MadLevelSettings_t11_157 * __this, ConstructorInfo_t1_272 * ___constructor, ObjectU5BU5D_t1_159** ___outResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelSettings::FindPropertyValue(System.String,System.String&)
extern "C" bool MadLevelSettings_FindPropertyValue_m11_944 (MadLevelSettings_t11_157 * __this, String_t* ___name, String_t** ___outValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelSettings/Property MadLevelManager.MadLevelSettings::FindProperty(System.String)
extern "C" Property_t11_156 * MadLevelSettings_FindProperty_m11_945 (MadLevelSettings_t11_157 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelSettings::SetPropertyValue(System.String,System.String)
extern "C" void MadLevelSettings_SetPropertyValue_m11_946 (MadLevelSettings_t11_157 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo MadLevelManager.MadLevelSettings::FindConstructor(System.Type)
extern "C" ConstructorInfo_t1_272 * MadLevelSettings_FindConstructor_m11_947 (Object_t * __this /* static, unused */, Type_t * ___backendType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MadLevelManager.MadLevelSettings::VerifyConstructor(System.Reflection.ConstructorInfo)
extern "C" void MadLevelSettings_VerifyConstructor_m11_948 (Object_t * __this /* static, unused */, ConstructorInfo_t1_272 * ___constructorInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
