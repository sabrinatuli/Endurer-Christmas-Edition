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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t1_1158;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m1_7124_gshared (DefaultComparer_t1_1158 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1_7124(__this, method) (( void (*) (DefaultComparer_t1_1158 *, const MethodInfo*))DefaultComparer__ctor_m1_7124_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m1_7125_gshared (DefaultComparer_t1_1158 * __this, DateTimeOffset_t1_704  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1_7125(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1_1158 *, DateTimeOffset_t1_704 , const MethodInfo*))DefaultComparer_GetHashCode_m1_7125_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m1_7126_gshared (DefaultComparer_t1_1158 * __this, DateTimeOffset_t1_704  ___x, DateTimeOffset_t1_704  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m1_7126(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1_1158 *, DateTimeOffset_t1_704 , DateTimeOffset_t1_704 , const MethodInfo*))DefaultComparer_Equals_m1_7126_gshared)(__this, ___x, ___y, method)
