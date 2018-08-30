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
struct Dictionary_2_t1_1079;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1051;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t1_1602;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_179;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_917;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_1373;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1_1603;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_455;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t1_1083;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1_1087;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m1_6342_gshared (Dictionary_2_t1_1079 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6342(__this, method) (( void (*) (Dictionary_2_t1_1079 *, const MethodInfo*))Dictionary_2__ctor_m1_6342_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_6343_gshared (Dictionary_2_t1_1079 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6343(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1079 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_6343_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m1_6344_gshared (Dictionary_2_t1_1079 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6344(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1_1079 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_6344_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_6345_gshared (Dictionary_2_t1_1079 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6345(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1079 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_6345_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_6346_gshared (Dictionary_2_t1_1079 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6346(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1_1079 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_6346_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_6347_gshared (Dictionary_2_t1_1079 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6347(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1079 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))Dictionary_2__ctor_m1_6347_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_6348_gshared (Dictionary_2_t1_1079 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_6348(__this, method) (( Object_t* (*) (Dictionary_2_t1_1079 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_6348_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_6349_gshared (Dictionary_2_t1_1079 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_6349(__this, method) (( Object_t* (*) (Dictionary_2_t1_1079 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_6349_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_6350_gshared (Dictionary_2_t1_1079 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_6350(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1079 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_6350_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_6351_gshared (Dictionary_2_t1_1079 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_6351(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1079 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_6351_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_6352_gshared (Dictionary_2_t1_1079 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_6352(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1079 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_6352_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_6353_gshared (Dictionary_2_t1_1079 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_6353(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1079 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_6353_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_6354_gshared (Dictionary_2_t1_1079 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_6354(__this, ___key, method) (( void (*) (Dictionary_2_t1_1079 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_6354_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6355_gshared (Dictionary_2_t1_1079 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6355(__this, method) (( bool (*) (Dictionary_2_t1_1079 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_6355_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6356_gshared (Dictionary_2_t1_1079 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6356(__this, method) (( Object_t * (*) (Dictionary_2_t1_1079 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6357_gshared (Dictionary_2_t1_1079 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6357(__this, method) (( bool (*) (Dictionary_2_t1_1079 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6357_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6358_gshared (Dictionary_2_t1_1079 * __this, KeyValuePair_2_t1_1081  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6358(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1079 *, KeyValuePair_2_t1_1081 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6358_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6359_gshared (Dictionary_2_t1_1079 * __this, KeyValuePair_2_t1_1081  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6359(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1079 *, KeyValuePair_2_t1_1081 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6359_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6360_gshared (Dictionary_2_t1_1079 * __this, KeyValuePair_2U5BU5D_t1_1373* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6360(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1079 *, KeyValuePair_2U5BU5D_t1_1373*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6360_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6361_gshared (Dictionary_2_t1_1079 * __this, KeyValuePair_2_t1_1081  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6361(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1079 *, KeyValuePair_2_t1_1081 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6361_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_6362_gshared (Dictionary_2_t1_1079 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_6362(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1079 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_6362_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6363_gshared (Dictionary_2_t1_1079 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6363(__this, method) (( Object_t * (*) (Dictionary_2_t1_1079 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6363_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6364_gshared (Dictionary_2_t1_1079 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6364(__this, method) (( Object_t* (*) (Dictionary_2_t1_1079 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6364_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6365_gshared (Dictionary_2_t1_1079 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6365(__this, method) (( Object_t * (*) (Dictionary_2_t1_1079 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6365_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_6366_gshared (Dictionary_2_t1_1079 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_6366(__this, method) (( int32_t (*) (Dictionary_2_t1_1079 *, const MethodInfo*))Dictionary_2_get_Count_m1_6366_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m1_6367_gshared (Dictionary_2_t1_1079 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_6367(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1079 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_6367_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_6368_gshared (Dictionary_2_t1_1079 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_6368(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1079 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1_6368_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_6369_gshared (Dictionary_2_t1_1079 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_6369(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1079 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_6369_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_6370_gshared (Dictionary_2_t1_1079 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_6370(__this, ___size, method) (( void (*) (Dictionary_2_t1_1079 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_6370_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_6371_gshared (Dictionary_2_t1_1079 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_6371(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1079 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_6371_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1081  Dictionary_2_make_pair_m1_6372_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_6372(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1081  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m1_6372_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m1_6373_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_6373(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m1_6373_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m1_6374_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_6374(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m1_6374_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_6375_gshared (Dictionary_2_t1_1079 * __this, KeyValuePair_2U5BU5D_t1_1373* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_6375(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1079 *, KeyValuePair_2U5BU5D_t1_1373*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_6375_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m1_6376_gshared (Dictionary_2_t1_1079 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_6376(__this, method) (( void (*) (Dictionary_2_t1_1079 *, const MethodInfo*))Dictionary_2_Resize_m1_6376_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_6377_gshared (Dictionary_2_t1_1079 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_6377(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1079 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m1_6377_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m1_6378_gshared (Dictionary_2_t1_1079 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_6378(__this, method) (( void (*) (Dictionary_2_t1_1079 *, const MethodInfo*))Dictionary_2_Clear_m1_6378_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_6379_gshared (Dictionary_2_t1_1079 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_6379(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1079 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_6379_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_6380_gshared (Dictionary_2_t1_1079 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_6380(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1079 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m1_6380_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_6381_gshared (Dictionary_2_t1_1079 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_6381(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1079 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))Dictionary_2_GetObjectData_m1_6381_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_6382_gshared (Dictionary_2_t1_1079 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_6382(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1079 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_6382_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_6383_gshared (Dictionary_2_t1_1079 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_6383(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1079 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_6383_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_6384_gshared (Dictionary_2_t1_1079 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_6384(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1079 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m1_6384_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t1_1083 * Dictionary_2_get_Keys_m1_6385_gshared (Dictionary_2_t1_1079 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_6385(__this, method) (( KeyCollection_t1_1083 * (*) (Dictionary_2_t1_1079 *, const MethodInfo*))Dictionary_2_get_Keys_m1_6385_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1_1087 * Dictionary_2_get_Values_m1_6386_gshared (Dictionary_2_t1_1079 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_6386(__this, method) (( ValueCollection_t1_1087 * (*) (Dictionary_2_t1_1079 *, const MethodInfo*))Dictionary_2_get_Values_m1_6386_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_6387_gshared (Dictionary_2_t1_1079 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_6387(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1079 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_6387_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m1_6388_gshared (Dictionary_2_t1_1079 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_6388(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1_1079 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_6388_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_6389_gshared (Dictionary_2_t1_1079 * __this, KeyValuePair_2_t1_1081  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_6389(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1079 *, KeyValuePair_2_t1_1081 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_6389_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1085  Dictionary_2_GetEnumerator_m1_6390_gshared (Dictionary_2_t1_1079 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_6390(__this, method) (( Enumerator_t1_1085  (*) (Dictionary_2_t1_1079 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_6390_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_169  Dictionary_2_U3CCopyToU3Em__0_m1_6391_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_6391(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_169  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_6391_gshared)(__this /* static, unused */, ___key, ___value, method)
