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

// Org.BouncyCastle.Crypto.Signers.HMacDsaKCalculator
struct HMacDsaKCalculator_t4170685704;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"

// System.Void Org.BouncyCastle.Crypto.Signers.HMacDsaKCalculator::.ctor(Org.BouncyCastle.Crypto.IDigest)
extern "C"  void HMacDsaKCalculator__ctor_m4134456029 (HMacDsaKCalculator_t4170685704 * __this, Il2CppObject * ___digest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Signers.HMacDsaKCalculator::get_IsDeterministic()
extern "C"  bool HMacDsaKCalculator_get_IsDeterministic_m1261830326 (HMacDsaKCalculator_t4170685704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.HMacDsaKCalculator::Init(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Security.SecureRandom)
extern "C"  void HMacDsaKCalculator_Init_m1650639501 (HMacDsaKCalculator_t4170685704 * __this, BigInteger_t4268922522 * ___n0, SecureRandom_t3117234712 * ___random1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Signers.HMacDsaKCalculator::Init(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,System.Byte[])
extern "C"  void HMacDsaKCalculator_Init_m1014485742 (HMacDsaKCalculator_t4170685704 * __this, BigInteger_t4268922522 * ___n0, BigInteger_t4268922522 * ___d1, ByteU5BU5D_t3397334013* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Signers.HMacDsaKCalculator::NextK()
extern "C"  BigInteger_t4268922522 * HMacDsaKCalculator_NextK_m699880140 (HMacDsaKCalculator_t4170685704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Signers.HMacDsaKCalculator::BitsToInt(System.Byte[])
extern "C"  BigInteger_t4268922522 * HMacDsaKCalculator_BitsToInt_m1862226201 (HMacDsaKCalculator_t4170685704 * __this, ByteU5BU5D_t3397334013* ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
