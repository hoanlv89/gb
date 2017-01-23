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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Curve
struct SecP192K1Curve_t3087408126;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// Org.BouncyCastle.Math.EC.ECFieldElement[]
struct ECFieldElementU5BU5D_t1670892899;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Curve::.ctor()
extern "C"  void SecP192K1Curve__ctor_m666287247 (SecP192K1Curve_t3087408126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Curve::CloneCurve()
extern "C"  ECCurve_t140895757 * SecP192K1Curve_CloneCurve_m3483335605 (SecP192K1Curve_t3087408126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Curve::SupportsCoordinateSystem(System.Int32)
extern "C"  bool SecP192K1Curve_SupportsCoordinateSystem_m1944972525 (SecP192K1Curve_t3087408126 * __this, int32_t ___coord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Curve::get_Q()
extern "C"  BigInteger_t4268922522 * SecP192K1Curve_get_Q_m3166356610 (SecP192K1Curve_t3087408126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Curve::get_Infinity()
extern "C"  ECPoint_t626351532 * SecP192K1Curve_get_Infinity_m1129121549 (SecP192K1Curve_t3087408126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Curve::get_FieldSize()
extern "C"  int32_t SecP192K1Curve_get_FieldSize_m2304655399 (SecP192K1Curve_t3087408126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Curve::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  ECFieldElement_t1092946118 * SecP192K1Curve_FromBigInteger_m1139098870 (SecP192K1Curve_t3087408126 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Curve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,System.Boolean)
extern "C"  ECPoint_t626351532 * SecP192K1Curve_CreateRawPoint_m3624059913 (SecP192K1Curve_t3087408126 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, bool ___withCompression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Curve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement[],System.Boolean)
extern "C"  ECPoint_t626351532 * SecP192K1Curve_CreateRawPoint_m2467203953 (SecP192K1Curve_t3087408126 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, ECFieldElementU5BU5D_t1670892899* ___zs2, bool ___withCompression3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Curve::.cctor()
extern "C"  void SecP192K1Curve__cctor_m3351398892 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
