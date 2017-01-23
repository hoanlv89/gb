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

// Org.BouncyCastle.Crypto.Generators.DHParametersHelper
struct DHParametersHelper_t2293935318;
// Org.BouncyCastle.Math.BigInteger[]
struct BigIntegerU5BU5D_t431507903;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Crypto.Generators.DHParametersHelper::.ctor()
extern "C"  void DHParametersHelper__ctor_m2666305604 (DHParametersHelper_t2293935318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Crypto.Generators.DHParametersHelper::ConstructBigPrimeProducts(System.Int32[])
extern "C"  BigIntegerU5BU5D_t431507903* DHParametersHelper_ConstructBigPrimeProducts_m349104548 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___primeProducts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Crypto.Generators.DHParametersHelper::GenerateSafePrimes(System.Int32,System.Int32,Org.BouncyCastle.Security.SecureRandom)
extern "C"  BigIntegerU5BU5D_t431507903* DHParametersHelper_GenerateSafePrimes_m996119973 (Il2CppObject * __this /* static, unused */, int32_t ___size0, int32_t ___certainty1, SecureRandom_t3117234712 * ___random2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DHParametersHelper::SelectGenerator(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Security.SecureRandom)
extern "C"  BigInteger_t4268922522 * DHParametersHelper_SelectGenerator_m4040275092 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___p0, BigInteger_t4268922522 * ___q1, SecureRandom_t3117234712 * ___random2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Generators.DHParametersHelper::.cctor()
extern "C"  void DHParametersHelper__cctor_m63585577 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
