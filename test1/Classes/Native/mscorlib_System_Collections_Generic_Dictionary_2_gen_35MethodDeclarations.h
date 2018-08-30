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

// System.Collections.Generic.Dictionary`2<System.Char,System.Object>
struct Dictionary_2_t1_1805;
// System.Collections.Generic.IEqualityComparer`1<System.Char>
struct IEqualityComparer_1_t1_1804;
// System.Collections.Generic.IDictionary`2<System.Char,System.Object>
struct IDictionary_2_t1_2035;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_179;
// System.Collections.Generic.ICollection`1<System.Char>
struct ICollection_1_t1_2036;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_924;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Char,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_2034;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Char,System.Object>>
struct IEnumerator_1_t1_2037;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_455;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Char,System.Object>
struct KeyCollection_t1_1809;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Char,System.Object>
struct ValueCollection_t1_1813;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_31.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__27.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m1_16527_gshared (Dictionary_2_t1_1805 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_16527(__this, method) (( void (*) (Dictionary_2_t1_1805 *, const MethodInfo*))Dictionary_2__ctor_m1_16527_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_16529_gshared (Dictionary_2_t1_1805 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_16529(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1805 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_16529_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m1_16531_gshared (Dictionary_2_t1_1805 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m1_16531(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1_1805 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_16531_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_16533_gshared (Dictionary_2_t1_1805 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_16533(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1805 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_16533_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_16535_gshared (Dictionary_2_t1_1805 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_16535(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1_1805 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_16535_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_16537_gshared (Dictionary_2_t1_1805 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_16537(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1805 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))Dictionary_2__ctor_m1_16537_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_16539_gshared (Dictionary_2_t1_1805 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_16539(__this, method) (( Object_t* (*) (Dictionary_2_t1_1805 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_16539_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_16541_gshared (Dictionary_2_t1_1805 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_16541(__this, method) (( Object_t* (*) (Dictionary_2_t1_1805 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_16541_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_16543_gshared (Dictionary_2_t1_1805 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_16543(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1805 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_16543_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_16545_gshared (Dictionary_2_t1_1805 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_16545(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1805 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_16545_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_16547_gshared (Dictionary_2_t1_1805 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_16547(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1805 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_16547_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_16549_gshared (Dictionary_2_t1_1805 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_16549(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1805 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_16549_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_16551_gshared (Dictionary_2_t1_1805 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_16551(__this, ___key, method) (( void (*) (Dictionary_2_t1_1805 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_16551_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_16553_gshared (Dictionary_2_t1_1805 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_16553(__this, method) (( bool (*) (Dictionary_2_t1_1805 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_16553_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_16555_gshared (Dictionary_2_t1_1805 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_16555(__this, method) (( Object_t * (*) (Dictionary_2_t1_1805 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_16555_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_16557_gshared (Dictionary_2_t1_1805 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_16557(__this, method) (( bool (*) (Dictionary_2_t1_1805 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_16557_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_16559_gshared (Dictionary_2_t1_1805 * __this, KeyValuePair_2_t1_1807  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_16559(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1805 *, KeyValuePair_2_t1_1807 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_16559_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_16561_gshared (Dictionary_2_t1_1805 * __this, KeyValuePair_2_t1_1807  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_16561(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1805 *, KeyValuePair_2_t1_1807 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_16561_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_16563_gshared (Dictionary_2_t1_1805 * __this, KeyValuePair_2U5BU5D_t1_2034* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_16563(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1805 *, KeyValuePair_2U5BU5D_t1_2034*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_16563_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_16565_gshared (Dictionary_2_t1_1805 * __this, KeyValuePair_2_t1_1807  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_16565(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1805 *, KeyValuePair_2_t1_1807 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_16565_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_16567_gshared (Dictionary_2_t1_1805 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_16567(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1805 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_16567_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_16569_gshared (Dictionary_2_t1_1805 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_16569(__this, method) (( Object_t * (*) (Dictionary_2_t1_1805 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_16569_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_16571_gshared (Dictionary_2_t1_1805 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_16571(__this, method) (( Object_t* (*) (Dictionary_2_t1_1805 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_16571_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Char,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_16573_gshared (Dictionary_2_t1_1805 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_16573(__this, method) (( Object_t * (*) (Dictionary_2_t1_1805 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_16573_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Char,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_16575_gshared (Dictionary_2_t1_1805 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_16575(__this, method) (( int32_t (*) (Dictionary_2_t1_1805 *, const MethodInfo*))Dictionary_2_get_Count_m1_16575_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Char,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m1_16577_gshared (Dictionary_2_t1_1805 * __this, uint16_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_16577(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1805 *, uint16_t, const MethodInfo*))Dictionary_2_get_Item_m1_16577_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_16579_gshared (Dictionary_2_t1_1805 * __this, uint16_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_16579(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1805 *, uint16_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1_16579_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_16581_gshared (Dictionary_2_t1_1805 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_16581(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1805 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_16581_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_16583_gshared (Dictionary_2_t1_1805 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_16583(__this, ___size, method) (( void (*) (Dictionary_2_t1_1805 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_16583_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_16585_gshared (Dictionary_2_t1_1805 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_16585(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1805 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_16585_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Char,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1807  Dictionary_2_make_pair_m1_16587_gshared (Object_t * __this /* static, unused */, uint16_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_16587(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1807  (*) (Object_t * /* static, unused */, uint16_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m1_16587_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Char,System.Object>::pick_key(TKey,TValue)
extern "C" uint16_t Dictionary_2_pick_key_m1_16589_gshared (Object_t * __this /* static, unused */, uint16_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_16589(__this /* static, unused */, ___key, ___value, method) (( uint16_t (*) (Object_t * /* static, unused */, uint16_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m1_16589_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Char,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m1_16591_gshared (Object_t * __this /* static, unused */, uint16_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_16591(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint16_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m1_16591_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_16593_gshared (Dictionary_2_t1_1805 * __this, KeyValuePair_2U5BU5D_t1_2034* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_16593(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1805 *, KeyValuePair_2U5BU5D_t1_2034*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_16593_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m1_16595_gshared (Dictionary_2_t1_1805 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_16595(__this, method) (( void (*) (Dictionary_2_t1_1805 *, const MethodInfo*))Dictionary_2_Resize_m1_16595_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_16597_gshared (Dictionary_2_t1_1805 * __this, uint16_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_16597(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1805 *, uint16_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m1_16597_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m1_16599_gshared (Dictionary_2_t1_1805 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_16599(__this, method) (( void (*) (Dictionary_2_t1_1805 *, const MethodInfo*))Dictionary_2_Clear_m1_16599_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_16601_gshared (Dictionary_2_t1_1805 * __this, uint16_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_16601(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1805 *, uint16_t, const MethodInfo*))Dictionary_2_ContainsKey_m1_16601_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_16603_gshared (Dictionary_2_t1_1805 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_16603(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1805 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m1_16603_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_16605_gshared (Dictionary_2_t1_1805 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_16605(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1805 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))Dictionary_2_GetObjectData_m1_16605_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Char,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_16607_gshared (Dictionary_2_t1_1805 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_16607(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1805 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_16607_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_16609_gshared (Dictionary_2_t1_1805 * __this, uint16_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_16609(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1805 *, uint16_t, const MethodInfo*))Dictionary_2_Remove_m1_16609_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_16611_gshared (Dictionary_2_t1_1805 * __this, uint16_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_16611(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1805 *, uint16_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m1_16611_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Char,System.Object>::get_Keys()
extern "C" KeyCollection_t1_1809 * Dictionary_2_get_Keys_m1_16613_gshared (Dictionary_2_t1_1805 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_16613(__this, method) (( KeyCollection_t1_1809 * (*) (Dictionary_2_t1_1805 *, const MethodInfo*))Dictionary_2_get_Keys_m1_16613_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Char,System.Object>::get_Values()
extern "C" ValueCollection_t1_1813 * Dictionary_2_get_Values_m1_16615_gshared (Dictionary_2_t1_1805 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_16615(__this, method) (( ValueCollection_t1_1813 * (*) (Dictionary_2_t1_1805 *, const MethodInfo*))Dictionary_2_get_Values_m1_16615_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Char,System.Object>::ToTKey(System.Object)
extern "C" uint16_t Dictionary_2_ToTKey_m1_16617_gshared (Dictionary_2_t1_1805 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_16617(__this, ___key, method) (( uint16_t (*) (Dictionary_2_t1_1805 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_16617_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Char,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m1_16619_gshared (Dictionary_2_t1_1805 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_16619(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1_1805 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_16619_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Char,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_16621_gshared (Dictionary_2_t1_1805 * __this, KeyValuePair_2_t1_1807  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_16621(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1805 *, KeyValuePair_2_t1_1807 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_16621_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Char,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1811  Dictionary_2_GetEnumerator_m1_16623_gshared (Dictionary_2_t1_1805 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_16623(__this, method) (( Enumerator_t1_1811  (*) (Dictionary_2_t1_1805 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_16623_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Char,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_169  Dictionary_2_U3CCopyToU3Em__0_m1_16625_gshared (Object_t * __this /* static, unused */, uint16_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_16625(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_169  (*) (Object_t * /* static, unused */, uint16_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_16625_gshared)(__this /* static, unused */, ___key, ___value, method)
