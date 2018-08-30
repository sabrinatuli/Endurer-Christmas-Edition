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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector2,System.Collections.DictionaryEntry>
struct Transform_1_t1_1664;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector2,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m1_13960_gshared (Transform_1_t1_1664 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1_13960(__this, ___object, ___method, method) (( void (*) (Transform_1_t1_1664 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1_13960_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector2,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1_169  Transform_1_Invoke_m1_13961_gshared (Transform_1_t1_1664 * __this, Object_t * ___key, Vector2_t7_65  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1_13961(__this, ___key, ___value, method) (( DictionaryEntry_t1_169  (*) (Transform_1_t1_1664 *, Object_t *, Vector2_t7_65 , const MethodInfo*))Transform_1_Invoke_m1_13961_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector2,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m1_13962_gshared (Transform_1_t1_1664 * __this, Object_t * ___key, Vector2_t7_65  ___value, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1_13962(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1_1664 *, Object_t *, Vector2_t7_65 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1_13962_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector2,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1_169  Transform_1_EndInvoke_m1_13963_gshared (Transform_1_t1_1664 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1_13963(__this, ___result, method) (( DictionaryEntry_t1_169  (*) (Transform_1_t1_1664 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m1_13963_gshared)(__this, ___result, method)
