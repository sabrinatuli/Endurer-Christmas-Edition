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

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t5_400;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t5_356;
// System.Object[]
struct ObjectU5BU5D_t1_159;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m5_2288_gshared (InvokableCall_1_t5_400 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m5_2288(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t5_400 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m5_2288_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m5_2289_gshared (InvokableCall_1_t5_400 * __this, UnityAction_1_t5_356 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m5_2289(__this, ___action, method) (( void (*) (InvokableCall_1_t5_400 *, UnityAction_1_t5_356 *, const MethodInfo*))InvokableCall_1__ctor_m5_2289_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m5_2290_gshared (InvokableCall_1_t5_400 * __this, ObjectU5BU5D_t1_159* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m5_2290(__this, ___args, method) (( void (*) (InvokableCall_1_t5_400 *, ObjectU5BU5D_t1_159*, const MethodInfo*))InvokableCall_1_Invoke_m5_2290_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m5_2291_gshared (InvokableCall_1_t5_400 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m5_2291(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t5_400 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m5_2291_gshared)(__this, ___targetObj, ___method, method)
