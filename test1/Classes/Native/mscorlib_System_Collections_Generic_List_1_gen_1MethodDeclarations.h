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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t1_902;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1_995;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1_999;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1_924;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1_878;
// System.Object[]
struct ObjectU5BU5D_t1_159;
// System.Predicate`1<System.Object>
struct Predicate_1_t1_1084;
// System.Comparison`1<System.Object>
struct Comparison_1_t1_1005;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m1_5572_gshared (List_1_t1_902 * __this, const MethodInfo* method);
#define List_1__ctor_m1_5572(__this, method) (( void (*) (List_1_t1_902 *, const MethodInfo*))List_1__ctor_m1_5572_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m1_5798_gshared (List_1_t1_902 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m1_5798(__this, ___collection, method) (( void (*) (List_1_t1_902 *, Object_t*, const MethodInfo*))List_1__ctor_m1_5798_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1_5800_gshared (List_1_t1_902 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1_5800(__this, ___capacity, method) (( void (*) (List_1_t1_902 *, int32_t, const MethodInfo*))List_1__ctor_m1_5800_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m1_5802_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m1_5802(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m1_5802_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_5804_gshared (List_1_t1_902 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_5804(__this, method) (( Object_t* (*) (List_1_t1_902 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_5804_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1_5806_gshared (List_1_t1_902 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1_5806(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_902 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1_5806_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1_5808_gshared (List_1_t1_902 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1_5808(__this, method) (( Object_t * (*) (List_1_t1_902 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1_5808_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1_5810_gshared (List_1_t1_902 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1_5810(__this, ___item, method) (( int32_t (*) (List_1_t1_902 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1_5810_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1_5812_gshared (List_1_t1_902 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1_5812(__this, ___item, method) (( bool (*) (List_1_t1_902 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1_5812_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1_5814_gshared (List_1_t1_902 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1_5814(__this, ___item, method) (( int32_t (*) (List_1_t1_902 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1_5814_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1_5816_gshared (List_1_t1_902 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1_5816(__this, ___index, ___item, method) (( void (*) (List_1_t1_902 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1_5816_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1_5818_gshared (List_1_t1_902 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1_5818(__this, ___item, method) (( void (*) (List_1_t1_902 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1_5818_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_5820_gshared (List_1_t1_902 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_5820(__this, method) (( bool (*) (List_1_t1_902 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_5820_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m1_5822_gshared (List_1_t1_902 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m1_5822(__this, method) (( bool (*) (List_1_t1_902 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m1_5822_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1_5824_gshared (List_1_t1_902 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1_5824(__this, method) (( Object_t * (*) (List_1_t1_902 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1_5824_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m1_5826_gshared (List_1_t1_902 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m1_5826(__this, method) (( bool (*) (List_1_t1_902 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m1_5826_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m1_5828_gshared (List_1_t1_902 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1_5828(__this, method) (( bool (*) (List_1_t1_902 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1_5828_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1_5830_gshared (List_1_t1_902 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1_5830(__this, ___index, method) (( Object_t * (*) (List_1_t1_902 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1_5830_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1_5832_gshared (List_1_t1_902 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1_5832(__this, ___index, ___value, method) (( void (*) (List_1_t1_902 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1_5832_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m1_5834_gshared (List_1_t1_902 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m1_5834(__this, ___item, method) (( void (*) (List_1_t1_902 *, Object_t *, const MethodInfo*))List_1_Add_m1_5834_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m1_5836_gshared (List_1_t1_902 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m1_5836(__this, ___newCount, method) (( void (*) (List_1_t1_902 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m1_5836_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m1_5838_gshared (List_1_t1_902 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m1_5838(__this, ___collection, method) (( void (*) (List_1_t1_902 *, Object_t*, const MethodInfo*))List_1_AddCollection_m1_5838_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m1_5840_gshared (List_1_t1_902 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m1_5840(__this, ___enumerable, method) (( void (*) (List_1_t1_902 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m1_5840_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m1_5842_gshared (List_1_t1_902 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m1_5842(__this, ___collection, method) (( void (*) (List_1_t1_902 *, Object_t*, const MethodInfo*))List_1_AddRange_m1_5842_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1_878 * List_1_AsReadOnly_m1_5844_gshared (List_1_t1_902 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m1_5844(__this, method) (( ReadOnlyCollection_1_t1_878 * (*) (List_1_t1_902 *, const MethodInfo*))List_1_AsReadOnly_m1_5844_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m1_5846_gshared (List_1_t1_902 * __this, const MethodInfo* method);
#define List_1_Clear_m1_5846(__this, method) (( void (*) (List_1_t1_902 *, const MethodInfo*))List_1_Clear_m1_5846_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m1_5848_gshared (List_1_t1_902 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m1_5848(__this, ___item, method) (( bool (*) (List_1_t1_902 *, Object_t *, const MethodInfo*))List_1_Contains_m1_5848_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1_5850_gshared (List_1_t1_902 * __this, ObjectU5BU5D_t1_159* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1_5850(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_902 *, ObjectU5BU5D_t1_159*, int32_t, const MethodInfo*))List_1_CopyTo_m1_5850_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m1_5852_gshared (List_1_t1_902 * __this, Predicate_1_t1_1084 * ___match, const MethodInfo* method);
#define List_1_Find_m1_5852(__this, ___match, method) (( Object_t * (*) (List_1_t1_902 *, Predicate_1_t1_1084 *, const MethodInfo*))List_1_Find_m1_5852_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m1_5854_gshared (Object_t * __this /* static, unused */, Predicate_1_t1_1084 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m1_5854(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1_1084 *, const MethodInfo*))List_1_CheckMatch_m1_5854_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m1_5856_gshared (List_1_t1_902 * __this, Predicate_1_t1_1084 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m1_5856(__this, ___match, method) (( int32_t (*) (List_1_t1_902 *, Predicate_1_t1_1084 *, const MethodInfo*))List_1_FindIndex_m1_5856_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m1_5858_gshared (List_1_t1_902 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1_1084 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m1_5858(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1_902 *, int32_t, int32_t, Predicate_1_t1_1084 *, const MethodInfo*))List_1_GetIndex_m1_5858_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1092  List_1_GetEnumerator_m1_5860_gshared (List_1_t1_902 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m1_5860(__this, method) (( Enumerator_t1_1092  (*) (List_1_t1_902 *, const MethodInfo*))List_1_GetEnumerator_m1_5860_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1_5862_gshared (List_1_t1_902 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m1_5862(__this, ___item, method) (( int32_t (*) (List_1_t1_902 *, Object_t *, const MethodInfo*))List_1_IndexOf_m1_5862_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m1_5864_gshared (List_1_t1_902 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m1_5864(__this, ___start, ___delta, method) (( void (*) (List_1_t1_902 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m1_5864_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m1_5866_gshared (List_1_t1_902 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m1_5866(__this, ___index, method) (( void (*) (List_1_t1_902 *, int32_t, const MethodInfo*))List_1_CheckIndex_m1_5866_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1_5868_gshared (List_1_t1_902 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m1_5868(__this, ___index, ___item, method) (( void (*) (List_1_t1_902 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m1_5868_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m1_5870_gshared (List_1_t1_902 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m1_5870(__this, ___collection, method) (( void (*) (List_1_t1_902 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m1_5870_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m1_5872_gshared (List_1_t1_902 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m1_5872(__this, ___item, method) (( bool (*) (List_1_t1_902 *, Object_t *, const MethodInfo*))List_1_Remove_m1_5872_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m1_5874_gshared (List_1_t1_902 * __this, Predicate_1_t1_1084 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m1_5874(__this, ___match, method) (( int32_t (*) (List_1_t1_902 *, Predicate_1_t1_1084 *, const MethodInfo*))List_1_RemoveAll_m1_5874_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1_5876_gshared (List_1_t1_902 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1_5876(__this, ___index, method) (( void (*) (List_1_t1_902 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1_5876_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m1_5878_gshared (List_1_t1_902 * __this, const MethodInfo* method);
#define List_1_Reverse_m1_5878(__this, method) (( void (*) (List_1_t1_902 *, const MethodInfo*))List_1_Reverse_m1_5878_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m1_5880_gshared (List_1_t1_902 * __this, const MethodInfo* method);
#define List_1_Sort_m1_5880(__this, method) (( void (*) (List_1_t1_902 *, const MethodInfo*))List_1_Sort_m1_5880_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m1_5882_gshared (List_1_t1_902 * __this, Comparison_1_t1_1005 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1_5882(__this, ___comparison, method) (( void (*) (List_1_t1_902 *, Comparison_1_t1_1005 *, const MethodInfo*))List_1_Sort_m1_5882_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t1_159* List_1_ToArray_m1_5883_gshared (List_1_t1_902 * __this, const MethodInfo* method);
#define List_1_ToArray_m1_5883(__this, method) (( ObjectU5BU5D_t1_159* (*) (List_1_t1_902 *, const MethodInfo*))List_1_ToArray_m1_5883_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m1_5885_gshared (List_1_t1_902 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m1_5885(__this, method) (( void (*) (List_1_t1_902 *, const MethodInfo*))List_1_TrimExcess_m1_5885_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m1_5887_gshared (List_1_t1_902 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m1_5887(__this, method) (( int32_t (*) (List_1_t1_902 *, const MethodInfo*))List_1_get_Capacity_m1_5887_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m1_5889_gshared (List_1_t1_902 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1_5889(__this, ___value, method) (( void (*) (List_1_t1_902 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1_5889_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m1_5891_gshared (List_1_t1_902 * __this, const MethodInfo* method);
#define List_1_get_Count_m1_5891(__this, method) (( int32_t (*) (List_1_t1_902 *, const MethodInfo*))List_1_get_Count_m1_5891_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m1_5893_gshared (List_1_t1_902 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1_5893(__this, ___index, method) (( Object_t * (*) (List_1_t1_902 *, int32_t, const MethodInfo*))List_1_get_Item_m1_5893_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1_5895_gshared (List_1_t1_902 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m1_5895(__this, ___index, ___value, method) (( void (*) (List_1_t1_902 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m1_5895_gshared)(__this, ___index, ___value, method)
