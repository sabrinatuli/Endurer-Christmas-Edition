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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t2_3;
// Mono.Math.BigInteger
struct BigInteger_t2_4;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m2_1 (ModulusRing_t2_3 * __this, BigInteger_t2_4 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m2_2 (ModulusRing_t2_3 * __this, BigInteger_t2_4 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2_4 * ModulusRing_Multiply_m2_3 (ModulusRing_t2_3 * __this, BigInteger_t2_4 * ___a, BigInteger_t2_4 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2_4 * ModulusRing_Difference_m2_4 (ModulusRing_t2_3 * __this, BigInteger_t2_4 * ___a, BigInteger_t2_4 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t2_4 * ModulusRing_Pow_m2_5 (ModulusRing_t2_3 * __this, BigInteger_t2_4 * ___a, BigInteger_t2_4 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t2_4 * ModulusRing_Pow_m2_6 (ModulusRing_t2_3 * __this, uint32_t ___b, BigInteger_t2_4 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
