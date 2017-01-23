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

// Org.BouncyCastle.Utilities.BigIntegers
struct BigIntegers_t825470227;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"

// System.Void Org.BouncyCastle.Utilities.BigIntegers::.ctor()
extern "C"  void BigIntegers__ctor_m1003663848 (BigIntegers_t825470227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.BigIntegers::AsUnsignedByteArray(Org.BouncyCastle.Math.BigInteger)
extern "C"  ByteU5BU5D_t3397334013* BigIntegers_AsUnsignedByteArray_m7425252 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.BigIntegers::AsUnsignedByteArray(System.Int32,Org.BouncyCastle.Math.BigInteger)
extern "C"  ByteU5BU5D_t3397334013* BigIntegers_AsUnsignedByteArray_m315228191 (Il2CppObject * __this /* static, unused */, int32_t ___length0, BigInteger_t4268922522 * ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Utilities.BigIntegers::CreateRandomInRange(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Security.SecureRandom)
extern "C"  BigInteger_t4268922522 * BigIntegers_CreateRandomInRange_m1591987078 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___min0, BigInteger_t4268922522 * ___max1, SecureRandom_t3117234712 * ___random2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
