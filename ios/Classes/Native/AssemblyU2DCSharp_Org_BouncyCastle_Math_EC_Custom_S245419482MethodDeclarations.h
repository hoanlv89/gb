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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Curve
struct SecT163R2Curve_t245419482;
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

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Curve::.ctor()
extern "C"  void SecT163R2Curve__ctor_m1747949543 (SecT163R2Curve_t245419482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Curve::CloneCurve()
extern "C"  ECCurve_t140895757 * SecT163R2Curve_CloneCurve_m3319435313 (SecT163R2Curve_t245419482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Curve::SupportsCoordinateSystem(System.Int32)
extern "C"  bool SecT163R2Curve_SupportsCoordinateSystem_m3598337737 (SecT163R2Curve_t245419482 * __this, int32_t ___coord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Curve::get_Infinity()
extern "C"  ECPoint_t626351532 * SecT163R2Curve_get_Infinity_m2898897001 (SecT163R2Curve_t245419482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Curve::get_FieldSize()
extern "C"  int32_t SecT163R2Curve_get_FieldSize_m2677620735 (SecT163R2Curve_t245419482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Curve::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  ECFieldElement_t1092946118 * SecT163R2Curve_FromBigInteger_m1405934546 (SecT163R2Curve_t245419482 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Curve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,System.Boolean)
extern "C"  ECPoint_t626351532 * SecT163R2Curve_CreateRawPoint_m4181519213 (SecT163R2Curve_t245419482 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, bool ___withCompression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Curve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement[],System.Boolean)
extern "C"  ECPoint_t626351532 * SecT163R2Curve_CreateRawPoint_m1307845101 (SecT163R2Curve_t245419482 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, ECFieldElementU5BU5D_t1670892899* ___zs2, bool ___withCompression3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Curve::get_IsKoblitz()
extern "C"  bool SecT163R2Curve_get_IsKoblitz_m238662529 (SecT163R2Curve_t245419482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Curve::DecompressPoint(System.Int32,Org.BouncyCastle.Math.BigInteger)
extern "C"  ECPoint_t626351532 * SecT163R2Curve_DecompressPoint_m1234111728 (SecT163R2Curve_t245419482 * __this, int32_t ___yTilde0, BigInteger_t4268922522 * ___X11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Curve::SolveQuadraticEquation(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecT163R2Curve_SolveQuadraticEquation_m267458855 (SecT163R2Curve_t245419482 * __this, ECFieldElement_t1092946118 * ___beta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Curve::get_M()
extern "C"  int32_t SecT163R2Curve_get_M_m957067877 (SecT163R2Curve_t245419482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Curve::get_IsTrinomial()
extern "C"  bool SecT163R2Curve_get_IsTrinomial_m767900683 (SecT163R2Curve_t245419482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Curve::get_K1()
extern "C"  int32_t SecT163R2Curve_get_K1_m121760934 (SecT163R2Curve_t245419482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Curve::get_K2()
extern "C"  int32_t SecT163R2Curve_get_K2_m121760905 (SecT163R2Curve_t245419482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecT163R2Curve::get_K3()
extern "C"  int32_t SecT163R2Curve_get_K3_m121761000 (SecT163R2Curve_t245419482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
