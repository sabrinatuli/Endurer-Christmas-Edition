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

// Mono.Security.X509.X509Crl
struct X509Crl_t2_39;
// System.Byte[]
struct ByteU5BU5D_t1_73;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t2_34;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t2_38;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2_33;
// System.Security.Cryptography.DSA
struct DSA_t1_108;
// System.Security.Cryptography.RSA
struct RSA_t1_120;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_544;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m2_303 (X509Crl_t2_39 * __this, ByteU5BU5D_t1_73* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m2_304 (X509Crl_t2_39 * __this, ByteU5BU5D_t1_73* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t2_34 * X509Crl_get_Extensions_m2_305 (X509Crl_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t1_73* X509Crl_get_Hash_m2_306 (X509Crl_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m2_307 (X509Crl_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t1_129  X509Crl_get_NextUpdate_m2_308 (X509Crl_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m2_309 (X509Crl_t2_39 * __this, ByteU5BU5D_t1_73* ___array1, ByteU5BU5D_t1_73* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t2_38 * X509Crl_GetCrlEntry_m2_310 (X509Crl_t2_39 * __this, X509Certificate_t2_33 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t2_38 * X509Crl_GetCrlEntry_m2_311 (X509Crl_t2_39 * __this, ByteU5BU5D_t1_73* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m2_312 (X509Crl_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m2_313 (X509Crl_t2_39 * __this, DSA_t1_108 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m2_314 (X509Crl_t2_39 * __this, RSA_t1_120 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m2_315 (X509Crl_t2_39 * __this, AsymmetricAlgorithm_t1_544 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
