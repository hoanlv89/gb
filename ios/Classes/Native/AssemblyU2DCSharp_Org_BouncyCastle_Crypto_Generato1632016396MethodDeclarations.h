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

// Org.BouncyCastle.Crypto.Generators.DHKeyPairGenerator
struct DHKeyPairGenerator_t1632016396;
// Org.BouncyCastle.Crypto.KeyGenerationParameters
struct KeyGenerationParameters_t650995725;
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair
struct AsymmetricCipherKeyPair_t1825508216;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_KeyGenera650995725.h"

// System.Void Org.BouncyCastle.Crypto.Generators.DHKeyPairGenerator::.ctor()
extern "C"  void DHKeyPairGenerator__ctor_m1980481000 (DHKeyPairGenerator_t1632016396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Generators.DHKeyPairGenerator::Init(Org.BouncyCastle.Crypto.KeyGenerationParameters)
extern "C"  void DHKeyPairGenerator_Init_m1474447878 (DHKeyPairGenerator_t1632016396 * __this, KeyGenerationParameters_t650995725 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair Org.BouncyCastle.Crypto.Generators.DHKeyPairGenerator::GenerateKeyPair()
extern "C"  AsymmetricCipherKeyPair_t1825508216 * DHKeyPairGenerator_GenerateKeyPair_m4058909256 (DHKeyPairGenerator_t1632016396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
