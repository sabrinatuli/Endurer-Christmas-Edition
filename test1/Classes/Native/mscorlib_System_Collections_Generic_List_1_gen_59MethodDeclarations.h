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

// System.Collections.Generic.List`1<System.Single>
struct List_1_t1_1030;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t1_2048;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t1_2049;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t1_2050;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Single>
struct ReadOnlyCollection_1_t1_1853;
// System.Single[]
struct SingleU5BU5D_t1_861;
// System.Predicate`1<System.Single>
struct Predicate_1_t1_1859;
// System.Comparison`1<System.Single>
struct Comparison_1_t1_1863;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_64.h"

// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
extern "C" void List_1__ctor_m1_5763_gshared (List_1_t1_1030 * __this, const MethodInfo* method);
#define List_1__ctor_m1_5763(__this, method) (( void (*) (List_1_t1_1030 *, const MethodInfo*))List_1__ctor_m1_5763_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m1_17278_gshared (List_1_t1_1030 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m1_17278(__this, ___collection, method) (( void (*) (List_1_t1_1030 *, Object_t*, const MethodInfo*))List_1__ctor_m1_17278_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1_17279_gshared (List_1_t1_1030 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1_17279(__this, ___capacity, method) (( void (*) (List_1_t1_1030 *, int32_t, const MethodInfo*))List_1__ctor_m1_17279_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Single>::.cctor()
extern "C" void List_1__cctor_m1_17280_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m1_17280(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m1_17280_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_17281_gshared (List_1_t1_1030 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_17281(__this, method) (( Object_t* (*) (List_1_t1_1030 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_17281_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1_17282_gshared (List_1_t1_1030 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1_17282(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_1030 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1_17282_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1_17283_gshared (List_1_t1_1030 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1_17283(__this, method) (( Object_t * (*) (List_1_t1_1030 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1_17283_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1_17284_gshared (List_1_t1_1030 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1_17284(__this, ___item, method) (( int32_t (*) (List_1_t1_1030 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1_17284_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1_17285_gshared (List_1_t1_1030 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1_17285(__this, ___item, method) (( bool (*) (List_1_t1_1030 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1_17285_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1_17286_gshared (List_1_t1_1030 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1_17286(__this, ___item, method) (( int32_t (*) (List_1_t1_1030 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1_17286_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1_17287_gshared (List_1_t1_1030 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1_17287(__this, ___index, ___item, method) (( void (*) (List_1_t1_1030 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1_17287_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1_17288_gshared (List_1_t1_1030 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1_17288(__this, ___item, method) (( void (*) (List_1_t1_1030 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1_17288_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_17289_gshared (List_1_t1_1030 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_17289(__this, method) (( bool (*) (List_1_t1_1030 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_17289_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m1_17290_gshared (List_1_t1_1030 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m1_17290(__this, method) (( bool (*) (List_1_t1_1030 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m1_17290_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1_17291_gshared (List_1_t1_1030 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1_17291(__this, method) (( Object_t * (*) (List_1_t1_1030 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1_17291_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m1_17292_gshared (List_1_t1_1030 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m1_17292(__this, method) (( bool (*) (List_1_t1_1030 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m1_17292_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m1_17293_gshared (List_1_t1_1030 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1_17293(__this, method) (( bool (*) (List_1_t1_1030 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1_17293_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Single>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1_17294_gshared (List_1_t1_1030 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1_17294(__this, ___index, method) (( Object_t * (*) (List_1_t1_1030 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1_17294_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1_17295_gshared (List_1_t1_1030 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1_17295(__this, ___index, ___value, method) (( void (*) (List_1_t1_1030 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1_17295_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Add(T)
extern "C" void List_1_Add_m1_17296_gshared (List_1_t1_1030 * __this, float ___item, const MethodInfo* method);
#define List_1_Add_m1_17296(__this, ___item, method) (( void (*) (List_1_t1_1030 *, float, const MethodInfo*))List_1_Add_m1_17296_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m1_17297_gshared (List_1_t1_1030 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m1_17297(__this, ___newCount, method) (( void (*) (List_1_t1_1030 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m1_17297_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m1_17298_gshared (List_1_t1_1030 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m1_17298(__this, ___collection, method) (( void (*) (List_1_t1_1030 *, Object_t*, const MethodInfo*))List_1_AddCollection_m1_17298_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m1_17299_gshared (List_1_t1_1030 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m1_17299(__this, ___enumerable, method) (( void (*) (List_1_t1_1030 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m1_17299_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Single>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m1_17300_gshared (List_1_t1_1030 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m1_17300(__this, ___collection, method) (( void (*) (List_1_t1_1030 *, Object_t*, const MethodInfo*))List_1_AddRange_m1_17300_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Single>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1_1853 * List_1_AsReadOnly_m1_17301_gshared (List_1_t1_1030 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m1_17301(__this, method) (( ReadOnlyCollection_1_t1_1853 * (*) (List_1_t1_1030 *, const MethodInfo*))List_1_AsReadOnly_m1_17301_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Clear()
extern "C" void List_1_Clear_m1_17302_gshared (List_1_t1_1030 * __this, const MethodInfo* method);
#define List_1_Clear_m1_17302(__this, method) (( void (*) (List_1_t1_1030 *, const MethodInfo*))List_1_Clear_m1_17302_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Contains(T)
extern "C" bool List_1_Contains_m1_17303_gshared (List_1_t1_1030 * __this, float ___item, const MethodInfo* method);
#define List_1_Contains_m1_17303(__this, ___item, method) (( bool (*) (List_1_t1_1030 *, float, const MethodInfo*))List_1_Contains_m1_17303_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1_17304_gshared (List_1_t1_1030 * __this, SingleU5BU5D_t1_861* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1_17304(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_1030 *, SingleU5BU5D_t1_861*, int32_t, const MethodInfo*))List_1_CopyTo_m1_17304_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Single>::Find(System.Predicate`1<T>)
extern "C" float List_1_Find_m1_17305_gshared (List_1_t1_1030 * __this, Predicate_1_t1_1859 * ___match, const MethodInfo* method);
#define List_1_Find_m1_17305(__this, ___match, method) (( float (*) (List_1_t1_1030 *, Predicate_1_t1_1859 *, const MethodInfo*))List_1_Find_m1_17305_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m1_17306_gshared (Object_t * __this /* static, unused */, Predicate_1_t1_1859 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m1_17306(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1_1859 *, const MethodInfo*))List_1_CheckMatch_m1_17306_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m1_17307_gshared (List_1_t1_1030 * __this, Predicate_1_t1_1859 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m1_17307(__this, ___match, method) (( int32_t (*) (List_1_t1_1030 *, Predicate_1_t1_1859 *, const MethodInfo*))List_1_FindIndex_m1_17307_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m1_17308_gshared (List_1_t1_1030 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1_1859 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m1_17308(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1_1030 *, int32_t, int32_t, Predicate_1_t1_1859 *, const MethodInfo*))List_1_GetIndex_m1_17308_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Single>::GetEnumerator()
extern "C" Enumerator_t1_1852  List_1_GetEnumerator_m1_17309_gshared (List_1_t1_1030 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m1_17309(__this, method) (( Enumerator_t1_1852  (*) (List_1_t1_1030 *, const MethodInfo*))List_1_GetEnumerator_m1_17309_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1_17310_gshared (List_1_t1_1030 * __this, float ___item, const MethodInfo* method);
#define List_1_IndexOf_m1_17310(__this, ___item, method) (( int32_t (*) (List_1_t1_1030 *, float, const MethodInfo*))List_1_IndexOf_m1_17310_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m1_17311_gshared (List_1_t1_1030 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m1_17311(__this, ___start, ___delta, method) (( void (*) (List_1_t1_1030 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m1_17311_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m1_17312_gshared (List_1_t1_1030 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m1_17312(__this, ___index, method) (( void (*) (List_1_t1_1030 *, int32_t, const MethodInfo*))List_1_CheckIndex_m1_17312_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1_17313_gshared (List_1_t1_1030 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define List_1_Insert_m1_17313(__this, ___index, ___item, method) (( void (*) (List_1_t1_1030 *, int32_t, float, const MethodInfo*))List_1_Insert_m1_17313_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Single>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m1_17314_gshared (List_1_t1_1030 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m1_17314(__this, ___collection, method) (( void (*) (List_1_t1_1030 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m1_17314_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Single>::Remove(T)
extern "C" bool List_1_Remove_m1_17315_gshared (List_1_t1_1030 * __this, float ___item, const MethodInfo* method);
#define List_1_Remove_m1_17315(__this, ___item, method) (( bool (*) (List_1_t1_1030 *, float, const MethodInfo*))List_1_Remove_m1_17315_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m1_17316_gshared (List_1_t1_1030 * __this, Predicate_1_t1_1859 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m1_17316(__this, ___match, method) (( int32_t (*) (List_1_t1_1030 *, Predicate_1_t1_1859 *, const MethodInfo*))List_1_RemoveAll_m1_17316_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1_17317_gshared (List_1_t1_1030 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1_17317(__this, ___index, method) (( void (*) (List_1_t1_1030 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1_17317_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Reverse()
extern "C" void List_1_Reverse_m1_17318_gshared (List_1_t1_1030 * __this, const MethodInfo* method);
#define List_1_Reverse_m1_17318(__this, method) (( void (*) (List_1_t1_1030 *, const MethodInfo*))List_1_Reverse_m1_17318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort()
extern "C" void List_1_Sort_m1_17319_gshared (List_1_t1_1030 * __this, const MethodInfo* method);
#define List_1_Sort_m1_17319(__this, method) (( void (*) (List_1_t1_1030 *, const MethodInfo*))List_1_Sort_m1_17319_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m1_17320_gshared (List_1_t1_1030 * __this, Comparison_1_t1_1863 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1_17320(__this, ___comparison, method) (( void (*) (List_1_t1_1030 *, Comparison_1_t1_1863 *, const MethodInfo*))List_1_Sort_m1_17320_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Single>::ToArray()
extern "C" SingleU5BU5D_t1_861* List_1_ToArray_m1_17321_gshared (List_1_t1_1030 * __this, const MethodInfo* method);
#define List_1_ToArray_m1_17321(__this, method) (( SingleU5BU5D_t1_861* (*) (List_1_t1_1030 *, const MethodInfo*))List_1_ToArray_m1_17321_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::TrimExcess()
extern "C" void List_1_TrimExcess_m1_17322_gshared (List_1_t1_1030 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m1_17322(__this, method) (( void (*) (List_1_t1_1030 *, const MethodInfo*))List_1_TrimExcess_m1_17322_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m1_17323_gshared (List_1_t1_1030 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m1_17323(__this, method) (( int32_t (*) (List_1_t1_1030 *, const MethodInfo*))List_1_get_Capacity_m1_17323_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m1_17324_gshared (List_1_t1_1030 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1_17324(__this, ___value, method) (( void (*) (List_1_t1_1030 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1_17324_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
extern "C" int32_t List_1_get_Count_m1_17325_gshared (List_1_t1_1030 * __this, const MethodInfo* method);
#define List_1_get_Count_m1_17325(__this, method) (( int32_t (*) (List_1_t1_1030 *, const MethodInfo*))List_1_get_Count_m1_17325_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
extern "C" float List_1_get_Item_m1_17326_gshared (List_1_t1_1030 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1_17326(__this, ___index, method) (( float (*) (List_1_t1_1030 *, int32_t, const MethodInfo*))List_1_get_Item_m1_17326_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Single>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1_17327_gshared (List_1_t1_1030 * __this, int32_t ___index, float ___value, const MethodInfo* method);
#define List_1_set_Item_m1_17327(__this, ___index, ___value, method) (( void (*) (List_1_t1_1030 *, int32_t, float, const MethodInfo*))List_1_set_Item_m1_17327_gshared)(__this, ___index, ___value, method)
