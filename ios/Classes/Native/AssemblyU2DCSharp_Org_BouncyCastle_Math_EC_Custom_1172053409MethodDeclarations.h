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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve
struct SecT113R2Curve_t1172053409;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Math.EC.ECFieldElement[]
struct ECFieldElementU5BU5D_t1670892899;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve::.ctor()
extern "C"  void SecT113R2Curve__ctor_m2659768686 (SecT113R2Curve_t1172053409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve::CloneCurve()
extern "C"  ECCurve_t140895757 * SecT113R2Curve_CloneCurve_m514889106 (SecT113R2Curve_t1172053409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve::SupportsCoordinateSystem(System.Int32)
extern "C"  bool SecT113R2Curve_SupportsCoordinateSystem_m2129007116 (SecT113R2Curve_t1172053409 * __this, int32_t ___coord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve::get_Infinity()
extern "C"  ECPoint_t626351532 * SecT113R2Curve_get_Infinity_m2872161452 (SecT113R2Curve_t1172053409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve::get_FieldSize()
extern "C"  int32_t SecT113R2Curve_get_FieldSize_m3142312006 (SecT113R2Curve_t1172053409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  ECFieldElement_t1092946118 * SecT113R2Curve_FromBigInteger_m3635280599 (SecT113R2Curve_t1172053409 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,System.Boolean)
extern "C"  ECPoint_t626351532 * SecT113R2Curve_CreateRawPoint_m3310552492 (SecT113R2Curve_t1172053409 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, bool ___withCompression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement[],System.Boolean)
extern "C"  ECPoint_t626351532 * SecT113R2Curve_CreateRawPoint_m3175910992 (SecT113R2Curve_t1172053409 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, ECFieldElementU5BU5D_t1670892899* ___zs2, bool ___withCompression3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve::get_IsKoblitz()
extern "C"  bool SecT113R2Curve_get_IsKoblitz_m2596372858 (SecT113R2Curve_t1172053409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve::DecompressPoint(System.Int32,Org.BouncyCastle.Math.BigInteger)
extern "C"  ECPoint_t626351532 * SecT113R2Curve_DecompressPoint_m92925493 (SecT113R2Curve_t1172053409 * __this, int32_t ___yTilde0, BigInteger_t4268922522 * ___X11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve::SolveQuadraticEquation(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT113R2Curve_SolveQuadraticEquation_m685634986 (SecT113R2Curve_t1172053409 * __this, ECFieldElement_t1092946118 * ___beta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve::get_M()
extern "C"  int32_t SecT113R2Curve_get_M_m921015076 (SecT113R2Curve_t1172053409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve::get_IsTrinomial()
extern "C"  bool SecT113R2Curve_get_IsTrinomial_m1278973490 (SecT113R2Curve_t1172053409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve::get_K1()
extern "C"  int32_t SecT113R2Curve_get_K1_m3226985669 (SecT113R2Curve_t1172053409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve::get_K2()
extern "C"  int32_t SecT113R2Curve_get_K2_m3226985698 (SecT113R2Curve_t1172053409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve::get_K3()
extern "C"  int32_t SecT113R2Curve_get_K3_m3226985603 (SecT113R2Curve_t1172053409 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
