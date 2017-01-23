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

// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// Org.BouncyCastle.Math.EC.ECFieldElement[]
struct ECFieldElementU5BU5D_t1670892899;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECCurve140895757.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"

// System.Void Org.BouncyCastle.Math.EC.ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,System.Boolean)
extern "C"  void ECPoint__ctor_m2516644367 (ECPoint_t626351532 * __this, ECCurve_t140895757 * ___curve0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, bool ___withCompression3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement[],System.Boolean)
extern "C"  void ECPoint__ctor_m1150029163 (ECPoint_t626351532 * __this, ECCurve_t140895757 * ___curve0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, ECFieldElementU5BU5D_t1670892899* ___zs3, bool ___withCompression4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement[] Org.BouncyCastle.Math.EC.ECPoint::GetInitialZCoords(Org.BouncyCastle.Math.EC.ECCurve)
extern "C"  ECFieldElementU5BU5D_t1670892899* ECPoint_GetInitialZCoords_m2608755799 (Il2CppObject * __this /* static, unused */, ECCurve_t140895757 * ___curve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.ECPoint::SatisfiesCofactor()
extern "C"  bool ECPoint_SatisfiesCofactor_m1155557237 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECPoint::GetDetachedPoint()
extern "C"  ECPoint_t626351532 * ECPoint_GetDetachedPoint_m3078989124 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Math.EC.ECPoint::get_Curve()
extern "C"  ECCurve_t140895757 * ECPoint_get_Curve_m2180595137 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.ECPoint::get_CurveCoordinateSystem()
extern "C"  int32_t ECPoint_get_CurveCoordinateSystem_m3613107552 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECPoint::get_X()
extern "C"  ECFieldElement_t1092946118 * ECPoint_get_X_m2607662849 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECPoint::get_Y()
extern "C"  ECFieldElement_t1092946118 * ECPoint_get_Y_m2607662882 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECPoint::get_AffineXCoord()
extern "C"  ECFieldElement_t1092946118 * ECPoint_get_AffineXCoord_m1825745235 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECPoint::get_AffineYCoord()
extern "C"  ECFieldElement_t1092946118 * ECPoint_get_AffineYCoord_m1825713458 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECPoint::get_XCoord()
extern "C"  ECFieldElement_t1092946118 * ECPoint_get_XCoord_m1627086184 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECPoint::get_YCoord()
extern "C"  ECFieldElement_t1092946118 * ECPoint_get_YCoord_m1627117961 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECPoint::GetZCoord(System.Int32)
extern "C"  ECFieldElement_t1092946118 * ECPoint_GetZCoord_m2362196136 (ECPoint_t626351532 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement[] Org.BouncyCastle.Math.EC.ECPoint::GetZCoords()
extern "C"  ECFieldElementU5BU5D_t1670892899* ECPoint_GetZCoords_m1147912416 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECPoint::get_RawXCoord()
extern "C"  ECFieldElement_t1092946118 * ECPoint_get_RawXCoord_m3169588450 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECPoint::get_RawYCoord()
extern "C"  ECFieldElement_t1092946118 * ECPoint_get_RawYCoord_m3506254045 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement[] Org.BouncyCastle.Math.EC.ECPoint::get_RawZCoords()
extern "C"  ECFieldElementU5BU5D_t1670892899* ECPoint_get_RawZCoords_m223799259 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.ECPoint::CheckNormalized()
extern "C"  void ECPoint_CheckNormalized_m3473133648 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.ECPoint::IsNormalized()
extern "C"  bool ECPoint_IsNormalized_m147810662 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECPoint::Normalize()
extern "C"  ECPoint_t626351532 * ECPoint_Normalize_m3052425689 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECPoint::Normalize(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECPoint_t626351532 * ECPoint_Normalize_m3403680727 (ECPoint_t626351532 * __this, ECFieldElement_t1092946118 * ___zInv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECPoint::CreateScaledPoint(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECPoint_t626351532 * ECPoint_CreateScaledPoint_m3354067316 (ECPoint_t626351532 * __this, ECFieldElement_t1092946118 * ___sx0, ECFieldElement_t1092946118 * ___sy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.ECPoint::get_IsInfinity()
extern "C"  bool ECPoint_get_IsInfinity_m2810642522 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.ECPoint::get_IsCompressed()
extern "C"  bool ECPoint_get_IsCompressed_m338656165 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.ECPoint::IsValid()
extern "C"  bool ECPoint_IsValid_m2948605561 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECPoint::ScaleX(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECPoint_t626351532 * ECPoint_ScaleX_m1836734808 (ECPoint_t626351532 * __this, ECFieldElement_t1092946118 * ___scale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECPoint::ScaleY(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECPoint_t626351532 * ECPoint_ScaleY_m409573399 (ECPoint_t626351532 * __this, ECFieldElement_t1092946118 * ___scale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.ECPoint::Equals(System.Object)
extern "C"  bool ECPoint_Equals_m1855480874 (ECPoint_t626351532 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.ECPoint::Equals(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  bool ECPoint_Equals_m267311704 (ECPoint_t626351532 * __this, ECPoint_t626351532 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.ECPoint::GetHashCode()
extern "C"  int32_t ECPoint_GetHashCode_m547205258 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.ECPoint::ToString()
extern "C"  String_t* ECPoint_ToString_m1414822376 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Math.EC.ECPoint::GetEncoded()
extern "C"  ByteU5BU5D_t3397334013* ECPoint_GetEncoded_m426611693 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECPoint::TimesPow2(System.Int32)
extern "C"  ECPoint_t626351532 * ECPoint_TimesPow2_m3941932793 (ECPoint_t626351532 * __this, int32_t ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECPoint::TwicePlus(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  ECPoint_t626351532 * ECPoint_TwicePlus_m1740274636 (ECPoint_t626351532 * __this, ECPoint_t626351532 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.ECPoint::ThreeTimes()
extern "C"  ECPoint_t626351532 * ECPoint_ThreeTimes_m539168022 (ECPoint_t626351532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.ECPoint::.cctor()
extern "C"  void ECPoint__cctor_m1061691760 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
