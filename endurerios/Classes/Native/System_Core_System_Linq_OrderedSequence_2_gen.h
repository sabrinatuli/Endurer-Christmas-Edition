#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Linq.OrderedEnumerable`1<System.Object>
struct OrderedEnumerable_1_t4_51;
// System.Func`2<System.Object,System.Object>
struct Func_2_t4_39;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t1_1282;

#include "System_Core_System_Linq_OrderedEnumerable_1_gen.h"
#include "System_Core_System_Linq_SortDirection.h"

// System.Linq.OrderedSequence`2<System.Object,System.Object>
struct  OrderedSequence_2_t4_50  : public OrderedEnumerable_1_t4_51
{
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedSequence`2::parent
	OrderedEnumerable_1_t4_51 * ___parent_1;
	// System.Func`2<TElement,TKey> System.Linq.OrderedSequence`2::selector
	Func_2_t4_39 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.OrderedSequence`2::comparer
	Object_t* ___comparer_3;
	// System.Linq.SortDirection System.Linq.OrderedSequence`2::direction
	int32_t ___direction_4;
};
