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

// Org.BouncyCastle.Math.EC.F2mCurve
struct F2mCurve_t2204106640;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier
struct ECMultiplier_t768735235;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Math.EC.ECFieldElement[]
struct ECFieldElementU5BU5D_t1670892899;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"

// System.Void Org.BouncyCastle.Math.EC.F2mCurve::.ctor(System.Int32,System.Int32,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void F2mCurve__ctor_m2756078157 (F2mCurve_t2204106640 * __this, int32_t ___m0, int32_t ___k1, BigInteger_t4268922522 * ___a2, BigInteger_t4268922522 * ___b3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.F2mCurve::.ctor(System.Int32,System.Int32,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void F2mCurve__ctor_m3108163457 (F2mCurve_t2204106640 * __this, int32_t ___m0, int32_t ___k1, BigInteger_t4268922522 * ___a2, BigInteger_t4268922522 * ___b3, BigInteger_t4268922522 * ___order4, BigInteger_t4268922522 * ___cofactor5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.F2mCurve::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void F2mCurve__ctor_m618099737 (F2mCurve_t2204106640 * __this, int32_t ___m0, int32_t ___k11, int32_t ___k22, int32_t ___k33, BigInteger_t4268922522 * ___a4, BigInteger_t4268922522 * ___b5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.F2mCurve::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void F2mCurve__ctor_m361300429 (F2mCurve_t2204106640 * __this, int32_t ___m0, int32_t ___k11, int32_t ___k22, int32_t ___k33, BigInteger_t4268922522 * ___a4, BigInteger_t4268922522 * ___b5, BigInteger_t4268922522 * ___order6, BigInteger_t4268922522 * ___cofactor7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.F2mCurve::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  void F2mCurve__ctor_m3755713113 (F2mCurve_t2204106640 * __this, int32_t ___m0, int32_t ___k11, int32_t ___k22, int32_t ___k33, ECFieldElement_t1092946118 * ___a4, ECFieldElement_t1092946118 * ___b5, BigInteger_t4268922522 * ___order6, BigInteger_t4268922522 * ___cofactor7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Math.EC.F2mCurve::CloneCurve()
extern "C"  ECCurve_t140895757 * F2mCurve_CloneCurve_m3226954855 (F2mCurve_t2204106640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.F2mCurve::SupportsCoordinateSystem(System.Int32)
extern "C"  bool F2mCurve_SupportsCoordinateSystem_m3451669239 (F2mCurve_t2204106640 * __this, int32_t ___coord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier Org.BouncyCastle.Math.EC.F2mCurve::CreateDefaultMultiplier()
extern "C"  Il2CppObject * F2mCurve_CreateDefaultMultiplier_m2634594452 (F2mCurve_t2204106640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.F2mCurve::get_FieldSize()
extern "C"  int32_t F2mCurve_get_FieldSize_m4256563013 (F2mCurve_t2204106640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.F2mCurve::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  ECFieldElement_t1092946118 * F2mCurve_FromBigInteger_m3673150600 (F2mCurve_t2204106640 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.F2mCurve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,System.Boolean)
extern "C"  ECPoint_t626351532 * F2mCurve_CreateRawPoint_m2732747259 (F2mCurve_t2204106640 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, bool ___withCompression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.F2mCurve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement[],System.Boolean)
extern "C"  ECPoint_t626351532 * F2mCurve_CreateRawPoint_m2776635319 (F2mCurve_t2204106640 * __this, ECFieldElement_t1092946118 * ___x0, ECFieldElement_t1092946118 * ___y1, ECFieldElementU5BU5D_t1670892899* ___zs2, bool ___withCompression3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.F2mCurve::get_Infinity()
extern "C"  ECPoint_t626351532 * F2mCurve_get_Infinity_m3286237683 (F2mCurve_t2204106640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.F2mCurve::DecompressPoint(System.Int32,Org.BouncyCastle.Math.BigInteger)
extern "C"  ECPoint_t626351532 * F2mCurve_DecompressPoint_m1459231130 (F2mCurve_t2204106640 * __this, int32_t ___yTilde0, BigInteger_t4268922522 * ___X11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.F2mCurve::SolveQuadradicEquation(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * F2mCurve_SolveQuadradicEquation_m1101323965 (F2mCurve_t2204106640 * __this, ECFieldElement_t1092946118 * ___beta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.F2mCurve::get_M()
extern "C"  int32_t F2mCurve_get_M_m618422055 (F2mCurve_t2204106640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.F2mCurve::IsTrinomial()
extern "C"  bool F2mCurve_IsTrinomial_m2550363730 (F2mCurve_t2204106640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.F2mCurve::get_K1()
extern "C"  int32_t F2mCurve_get_K1_m174281754 (F2mCurve_t2204106640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.F2mCurve::get_K2()
extern "C"  int32_t F2mCurve_get_K2_m3205693087 (F2mCurve_t2204106640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.F2mCurve::get_K3()
extern "C"  int32_t F2mCurve_get_K3_m456606756 (F2mCurve_t2204106640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.F2mCurve::get_N()
extern "C"  BigInteger_t4268922522 * F2mCurve_get_N_m3925340055 (F2mCurve_t2204106640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.F2mCurve::get_H()
extern "C"  BigInteger_t4268922522 * F2mCurve_get_H_m3925340121 (F2mCurve_t2204106640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
