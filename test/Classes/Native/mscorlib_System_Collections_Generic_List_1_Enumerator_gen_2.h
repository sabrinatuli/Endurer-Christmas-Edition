#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<WaveManager/Wave/Entry>
struct List_1_t1_1004;
// WaveManager/Wave/Entry
struct Entry_t11_22;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.List`1/Enumerator<WaveManager/Wave/Entry>
struct  Enumerator_t1_1005 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1_1004 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Entry_t11_22 * ___current_3;
};
