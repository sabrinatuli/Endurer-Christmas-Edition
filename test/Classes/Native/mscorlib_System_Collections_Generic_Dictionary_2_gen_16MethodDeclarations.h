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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1_1169;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1051;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t1_1610;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_179;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_917;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t1_1611;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t1_1609;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t1_1612;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_455;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t1_1173;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t1_1177;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m1_7202_gshared (Dictionary_2_t1_1169 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7202(__this, method) (( void (*) (Dictionary_2_t1_1169 *, const MethodInfo*))Dictionary_2__ctor_m1_7202_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_7203_gshared (Dictionary_2_t1_1169 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7203(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1169 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_7203_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m1_7205_gshared (Dictionary_2_t1_1169 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7205(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1_1169 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_7205_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_7207_gshared (Dictionary_2_t1_1169 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7207(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1169 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_7207_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_7209_gshared (Dictionary_2_t1_1169 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7209(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1_1169 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_7209_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_7211_gshared (Dictionary_2_t1_1169 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7211(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1169 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))Dictionary_2__ctor_m1_7211_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_7213_gshared (Dictionary_2_t1_1169 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_7213(__this, method) (( Object_t* (*) (Dictionary_2_t1_1169 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_7213_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_7215_gshared (Dictionary_2_t1_1169 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_7215(__this, method) (( Object_t* (*) (Dictionary_2_t1_1169 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_7215_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_7217_gshared (Dictionary_2_t1_1169 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_7217(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1169 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_7217_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_7219_gshared (Dictionary_2_t1_1169 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_7219(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1169 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_7219_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_7221_gshared (Dictionary_2_t1_1169 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_7221(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1169 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_7221_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_7223_gshared (Dictionary_2_t1_1169 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_7223(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1169 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_7223_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_7225_gshared (Dictionary_2_t1_1169 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_7225(__this, ___key, method) (( void (*) (Dictionary_2_t1_1169 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_7225_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7227_gshared (Dictionary_2_t1_1169 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7227(__this, method) (( bool (*) (Dictionary_2_t1_1169 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7227_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7229_gshared (Dictionary_2_t1_1169 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7229(__this, method) (( Object_t * (*) (Dictionary_2_t1_1169 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7229_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7231_gshared (Dictionary_2_t1_1169 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7231(__this, method) (( bool (*) (Dictionary_2_t1_1169 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7231_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7233_gshared (Dictionary_2_t1_1169 * __this, KeyValuePair_2_t1_1171  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7233(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1169 *, KeyValuePair_2_t1_1171 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7233_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7235_gshared (Dictionary_2_t1_1169 * __this, KeyValuePair_2_t1_1171  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7235(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1169 *, KeyValuePair_2_t1_1171 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7235_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7237_gshared (Dictionary_2_t1_1169 * __this, KeyValuePair_2U5BU5D_t1_1609* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7237(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1169 *, KeyValuePair_2U5BU5D_t1_1609*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7237_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7239_gshared (Dictionary_2_t1_1169 * __this, KeyValuePair_2_t1_1171  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7239(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1169 *, KeyValuePair_2_t1_1171 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7239_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_7241_gshared (Dictionary_2_t1_1169 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_7241(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1169 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_7241_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7243_gshared (Dictionary_2_t1_1169 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7243(__this, method) (( Object_t * (*) (Dictionary_2_t1_1169 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7243_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7245_gshared (Dictionary_2_t1_1169 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7245(__this, method) (( Object_t* (*) (Dictionary_2_t1_1169 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7245_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7247_gshared (Dictionary_2_t1_1169 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7247(__this, method) (( Object_t * (*) (Dictionary_2_t1_1169 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7247_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_7249_gshared (Dictionary_2_t1_1169 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_7249(__this, method) (( int32_t (*) (Dictionary_2_t1_1169 *, const MethodInfo*))Dictionary_2_get_Count_m1_7249_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m1_7251_gshared (Dictionary_2_t1_1169 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_7251(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1169 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_7251_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_7253_gshared (Dictionary_2_t1_1169 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_7253(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1169 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m1_7253_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_7255_gshared (Dictionary_2_t1_1169 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_7255(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1169 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_7255_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_7257_gshared (Dictionary_2_t1_1169 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_7257(__this, ___size, method) (( void (*) (Dictionary_2_t1_1169 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_7257_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_7259_gshared (Dictionary_2_t1_1169 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_7259(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1169 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_7259_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1171  Dictionary_2_make_pair_m1_7261_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_7261(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1171  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m1_7261_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m1_7263_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_7263(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m1_7263_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m1_7265_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_7265(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m1_7265_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_7267_gshared (Dictionary_2_t1_1169 * __this, KeyValuePair_2U5BU5D_t1_1609* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_7267(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1169 *, KeyValuePair_2U5BU5D_t1_1609*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_7267_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m1_7269_gshared (Dictionary_2_t1_1169 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_7269(__this, method) (( void (*) (Dictionary_2_t1_1169 *, const MethodInfo*))Dictionary_2_Resize_m1_7269_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_7271_gshared (Dictionary_2_t1_1169 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_7271(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1169 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m1_7271_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m1_7273_gshared (Dictionary_2_t1_1169 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_7273(__this, method) (( void (*) (Dictionary_2_t1_1169 *, const MethodInfo*))Dictionary_2_Clear_m1_7273_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_7275_gshared (Dictionary_2_t1_1169 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_7275(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1169 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_7275_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_7277_gshared (Dictionary_2_t1_1169 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_7277(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1169 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m1_7277_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_7279_gshared (Dictionary_2_t1_1169 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_7279(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1169 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))Dictionary_2_GetObjectData_m1_7279_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_7281_gshared (Dictionary_2_t1_1169 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_7281(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1169 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_7281_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_7283_gshared (Dictionary_2_t1_1169 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_7283(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1169 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_7283_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_7285_gshared (Dictionary_2_t1_1169 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_7285(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1169 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m1_7285_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t1_1173 * Dictionary_2_get_Keys_m1_7287_gshared (Dictionary_2_t1_1169 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_7287(__this, method) (( KeyCollection_t1_1173 * (*) (Dictionary_2_t1_1169 *, const MethodInfo*))Dictionary_2_get_Keys_m1_7287_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t1_1177 * Dictionary_2_get_Values_m1_7289_gshared (Dictionary_2_t1_1169 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_7289(__this, method) (( ValueCollection_t1_1177 * (*) (Dictionary_2_t1_1169 *, const MethodInfo*))Dictionary_2_get_Values_m1_7289_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_7291_gshared (Dictionary_2_t1_1169 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_7291(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1169 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_7291_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m1_7293_gshared (Dictionary_2_t1_1169 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_7293(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1169 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_7293_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_7295_gshared (Dictionary_2_t1_1169 * __this, KeyValuePair_2_t1_1171  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_7295(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1169 *, KeyValuePair_2_t1_1171 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_7295_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t1_1175  Dictionary_2_GetEnumerator_m1_7297_gshared (Dictionary_2_t1_1169 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_7297(__this, method) (( Enumerator_t1_1175  (*) (Dictionary_2_t1_1169 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_7297_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_169  Dictionary_2_U3CCopyToU3Em__0_m1_7299_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_7299(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_169  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_7299_gshared)(__this /* static, unused */, ___key, ___value, method)
