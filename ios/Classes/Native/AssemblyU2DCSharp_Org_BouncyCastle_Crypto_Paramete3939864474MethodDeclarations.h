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

// Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
struct ECDomainParameters_t3939864474;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECCurve140895757.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete3939864474.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger)
extern "C"  void ECDomainParameters__ctor_m713383885 (ECDomainParameters_t3939864474 * __this, ECCurve_t140895757 * ___curve0, ECPoint_t626351532 * ___g1, BigInteger_t4268922522 * ___n2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void ECDomainParameters__ctor_m4008652463 (ECDomainParameters_t3939864474 * __this, ECCurve_t140895757 * ___curve0, ECPoint_t626351532 * ___g1, BigInteger_t4268922522 * ___n2, BigInteger_t4268922522 * ___h3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,System.Byte[])
extern "C"  void ECDomainParameters__ctor_m828654784 (ECDomainParameters_t3939864474 * __this, ECCurve_t140895757 * ___curve0, ECPoint_t626351532 * ___g1, BigInteger_t4268922522 * ___n2, BigInteger_t4268922522 * ___h3, ByteU5BU5D_t3397334013* ___seed4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::get_Curve()
extern "C"  ECCurve_t140895757 * ECDomainParameters_get_Curve_m2639705708 (ECDomainParameters_t3939864474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::get_G()
extern "C"  ECPoint_t626351532 * ECDomainParameters_get_G_m3694675339 (ECDomainParameters_t3939864474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::get_N()
extern "C"  BigInteger_t4268922522 * ECDomainParameters_get_N_m556374802 (ECDomainParameters_t3939864474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::get_H()
extern "C"  BigInteger_t4268922522 * ECDomainParameters_get_H_m556375000 (ECDomainParameters_t3939864474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::GetSeed()
extern "C"  ByteU5BU5D_t3397334013* ECDomainParameters_GetSeed_m4249327685 (ECDomainParameters_t3939864474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::Equals(System.Object)
extern "C"  bool ECDomainParameters_Equals_m1633118061 (ECDomainParameters_t3939864474 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::Equals(Org.BouncyCastle.Crypto.Parameters.ECDomainParameters)
extern "C"  bool ECDomainParameters_Equals_m2009630398 (ECDomainParameters_t3939864474 * __this, ECDomainParameters_t3939864474 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.ECDomainParameters::GetHashCode()
extern "C"  int32_t ECDomainParameters_GetHashCode_m840690555 (ECDomainParameters_t3939864474 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
