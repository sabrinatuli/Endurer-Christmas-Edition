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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Object,System.Object>
struct Transform_1_t1_1815;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m1_16696_gshared (Transform_1_t1_1815 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1_16696(__this, ___object, ___method, method) (( void (*) (Transform_1_t1_1815 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1_16696_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m1_16697_gshared (Transform_1_t1_1815 * __this, uint16_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1_16697(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t1_1815 *, uint16_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m1_16697_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m1_16698_gshared (Transform_1_t1_1815 * __this, uint16_t ___key, Object_t * ___value, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1_16698(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1_1815 *, uint16_t, Object_t *, AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1_16698_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Char,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m1_16699_gshared (Transform_1_t1_1815 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1_16699(__this, ___result, method) (( Object_t * (*) (Transform_1_t1_1815 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m1_16699_gshared)(__this, ___result, method)
