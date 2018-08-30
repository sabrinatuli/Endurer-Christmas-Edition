#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<MadLevelManager.MadObjectPool`1/Item<System.Object>>
struct List_1_t1_1775;
// MadLevelManager.MadObjectPool`1/Item<System.Object>
struct Item_t11_298;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.List`1/Enumerator<MadLevelManager.MadObjectPool`1/Item<System.Object>>
struct  Enumerator_t1_1779 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1_1775 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Item_t11_298 * ___current_3;
};
