﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t7_417;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t7_312;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern "C" void UnityEvent_3__ctor_m7_2566_gshared (UnityEvent_3_t7_417 * __this, const MethodInfo* method);
#define UnityEvent_3__ctor_m7_2566(__this, method) (( void (*) (UnityEvent_3_t7_417 *, const MethodInfo*))UnityEvent_3__ctor_m7_2566_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_3_FindMethod_Impl_m7_2567_gshared (UnityEvent_3_t7_417 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_3_FindMethod_Impl_m7_2567(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_3_t7_417 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_3_FindMethod_Impl_m7_2567_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t7_312 * UnityEvent_3_GetDelegate_m7_2568_gshared (UnityEvent_3_t7_417 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_3_GetDelegate_m7_2568(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t7_312 * (*) (UnityEvent_3_t7_417 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_3_GetDelegate_m7_2568_gshared)(__this, ___target, ___theFunction, method)
