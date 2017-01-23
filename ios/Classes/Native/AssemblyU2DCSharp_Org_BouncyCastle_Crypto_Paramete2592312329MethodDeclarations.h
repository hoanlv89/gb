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

// Org.BouncyCastle.Crypto.Parameters.RsaKeyGenerationParameters
struct RsaKeyGenerationParameters_t2592312329;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.RsaKeyGenerationParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Security.SecureRandom,System.Int32,System.Int32)
extern "C"  void RsaKeyGenerationParameters__ctor_m898278959 (RsaKeyGenerationParameters_t2592312329 * __this, BigInteger_t4268922522 * ___publicExponent0, SecureRandom_t3117234712 * ___random1, int32_t ___strength2, int32_t ___certainty3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaKeyGenerationParameters::get_PublicExponent()
extern "C"  BigInteger_t4268922522 * RsaKeyGenerationParameters_get_PublicExponent_m3086996513 (RsaKeyGenerationParameters_t2592312329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.RsaKeyGenerationParameters::get_Certainty()
extern "C"  int32_t RsaKeyGenerationParameters_get_Certainty_m1843149547 (RsaKeyGenerationParameters_t2592312329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.RsaKeyGenerationParameters::Equals(System.Object)
extern "C"  bool RsaKeyGenerationParameters_Equals_m3354868488 (RsaKeyGenerationParameters_t2592312329 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.RsaKeyGenerationParameters::GetHashCode()
extern "C"  int32_t RsaKeyGenerationParameters_GetHashCode_m2868133684 (RsaKeyGenerationParameters_t2592312329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
