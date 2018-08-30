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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t5_348;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t5_356;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t5_294;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m5_1987_gshared (UnityEvent_1_t5_348 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5_1987(__this, method) (( void (*) (UnityEvent_1_t5_348 *, const MethodInfo*))UnityEvent_1__ctor_m5_1987_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5_1989_gshared (UnityEvent_1_t5_348 * __this, UnityAction_1_t5_356 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5_1989(__this, ___call, method) (( void (*) (UnityEvent_1_t5_348 *, UnityAction_1_t5_356 *, const MethodInfo*))UnityEvent_1_AddListener_m5_1989_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m5_2281_gshared (UnityEvent_1_t5_348 * __this, UnityAction_1_t5_356 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m5_2281(__this, ___call, method) (( void (*) (UnityEvent_1_t5_348 *, UnityAction_1_t5_356 *, const MethodInfo*))UnityEvent_1_RemoveListener_m5_2281_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5_2282_gshared (UnityEvent_1_t5_348 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5_2282(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5_348 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5_2282_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t5_294 * UnityEvent_1_GetDelegate_m5_2283_gshared (UnityEvent_1_t5_348 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_2283(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t5_294 * (*) (UnityEvent_1_t5_348 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_2283_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t5_294 * UnityEvent_1_GetDelegate_m5_2284_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5_356 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_2284(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t5_294 * (*) (Object_t * /* static, unused */, UnityAction_1_t5_356 *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_2284_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5_1988_gshared (UnityEvent_1_t5_348 * __this, Color_t5_50  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5_1988(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5_348 *, Color_t5_50 , const MethodInfo*))UnityEvent_1_Invoke_m5_1988_gshared)(__this, ___arg0, method)
