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

// System.Predicate`1<System.Object>
struct Predicate_1_t1_1015;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m1_5845_gshared (Predicate_1_t1_1015 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m1_5845(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1_1015 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m1_5845_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m1_5846_gshared (Predicate_1_t1_1015 * __this, Object_t * ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m1_5846(__this, ___obj, method) (( bool (*) (Predicate_1_t1_1015 *, Object_t *, const MethodInfo*))Predicate_1_Invoke_m1_5846_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m1_5847_gshared (Predicate_1_t1_1015 * __this, Object_t * ___obj, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m1_5847(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1_1015 *, Object_t *, AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m1_5847_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m1_5848_gshared (Predicate_1_t1_1015 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m1_5848(__this, ___result, method) (( bool (*) (Predicate_1_t1_1015 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m1_5848_gshared)(__this, ___result, method)
