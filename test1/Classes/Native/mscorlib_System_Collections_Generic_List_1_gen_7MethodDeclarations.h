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

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1_915;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t1_1936;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t1_1904;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_132;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1_1902;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t1_1348;
// System.Int32[]
struct Int32U5BU5D_t1_162;
// System.Predicate`1<System.Int32>
struct Predicate_1_t1_1351;
// System.Comparison`1<System.Int32>
struct Comparison_1_t1_1352;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m1_5665_gshared (List_1_t1_915 * __this, const MethodInfo* method);
#define List_1__ctor_m1_5665(__this, method) (( void (*) (List_1_t1_915 *, const MethodInfo*))List_1__ctor_m1_5665_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m1_8546_gshared (List_1_t1_915 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m1_8546(__this, ___collection, method) (( void (*) (List_1_t1_915 *, Object_t*, const MethodInfo*))List_1__ctor_m1_8546_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1_8547_gshared (List_1_t1_915 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1_8547(__this, ___capacity, method) (( void (*) (List_1_t1_915 *, int32_t, const MethodInfo*))List_1__ctor_m1_8547_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m1_8548_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m1_8548(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m1_8548_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_8549_gshared (List_1_t1_915 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_8549(__this, method) (( Object_t* (*) (List_1_t1_915 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1_8549_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1_8550_gshared (List_1_t1_915 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1_8550(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_915 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1_8550_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1_8551_gshared (List_1_t1_915 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1_8551(__this, method) (( Object_t * (*) (List_1_t1_915 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1_8551_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1_8552_gshared (List_1_t1_915 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1_8552(__this, ___item, method) (( int32_t (*) (List_1_t1_915 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1_8552_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1_8553_gshared (List_1_t1_915 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1_8553(__this, ___item, method) (( bool (*) (List_1_t1_915 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1_8553_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1_8554_gshared (List_1_t1_915 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1_8554(__this, ___item, method) (( int32_t (*) (List_1_t1_915 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1_8554_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1_8555_gshared (List_1_t1_915 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1_8555(__this, ___index, ___item, method) (( void (*) (List_1_t1_915 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1_8555_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1_8556_gshared (List_1_t1_915 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1_8556(__this, ___item, method) (( void (*) (List_1_t1_915 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1_8556_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_8557_gshared (List_1_t1_915 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_8557(__this, method) (( bool (*) (List_1_t1_915 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1_8557_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m1_8558_gshared (List_1_t1_915 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m1_8558(__this, method) (( bool (*) (List_1_t1_915 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m1_8558_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1_8559_gshared (List_1_t1_915 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1_8559(__this, method) (( Object_t * (*) (List_1_t1_915 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1_8559_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m1_8560_gshared (List_1_t1_915 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m1_8560(__this, method) (( bool (*) (List_1_t1_915 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m1_8560_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m1_8561_gshared (List_1_t1_915 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m1_8561(__this, method) (( bool (*) (List_1_t1_915 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m1_8561_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1_8562_gshared (List_1_t1_915 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1_8562(__this, ___index, method) (( Object_t * (*) (List_1_t1_915 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1_8562_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1_8563_gshared (List_1_t1_915 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1_8563(__this, ___index, ___value, method) (( void (*) (List_1_t1_915 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1_8563_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m1_8564_gshared (List_1_t1_915 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m1_8564(__this, ___item, method) (( void (*) (List_1_t1_915 *, int32_t, const MethodInfo*))List_1_Add_m1_8564_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m1_8565_gshared (List_1_t1_915 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m1_8565(__this, ___newCount, method) (( void (*) (List_1_t1_915 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m1_8565_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m1_8566_gshared (List_1_t1_915 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m1_8566(__this, ___collection, method) (( void (*) (List_1_t1_915 *, Object_t*, const MethodInfo*))List_1_AddCollection_m1_8566_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m1_8567_gshared (List_1_t1_915 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m1_8567(__this, ___enumerable, method) (( void (*) (List_1_t1_915 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m1_8567_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m1_5642_gshared (List_1_t1_915 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m1_5642(__this, ___collection, method) (( void (*) (List_1_t1_915 *, Object_t*, const MethodInfo*))List_1_AddRange_m1_5642_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1_1348 * List_1_AsReadOnly_m1_8568_gshared (List_1_t1_915 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m1_8568(__this, method) (( ReadOnlyCollection_1_t1_1348 * (*) (List_1_t1_915 *, const MethodInfo*))List_1_AsReadOnly_m1_8568_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m1_8569_gshared (List_1_t1_915 * __this, const MethodInfo* method);
#define List_1_Clear_m1_8569(__this, method) (( void (*) (List_1_t1_915 *, const MethodInfo*))List_1_Clear_m1_8569_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m1_8570_gshared (List_1_t1_915 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m1_8570(__this, ___item, method) (( bool (*) (List_1_t1_915 *, int32_t, const MethodInfo*))List_1_Contains_m1_8570_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1_8571_gshared (List_1_t1_915 * __this, Int32U5BU5D_t1_162* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1_8571(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1_915 *, Int32U5BU5D_t1_162*, int32_t, const MethodInfo*))List_1_CopyTo_m1_8571_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m1_8572_gshared (List_1_t1_915 * __this, Predicate_1_t1_1351 * ___match, const MethodInfo* method);
#define List_1_Find_m1_8572(__this, ___match, method) (( int32_t (*) (List_1_t1_915 *, Predicate_1_t1_1351 *, const MethodInfo*))List_1_Find_m1_8572_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m1_8573_gshared (Object_t * __this /* static, unused */, Predicate_1_t1_1351 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m1_8573(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1_1351 *, const MethodInfo*))List_1_CheckMatch_m1_8573_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::FindIndex(System.Predicate`1<T>)
extern "C" int32_t List_1_FindIndex_m1_8574_gshared (List_1_t1_915 * __this, Predicate_1_t1_1351 * ___match, const MethodInfo* method);
#define List_1_FindIndex_m1_8574(__this, ___match, method) (( int32_t (*) (List_1_t1_915 *, Predicate_1_t1_1351 *, const MethodInfo*))List_1_FindIndex_m1_8574_gshared)(__this, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m1_8575_gshared (List_1_t1_915 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1_1351 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m1_8575(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t1_915 *, int32_t, int32_t, Predicate_1_t1_1351 *, const MethodInfo*))List_1_GetIndex_m1_8575_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t1_1046  List_1_GetEnumerator_m1_5666_gshared (List_1_t1_915 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m1_5666(__this, method) (( Enumerator_t1_1046  (*) (List_1_t1_915 *, const MethodInfo*))List_1_GetEnumerator_m1_5666_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1_8576_gshared (List_1_t1_915 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m1_8576(__this, ___item, method) (( int32_t (*) (List_1_t1_915 *, int32_t, const MethodInfo*))List_1_IndexOf_m1_8576_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m1_8577_gshared (List_1_t1_915 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m1_8577(__this, ___start, ___delta, method) (( void (*) (List_1_t1_915 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m1_8577_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m1_8578_gshared (List_1_t1_915 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m1_8578(__this, ___index, method) (( void (*) (List_1_t1_915 *, int32_t, const MethodInfo*))List_1_CheckIndex_m1_8578_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1_8579_gshared (List_1_t1_915 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m1_8579(__this, ___index, ___item, method) (( void (*) (List_1_t1_915 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m1_8579_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m1_8580_gshared (List_1_t1_915 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m1_8580(__this, ___collection, method) (( void (*) (List_1_t1_915 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m1_8580_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m1_8581_gshared (List_1_t1_915 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m1_8581(__this, ___item, method) (( bool (*) (List_1_t1_915 *, int32_t, const MethodInfo*))List_1_Remove_m1_8581_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m1_8582_gshared (List_1_t1_915 * __this, Predicate_1_t1_1351 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m1_8582(__this, ___match, method) (( int32_t (*) (List_1_t1_915 *, Predicate_1_t1_1351 *, const MethodInfo*))List_1_RemoveAll_m1_8582_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1_8583_gshared (List_1_t1_915 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1_8583(__this, ___index, method) (( void (*) (List_1_t1_915 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1_8583_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m1_8584_gshared (List_1_t1_915 * __this, const MethodInfo* method);
#define List_1_Reverse_m1_8584(__this, method) (( void (*) (List_1_t1_915 *, const MethodInfo*))List_1_Reverse_m1_8584_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m1_8585_gshared (List_1_t1_915 * __this, const MethodInfo* method);
#define List_1_Sort_m1_8585(__this, method) (( void (*) (List_1_t1_915 *, const MethodInfo*))List_1_Sort_m1_8585_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m1_8586_gshared (List_1_t1_915 * __this, Comparison_1_t1_1352 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1_8586(__this, ___comparison, method) (( void (*) (List_1_t1_915 *, Comparison_1_t1_1352 *, const MethodInfo*))List_1_Sort_m1_8586_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t1_162* List_1_ToArray_m1_8587_gshared (List_1_t1_915 * __this, const MethodInfo* method);
#define List_1_ToArray_m1_8587(__this, method) (( Int32U5BU5D_t1_162* (*) (List_1_t1_915 *, const MethodInfo*))List_1_ToArray_m1_8587_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m1_8588_gshared (List_1_t1_915 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m1_8588(__this, method) (( void (*) (List_1_t1_915 *, const MethodInfo*))List_1_TrimExcess_m1_8588_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m1_8589_gshared (List_1_t1_915 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m1_8589(__this, method) (( int32_t (*) (List_1_t1_915 *, const MethodInfo*))List_1_get_Capacity_m1_8589_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m1_8590_gshared (List_1_t1_915 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1_8590(__this, ___value, method) (( void (*) (List_1_t1_915 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1_8590_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m1_8591_gshared (List_1_t1_915 * __this, const MethodInfo* method);
#define List_1_get_Count_m1_8591(__this, method) (( int32_t (*) (List_1_t1_915 *, const MethodInfo*))List_1_get_Count_m1_8591_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m1_8592_gshared (List_1_t1_915 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1_8592(__this, ___index, method) (( int32_t (*) (List_1_t1_915 *, int32_t, const MethodInfo*))List_1_get_Item_m1_8592_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1_8593_gshared (List_1_t1_915 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m1_8593(__this, ___index, ___value, method) (( void (*) (List_1_t1_915 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m1_8593_gshared)(__this, ___index, ___value, method)
