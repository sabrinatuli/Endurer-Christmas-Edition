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

// System.Predicate`1<UnityEngine.Vector3>
struct Predicate_1_t1_1314;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Predicate`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m1_8098_gshared (Predicate_1_t1_1314 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m1_8098(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1_1314 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m1_8098_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m1_8099_gshared (Predicate_1_t1_1314 * __this, Vector3_t7_66  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m1_8099(__this, ___obj, method) (( bool (*) (Predicate_1_t1_1314 *, Vector3_t7_66 , const MethodInfo*))Predicate_1_Invoke_m1_8099_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector3>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m1_8100_gshared (Predicate_1_t1_1314 * __this, Vector3_t7_66  ___obj, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m1_8100(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1_1314 *, Vector3_t7_66 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m1_8100_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m1_8101_gshared (Predicate_1_t1_1314 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m1_8101(__this, ___result, method) (( bool (*) (Predicate_1_t1_1314 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m1_8101_gshared)(__this, ___result, method)
