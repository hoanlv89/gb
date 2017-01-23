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

// Org.BouncyCastle.Math.EC.Abc.Tnaf
struct Tnaf_t1139038785;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Math.EC.Abc.ZTauElement
struct ZTauElement_t2571810054;
// Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal
struct SimpleBigDecimal_t2857025313;
// System.SByte[]
struct SByteU5BU5D_t3472287392;
// Org.BouncyCastle.Math.EC.AbstractF2mPoint
struct AbstractF2mPoint_t883694769;
// Org.BouncyCastle.Math.EC.AbstractF2mCurve
struct AbstractF2mCurve_t4137102866;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// Org.BouncyCastle.Math.BigInteger[]
struct BigIntegerU5BU5D_t431507903;
// Org.BouncyCastle.Math.EC.Abc.ZTauElement[]
struct ZTauElementU5BU5D_t3646072867;
// Org.BouncyCastle.Math.EC.AbstractF2mPoint[]
struct AbstractF2mPointU5BU5D_t1514048876;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Abc_ZTa2571810054.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Abc_Sim2857025313.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Abstract883694769.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Abstrac4137102866.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"

// System.Void Org.BouncyCastle.Math.EC.Abc.Tnaf::.ctor()
extern "C"  void Tnaf__ctor_m4244862178 (Tnaf_t1139038785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Abc.Tnaf::Norm(System.SByte,Org.BouncyCastle.Math.EC.Abc.ZTauElement)
extern "C"  BigInteger_t4268922522 * Tnaf_Norm_m2282643407 (Il2CppObject * __this /* static, unused */, int8_t ___mu0, ZTauElement_t2571810054 * ___lambda1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Org.BouncyCastle.Math.EC.Abc.Tnaf::Norm(System.SByte,Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal,Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal)
extern "C"  SimpleBigDecimal_t2857025313 * Tnaf_Norm_m2221801360 (Il2CppObject * __this /* static, unused */, int8_t ___mu0, SimpleBigDecimal_t2857025313 * ___u1, SimpleBigDecimal_t2857025313 * ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Abc.ZTauElement Org.BouncyCastle.Math.EC.Abc.Tnaf::Round(Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal,Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal,System.SByte)
extern "C"  ZTauElement_t2571810054 * Tnaf_Round_m2882358133 (Il2CppObject * __this /* static, unused */, SimpleBigDecimal_t2857025313 * ___lambda00, SimpleBigDecimal_t2857025313 * ___lambda11, int8_t ___mu2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Org.BouncyCastle.Math.EC.Abc.Tnaf::ApproximateDivisionByN(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,System.SByte,System.Int32,System.Int32)
extern "C"  SimpleBigDecimal_t2857025313 * Tnaf_ApproximateDivisionByN_m742609946 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___k0, BigInteger_t4268922522 * ___s1, BigInteger_t4268922522 * ___vm2, int8_t ___a3, int32_t ___m4, int32_t ___c5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte[] Org.BouncyCastle.Math.EC.Abc.Tnaf::TauAdicNaf(System.SByte,Org.BouncyCastle.Math.EC.Abc.ZTauElement)
extern "C"  SByteU5BU5D_t3472287392* Tnaf_TauAdicNaf_m1871482945 (Il2CppObject * __this /* static, unused */, int8_t ___mu0, ZTauElement_t2571810054 * ___lambda1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.AbstractF2mPoint Org.BouncyCastle.Math.EC.Abc.Tnaf::Tau(Org.BouncyCastle.Math.EC.AbstractF2mPoint)
extern "C"  AbstractF2mPoint_t883694769 * Tnaf_Tau_m1481093879 (Il2CppObject * __this /* static, unused */, AbstractF2mPoint_t883694769 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte Org.BouncyCastle.Math.EC.Abc.Tnaf::GetMu(Org.BouncyCastle.Math.EC.AbstractF2mCurve)
extern "C"  int8_t Tnaf_GetMu_m1530973965 (Il2CppObject * __this /* static, unused */, AbstractF2mCurve_t4137102866 * ___curve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte Org.BouncyCastle.Math.EC.Abc.Tnaf::GetMu(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  int8_t Tnaf_GetMu_m1696424677 (Il2CppObject * __this /* static, unused */, ECFieldElement_t1092946118 * ___curveA0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte Org.BouncyCastle.Math.EC.Abc.Tnaf::GetMu(System.Int32)
extern "C"  int8_t Tnaf_GetMu_m1187279886 (Il2CppObject * __this /* static, unused */, int32_t ___curveA0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Math.EC.Abc.Tnaf::GetLucas(System.SByte,System.Int32,System.Boolean)
extern "C"  BigIntegerU5BU5D_t431507903* Tnaf_GetLucas_m1167397397 (Il2CppObject * __this /* static, unused */, int8_t ___mu0, int32_t ___k1, bool ___doV2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Abc.Tnaf::GetTw(System.SByte,System.Int32)
extern "C"  BigInteger_t4268922522 * Tnaf_GetTw_m3473290355 (Il2CppObject * __this /* static, unused */, int8_t ___mu0, int32_t ___w1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Math.EC.Abc.Tnaf::GetSi(Org.BouncyCastle.Math.EC.AbstractF2mCurve)
extern "C"  BigIntegerU5BU5D_t431507903* Tnaf_GetSi_m1597128041 (Il2CppObject * __this /* static, unused */, AbstractF2mCurve_t4137102866 * ___curve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Math.EC.Abc.Tnaf::GetSi(System.Int32,System.Int32,Org.BouncyCastle.Math.BigInteger)
extern "C"  BigIntegerU5BU5D_t431507903* Tnaf_GetSi_m615152233 (Il2CppObject * __this /* static, unused */, int32_t ___fieldSize0, int32_t ___curveA1, BigInteger_t4268922522 * ___cofactor2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Abc.Tnaf::GetShiftsForCofactor(Org.BouncyCastle.Math.BigInteger)
extern "C"  int32_t Tnaf_GetShiftsForCofactor_m2602838999 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___h0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Abc.ZTauElement Org.BouncyCastle.Math.EC.Abc.Tnaf::PartModReduction(Org.BouncyCastle.Math.BigInteger,System.Int32,System.SByte,Org.BouncyCastle.Math.BigInteger[],System.SByte,System.SByte)
extern "C"  ZTauElement_t2571810054 * Tnaf_PartModReduction_m875031890 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___k0, int32_t ___m1, int8_t ___a2, BigIntegerU5BU5D_t431507903* ___s3, int8_t ___mu4, int8_t ___c5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.AbstractF2mPoint Org.BouncyCastle.Math.EC.Abc.Tnaf::MultiplyRTnaf(Org.BouncyCastle.Math.EC.AbstractF2mPoint,Org.BouncyCastle.Math.BigInteger)
extern "C"  AbstractF2mPoint_t883694769 * Tnaf_MultiplyRTnaf_m2579828016 (Il2CppObject * __this /* static, unused */, AbstractF2mPoint_t883694769 * ___p0, BigInteger_t4268922522 * ___k1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.AbstractF2mPoint Org.BouncyCastle.Math.EC.Abc.Tnaf::MultiplyTnaf(Org.BouncyCastle.Math.EC.AbstractF2mPoint,Org.BouncyCastle.Math.EC.Abc.ZTauElement)
extern "C"  AbstractF2mPoint_t883694769 * Tnaf_MultiplyTnaf_m328785584 (Il2CppObject * __this /* static, unused */, AbstractF2mPoint_t883694769 * ___p0, ZTauElement_t2571810054 * ___lambda1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.AbstractF2mPoint Org.BouncyCastle.Math.EC.Abc.Tnaf::MultiplyFromTnaf(Org.BouncyCastle.Math.EC.AbstractF2mPoint,System.SByte[])
extern "C"  AbstractF2mPoint_t883694769 * Tnaf_MultiplyFromTnaf_m3763994558 (Il2CppObject * __this /* static, unused */, AbstractF2mPoint_t883694769 * ___p0, SByteU5BU5D_t3472287392* ___u1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte[] Org.BouncyCastle.Math.EC.Abc.Tnaf::TauAdicWNaf(System.SByte,Org.BouncyCastle.Math.EC.Abc.ZTauElement,System.SByte,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.EC.Abc.ZTauElement[])
extern "C"  SByteU5BU5D_t3472287392* Tnaf_TauAdicWNaf_m3389075950 (Il2CppObject * __this /* static, unused */, int8_t ___mu0, ZTauElement_t2571810054 * ___lambda1, int8_t ___width2, BigInteger_t4268922522 * ___pow2w3, BigInteger_t4268922522 * ___tw4, ZTauElementU5BU5D_t3646072867* ___alpha5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.AbstractF2mPoint[] Org.BouncyCastle.Math.EC.Abc.Tnaf::GetPreComp(Org.BouncyCastle.Math.EC.AbstractF2mPoint,System.SByte)
extern "C"  AbstractF2mPointU5BU5D_t1514048876* Tnaf_GetPreComp_m1337755227 (Il2CppObject * __this /* static, unused */, AbstractF2mPoint_t883694769 * ___p0, int8_t ___a1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Abc.Tnaf::.cctor()
extern "C"  void Tnaf__cctor_m2513316339 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
