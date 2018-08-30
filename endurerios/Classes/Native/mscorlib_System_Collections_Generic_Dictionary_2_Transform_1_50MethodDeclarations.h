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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Object,System.Char>
struct Transform_1_t1_1812;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Object,System.Char>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m1_16672_gshared (Transform_1_t1_1812 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1_16672(__this, ___object, ___method, method) (( void (*) (Transform_1_t1_1812 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1_16672_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Object,System.Char>::Invoke(TKey,TValue)
extern "C" uint16_t Transform_1_Invoke_m1_16673_gshared (Transform_1_t1_1812 * __this, uint16_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1_16673(__this, ___key, ___value, method) (( uint16_t (*) (Transform_1_t1_1812 *, uint16_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m1_16673_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Object,System.Char>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m1_16674_gshared (Transform_1_t1_1812 * __this, uint16_t ___key, Object_t * ___value, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1_16674(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1_1812 *, uint16_t, Object_t *, AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1_16674_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Object,System.Char>::EndInvoke(System.IAsyncResult)
extern "C" uint16_t Transform_1_EndInvoke_m1_16675_gshared (Transform_1_t1_1812 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1_16675(__this, ___result, method) (( uint16_t (*) (Transform_1_t1_1812 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m1_16675_gshared)(__this, ___result, method)
