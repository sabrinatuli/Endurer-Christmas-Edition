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

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t7_398;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t7_399;
// System.Object[]
struct ObjectU5BU5D_t1_159;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m7_2495_gshared (InvokableCall_1_t7_398 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m7_2495(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t7_398 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m7_2495_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m7_2496_gshared (InvokableCall_1_t7_398 * __this, UnityAction_1_t7_399 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m7_2496(__this, ___action, method) (( void (*) (InvokableCall_1_t7_398 *, UnityAction_1_t7_399 *, const MethodInfo*))InvokableCall_1__ctor_m7_2496_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m7_2497_gshared (InvokableCall_1_t7_398 * __this, ObjectU5BU5D_t1_159* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m7_2497(__this, ___args, method) (( void (*) (InvokableCall_1_t7_398 *, ObjectU5BU5D_t1_159*, const MethodInfo*))InvokableCall_1_Invoke_m7_2497_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m7_2498_gshared (InvokableCall_1_t7_398 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m7_2498(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t7_398 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m7_2498_gshared)(__this, ___targetObj, ___method, method)
