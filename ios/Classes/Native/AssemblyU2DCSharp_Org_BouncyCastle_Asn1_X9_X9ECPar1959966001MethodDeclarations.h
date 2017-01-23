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

// Org.BouncyCastle.Asn1.X9.X9ECParameters
struct X9ECParameters_t1959966001;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECCurve140895757.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Asn1.X9.X9ECParameters::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void X9ECParameters__ctor_m1546316579 (X9ECParameters_t1959966001 * __this, Asn1Sequence_t54253652 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X9.X9ECParameters::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger)
extern "C"  void X9ECParameters__ctor_m1621005361 (X9ECParameters_t1959966001 * __this, ECCurve_t140895757 * ___curve0, ECPoint_t626351532 * ___g1, BigInteger_t4268922522 * ___n2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X9.X9ECParameters::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void X9ECParameters__ctor_m3444112071 (X9ECParameters_t1959966001 * __this, ECCurve_t140895757 * ___curve0, ECPoint_t626351532 * ___g1, BigInteger_t4268922522 * ___n2, BigInteger_t4268922522 * ___h3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X9.X9ECParameters::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,System.Byte[])
extern "C"  void X9ECParameters__ctor_m2222675590 (X9ECParameters_t1959966001 * __this, ECCurve_t140895757 * ___curve0, ECPoint_t626351532 * ___g1, BigInteger_t4268922522 * ___n2, BigInteger_t4268922522 * ___h3, ByteU5BU5D_t3397334013* ___seed4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Asn1.X9.X9ECParameters::get_Curve()
extern "C"  ECCurve_t140895757 * X9ECParameters_get_Curve_m1347246186 (X9ECParameters_t1959966001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Asn1.X9.X9ECParameters::get_G()
extern "C"  ECPoint_t626351532 * X9ECParameters_get_G_m4210883355 (X9ECParameters_t1959966001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.X9.X9ECParameters::get_N()
extern "C"  BigInteger_t4268922522 * X9ECParameters_get_N_m1741240020 (X9ECParameters_t1959966001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.X9.X9ECParameters::get_H()
extern "C"  BigInteger_t4268922522 * X9ECParameters_get_H_m1741240086 (X9ECParameters_t1959966001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.X9.X9ECParameters::GetSeed()
extern "C"  ByteU5BU5D_t3397334013* X9ECParameters_GetSeed_m2330579873 (X9ECParameters_t1959966001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X9.X9ECParameters::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * X9ECParameters_ToAsn1Object_m486041521 (X9ECParameters_t1959966001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
