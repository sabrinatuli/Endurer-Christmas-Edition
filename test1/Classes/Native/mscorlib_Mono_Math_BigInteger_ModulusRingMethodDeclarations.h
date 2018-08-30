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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1_96;
// Mono.Math.BigInteger
struct BigInteger_t1_97;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m1_1139 (ModulusRing_t1_96 * __this, BigInteger_t1_97 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m1_1140 (ModulusRing_t1_96 * __this, BigInteger_t1_97 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1_97 * ModulusRing_Multiply_m1_1141 (ModulusRing_t1_96 * __this, BigInteger_t1_97 * ___a, BigInteger_t1_97 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1_97 * ModulusRing_Difference_m1_1142 (ModulusRing_t1_96 * __this, BigInteger_t1_97 * ___a, BigInteger_t1_97 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1_97 * ModulusRing_Pow_m1_1143 (ModulusRing_t1_96 * __this, BigInteger_t1_97 * ___a, BigInteger_t1_97 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1_97 * ModulusRing_Pow_m1_1144 (ModulusRing_t1_96 * __this, uint32_t ___b, BigInteger_t1_97 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
