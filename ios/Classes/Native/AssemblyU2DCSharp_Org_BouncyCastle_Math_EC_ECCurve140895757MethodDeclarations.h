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

// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.Field.IFiniteField
struct IFiniteField_t3190882390;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Org.BouncyCastle.Math.EC.ECCurve/Config
struct Config_t72665314;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier
struct ECMultiplier_t768735235;
// Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo
struct PreCompInfo_t1123315090;
// System.String
struct String_t;
// Org.BouncyCastle.Math.EC.ECPoint[]
struct ECPointU5BU5D_t1061550629;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Math.EC.Endo.ECEndomorphism
struct ECEndomorphism_t1643381691;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECCurve140895757.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Math.EC.ECCurve::.ctor(Org.BouncyCastle.Math.Field.IFiniteField)
extern "C"  void ECCurve__ctor_m2193078842 (ECCurve_t140895757 * __this, Il2CppObject * ___field0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Math.EC.ECCurve::GetAllCoordinateSystems()
extern "C"  Int32U5BU5D_t3030399641* ECCurve_GetAllCoordinateSystems_m2427065897 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve/Config Org.BouncyCastle.Math.EC.ECCurve::Configure()
extern "C"  Config_t72665314 * ECCurve_Configure_m2695462549 (ECCurve_t140895757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECCurve::ValidatePoint(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  ECPoint_t626351532 * ECCurve_ValidatePoint_m214725289 (ECCurve_t140895757 * __this, BigInteger_t4268922522 * ___x0, BigInteger_t4268922522 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECCurve::ValidatePoint(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,System.Boolean)
extern "C"  ECPoint_t626351532 * ECCurve_ValidatePoint_m1066797064 (ECCurve_t140895757 * __this, BigInteger_t4268922522 * ___x0, BigInteger_t4268922522 * ___y1, bool ___withCompression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECCurve::CreatePoint(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  ECPoint_t626351532 * ECCurve_CreatePoint_m422234103 (ECCurve_t140895757 * __this, BigInteger_t4268922522 * ___x0, BigInteger_t4268922522 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECCurve::CreatePoint(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,System.Boolean)
extern "C"  ECPoint_t626351532 * ECCurve_CreatePoint_m143857178 (ECCurve_t140895757 * __this, BigInteger_t4268922522 * ___x0, BigInteger_t4268922522 * ___y1, bool ___withCompression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier Org.BouncyCastle.Math.EC.ECCurve::CreateDefaultMultiplier()
extern "C"  Il2CppObject * ECCurve_CreateDefaultMultiplier_m3114643669 (ECCurve_t140895757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.ECCurve::SupportsCoordinateSystem(System.Int32)
extern "C"  bool ECCurve_SupportsCoordinateSystem_m10683612 (ECCurve_t140895757 * __this, int32_t ___coord0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo Org.BouncyCastle.Math.EC.ECCurve::GetPreCompInfo(Org.BouncyCastle.Math.EC.ECPoint,System.String)
extern "C"  Il2CppObject * ECCurve_GetPreCompInfo_m2112391216 (ECCurve_t140895757 * __this, ECPoint_t626351532 * ___point0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.ECCurve::SetPreCompInfo(Org.BouncyCastle.Math.EC.ECPoint,System.String,Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo)
extern "C"  void ECCurve_SetPreCompInfo_m3403629305 (ECCurve_t140895757 * __this, ECPoint_t626351532 * ___point0, String_t* ___name1, Il2CppObject * ___preCompInfo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECCurve::ImportPoint(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  ECPoint_t626351532 * ECCurve_ImportPoint_m1873493730 (ECCurve_t140895757 * __this, ECPoint_t626351532 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.ECCurve::NormalizeAll(Org.BouncyCastle.Math.EC.ECPoint[])
extern "C"  void ECCurve_NormalizeAll_m2326673944 (ECCurve_t140895757 * __this, ECPointU5BU5D_t1061550629* ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.ECCurve::NormalizeAll(Org.BouncyCastle.Math.EC.ECPoint[],System.Int32,System.Int32,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  void ECCurve_NormalizeAll_m3980115286 (ECCurve_t140895757 * __this, ECPointU5BU5D_t1061550629* ___points0, int32_t ___off1, int32_t ___len2, ECFieldElement_t1092946118 * ___iso3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.Field.IFiniteField Org.BouncyCastle.Math.EC.ECCurve::get_Field()
extern "C"  Il2CppObject * ECCurve_get_Field_m135938760 (ECCurve_t140895757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECCurve::get_A()
extern "C"  ECFieldElement_t1092946118 * ECCurve_get_A_m285651647 (ECCurve_t140895757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECCurve::get_B()
extern "C"  ECFieldElement_t1092946118 * ECCurve_get_B_m285651548 (ECCurve_t140895757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.ECCurve::get_Order()
extern "C"  BigInteger_t4268922522 * ECCurve_get_Order_m2136095738 (ECCurve_t140895757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.ECCurve::get_Cofactor()
extern "C"  BigInteger_t4268922522 * ECCurve_get_Cofactor_m225251327 (ECCurve_t140895757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.ECCurve::get_CoordinateSystem()
extern "C"  int32_t ECCurve_get_CoordinateSystem_m1114511052 (ECCurve_t140895757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.ECCurve::CheckPoint(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  void ECCurve_CheckPoint_m1588240744 (ECCurve_t140895757 * __this, ECPoint_t626351532 * ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.ECCurve::CheckPoints(Org.BouncyCastle.Math.EC.ECPoint[])
extern "C"  void ECCurve_CheckPoints_m1058809011 (ECCurve_t140895757 * __this, ECPointU5BU5D_t1061550629* ___points0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.ECCurve::CheckPoints(Org.BouncyCastle.Math.EC.ECPoint[],System.Int32,System.Int32)
extern "C"  void ECCurve_CheckPoints_m3873806047 (ECCurve_t140895757 * __this, ECPointU5BU5D_t1061550629* ___points0, int32_t ___off1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.ECCurve::Equals(Org.BouncyCastle.Math.EC.ECCurve)
extern "C"  bool ECCurve_Equals_m3009944722 (ECCurve_t140895757 * __this, ECCurve_t140895757 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.ECCurve::Equals(System.Object)
extern "C"  bool ECCurve_Equals_m1312566763 (ECCurve_t140895757 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.ECCurve::GetHashCode()
extern "C"  int32_t ECCurve_GetHashCode_m2869670745 (ECCurve_t140895757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Endo.ECEndomorphism Org.BouncyCastle.Math.EC.ECCurve::GetEndomorphism()
extern "C"  Il2CppObject * ECCurve_GetEndomorphism_m12592411 (ECCurve_t140895757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier Org.BouncyCastle.Math.EC.ECCurve::GetMultiplier()
extern "C"  Il2CppObject * ECCurve_GetMultiplier_m2892739280 (ECCurve_t140895757 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECCurve::DecodePoint(System.Byte[])
extern "C"  ECPoint_t626351532 * ECCurve_DecodePoint_m991278116 (ECCurve_t140895757 * __this, ByteU5BU5D_t3397334013* ___encoded0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
