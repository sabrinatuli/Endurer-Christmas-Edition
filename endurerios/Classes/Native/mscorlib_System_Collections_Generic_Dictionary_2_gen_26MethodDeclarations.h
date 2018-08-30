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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1_1159;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1131;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t1_1907;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_179;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_924;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_1459;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1_1908;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_455;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t1_1163;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1_1167;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m1_6479_gshared (Dictionary_2_t1_1159 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6479(__this, method) (( void (*) (Dictionary_2_t1_1159 *, const MethodInfo*))Dictionary_2__ctor_m1_6479_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_6480_gshared (Dictionary_2_t1_1159 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6480(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1159 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_6480_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m1_6481_gshared (Dictionary_2_t1_1159 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6481(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1_1159 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_6481_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_6482_gshared (Dictionary_2_t1_1159 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6482(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1159 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_6482_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_6483_gshared (Dictionary_2_t1_1159 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6483(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1_1159 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_6483_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_6484_gshared (Dictionary_2_t1_1159 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6484(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1159 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))Dictionary_2__ctor_m1_6484_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_6485_gshared (Dictionary_2_t1_1159 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_6485(__this, method) (( Object_t* (*) (Dictionary_2_t1_1159 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_6485_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_6486_gshared (Dictionary_2_t1_1159 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_6486(__this, method) (( Object_t* (*) (Dictionary_2_t1_1159 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_6486_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_6487_gshared (Dictionary_2_t1_1159 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_6487(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1159 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_6487_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_6488_gshared (Dictionary_2_t1_1159 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_6488(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1159 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_6488_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_6489_gshared (Dictionary_2_t1_1159 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_6489(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1159 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_6489_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_6490_gshared (Dictionary_2_t1_1159 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_6490(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1159 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_6490_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_6491_gshared (Dictionary_2_t1_1159 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_6491(__this, ___key, method) (( void (*) (Dictionary_2_t1_1159 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_6491_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6492_gshared (Dictionary_2_t1_1159 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6492(__this, method) (( bool (*) (Dictionary_2_t1_1159 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6492_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6493_gshared (Dictionary_2_t1_1159 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6493(__this, method) (( Object_t * (*) (Dictionary_2_t1_1159 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6493_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6494_gshared (Dictionary_2_t1_1159 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6494(__this, method) (( bool (*) (Dictionary_2_t1_1159 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6494_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6495_gshared (Dictionary_2_t1_1159 * __this, KeyValuePair_2_t1_1161  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6495(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1159 *, KeyValuePair_2_t1_1161 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6495_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6496_gshared (Dictionary_2_t1_1159 * __this, KeyValuePair_2_t1_1161  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6496(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1159 *, KeyValuePair_2_t1_1161 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6496_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6497_gshared (Dictionary_2_t1_1159 * __this, KeyValuePair_2U5BU5D_t1_1459* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6497(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1159 *, KeyValuePair_2U5BU5D_t1_1459*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6497_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6498_gshared (Dictionary_2_t1_1159 * __this, KeyValuePair_2_t1_1161  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6498(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1159 *, KeyValuePair_2_t1_1161 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6498_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_6499_gshared (Dictionary_2_t1_1159 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_6499(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1159 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_6499_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6500_gshared (Dictionary_2_t1_1159 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6500(__this, method) (( Object_t * (*) (Dictionary_2_t1_1159 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6500_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6501_gshared (Dictionary_2_t1_1159 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6501(__this, method) (( Object_t* (*) (Dictionary_2_t1_1159 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6501_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6502_gshared (Dictionary_2_t1_1159 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6502(__this, method) (( Object_t * (*) (Dictionary_2_t1_1159 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6502_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_6503_gshared (Dictionary_2_t1_1159 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_6503(__this, method) (( int32_t (*) (Dictionary_2_t1_1159 *, const MethodInfo*))Dictionary_2_get_Count_m1_6503_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m1_6504_gshared (Dictionary_2_t1_1159 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_6504(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1159 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_6504_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_6505_gshared (Dictionary_2_t1_1159 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_6505(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1159 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1_6505_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_6506_gshared (Dictionary_2_t1_1159 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_6506(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1159 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_6506_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_6507_gshared (Dictionary_2_t1_1159 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_6507(__this, ___size, method) (( void (*) (Dictionary_2_t1_1159 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_6507_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_6508_gshared (Dictionary_2_t1_1159 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_6508(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1159 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_6508_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1161  Dictionary_2_make_pair_m1_6509_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_6509(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1161  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m1_6509_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m1_6510_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_6510(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m1_6510_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m1_6511_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_6511(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m1_6511_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_6512_gshared (Dictionary_2_t1_1159 * __this, KeyValuePair_2U5BU5D_t1_1459* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_6512(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1159 *, KeyValuePair_2U5BU5D_t1_1459*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_6512_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m1_6513_gshared (Dictionary_2_t1_1159 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_6513(__this, method) (( void (*) (Dictionary_2_t1_1159 *, const MethodInfo*))Dictionary_2_Resize_m1_6513_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_6514_gshared (Dictionary_2_t1_1159 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_6514(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1159 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m1_6514_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m1_6515_gshared (Dictionary_2_t1_1159 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_6515(__this, method) (( void (*) (Dictionary_2_t1_1159 *, const MethodInfo*))Dictionary_2_Clear_m1_6515_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_6516_gshared (Dictionary_2_t1_1159 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_6516(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1159 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_6516_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_6517_gshared (Dictionary_2_t1_1159 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_6517(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1159 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m1_6517_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_6518_gshared (Dictionary_2_t1_1159 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_6518(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1159 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))Dictionary_2_GetObjectData_m1_6518_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_6519_gshared (Dictionary_2_t1_1159 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_6519(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1159 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_6519_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_6520_gshared (Dictionary_2_t1_1159 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_6520(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1159 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_6520_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_6521_gshared (Dictionary_2_t1_1159 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_6521(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1159 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m1_6521_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t1_1163 * Dictionary_2_get_Keys_m1_6522_gshared (Dictionary_2_t1_1159 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_6522(__this, method) (( KeyCollection_t1_1163 * (*) (Dictionary_2_t1_1159 *, const MethodInfo*))Dictionary_2_get_Keys_m1_6522_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1_1167 * Dictionary_2_get_Values_m1_6523_gshared (Dictionary_2_t1_1159 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_6523(__this, method) (( ValueCollection_t1_1167 * (*) (Dictionary_2_t1_1159 *, const MethodInfo*))Dictionary_2_get_Values_m1_6523_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_6524_gshared (Dictionary_2_t1_1159 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_6524(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1159 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_6524_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m1_6525_gshared (Dictionary_2_t1_1159 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_6525(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1_1159 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_6525_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_6526_gshared (Dictionary_2_t1_1159 * __this, KeyValuePair_2_t1_1161  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_6526(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1159 *, KeyValuePair_2_t1_1161 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_6526_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1165  Dictionary_2_GetEnumerator_m1_6527_gshared (Dictionary_2_t1_1159 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_6527(__this, method) (( Enumerator_t1_1165  (*) (Dictionary_2_t1_1159 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_6527_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_169  Dictionary_2_U3CCopyToU3Em__0_m1_6528_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_6528(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_169  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_6528_gshared)(__this /* static, unused */, ___key, ___value, method)
