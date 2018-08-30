#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t1_159;
// System.Type
struct Type_t;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct DispatcherCache_t5_4;
// Boo.Lang.Runtime.ExtensionRegistry
struct ExtensionRegistry_t5_8;
// System.Object
struct Object_t;

#include "mscorlib_System_Object.h"

// Boo.Lang.Runtime.RuntimeServices
struct  RuntimeServices_t5_13  : public Object_t
{
};
struct RuntimeServices_t5_13_StaticFields{
	// System.Object[] Boo.Lang.Runtime.RuntimeServices::NoArguments
	ObjectU5BU5D_t1_159* ___NoArguments_0;
	// System.Type Boo.Lang.Runtime.RuntimeServices::RuntimeServicesType
	Type_t * ___RuntimeServicesType_1;
	// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache Boo.Lang.Runtime.RuntimeServices::_cache
	DispatcherCache_t5_4 * ____cache_2;
	// Boo.Lang.Runtime.ExtensionRegistry Boo.Lang.Runtime.RuntimeServices::_extensions
	ExtensionRegistry_t5_8 * ____extensions_3;
	// System.Object Boo.Lang.Runtime.RuntimeServices::True
	Object_t * ___True_4;
};
