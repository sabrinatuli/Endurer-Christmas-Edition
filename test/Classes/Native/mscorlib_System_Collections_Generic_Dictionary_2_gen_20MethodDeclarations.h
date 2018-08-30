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

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t1_1372;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1051;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t1_1663;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_179;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_917;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t1_1664;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t1_1662;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t1_1665;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_455;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t1_1375;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t1_1379;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m1_10038_gshared (Dictionary_2_t1_1372 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10038(__this, method) (( void (*) (Dictionary_2_t1_1372 *, const MethodInfo*))Dictionary_2__ctor_m1_10038_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_10040_gshared (Dictionary_2_t1_1372 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10040(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1372 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_10040_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m1_10042_gshared (Dictionary_2_t1_1372 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10042(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1_1372 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_10042_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_10044_gshared (Dictionary_2_t1_1372 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10044(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1372 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_10044_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_10046_gshared (Dictionary_2_t1_1372 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10046(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1_1372 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_10046_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_10048_gshared (Dictionary_2_t1_1372 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_10048(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1372 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))Dictionary_2__ctor_m1_10048_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_10050_gshared (Dictionary_2_t1_1372 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_10050(__this, method) (( Object_t* (*) (Dictionary_2_t1_1372 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_10050_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_10052_gshared (Dictionary_2_t1_1372 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_10052(__this, method) (( Object_t* (*) (Dictionary_2_t1_1372 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_10052_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_10054_gshared (Dictionary_2_t1_1372 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_10054(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1372 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_10054_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_10056_gshared (Dictionary_2_t1_1372 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_10056(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1372 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_10056_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_10058_gshared (Dictionary_2_t1_1372 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_10058(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1372 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_10058_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_10060_gshared (Dictionary_2_t1_1372 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_10060(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1372 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_10060_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_10062_gshared (Dictionary_2_t1_1372 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_10062(__this, ___key, method) (( void (*) (Dictionary_2_t1_1372 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_10062_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_10064_gshared (Dictionary_2_t1_1372 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_10064(__this, method) (( bool (*) (Dictionary_2_t1_1372 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_10064_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_10066_gshared (Dictionary_2_t1_1372 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_10066(__this, method) (( Object_t * (*) (Dictionary_2_t1_1372 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_10066_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_10068_gshared (Dictionary_2_t1_1372 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_10068(__this, method) (( bool (*) (Dictionary_2_t1_1372 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_10068_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_10070_gshared (Dictionary_2_t1_1372 * __this, KeyValuePair_2_t1_1352  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_10070(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1372 *, KeyValuePair_2_t1_1352 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_10070_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_10072_gshared (Dictionary_2_t1_1372 * __this, KeyValuePair_2_t1_1352  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_10072(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1372 *, KeyValuePair_2_t1_1352 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_10072_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_10074_gshared (Dictionary_2_t1_1372 * __this, KeyValuePair_2U5BU5D_t1_1662* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_10074(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1372 *, KeyValuePair_2U5BU5D_t1_1662*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_10074_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_10076_gshared (Dictionary_2_t1_1372 * __this, KeyValuePair_2_t1_1352  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_10076(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1372 *, KeyValuePair_2_t1_1352 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_10076_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_10078_gshared (Dictionary_2_t1_1372 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_10078(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1372 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_10078_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_10080_gshared (Dictionary_2_t1_1372 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_10080(__this, method) (( Object_t * (*) (Dictionary_2_t1_1372 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_10080_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_10082_gshared (Dictionary_2_t1_1372 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_10082(__this, method) (( Object_t* (*) (Dictionary_2_t1_1372 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_10082_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_10084_gshared (Dictionary_2_t1_1372 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_10084(__this, method) (( Object_t * (*) (Dictionary_2_t1_1372 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_10084_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_10086_gshared (Dictionary_2_t1_1372 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_10086(__this, method) (( int32_t (*) (Dictionary_2_t1_1372 *, const MethodInfo*))Dictionary_2_get_Count_m1_10086_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t1_1081  Dictionary_2_get_Item_m1_10088_gshared (Dictionary_2_t1_1372 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_10088(__this, ___key, method) (( KeyValuePair_2_t1_1081  (*) (Dictionary_2_t1_1372 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_10088_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_10090_gshared (Dictionary_2_t1_1372 * __this, Object_t * ___key, KeyValuePair_2_t1_1081  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_10090(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1372 *, Object_t *, KeyValuePair_2_t1_1081 , const MethodInfo*))Dictionary_2_set_Item_m1_10090_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_10092_gshared (Dictionary_2_t1_1372 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_10092(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1372 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_10092_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_10094_gshared (Dictionary_2_t1_1372 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_10094(__this, ___size, method) (( void (*) (Dictionary_2_t1_1372 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_10094_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_10096_gshared (Dictionary_2_t1_1372 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_10096(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1372 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_10096_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1352  Dictionary_2_make_pair_m1_10098_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1_1081  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_10098(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1352  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1_1081 , const MethodInfo*))Dictionary_2_make_pair_m1_10098_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m1_10100_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1_1081  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_10100(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1_1081 , const MethodInfo*))Dictionary_2_pick_key_m1_10100_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t1_1081  Dictionary_2_pick_value_m1_10102_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1_1081  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_10102(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1081  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1_1081 , const MethodInfo*))Dictionary_2_pick_value_m1_10102_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_10104_gshared (Dictionary_2_t1_1372 * __this, KeyValuePair_2U5BU5D_t1_1662* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_10104(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1372 *, KeyValuePair_2U5BU5D_t1_1662*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_10104_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m1_10106_gshared (Dictionary_2_t1_1372 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_10106(__this, method) (( void (*) (Dictionary_2_t1_1372 *, const MethodInfo*))Dictionary_2_Resize_m1_10106_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_10108_gshared (Dictionary_2_t1_1372 * __this, Object_t * ___key, KeyValuePair_2_t1_1081  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_10108(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1372 *, Object_t *, KeyValuePair_2_t1_1081 , const MethodInfo*))Dictionary_2_Add_m1_10108_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m1_10110_gshared (Dictionary_2_t1_1372 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_10110(__this, method) (( void (*) (Dictionary_2_t1_1372 *, const MethodInfo*))Dictionary_2_Clear_m1_10110_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_10112_gshared (Dictionary_2_t1_1372 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_10112(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1372 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_10112_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_10114_gshared (Dictionary_2_t1_1372 * __this, KeyValuePair_2_t1_1081  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_10114(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1372 *, KeyValuePair_2_t1_1081 , const MethodInfo*))Dictionary_2_ContainsValue_m1_10114_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_10116_gshared (Dictionary_2_t1_1372 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_10116(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1372 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))Dictionary_2_GetObjectData_m1_10116_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_10118_gshared (Dictionary_2_t1_1372 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_10118(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1372 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_10118_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_10120_gshared (Dictionary_2_t1_1372 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_10120(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1372 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_10120_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_10122_gshared (Dictionary_2_t1_1372 * __this, Object_t * ___key, KeyValuePair_2_t1_1081 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_10122(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1372 *, Object_t *, KeyValuePair_2_t1_1081 *, const MethodInfo*))Dictionary_2_TryGetValue_m1_10122_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t1_1375 * Dictionary_2_get_Keys_m1_10124_gshared (Dictionary_2_t1_1372 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_10124(__this, method) (( KeyCollection_t1_1375 * (*) (Dictionary_2_t1_1372 *, const MethodInfo*))Dictionary_2_get_Keys_m1_10124_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t1_1379 * Dictionary_2_get_Values_m1_10126_gshared (Dictionary_2_t1_1372 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_10126(__this, method) (( ValueCollection_t1_1379 * (*) (Dictionary_2_t1_1372 *, const MethodInfo*))Dictionary_2_get_Values_m1_10126_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_10128_gshared (Dictionary_2_t1_1372 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_10128(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1372 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_10128_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t1_1081  Dictionary_2_ToTValue_m1_10130_gshared (Dictionary_2_t1_1372 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_10130(__this, ___value, method) (( KeyValuePair_2_t1_1081  (*) (Dictionary_2_t1_1372 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_10130_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_10132_gshared (Dictionary_2_t1_1372 * __this, KeyValuePair_2_t1_1352  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_10132(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1372 *, KeyValuePair_2_t1_1352 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_10132_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t1_1377  Dictionary_2_GetEnumerator_m1_10134_gshared (Dictionary_2_t1_1372 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_10134(__this, method) (( Enumerator_t1_1377  (*) (Dictionary_2_t1_1372 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_10134_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_169  Dictionary_2_U3CCopyToU3Em__0_m1_10136_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1_1081  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_10136(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_169  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1_1081 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_10136_gshared)(__this /* static, unused */, ___key, ___value, method)
