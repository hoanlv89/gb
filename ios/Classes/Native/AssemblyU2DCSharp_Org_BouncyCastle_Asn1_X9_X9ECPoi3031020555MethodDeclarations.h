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

// Org.BouncyCastle.Asn1.X9.X9ECPoint
struct X9ECPoint_t3031020555;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Asn1.Asn1OctetString
struct Asn1OctetString_t1486532927;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECCurve140895757.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1OctetS1486532927.h"

// System.Void Org.BouncyCastle.Asn1.X9.X9ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  void X9ECPoint__ctor_m2073746146 (X9ECPoint_t3031020555 * __this, ECPoint_t626351532 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X9.X9ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Asn1.Asn1OctetString)
extern "C"  void X9ECPoint__ctor_m876840963 (X9ECPoint_t3031020555 * __this, ECCurve_t140895757 * ___c0, Asn1OctetString_t1486532927 * ___s1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Asn1.X9.X9ECPoint::get_Point()
extern "C"  ECPoint_t626351532 * X9ECPoint_get_Point_m2601644370 (X9ECPoint_t3031020555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X9.X9ECPoint::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * X9ECPoint_ToAsn1Object_m429659843 (X9ECPoint_t3031020555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
