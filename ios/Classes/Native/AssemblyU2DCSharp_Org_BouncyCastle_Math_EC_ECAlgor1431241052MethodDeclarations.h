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

// Org.BouncyCastle.Math.EC.ECAlgorithms
struct ECAlgorithms_t1431241052;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Math.EC.ECPoint[]
struct ECPointU5BU5D_t1061550629;
// Org.BouncyCastle.Math.BigInteger[]
struct BigIntegerU5BU5D_t431507903;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Math.EC.ECFieldElement[]
struct ECFieldElementU5BU5D_t1670892899;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// Org.BouncyCastle.Math.EC.ECPointMap
struct ECPointMap_t4206089746;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Math.EC.Endo.GlvEndomorphism
struct GlvEndomorphism_t1261885190;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo[]
struct WNafPreCompInfoU5BU5D_t4030743521;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t717853552;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECCurve140895757.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"

// System.Void Org.BouncyCastle.Math.EC.ECAlgorithms::.ctor()
extern "C"  void ECAlgorithms__ctor_m3466255249 (ECAlgorithms_t1431241052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.ECAlgorithms::IsF2mCurve(Org.BouncyCastle.Math.EC.ECCurve)
extern "C"  bool ECAlgorithms_IsF2mCurve_m2361461320 (Il2CppObject * __this /* static, unused */, ECCurve_t140895757 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.ECAlgorithms::IsFpCurve(Org.BouncyCastle.Math.EC.ECCurve)
extern "C"  bool ECAlgorithms_IsFpCurve_m784201447 (Il2CppObject * __this /* static, unused */, ECCurve_t140895757 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECAlgorithms::SumOfMultiplies(Org.BouncyCastle.Math.EC.ECPoint[],Org.BouncyCastle.Math.BigInteger[])
extern "C"  ECPoint_t626351532 * ECAlgorithms_SumOfMultiplies_m390824784 (Il2CppObject * __this /* static, unused */, ECPointU5BU5D_t1061550629* ___ps0, BigIntegerU5BU5D_t431507903* ___ks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECAlgorithms::SumOfTwoMultiplies(Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger)
extern "C"  ECPoint_t626351532 * ECAlgorithms_SumOfTwoMultiplies_m256898592 (Il2CppObject * __this /* static, unused */, ECPoint_t626351532 * ___P0, BigInteger_t4268922522 * ___a1, ECPoint_t626351532 * ___Q2, BigInteger_t4268922522 * ___b3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECAlgorithms::ShamirsTrick(Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger)
extern "C"  ECPoint_t626351532 * ECAlgorithms_ShamirsTrick_m3272234462 (Il2CppObject * __this /* static, unused */, ECPoint_t626351532 * ___P0, BigInteger_t4268922522 * ___k1, ECPoint_t626351532 * ___Q2, BigInteger_t4268922522 * ___l3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECAlgorithms::ImportPoint(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  ECPoint_t626351532 * ECAlgorithms_ImportPoint_m2299924688 (Il2CppObject * __this /* static, unused */, ECCurve_t140895757 * ___c0, ECPoint_t626351532 * ___p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.ECAlgorithms::MontgomeryTrick(Org.BouncyCastle.Math.EC.ECFieldElement[],System.Int32,System.Int32)
extern "C"  void ECAlgorithms_MontgomeryTrick_m34531305 (Il2CppObject * __this /* static, unused */, ECFieldElementU5BU5D_t1670892899* ___zs0, int32_t ___off1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.ECAlgorithms::MontgomeryTrick(Org.BouncyCastle.Math.EC.ECFieldElement[],System.Int32,System.Int32,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  void ECAlgorithms_MontgomeryTrick_m1942310691 (Il2CppObject * __this /* static, unused */, ECFieldElementU5BU5D_t1670892899* ___zs0, int32_t ___off1, int32_t ___len2, ECFieldElement_t1092946118 * ___scale3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECAlgorithms::ReferenceMultiply(Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger)
extern "C"  ECPoint_t626351532 * ECAlgorithms_ReferenceMultiply_m3327185515 (Il2CppObject * __this /* static, unused */, ECPoint_t626351532 * ___p0, BigInteger_t4268922522 * ___k1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECAlgorithms::ValidatePoint(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  ECPoint_t626351532 * ECAlgorithms_ValidatePoint_m746669998 (Il2CppObject * __this /* static, unused */, ECPoint_t626351532 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECAlgorithms::ImplShamirsTrickJsf(Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger)
extern "C"  ECPoint_t626351532 * ECAlgorithms_ImplShamirsTrickJsf_m4265485495 (Il2CppObject * __this /* static, unused */, ECPoint_t626351532 * ___P0, BigInteger_t4268922522 * ___k1, ECPoint_t626351532 * ___Q2, BigInteger_t4268922522 * ___l3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECAlgorithms::ImplShamirsTrickWNaf(Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger)
extern "C"  ECPoint_t626351532 * ECAlgorithms_ImplShamirsTrickWNaf_m2200041854 (Il2CppObject * __this /* static, unused */, ECPoint_t626351532 * ___P0, BigInteger_t4268922522 * ___k1, ECPoint_t626351532 * ___Q2, BigInteger_t4268922522 * ___l3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECAlgorithms::ImplShamirsTrickWNaf(Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.EC.ECPointMap,Org.BouncyCastle.Math.BigInteger)
extern "C"  ECPoint_t626351532 * ECAlgorithms_ImplShamirsTrickWNaf_m3094328306 (Il2CppObject * __this /* static, unused */, ECPoint_t626351532 * ___P0, BigInteger_t4268922522 * ___k1, Il2CppObject * ___pointMapQ2, BigInteger_t4268922522 * ___l3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECAlgorithms::ImplShamirsTrickWNaf(Org.BouncyCastle.Math.EC.ECPoint[],Org.BouncyCastle.Math.EC.ECPoint[],System.Byte[],Org.BouncyCastle.Math.EC.ECPoint[],Org.BouncyCastle.Math.EC.ECPoint[],System.Byte[])
extern "C"  ECPoint_t626351532 * ECAlgorithms_ImplShamirsTrickWNaf_m413155838 (Il2CppObject * __this /* static, unused */, ECPointU5BU5D_t1061550629* ___preCompP0, ECPointU5BU5D_t1061550629* ___preCompNegP1, ByteU5BU5D_t3397334013* ___wnafP2, ECPointU5BU5D_t1061550629* ___preCompQ3, ECPointU5BU5D_t1061550629* ___preCompNegQ4, ByteU5BU5D_t3397334013* ___wnafQ5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECAlgorithms::ImplSumOfMultiplies(Org.BouncyCastle.Math.EC.ECPoint[],Org.BouncyCastle.Math.BigInteger[])
extern "C"  ECPoint_t626351532 * ECAlgorithms_ImplSumOfMultiplies_m3264047870 (Il2CppObject * __this /* static, unused */, ECPointU5BU5D_t1061550629* ___ps0, BigIntegerU5BU5D_t431507903* ___ks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECAlgorithms::ImplSumOfMultipliesGlv(Org.BouncyCastle.Math.EC.ECPoint[],Org.BouncyCastle.Math.BigInteger[],Org.BouncyCastle.Math.EC.Endo.GlvEndomorphism)
extern "C"  ECPoint_t626351532 * ECAlgorithms_ImplSumOfMultipliesGlv_m3999022745 (Il2CppObject * __this /* static, unused */, ECPointU5BU5D_t1061550629* ___ps0, BigIntegerU5BU5D_t431507903* ___ks1, Il2CppObject * ___glvEndomorphism2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECAlgorithms::ImplSumOfMultiplies(Org.BouncyCastle.Math.EC.ECPoint[],Org.BouncyCastle.Math.EC.ECPointMap,Org.BouncyCastle.Math.BigInteger[])
extern "C"  ECPoint_t626351532 * ECAlgorithms_ImplSumOfMultiplies_m2063336406 (Il2CppObject * __this /* static, unused */, ECPointU5BU5D_t1061550629* ___ps0, Il2CppObject * ___pointMap1, BigIntegerU5BU5D_t431507903* ___ks2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECAlgorithms::ImplSumOfMultiplies(System.Boolean[],Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo[],System.Byte[][])
extern "C"  ECPoint_t626351532 * ECAlgorithms_ImplSumOfMultiplies_m3008967485 (Il2CppObject * __this /* static, unused */, BooleanU5BU5D_t3568034315* ___negs0, WNafPreCompInfoU5BU5D_t4030743521* ___infos1, ByteU5BU5DU5BU5D_t717853552* ___wnafs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
