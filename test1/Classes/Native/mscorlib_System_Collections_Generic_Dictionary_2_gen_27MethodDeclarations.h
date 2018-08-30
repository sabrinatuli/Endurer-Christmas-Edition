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
struct Dictionary_2_t1_1253;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1131;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t1_1915;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_179;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_924;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t1_1916;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t1_1914;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t1_1917;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_455;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t1_1257;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t1_1261;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m1_7369_gshared (Dictionary_2_t1_1253 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7369(__this, method) (( void (*) (Dictionary_2_t1_1253 *, const MethodInfo*))Dictionary_2__ctor_m1_7369_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_7370_gshared (Dictionary_2_t1_1253 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7370(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1253 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_7370_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m1_7372_gshared (Dictionary_2_t1_1253 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7372(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1_1253 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_7372_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_7374_gshared (Dictionary_2_t1_1253 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7374(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1253 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_7374_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_7376_gshared (Dictionary_2_t1_1253 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7376(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1_1253 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_7376_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_7378_gshared (Dictionary_2_t1_1253 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7378(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1253 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))Dictionary_2__ctor_m1_7378_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_7380_gshared (Dictionary_2_t1_1253 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_7380(__this, method) (( Object_t* (*) (Dictionary_2_t1_1253 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1_7380_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_7382_gshared (Dictionary_2_t1_1253 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_7382(__this, method) (( Object_t* (*) (Dictionary_2_t1_1253 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m1_7382_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_7384_gshared (Dictionary_2_t1_1253 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_7384(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1253 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_7384_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_7386_gshared (Dictionary_2_t1_1253 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_7386(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1253 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_7386_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_7388_gshared (Dictionary_2_t1_1253 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_7388(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1253 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_7388_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_7390_gshared (Dictionary_2_t1_1253 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_7390(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1253 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_7390_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_7392_gshared (Dictionary_2_t1_1253 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_7392(__this, ___key, method) (( void (*) (Dictionary_2_t1_1253 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_7392_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7394_gshared (Dictionary_2_t1_1253 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7394(__this, method) (( bool (*) (Dictionary_2_t1_1253 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7394_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7396_gshared (Dictionary_2_t1_1253 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7396(__this, method) (( Object_t * (*) (Dictionary_2_t1_1253 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7396_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7398_gshared (Dictionary_2_t1_1253 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7398(__this, method) (( bool (*) (Dictionary_2_t1_1253 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7398_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7400_gshared (Dictionary_2_t1_1253 * __this, KeyValuePair_2_t1_1255  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7400(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1253 *, KeyValuePair_2_t1_1255 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7400_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7402_gshared (Dictionary_2_t1_1253 * __this, KeyValuePair_2_t1_1255  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7402(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1253 *, KeyValuePair_2_t1_1255 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7402_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7404_gshared (Dictionary_2_t1_1253 * __this, KeyValuePair_2U5BU5D_t1_1914* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7404(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1253 *, KeyValuePair_2U5BU5D_t1_1914*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7404_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7406_gshared (Dictionary_2_t1_1253 * __this, KeyValuePair_2_t1_1255  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7406(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1253 *, KeyValuePair_2_t1_1255 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7406_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_7408_gshared (Dictionary_2_t1_1253 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_7408(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1253 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_7408_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7410_gshared (Dictionary_2_t1_1253 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7410(__this, method) (( Object_t * (*) (Dictionary_2_t1_1253 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7410_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7412_gshared (Dictionary_2_t1_1253 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7412(__this, method) (( Object_t* (*) (Dictionary_2_t1_1253 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7412_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7414_gshared (Dictionary_2_t1_1253 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7414(__this, method) (( Object_t * (*) (Dictionary_2_t1_1253 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7414_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_7416_gshared (Dictionary_2_t1_1253 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_7416(__this, method) (( int32_t (*) (Dictionary_2_t1_1253 *, const MethodInfo*))Dictionary_2_get_Count_m1_7416_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m1_7418_gshared (Dictionary_2_t1_1253 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_7418(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1253 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_7418_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_7420_gshared (Dictionary_2_t1_1253 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_7420(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1253 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m1_7420_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_7422_gshared (Dictionary_2_t1_1253 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_7422(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1253 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_7422_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_7424_gshared (Dictionary_2_t1_1253 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_7424(__this, ___size, method) (( void (*) (Dictionary_2_t1_1253 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_7424_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_7426_gshared (Dictionary_2_t1_1253 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_7426(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1253 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_7426_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1255  Dictionary_2_make_pair_m1_7428_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_7428(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1255  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m1_7428_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m1_7430_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m1_7430(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m1_7430_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m1_7432_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_7432(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m1_7432_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_7434_gshared (Dictionary_2_t1_1253 * __this, KeyValuePair_2U5BU5D_t1_1914* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_7434(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1253 *, KeyValuePair_2U5BU5D_t1_1914*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_7434_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m1_7436_gshared (Dictionary_2_t1_1253 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_7436(__this, method) (( void (*) (Dictionary_2_t1_1253 *, const MethodInfo*))Dictionary_2_Resize_m1_7436_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_7438_gshared (Dictionary_2_t1_1253 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_7438(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1253 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m1_7438_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m1_7440_gshared (Dictionary_2_t1_1253 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_7440(__this, method) (( void (*) (Dictionary_2_t1_1253 *, const MethodInfo*))Dictionary_2_Clear_m1_7440_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_7442_gshared (Dictionary_2_t1_1253 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_7442(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1253 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_7442_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_7444_gshared (Dictionary_2_t1_1253 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_7444(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1253 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m1_7444_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_7446_gshared (Dictionary_2_t1_1253 * __this, SerializationInfo_t1_179 * ___info, StreamingContext_t1_511  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_7446(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1253 *, SerializationInfo_t1_179 *, StreamingContext_t1_511 , const MethodInfo*))Dictionary_2_GetObjectData_m1_7446_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_7448_gshared (Dictionary_2_t1_1253 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_7448(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1253 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_7448_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_7450_gshared (Dictionary_2_t1_1253 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_7450(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1253 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_7450_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_7452_gshared (Dictionary_2_t1_1253 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_7452(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1253 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m1_7452_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t1_1257 * Dictionary_2_get_Keys_m1_7454_gshared (Dictionary_2_t1_1253 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1_7454(__this, method) (( KeyCollection_t1_1257 * (*) (Dictionary_2_t1_1253 *, const MethodInfo*))Dictionary_2_get_Keys_m1_7454_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t1_1261 * Dictionary_2_get_Values_m1_7456_gshared (Dictionary_2_t1_1253 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_7456(__this, method) (( ValueCollection_t1_1261 * (*) (Dictionary_2_t1_1253 *, const MethodInfo*))Dictionary_2_get_Values_m1_7456_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_7458_gshared (Dictionary_2_t1_1253 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_7458(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1253 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_7458_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m1_7460_gshared (Dictionary_2_t1_1253 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_7460(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1253 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_7460_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_7462_gshared (Dictionary_2_t1_1253 * __this, KeyValuePair_2_t1_1255  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_7462(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1253 *, KeyValuePair_2_t1_1255 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_7462_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t1_1259  Dictionary_2_GetEnumerator_m1_7464_gshared (Dictionary_2_t1_1253 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_7464(__this, method) (( Enumerator_t1_1259  (*) (Dictionary_2_t1_1253 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_7464_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_169  Dictionary_2_U3CCopyToU3Em__0_m1_7466_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_7466(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_169  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_7466_gshared)(__this /* static, unused */, ___key, ___value, method)
