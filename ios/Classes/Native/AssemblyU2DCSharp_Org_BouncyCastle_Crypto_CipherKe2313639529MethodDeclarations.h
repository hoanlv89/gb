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

// Org.BouncyCastle.Crypto.CipherKeyGenerator
struct CipherKeyGenerator_t2313639529;
// Org.BouncyCastle.Crypto.KeyGenerationParameters
struct KeyGenerationParameters_t650995725;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_KeyGenera650995725.h"

// System.Void Org.BouncyCastle.Crypto.CipherKeyGenerator::.ctor()
extern "C"  void CipherKeyGenerator__ctor_m3510629405 (CipherKeyGenerator_t2313639529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.CipherKeyGenerator::.ctor(System.Int32)
extern "C"  void CipherKeyGenerator__ctor_m3334981510 (CipherKeyGenerator_t2313639529 * __this, int32_t ___defaultStrength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.CipherKeyGenerator::get_DefaultStrength()
extern "C"  int32_t CipherKeyGenerator_get_DefaultStrength_m2777400822 (CipherKeyGenerator_t2313639529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.CipherKeyGenerator::Init(Org.BouncyCastle.Crypto.KeyGenerationParameters)
extern "C"  void CipherKeyGenerator_Init_m3050169379 (CipherKeyGenerator_t2313639529 * __this, KeyGenerationParameters_t650995725 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.CipherKeyGenerator::engineInit(Org.BouncyCastle.Crypto.KeyGenerationParameters)
extern "C"  void CipherKeyGenerator_engineInit_m3610734441 (CipherKeyGenerator_t2313639529 * __this, KeyGenerationParameters_t650995725 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.CipherKeyGenerator::GenerateKey()
extern "C"  ByteU5BU5D_t3397334013* CipherKeyGenerator_GenerateKey_m889611165 (CipherKeyGenerator_t2313639529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.CipherKeyGenerator::engineGenerateKey()
extern "C"  ByteU5BU5D_t3397334013* CipherKeyGenerator_engineGenerateKey_m512722523 (CipherKeyGenerator_t2313639529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
