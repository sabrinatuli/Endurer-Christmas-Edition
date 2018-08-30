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

// MadLevelManager.MadTransform/Predicate`1<System.Object>
struct Predicate_1_t11_276;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void MadLevelManager.MadTransform/Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m11_1944_gshared (Predicate_1_t11_276 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m11_1944(__this, ___object, ___method, method) (( void (*) (Predicate_1_t11_276 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11_1944_gshared)(__this, ___object, ___method, method)
// System.Boolean MadLevelManager.MadTransform/Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m11_1945_gshared (Predicate_1_t11_276 * __this, Object_t * ___t, const MethodInfo* method);
#define Predicate_1_Invoke_m11_1945(__this, ___t, method) (( bool (*) (Predicate_1_t11_276 *, Object_t *, const MethodInfo*))Predicate_1_Invoke_m11_1945_gshared)(__this, ___t, method)
// System.IAsyncResult MadLevelManager.MadTransform/Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m11_1946_gshared (Predicate_1_t11_276 * __this, Object_t * ___t, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m11_1946(__this, ___t, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t11_276 *, Object_t *, AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11_1946_gshared)(__this, ___t, ___callback, ___object, method)
// System.Boolean MadLevelManager.MadTransform/Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m11_1947_gshared (Predicate_1_t11_276 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m11_1947(__this, ___result, method) (( bool (*) (Predicate_1_t11_276 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11_1947_gshared)(__this, ___result, method)
