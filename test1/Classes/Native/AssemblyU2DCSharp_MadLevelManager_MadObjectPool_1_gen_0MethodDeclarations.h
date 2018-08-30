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

// MadLevelManager.MadObjectPool`1<System.Object>
struct MadObjectPool_1_t11_296;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void MadLevelManager.MadObjectPool`1<System.Object>::.ctor(System.Int32)
extern "C" void MadObjectPool_1__ctor_m11_2051_gshared (MadObjectPool_1_t11_296 * __this, int32_t ___capacity, const MethodInfo* method);
#define MadObjectPool_1__ctor_m11_2051(__this, ___capacity, method) (( void (*) (MadObjectPool_1_t11_296 *, int32_t, const MethodInfo*))MadObjectPool_1__ctor_m11_2051_gshared)(__this, ___capacity, method)
// System.Void MadLevelManager.MadObjectPool`1<System.Object>::Add(T)
extern "C" void MadObjectPool_1_Add_m11_2052_gshared (MadObjectPool_1_t11_296 * __this, Object_t * ___obj, const MethodInfo* method);
#define MadObjectPool_1_Add_m11_2052(__this, ___obj, method) (( void (*) (MadObjectPool_1_t11_296 *, Object_t *, const MethodInfo*))MadObjectPool_1_Add_m11_2052_gshared)(__this, ___obj, method)
// System.Boolean MadLevelManager.MadObjectPool`1<System.Object>::CanTake()
extern "C" bool MadObjectPool_1_CanTake_m11_2053_gshared (MadObjectPool_1_t11_296 * __this, const MethodInfo* method);
#define MadObjectPool_1_CanTake_m11_2053(__this, method) (( bool (*) (MadObjectPool_1_t11_296 *, const MethodInfo*))MadObjectPool_1_CanTake_m11_2053_gshared)(__this, method)
// T MadLevelManager.MadObjectPool`1<System.Object>::Take()
extern "C" Object_t * MadObjectPool_1_Take_m11_2054_gshared (MadObjectPool_1_t11_296 * __this, const MethodInfo* method);
#define MadObjectPool_1_Take_m11_2054(__this, method) (( Object_t * (*) (MadObjectPool_1_t11_296 *, const MethodInfo*))MadObjectPool_1_Take_m11_2054_gshared)(__this, method)
// System.Void MadLevelManager.MadObjectPool`1<System.Object>::Release(T)
extern "C" void MadObjectPool_1_Release_m11_2055_gshared (MadObjectPool_1_t11_296 * __this, Object_t * ___obj, const MethodInfo* method);
#define MadObjectPool_1_Release_m11_2055(__this, ___obj, method) (( void (*) (MadObjectPool_1_t11_296 *, Object_t *, const MethodInfo*))MadObjectPool_1_Release_m11_2055_gshared)(__this, ___obj, method)
// System.Int32 MadLevelManager.MadObjectPool`1<System.Object>::FindFree()
extern "C" int32_t MadObjectPool_1_FindFree_m11_2057_gshared (MadObjectPool_1_t11_296 * __this, const MethodInfo* method);
#define MadObjectPool_1_FindFree_m11_2057(__this, method) (( int32_t (*) (MadObjectPool_1_t11_296 *, const MethodInfo*))MadObjectPool_1_FindFree_m11_2057_gshared)(__this, method)
// System.Int32 MadLevelManager.MadObjectPool`1<System.Object>::Find(T)
extern "C" int32_t MadObjectPool_1_Find_m11_2059_gshared (MadObjectPool_1_t11_296 * __this, Object_t * ___obj, const MethodInfo* method);
#define MadObjectPool_1_Find_m11_2059(__this, ___obj, method) (( int32_t (*) (MadObjectPool_1_t11_296 *, Object_t *, const MethodInfo*))MadObjectPool_1_Find_m11_2059_gshared)(__this, ___obj, method)
