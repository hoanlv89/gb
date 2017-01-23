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

// Org.BouncyCastle.Crypto.Prng.CryptoApiRandomGenerator
struct CryptoApiRandomGenerator_t405007133;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber2510243513.h"

// System.Void Org.BouncyCastle.Crypto.Prng.CryptoApiRandomGenerator::.ctor()
extern "C"  void CryptoApiRandomGenerator__ctor_m1256270428 (CryptoApiRandomGenerator_t405007133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Prng.CryptoApiRandomGenerator::.ctor(System.Security.Cryptography.RandomNumberGenerator)
extern "C"  void CryptoApiRandomGenerator__ctor_m2275992468 (CryptoApiRandomGenerator_t405007133 * __this, RandomNumberGenerator_t2510243513 * ___rng0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Prng.CryptoApiRandomGenerator::AddSeedMaterial(System.Byte[])
extern "C"  void CryptoApiRandomGenerator_AddSeedMaterial_m4190150658 (CryptoApiRandomGenerator_t405007133 * __this, ByteU5BU5D_t3397334013* ___seed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Prng.CryptoApiRandomGenerator::AddSeedMaterial(System.Int64)
extern "C"  void CryptoApiRandomGenerator_AddSeedMaterial_m922888325 (CryptoApiRandomGenerator_t405007133 * __this, int64_t ___seed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Prng.CryptoApiRandomGenerator::NextBytes(System.Byte[])
extern "C"  void CryptoApiRandomGenerator_NextBytes_m1878759775 (CryptoApiRandomGenerator_t405007133 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Prng.CryptoApiRandomGenerator::NextBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void CryptoApiRandomGenerator_NextBytes_m1627824691 (CryptoApiRandomGenerator_t405007133 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___start1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
