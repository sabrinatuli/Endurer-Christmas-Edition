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

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t1_610;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1_104;
// System.Byte[]
struct ByteU5BU5D_t1_73;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
extern "C" void TripleDESCryptoServiceProvider__ctor_m1_4084 (TripleDESCryptoServiceProvider_t1_610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
extern "C" void TripleDESCryptoServiceProvider_GenerateIV_m1_4085 (TripleDESCryptoServiceProvider_t1_610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
extern "C" void TripleDESCryptoServiceProvider_GenerateKey_m1_4086 (TripleDESCryptoServiceProvider_t1_610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateDecryptor_m1_4087 (TripleDESCryptoServiceProvider_t1_610 * __this, ByteU5BU5D_t1_73* ___rgbKey, ByteU5BU5D_t1_73* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateEncryptor_m1_4088 (TripleDESCryptoServiceProvider_t1_610 * __this, ByteU5BU5D_t1_73* ___rgbKey, ByteU5BU5D_t1_73* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
