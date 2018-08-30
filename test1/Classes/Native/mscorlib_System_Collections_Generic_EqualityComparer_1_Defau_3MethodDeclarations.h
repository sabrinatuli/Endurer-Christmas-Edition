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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t1_1234;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m1_7250_gshared (DefaultComparer_t1_1234 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1_7250(__this, method) (( void (*) (DefaultComparer_t1_1234 *, const MethodInfo*))DefaultComparer__ctor_m1_7250_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m1_7251_gshared (DefaultComparer_t1_1234 * __this, DateTime_t1_129  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1_7251(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1_1234 *, DateTime_t1_129 , const MethodInfo*))DefaultComparer_GetHashCode_m1_7251_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m1_7252_gshared (DefaultComparer_t1_1234 * __this, DateTime_t1_129  ___x, DateTime_t1_129  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m1_7252(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1_1234 *, DateTime_t1_129 , DateTime_t1_129 , const MethodInfo*))DefaultComparer_Equals_m1_7252_gshared)(__this, ___x, ___y, method)
