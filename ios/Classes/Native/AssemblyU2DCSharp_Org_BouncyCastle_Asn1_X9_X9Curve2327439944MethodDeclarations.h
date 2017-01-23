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

// Org.BouncyCastle.Asn1.X9.X9Curve
struct X9Curve_t2327439944;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Asn1.X9.X9FieldID
struct X9FieldID_t2012644846;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECCurve140895757.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_X9_X9Field2012644846.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Sequence54253652.h"

// System.Void Org.BouncyCastle.Asn1.X9.X9Curve::.ctor(Org.BouncyCastle.Math.EC.ECCurve)
extern "C"  void X9Curve__ctor_m3066924338 (X9Curve_t2327439944 * __this, ECCurve_t140895757 * ___curve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X9.X9Curve::.ctor(Org.BouncyCastle.Math.EC.ECCurve,System.Byte[])
extern "C"  void X9Curve__ctor_m1714045845 (X9Curve_t2327439944 * __this, ECCurve_t140895757 * ___curve0, ByteU5BU5D_t3397334013* ___seed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X9.X9Curve::.ctor(Org.BouncyCastle.Asn1.X9.X9FieldID,Org.BouncyCastle.Asn1.Asn1Sequence)
extern "C"  void X9Curve__ctor_m1792833232 (X9Curve_t2327439944 * __this, X9FieldID_t2012644846 * ___fieldID0, Asn1Sequence_t54253652 * ___seq1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Asn1.X9.X9Curve::get_Curve()
extern "C"  ECCurve_t140895757 * X9Curve_get_Curve_m2172002915 (X9Curve_t2327439944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Asn1.X9.X9Curve::GetSeed()
extern "C"  ByteU5BU5D_t3397334013* X9Curve_GetSeed_m2262955706 (X9Curve_t2327439944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X9.X9Curve::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * X9Curve_ToAsn1Object_m95985244 (X9Curve_t2327439944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
