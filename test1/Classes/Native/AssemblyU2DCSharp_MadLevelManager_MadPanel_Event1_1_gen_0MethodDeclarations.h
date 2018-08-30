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

// MadLevelManager.MadPanel/Event1`1<System.Object>
struct Event1_1_t11_280;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void MadLevelManager.MadPanel/Event1`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Event1_1__ctor_m11_1951_gshared (Event1_1_t11_280 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Event1_1__ctor_m11_1951(__this, ___object, ___method, method) (( void (*) (Event1_1_t11_280 *, Object_t *, IntPtr_t, const MethodInfo*))Event1_1__ctor_m11_1951_gshared)(__this, ___object, ___method, method)
// System.Void MadLevelManager.MadPanel/Event1`1<System.Object>::Invoke(T)
extern "C" void Event1_1_Invoke_m11_1952_gshared (Event1_1_t11_280 * __this, Object_t * ___t, const MethodInfo* method);
#define Event1_1_Invoke_m11_1952(__this, ___t, method) (( void (*) (Event1_1_t11_280 *, Object_t *, const MethodInfo*))Event1_1_Invoke_m11_1952_gshared)(__this, ___t, method)
// System.IAsyncResult MadLevelManager.MadPanel/Event1`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Event1_1_BeginInvoke_m11_1954_gshared (Event1_1_t11_280 * __this, Object_t * ___t, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Event1_1_BeginInvoke_m11_1954(__this, ___t, ___callback, ___object, method) (( Object_t * (*) (Event1_1_t11_280 *, Object_t *, AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Event1_1_BeginInvoke_m11_1954_gshared)(__this, ___t, ___callback, ___object, method)
// System.Void MadLevelManager.MadPanel/Event1`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Event1_1_EndInvoke_m11_1956_gshared (Event1_1_t11_280 * __this, Object_t * ___result, const MethodInfo* method);
#define Event1_1_EndInvoke_m11_1956(__this, ___result, method) (( void (*) (Event1_1_t11_280 *, Object_t *, const MethodInfo*))Event1_1_EndInvoke_m11_1956_gshared)(__this, ___result, method)
