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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1_907;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1_1411;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t1_1946;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_179;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1_1902;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_924;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_1945;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1_1947;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_455;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1_1415;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1_1419;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m1_5586_gshared (Dictionary_2_t1_907 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_5586(__this, method) (( void (*) (Dictionary_2_t1_907 *, const MethodInfo*))Dictionary_2__ctor_m1_5586_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_9488_gshared (Dictionary_2_t1_907 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_9488(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_907 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_9488_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m1_9490_gshared (Dictionary_2_t1_907 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m1_9490(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1_907 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_9490_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_9492_gshared (Dictionary_2_t1_907 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_9492(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_907 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_9492_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_9494_gshared (Dictionary_2_t1_907 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_9494(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1_907 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_9494_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_9496_gshared (Dictionary_2_t1_907 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_9496(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_907 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))Dictionary_2__ctor_m1_9496_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_9498_gshared (Dictionary_2_t1_907 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_9498(__this, method) (( Object_t* (*) (Dictionary_2_t1_907 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_9498_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_9500_gshared (Dictionary_2_t1_907 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_9500(__this, method) (( Object_t* (*) (Dictionary_2_t1_907 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_9500_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_9502_gshared (Dictionary_2_t1_907 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_9502(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_907 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_9502_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_9504_gshared (Dictionary_2_t1_907 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_9504(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_907 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_9504_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_9506_gshared (Dictionary_2_t1_907 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_9506(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_907 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_9506_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_9508_gshared (Dictionary_2_t1_907 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_9508(__this, ___key, method) (( bool (*) (Dictionary_2_t1_907 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_9508_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_9510_gshared (Dictionary_2_t1_907 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_9510(__this, ___key, method) (( void (*) (Dictionary_2_t1_907 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_9510_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_9512_gshared (Dictionary_2_t1_907 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_9512(__this, method) (( bool (*) (Dictionary_2_t1_907 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_9512_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_9514_gshared (Dictionary_2_t1_907 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_9514(__this, method) (( Object_t * (*) (Dictionary_2_t1_907 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_9514_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_9516_gshared (Dictionary_2_t1_907 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_9516(__this, method) (( bool (*) (Dictionary_2_t1_907 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_9516_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_9518_gshared (Dictionary_2_t1_907 * __this, KeyValuePair_2_t1_1413  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_9518(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_907 *, KeyValuePair_2_t1_1413 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_9518_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_9520_gshared (Dictionary_2_t1_907 * __this, KeyValuePair_2_t1_1413  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_9520(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_907 *, KeyValuePair_2_t1_1413 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_9520_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_9522_gshared (Dictionary_2_t1_907 * __this, KeyValuePair_2U5BU5D_t1_1945* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_9522(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_907 *, KeyValuePair_2U5BU5D_t1_1945*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_9522_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_9524_gshared (Dictionary_2_t1_907 * __this, KeyValuePair_2_t1_1413  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_9524(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_907 *, KeyValuePair_2_t1_1413 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_9524_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_9526_gshared (Dictionary_2_t1_907 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_9526(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_907 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_9526_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_9528_gshared (Dictionary_2_t1_907 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_9528(__this, method) (( Object_t * (*) (Dictionary_2_t1_907 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_9528_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_9530_gshared (Dictionary_2_t1_907 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_9530(__this, method) (( Object_t* (*) (Dictionary_2_t1_907 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_9530_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_9532_gshared (Dictionary_2_t1_907 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_9532(__this, method) (( Object_t * (*) (Dictionary_2_t1_907 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_9532_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_9534_gshared (Dictionary_2_t1_907 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_9534(__this, method) (( int32_t (*) (Dictionary_2_t1_907 *, const MethodInfo*))Dictionary_2_get_Count_m1_9534_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m1_9536_gshared (Dictionary_2_t1_907 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_9536(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_907 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m1_9536_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_9538_gshared (Dictionary_2_t1_907 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_9538(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_907 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1_9538_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_9540_gshared (Dictionary_2_t1_907 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_9540(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_907 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_9540_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_9542_gshared (Dictionary_2_t1_907 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_9542(__this, ___size, method) (( void (*) (Dictionary_2_t1_907 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_9542_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_9544_gshared (Dictionary_2_t1_907 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_9544(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_907 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_9544_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1413  Dictionary_2_make_pair_m1_9546_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_9546(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1413  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m1_9546_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m1_9548_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_9548(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m1_9548_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m1_9550_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_9550(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m1_9550_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_9552_gshared (Dictionary_2_t1_907 * __this, KeyValuePair_2U5BU5D_t1_1945* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_9552(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_907 *, KeyValuePair_2U5BU5D_t1_1945*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_9552_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m1_9554_gshared (Dictionary_2_t1_907 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_9554(__this, method) (( void (*) (Dictionary_2_t1_907 *, const MethodInfo*))Dictionary_2_Resize_m1_9554_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_9556_gshared (Dictionary_2_t1_907 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_9556(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_907 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m1_9556_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m1_9558_gshared (Dictionary_2_t1_907 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_9558(__this, method) (( void (*) (Dictionary_2_t1_907 *, const MethodInfo*))Dictionary_2_Clear_m1_9558_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_9560_gshared (Dictionary_2_t1_907 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_9560(__this, ___key, method) (( bool (*) (Dictionary_2_t1_907 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m1_9560_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_9562_gshared (Dictionary_2_t1_907 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_9562(__this, ___value, method) (( bool (*) (Dictionary_2_t1_907 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m1_9562_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_9564_gshared (Dictionary_2_t1_907 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_9564(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_907 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))Dictionary_2_GetObjectData_m1_9564_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_9566_gshared (Dictionary_2_t1_907 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_9566(__this, ___sender, method) (( void (*) (Dictionary_2_t1_907 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_9566_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_9568_gshared (Dictionary_2_t1_907 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_9568(__this, ___key, method) (( bool (*) (Dictionary_2_t1_907 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m1_9568_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_9570_gshared (Dictionary_2_t1_907 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_9570(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_907 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m1_9570_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t1_1415 * Dictionary_2_get_Keys_m1_9572_gshared (Dictionary_2_t1_907 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_9572(__this, method) (( KeyCollection_t1_1415 * (*) (Dictionary_2_t1_907 *, const MethodInfo*))Dictionary_2_get_Keys_m1_9572_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1_1419 * Dictionary_2_get_Values_m1_9574_gshared (Dictionary_2_t1_907 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_9574(__this, method) (( ValueCollection_t1_1419 * (*) (Dictionary_2_t1_907 *, const MethodInfo*))Dictionary_2_get_Values_m1_9574_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m1_9576_gshared (Dictionary_2_t1_907 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_9576(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_907 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_9576_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m1_9578_gshared (Dictionary_2_t1_907 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_9578(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1_907 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_9578_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_9580_gshared (Dictionary_2_t1_907 * __this, KeyValuePair_2_t1_1413  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_9580(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_907 *, KeyValuePair_2_t1_1413 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_9580_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1417  Dictionary_2_GetEnumerator_m1_9582_gshared (Dictionary_2_t1_907 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_9582(__this, method) (( Enumerator_t1_1417  (*) (Dictionary_2_t1_907 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_9582_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_169  Dictionary_2_U3CCopyToU3Em__0_m1_9584_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_9584(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_169  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_9584_gshared)(__this /* static, unused */, ___key, ___value, method)
