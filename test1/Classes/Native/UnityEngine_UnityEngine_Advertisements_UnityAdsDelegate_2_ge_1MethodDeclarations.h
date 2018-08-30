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

// UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>
struct UnityAdsDelegate_2_t7_419;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAdsDelegate_2__ctor_m7_2572_gshared (UnityAdsDelegate_2_t7_419 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAdsDelegate_2__ctor_m7_2572(__this, ___object, ___method, method) (( void (*) (UnityAdsDelegate_2_t7_419 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAdsDelegate_2__ctor_m7_2572_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::Invoke(T1,T2)
extern "C" void UnityAdsDelegate_2_Invoke_m7_2573_gshared (UnityAdsDelegate_2_t7_419 * __this, Object_t * ___p1, Object_t * ___p2, const MethodInfo* method);
#define UnityAdsDelegate_2_Invoke_m7_2573(__this, ___p1, ___p2, method) (( void (*) (UnityAdsDelegate_2_t7_419 *, Object_t *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_Invoke_m7_2573_gshared)(__this, ___p1, ___p2, method)
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAdsDelegate_2_BeginInvoke_m7_2574_gshared (UnityAdsDelegate_2_t7_419 * __this, Object_t * ___p1, Object_t * ___p2, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAdsDelegate_2_BeginInvoke_m7_2574(__this, ___p1, ___p2, ___callback, ___object, method) (( Object_t * (*) (UnityAdsDelegate_2_t7_419 *, Object_t *, Object_t *, AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_BeginInvoke_m7_2574_gshared)(__this, ___p1, ___p2, ___callback, ___object, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_2_EndInvoke_m7_2575_gshared (UnityAdsDelegate_2_t7_419 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAdsDelegate_2_EndInvoke_m7_2575(__this, ___result, method) (( void (*) (UnityAdsDelegate_2_t7_419 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_EndInvoke_m7_2575_gshared)(__this, ___result, method)
