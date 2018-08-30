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

// Mono.Security.X509.SafeBag
struct SafeBag_t1_122;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1_123;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.SafeBag::.ctor(System.String,Mono.Security.ASN1)
extern "C" void SafeBag__ctor_m1_1345 (SafeBag_t1_122 * __this, String_t* ___bagOID, ASN1_t1_123 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.SafeBag::get_BagOID()
extern "C" String_t* SafeBag_get_BagOID_m1_1346 (SafeBag_t1_122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.SafeBag::get_ASN1()
extern "C" ASN1_t1_123 * SafeBag_get_ASN1_m1_1347 (SafeBag_t1_122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
