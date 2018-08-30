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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector2,UnityEngine.Vector2>
struct Transform_1_t1_1673;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector2,UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m1_13956_gshared (Transform_1_t1_1673 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m1_13956(__this, ___object, ___method, method) (( void (*) (Transform_1_t1_1673 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1_13956_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector2,UnityEngine.Vector2>::Invoke(TKey,TValue)
extern "C" Vector2_t7_65  Transform_1_Invoke_m1_13957_gshared (Transform_1_t1_1673 * __this, Object_t * ___key, Vector2_t7_65  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1_13957(__this, ___key, ___value, method) (( Vector2_t7_65  (*) (Transform_1_t1_1673 *, Object_t *, Vector2_t7_65 , const MethodInfo*))Transform_1_Invoke_m1_13957_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector2,UnityEngine.Vector2>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m1_13958_gshared (Transform_1_t1_1673 * __this, Object_t * ___key, Vector2_t7_65  ___value, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1_13958(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1_1673 *, Object_t *, Vector2_t7_65 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m1_13958_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector2,UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" Vector2_t7_65  Transform_1_EndInvoke_m1_13959_gshared (Transform_1_t1_1673 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1_13959(__this, ___result, method) (( Vector2_t7_65  (*) (Transform_1_t1_1673 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m1_13959_gshared)(__this, ___result, method)
