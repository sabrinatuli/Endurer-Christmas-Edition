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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>
struct KeyCollection_t1_1809;
// System.Collections.Generic.Dictionary`2<System.Char,System.Object>
struct Dictionary_2_t1_1805;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t1_802;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t1_16;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_37.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m1_16638_gshared (KeyCollection_t1_1809 * __this, Dictionary_2_t1_1805 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m1_16638(__this, ___dictionary, method) (( void (*) (KeyCollection_t1_1809 *, Dictionary_2_t1_1805 *, const MethodInfo*))KeyCollection__ctor_m1_16638_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_16639_gshared (KeyCollection_t1_1809 * __this, uint16_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_16639(__this, ___item, method) (( void (*) (KeyCollection_t1_1809 *, uint16_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m1_16639_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_16640_gshared (KeyCollection_t1_1809 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_16640(__this, method) (( void (*) (KeyCollection_t1_1809 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m1_16640_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_16641_gshared (KeyCollection_t1_1809 * __this, uint16_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_16641(__this, ___item, method) (( bool (*) (KeyCollection_t1_1809 *, uint16_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m1_16641_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_16642_gshared (KeyCollection_t1_1809 * __this, uint16_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_16642(__this, ___item, method) (( bool (*) (KeyCollection_t1_1809 *, uint16_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m1_16642_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_16643_gshared (KeyCollection_t1_1809 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_16643(__this, method) (( Object_t* (*) (KeyCollection_t1_1809 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m1_16643_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m1_16644_gshared (KeyCollection_t1_1809 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m1_16644(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1809 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m1_16644_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_16645_gshared (KeyCollection_t1_1809 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_16645(__this, method) (( Object_t * (*) (KeyCollection_t1_1809 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m1_16645_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_16646_gshared (KeyCollection_t1_1809 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_16646(__this, method) (( bool (*) (KeyCollection_t1_1809 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m1_16646_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_16647_gshared (KeyCollection_t1_1809 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_16647(__this, method) (( bool (*) (KeyCollection_t1_1809 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m1_16647_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_16648_gshared (KeyCollection_t1_1809 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_16648(__this, method) (( Object_t * (*) (KeyCollection_t1_1809 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m1_16648_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m1_16649_gshared (KeyCollection_t1_1809 * __this, CharU5BU5D_t1_16* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m1_16649(__this, ___array, ___index, method) (( void (*) (KeyCollection_t1_1809 *, CharU5BU5D_t1_16*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m1_16649_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1810  KeyCollection_GetEnumerator_m1_16650_gshared (KeyCollection_t1_1809 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m1_16650(__this, method) (( Enumerator_t1_1810  (*) (KeyCollection_t1_1809 *, const MethodInfo*))KeyCollection_GetEnumerator_m1_16650_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m1_16651_gshared (KeyCollection_t1_1809 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m1_16651(__this, method) (( int32_t (*) (KeyCollection_t1_1809 *, const MethodInfo*))KeyCollection_get_Count_m1_16651_gshared)(__this, method)
