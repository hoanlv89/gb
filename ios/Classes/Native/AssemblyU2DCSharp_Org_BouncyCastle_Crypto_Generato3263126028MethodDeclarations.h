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

// Org.BouncyCastle.Crypto.Generators.RsaKeyPairGenerator
struct RsaKeyPairGenerator_t3263126028;
// Org.BouncyCastle.Crypto.KeyGenerationParameters
struct KeyGenerationParameters_t650995725;
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair
struct AsymmetricCipherKeyPair_t1825508216;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_KeyGenera650995725.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Crypto.Generators.RsaKeyPairGenerator::.ctor()
extern "C"  void RsaKeyPairGenerator__ctor_m815032020 (RsaKeyPairGenerator_t3263126028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Generators.RsaKeyPairGenerator::Init(Org.BouncyCastle.Crypto.KeyGenerationParameters)
extern "C"  void RsaKeyPairGenerator_Init_m3667427578 (RsaKeyPairGenerator_t3263126028 * __this, KeyGenerationParameters_t650995725 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair Org.BouncyCastle.Crypto.Generators.RsaKeyPairGenerator::GenerateKeyPair()
extern "C"  AsymmetricCipherKeyPair_t1825508216 * RsaKeyPairGenerator_GenerateKeyPair_m589019896 (RsaKeyPairGenerator_t3263126028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.RsaKeyPairGenerator::ChooseRandomPrime(System.Int32,Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * RsaKeyPairGenerator_ChooseRandomPrime_m2437930363 (RsaKeyPairGenerator_t3263126028 * __this, int32_t ___bitlength0, BigInteger_t4268922522 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Generators.RsaKeyPairGenerator::.cctor()
extern "C"  void RsaKeyPairGenerator__cctor_m3616054211 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
