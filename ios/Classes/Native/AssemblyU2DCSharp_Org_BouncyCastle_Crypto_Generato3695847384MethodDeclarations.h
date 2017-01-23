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

// Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper
struct DHKeyGeneratorHelper_t3695847384;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Crypto.Parameters.DHParameters
struct DHParameters_t431035336;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter431035336.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper::.ctor()
extern "C"  void DHKeyGeneratorHelper__ctor_m1042210688 (DHKeyGeneratorHelper_t3695847384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper::CalculatePrivate(Org.BouncyCastle.Crypto.Parameters.DHParameters,Org.BouncyCastle.Security.SecureRandom)
extern "C"  BigInteger_t4268922522 * DHKeyGeneratorHelper_CalculatePrivate_m589173335 (DHKeyGeneratorHelper_t3695847384 * __this, DHParameters_t431035336 * ___dhParams0, SecureRandom_t3117234712 * ___random1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper::CalculatePublic(Org.BouncyCastle.Crypto.Parameters.DHParameters,Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * DHKeyGeneratorHelper_CalculatePublic_m1504012127 (DHKeyGeneratorHelper_t3695847384 * __this, DHParameters_t431035336 * ___dhParams0, BigInteger_t4268922522 * ___x1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper::.cctor()
extern "C"  void DHKeyGeneratorHelper__cctor_m3882725375 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
