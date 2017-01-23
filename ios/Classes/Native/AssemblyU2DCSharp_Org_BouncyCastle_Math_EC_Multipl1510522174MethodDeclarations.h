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

// Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities
struct WNafUtilities_t1510522174;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo
struct WNafPreCompInfo_t485024160;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo
struct PreCompInfo_t1123315090;
// Org.BouncyCastle.Math.EC.ECPointMap
struct ECPointMap_t4206089746;
// Org.BouncyCastle.Math.EC.ECPoint[]
struct ECPointU5BU5D_t1061550629;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"

// System.Void Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::.ctor()
extern "C"  void WNafUtilities__ctor_m338527342 (WNafUtilities_t1510522174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::GenerateCompactNaf(Org.BouncyCastle.Math.BigInteger)
extern "C"  Int32U5BU5D_t3030399641* WNafUtilities_GenerateCompactNaf_m3802726909 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___k0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::GenerateCompactWindowNaf(System.Int32,Org.BouncyCastle.Math.BigInteger)
extern "C"  Int32U5BU5D_t3030399641* WNafUtilities_GenerateCompactWindowNaf_m725909694 (Il2CppObject * __this /* static, unused */, int32_t ___width0, BigInteger_t4268922522 * ___k1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::GenerateJsf(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  ByteU5BU5D_t3397334013* WNafUtilities_GenerateJsf_m2497483146 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___g0, BigInteger_t4268922522 * ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::GenerateNaf(Org.BouncyCastle.Math.BigInteger)
extern "C"  ByteU5BU5D_t3397334013* WNafUtilities_GenerateNaf_m736824004 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___k0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::GenerateWindowNaf(System.Int32,Org.BouncyCastle.Math.BigInteger)
extern "C"  ByteU5BU5D_t3397334013* WNafUtilities_GenerateWindowNaf_m3994939311 (Il2CppObject * __this /* static, unused */, int32_t ___width0, BigInteger_t4268922522 * ___k1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::GetNafWeight(Org.BouncyCastle.Math.BigInteger)
extern "C"  int32_t WNafUtilities_GetNafWeight_m3172759829 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___k0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::GetWNafPreCompInfo(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  WNafPreCompInfo_t485024160 * WNafUtilities_GetWNafPreCompInfo_m2328916068 (Il2CppObject * __this /* static, unused */, ECPoint_t626351532 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::GetWNafPreCompInfo(Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo)
extern "C"  WNafPreCompInfo_t485024160 * WNafUtilities_GetWNafPreCompInfo_m1824282423 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___preCompInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::GetWindowSize(System.Int32)
extern "C"  int32_t WNafUtilities_GetWindowSize_m564062640 (Il2CppObject * __this /* static, unused */, int32_t ___bits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::GetWindowSize(System.Int32,System.Int32[])
extern "C"  int32_t WNafUtilities_GetWindowSize_m2388001529 (Il2CppObject * __this /* static, unused */, int32_t ___bits0, Int32U5BU5D_t3030399641* ___windowSizeCutoffs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::MapPointWithPrecomp(Org.BouncyCastle.Math.EC.ECPoint,System.Int32,System.Boolean,Org.BouncyCastle.Math.EC.ECPointMap)
extern "C"  ECPoint_t626351532 * WNafUtilities_MapPointWithPrecomp_m1566228721 (Il2CppObject * __this /* static, unused */, ECPoint_t626351532 * ___p0, int32_t ___width1, bool ___includeNegated2, Il2CppObject * ___pointMap3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Multiplier.WNafPreCompInfo Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::Precompute(Org.BouncyCastle.Math.EC.ECPoint,System.Int32,System.Boolean)
extern "C"  WNafPreCompInfo_t485024160 * WNafUtilities_Precompute_m3899407284 (Il2CppObject * __this /* static, unused */, ECPoint_t626351532 * ___p0, int32_t ___width1, bool ___includeNegated2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::Trim(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t3397334013* WNafUtilities_Trim_m3073992730 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___a0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::Trim(System.Int32[],System.Int32)
extern "C"  Int32U5BU5D_t3030399641* WNafUtilities_Trim_m1961035298 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___a0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint[] Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::ResizeTable(Org.BouncyCastle.Math.EC.ECPoint[],System.Int32)
extern "C"  ECPointU5BU5D_t1061550629* WNafUtilities_ResizeTable_m2143081008 (Il2CppObject * __this /* static, unused */, ECPointU5BU5D_t1061550629* ___a0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::.cctor()
extern "C"  void WNafUtilities__cctor_m175401657 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
