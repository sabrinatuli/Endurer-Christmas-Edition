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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1_1415;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1_907;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t1_1904;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t1_162;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_14.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m1_9597_gshared (KeyCollection_t1_1415 * __this, Dictionary_2_t1_907 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m1_9597(__this, ___dictionary, method) (( void (*) (KeyCollection_t1_1415 *, Dictionary_2_t1_907 *, const MethodInfo*))KeyCollection__ctor_m1_9597_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_9598_gshared (KeyCollection_t1_1415 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_9598(__this, ___item, method) (( void (*) (KeyCollection_t1_1415 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_9598_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_9599_gshared (KeyCollection_t1_1415 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_9599(__this, method) (( void (*) (KeyCollection_t1_1415 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_9599_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_9600_gshared (KeyCollection_t1_1415 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_9600(__this, ___item, method) (( bool (*) (KeyCollection_t1_1415 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_9600_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_9601_gshared (KeyCollection_t1_1415 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_9601(__this, ___item, method) (( bool (*) (KeyCollection_t1_1415 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_9601_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_9602_gshared (KeyCollection_t1_1415 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_9602(__this, method) (( Object_t* (*) (KeyCollection_t1_1415 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_9602_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m1_9603_gshared (KeyCollection_t1_1415 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m1_9603(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1415 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m1_9603_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_9604_gshared (KeyCollection_t1_1415 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_9604(__this, method) (( Object_t * (*) (KeyCollection_t1_1415 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_9604_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_9605_gshared (KeyCollection_t1_1415 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_9605(__this, method) (( bool (*) (KeyCollection_t1_1415 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_9605_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_9606_gshared (KeyCollection_t1_1415 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_9606(__this, method) (( bool (*) (KeyCollection_t1_1415 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_9606_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_9607_gshared (KeyCollection_t1_1415 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_9607(__this, method) (( Object_t * (*) (KeyCollection_t1_1415 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_9607_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m1_9608_gshared (KeyCollection_t1_1415 * __this, Int32U5BU5D_t1_162* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m1_9608(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1415 *, Int32U5BU5D_t1_162*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m1_9608_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1416  KeyCollection_GetEnumerator_m1_9609_gshared (KeyCollection_t1_1415 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m1_9609(__this, method) (( Enumerator_t1_1416  (*) (KeyCollection_t1_1415 *, const MethodInfo*))KeyCollection_GetEnumerator_m1_9609_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m1_9610_gshared (KeyCollection_t1_1415 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m1_9610(__this, method) (( int32_t (*) (KeyCollection_t1_1415 *, const MethodInfo*))KeyCollection_get_Count_m1_9610_gshared)(__this, method)
