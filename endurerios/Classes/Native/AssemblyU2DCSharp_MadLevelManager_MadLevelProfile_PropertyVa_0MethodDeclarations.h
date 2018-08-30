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

// MadLevelManager.MadLevelProfile/PropertyValue
struct PropertyValue_t11_132;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MadLevelManager_MadLevelProfile_PropertyVa.h"

// System.Void MadLevelManager.MadLevelProfile/PropertyValue::.ctor(MadLevelManager.MadLevelProfile/PropertyValue/Type,System.String)
extern "C" void PropertyValue__ctor_m11_726 (PropertyValue_t11_132 * __this, int32_t ___t, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelProfile/PropertyValue MadLevelManager.MadLevelProfile/PropertyValue::FromBoolean(System.Boolean)
extern "C" PropertyValue_t11_132 * PropertyValue_FromBoolean_m11_727 (Object_t * __this /* static, unused */, bool ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelProfile/PropertyValue MadLevelManager.MadLevelProfile/PropertyValue::FromInteger(System.Int32)
extern "C" PropertyValue_t11_132 * PropertyValue_FromInteger_m11_728 (Object_t * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelProfile/PropertyValue MadLevelManager.MadLevelProfile/PropertyValue::FromFloat(System.Single)
extern "C" PropertyValue_t11_132 * PropertyValue_FromFloat_m11_729 (Object_t * __this /* static, unused */, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelProfile/PropertyValue MadLevelManager.MadLevelProfile/PropertyValue::FromString(System.String)
extern "C" PropertyValue_t11_132 * PropertyValue_FromString_m11_730 (Object_t * __this /* static, unused */, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile/PropertyValue::Write()
extern "C" String_t* PropertyValue_Write_m11_731 (PropertyValue_t11_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelProfile/PropertyValue MadLevelManager.MadLevelProfile/PropertyValue::Read(System.String)
extern "C" PropertyValue_t11_132 * PropertyValue_Read_m11_732 (Object_t * __this /* static, unused */, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile/PropertyValue::TypeToString()
extern "C" String_t* PropertyValue_TypeToString_m11_733 (PropertyValue_t11_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MadLevelManager.MadLevelProfile/PropertyValue/Type MadLevelManager.MadLevelProfile/PropertyValue::StringToType(System.String)
extern "C" int32_t PropertyValue_StringToType_m11_734 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile/PropertyValue::BooleanValue()
extern "C" bool PropertyValue_BooleanValue_m11_735 (PropertyValue_t11_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelProfile/PropertyValue::IntegerValue()
extern "C" int32_t PropertyValue_IntegerValue_m11_736 (PropertyValue_t11_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single MadLevelManager.MadLevelProfile/PropertyValue::FloatValue()
extern "C" float PropertyValue_FloatValue_m11_737 (PropertyValue_t11_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile/PropertyValue::StringValue()
extern "C" String_t* PropertyValue_StringValue_m11_738 (PropertyValue_t11_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MadLevelManager.MadLevelProfile/PropertyValue::AnyValue()
extern "C" String_t* PropertyValue_AnyValue_m11_739 (PropertyValue_t11_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MadLevelManager.MadLevelProfile/PropertyValue::Equals(System.Object)
extern "C" bool PropertyValue_Equals_m11_740 (PropertyValue_t11_132 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MadLevelManager.MadLevelProfile/PropertyValue::GetHashCode()
extern "C" int32_t PropertyValue_GetHashCode_m11_741 (PropertyValue_t11_132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
