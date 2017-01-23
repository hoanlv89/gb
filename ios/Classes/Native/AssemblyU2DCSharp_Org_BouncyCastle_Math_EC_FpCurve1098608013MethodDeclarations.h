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

// Org.BouncyCastle.Math.EC.FpCurve
struct FpCurve_t1098608013;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Math.EC.ECFieldElement[]
struct ECFieldElementU5BU5D_t1670892899;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"

// System.Void Org.BouncyCastle.Math.EC.FpCurve::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void FpCurve__ctor_m783993430 (FpCurve_t1098608013 * __this, BigInteger_t4268922522 * ___q0, BigInteger_t4268922522 * ___a1, BigInteger_t4268922522 * ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.FpCurve::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void FpCurve__ctor_m3952330538 (FpCurve_t1098608013 * __this, BigInteger_t4268922522 * ___q0, BigInteger_t4268922522 * ___a1, BigInteger_t4268922522 * ___b2, BigInteger_t4268922522 * ___order3, BigInteger_t4268922522 * ___cofactor4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.FpCurve::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  void FpCurve__ctor_m4238756406 (FpCurve_t1098608013 * __this, BigInteger_t4268922522 * ___q0, BigInteger_t4268922522 * ___r1, ECFieldElement_t1092946118 * ___a2, ECFieldElement_t1092946118 * ___b3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.FpCurve::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void FpCurve__ctor_m3707510046 (FpCurve_t1098608013 * __this, BigInteger_t4268922522 * ___q0, BigInteger_t4268922522 * ___r1, ECFieldElement_t1092946118 * ___a2, ECFieldElement_t1092946118 * ___b3, BigInteger_t4268922522 * ___order4, BigInteger_t4268922522 * ___cofactor5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Math.EC.FpCurve::CloneCurve()
extern "C"  ECCurve_t140895757 * FpCurve_CloneCurve_m1828837036 (FpCurve_t1098608013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.FpCurve::SupportsCoordinateSystem(System.Int32)
extern "C"  bool FpCurve_SupportsCoordinateSystem_m1365222846 (FpCurve_t1098608013 * __this, int32_t ___coord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.FpCurve::get_Q()
extern "C"  BigInteger_t4268922522 * FpCurve_get_Q_m444541127 (FpCurve_t1098608013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.FpCurve::get_Infinity()
extern "C"  ECPoint_t626351532 * FpCurve_get_Infinity_m1796485246 (FpCurve_t1098608013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.FpCurve::get_FieldSize()
extern "C"  int32_t FpCurve_get_FieldSize_m3327729316 (FpCurve_t1098608013 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpCurve::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  ECFieldElement_t1092946118 * FpCurve_FromBigInteger_m2476890561 (FpCurve_t1098608013 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.FpCurve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,System.Boolean)
extern "C"  ECPoint_t626351532 * FpCurve_CreateRawPoint_m1684713130 (FpCurve_t1098608013 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, bool ___withCompression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.FpCurve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement[],System.Boolean)
extern "C"  ECPoint_t626351532 * FpCurve_CreateRawPoint_m4235505978 (FpCurve_t1098608013 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, ECFieldElementU5BU5D_t1670892899* ___zs2, bool ___withCompression3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.FpCurve::ImportPoint(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  ECPoint_t626351532 * FpCurve_ImportPoint_m3261780352 (FpCurve_t1098608013 * __this, ECPoint_t626351532 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
