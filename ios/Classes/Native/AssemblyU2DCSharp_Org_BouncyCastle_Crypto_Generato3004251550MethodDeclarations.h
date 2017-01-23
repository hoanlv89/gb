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

// Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator
struct DsaKeyPairGenerator_t3004251550;
// Org.BouncyCastle.Crypto.KeyGenerationParameters
struct KeyGenerationParameters_t650995725;
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair
struct AsymmetricCipherKeyPair_t1825508216;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_KeyGenera650995725.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"

// System.Void Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator::.ctor()
extern "C"  void DsaKeyPairGenerator__ctor_m741291878 (DsaKeyPairGenerator_t3004251550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator::Init(Org.BouncyCastle.Crypto.KeyGenerationParameters)
extern "C"  void DsaKeyPairGenerator_Init_m2309180032 (DsaKeyPairGenerator_t3004251550 * __this, KeyGenerationParameters_t650995725 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator::GenerateKeyPair()
extern "C"  AsymmetricCipherKeyPair_t1825508216 * DsaKeyPairGenerator_GenerateKeyPair_m1542800126 (DsaKeyPairGenerator_t3004251550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator::GeneratePrivateKey(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Security.SecureRandom)
extern "C"  BigInteger_t4268922522 * DsaKeyPairGenerator_GeneratePrivateKey_m1080236540 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___q0, SecureRandom_t3117234712 * ___random1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator::CalculatePublicKey(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * DsaKeyPairGenerator_CalculatePublicKey_m794893491 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___p0, BigInteger_t4268922522 * ___g1, BigInteger_t4268922522 * ___x2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator::.cctor()
extern "C"  void DsaKeyPairGenerator__cctor_m3999109781 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
