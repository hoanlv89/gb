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

// Org.BouncyCastle.Crypto.Generators.Poly1305KeyGenerator
struct Poly1305KeyGenerator_t3799708011;
// Org.BouncyCastle.Crypto.KeyGenerationParameters
struct KeyGenerationParameters_t650995725;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_KeyGenera650995725.h"

// System.Void Org.BouncyCastle.Crypto.Generators.Poly1305KeyGenerator::.ctor()
extern "C"  void Poly1305KeyGenerator__ctor_m2259835767 (Poly1305KeyGenerator_t3799708011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Generators.Poly1305KeyGenerator::engineInit(Org.BouncyCastle.Crypto.KeyGenerationParameters)
extern "C"  void Poly1305KeyGenerator_engineInit_m728017587 (Poly1305KeyGenerator_t3799708011 * __this, KeyGenerationParameters_t650995725 * ___param0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Generators.Poly1305KeyGenerator::engineGenerateKey()
extern "C"  ByteU5BU5D_t3397334013* Poly1305KeyGenerator_engineGenerateKey_m3077647017 (Poly1305KeyGenerator_t3799708011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Generators.Poly1305KeyGenerator::Clamp(System.Byte[])
extern "C"  void Poly1305KeyGenerator_Clamp_m3466052443 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Generators.Poly1305KeyGenerator::CheckKey(System.Byte[])
extern "C"  void Poly1305KeyGenerator_CheckKey_m360277977 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Generators.Poly1305KeyGenerator::checkMask(System.Byte,System.Byte)
extern "C"  void Poly1305KeyGenerator_checkMask_m3239202121 (Il2CppObject * __this /* static, unused */, uint8_t ___b0, uint8_t ___mask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
