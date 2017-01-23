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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve
struct SecT163K1Curve_t132931622;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier
struct ECMultiplier_t768735235;
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

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve::.ctor()
extern "C"  void SecT163K1Curve__ctor_m1881990117 (SecT163K1Curve_t132931622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve::CloneCurve()
extern "C"  ECCurve_t140895757 * SecT163K1Curve_CloneCurve_m3234118723 (SecT163K1Curve_t132931622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve::SupportsCoordinateSystem(System.Int32)
extern "C"  bool SecT163K1Curve_SupportsCoordinateSystem_m1685230835 (SecT163K1Curve_t132931622 * __this, int32_t ___coord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve::CreateDefaultMultiplier()
extern "C"  Il2CppObject * SecT163K1Curve_CreateDefaultMultiplier_m3216779606 (SecT163K1Curve_t132931622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve::get_Infinity()
extern "C"  ECPoint_t626351532 * SecT163K1Curve_get_Infinity_m1698460099 (SecT163K1Curve_t132931622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve::get_FieldSize()
extern "C"  int32_t SecT163K1Curve_get_FieldSize_m3985524153 (SecT163K1Curve_t132931622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  ECFieldElement_t1092946118 * SecT163K1Curve_FromBigInteger_m3379146194 (SecT163K1Curve_t132931622 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,System.Boolean)
extern "C"  ECPoint_t626351532 * SecT163K1Curve_CreateRawPoint_m3957655691 (SecT163K1Curve_t132931622 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, bool ___withCompression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement[],System.Boolean)
extern "C"  ECPoint_t626351532 * SecT163K1Curve_CreateRawPoint_m538413047 (SecT163K1Curve_t132931622 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, ECFieldElementU5BU5D_t1670892899* ___zs2, bool ___withCompression3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve::get_IsKoblitz()
extern "C"  bool SecT163K1Curve_get_IsKoblitz_m2184532323 (SecT163K1Curve_t132931622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve::DecompressPoint(System.Int32,Org.BouncyCastle.Math.BigInteger)
extern "C"  ECPoint_t626351532 * SecT163K1Curve_DecompressPoint_m2424359960 (SecT163K1Curve_t132931622 * __this, int32_t ___yTilde0, BigInteger_t4268922522 * ___X11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve::SolveQuadraticEquation(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT163K1Curve_SolveQuadraticEquation_m1471606337 (SecT163K1Curve_t132931622 * __this, ECFieldElement_t1092946118 * ___beta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve::get_M()
extern "C"  int32_t SecT163K1Curve_get_M_m830910979 (SecT163K1Curve_t132931622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve::get_IsTrinomial()
extern "C"  bool SecT163K1Curve_get_IsTrinomial_m1297803045 (SecT163K1Curve_t132931622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve::get_K1()
extern "C"  int32_t SecT163K1Curve_get_K1_m3364642810 (SecT163K1Curve_t132931622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve::get_K2()
extern "C"  int32_t SecT163K1Curve_get_K2_m3364642843 (SecT163K1Curve_t132931622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT163K1Curve::get_K3()
extern "C"  int32_t SecT163K1Curve_get_K3_m3364642876 (SecT163K1Curve_t132931622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
