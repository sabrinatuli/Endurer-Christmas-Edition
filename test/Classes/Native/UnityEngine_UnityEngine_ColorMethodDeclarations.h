﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m5_302 (Color_t5_50 * __this, float ___r, float ___g, float ___b, float ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" void Color__ctor_m5_303 (Color_t5_50 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Color::ToString()
extern "C" String_t* Color_ToString_m5_304 (Color_t5_50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Color::GetHashCode()
extern "C" int32_t Color_GetHashCode_m5_305 (Color_t5_50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Color::Equals(System.Object)
extern "C" bool Color_Equals_m5_306 (Color_t5_50 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C" Color_t5_50  Color_Lerp_m5_307 (Object_t * __this /* static, unused */, Color_t5_50  ___a, Color_t5_50  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" Color_t5_50  Color_get_red_m5_308 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" Color_t5_50  Color_get_white_m5_309 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C" Color_t5_50  Color_get_black_m5_310 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_clear()
extern "C" Color_t5_50  Color_get_clear_m5_311 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
extern "C" Color_t5_50  Color_op_Multiply_m5_312 (Object_t * __this /* static, unused */, Color_t5_50  ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
extern "C" bool Color_op_Equality_m5_313 (Object_t * __this /* static, unused */, Color_t5_50  ___lhs, Color_t5_50  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
extern "C" bool Color_op_Inequality_m5_314 (Object_t * __this /* static, unused */, Color_t5_50  ___lhs, Color_t5_50  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C" Vector4_t5_62  Color_op_Implicit_m5_315 (Object_t * __this /* static, unused */, Color_t5_50  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
