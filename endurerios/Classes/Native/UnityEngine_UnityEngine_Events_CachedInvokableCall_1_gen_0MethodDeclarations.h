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

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t7_361;
// UnityEngine.Object
struct Object_t7_5;
struct Object_t7_5_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t1_159;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m7_2247_gshared (CachedInvokableCall_1_t7_361 * __this, Object_t7_5 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m7_2247(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t7_361 *, Object_t7_5 *, MethodInfo_t *, int32_t, const MethodInfo*))CachedInvokableCall_1__ctor_m7_2247_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m7_2534_gshared (CachedInvokableCall_1_t7_361 * __this, ObjectU5BU5D_t1_159* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m7_2534(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t7_361 *, ObjectU5BU5D_t1_159*, const MethodInfo*))CachedInvokableCall_1_Invoke_m7_2534_gshared)(__this, ___args, method)
