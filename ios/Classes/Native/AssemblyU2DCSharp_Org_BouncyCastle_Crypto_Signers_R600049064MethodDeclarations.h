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

// Org.BouncyCastle.Crypto.Signers.RandomDsaKCalculator
struct RandomDsaKCalculator_t600049064;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"

// System.Void Org.BouncyCastle.Crypto.Signers.RandomDsaKCalculator::.ctor()
extern "C"  void RandomDsaKCalculator__ctor_m756111083 (RandomDsaKCalculator_t600049064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Signers.RandomDsaKCalculator::get_IsDeterministic()
extern "C"  bool RandomDsaKCalculator_get_IsDeterministic_m653785046 (RandomDsaKCalculator_t600049064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.RandomDsaKCalculator::Init(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Security.SecureRandom)
extern "C"  void RandomDsaKCalculator_Init_m3540797533 (RandomDsaKCalculator_t600049064 * __this, BigInteger_t4268922522 * ___n0, SecureRandom_t3117234712 * ___random1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.RandomDsaKCalculator::Init(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,System.Byte[])
extern "C"  void RandomDsaKCalculator_Init_m2350497058 (RandomDsaKCalculator_t600049064 * __this, BigInteger_t4268922522 * ___n0, BigInteger_t4268922522 * ___d1, ByteU5BU5D_t3397334013* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Signers.RandomDsaKCalculator::NextK()
extern "C"  BigInteger_t4268922522 * RandomDsaKCalculator_NextK_m822984312 (RandomDsaKCalculator_t600049064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
