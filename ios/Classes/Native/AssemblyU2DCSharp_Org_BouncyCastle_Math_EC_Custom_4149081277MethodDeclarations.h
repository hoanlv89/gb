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

// Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point
struct Curve25519Point_t4149081277;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// Org.BouncyCastle.Math.EC.ECFieldElement[]
struct ECFieldElementU5BU5D_t1670892899;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement
struct Curve25519FieldElement_t2608249339;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECCurve140895757.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_2608249339.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  void Curve25519Point__ctor_m116247206 (Curve25519Point_t4149081277 * __this, ECCurve_t140895757 * ___curve0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,System.Boolean)
extern "C"  void Curve25519Point__ctor_m2301255563 (Curve25519Point_t4149081277 * __this, ECCurve_t140895757 * ___curve0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, bool ___withCompression3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement[],System.Boolean)
extern "C"  void Curve25519Point__ctor_m1740912327 (Curve25519Point_t4149081277 * __this, ECCurve_t140895757 * ___curve0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, ECFieldElementU5BU5D_t1670892899* ___zs3, bool ___withCompression4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point::Detach()
extern "C"  ECPoint_t626351532 * Curve25519Point_Detach_m2398307255 (Curve25519Point_t4149081277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point::GetZCoord(System.Int32)
extern "C"  ECFieldElement_t1092946118 * Curve25519Point_GetZCoord_m1706080060 (Curve25519Point_t4149081277 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point::Add(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  ECPoint_t626351532 * Curve25519Point_Add_m212584243 (Curve25519Point_t4149081277 * __this, ECPoint_t626351532 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point::Twice()
extern "C"  ECPoint_t626351532 * Curve25519Point_Twice_m1909488922 (Curve25519Point_t4149081277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point::TwicePlus(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  ECPoint_t626351532 * Curve25519Point_TwicePlus_m810604400 (Curve25519Point_t4149081277 * __this, ECPoint_t626351532 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point::ThreeTimes()
extern "C"  ECPoint_t626351532 * Curve25519Point_ThreeTimes_m932310466 (Curve25519Point_t4149081277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point::Negate()
extern "C"  ECPoint_t626351532 * Curve25519Point_Negate_m1262258202 (Curve25519Point_t4149081277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point::CalculateJacobianModifiedW(Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement,System.UInt32[])
extern "C"  Curve25519FieldElement_t2608249339 * Curve25519Point_CalculateJacobianModifiedW_m3372520625 (Curve25519Point_t4149081277 * __this, Curve25519FieldElement_t2608249339 * ___Z0, UInt32U5BU5D_t59386216* ___ZSquared1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519FieldElement Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point::GetJacobianModifiedW()
extern "C"  Curve25519FieldElement_t2608249339 * Curve25519Point_GetJacobianModifiedW_m1921786487 (Curve25519Point_t4149081277 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Point::TwiceJacobianModified(System.Boolean)
extern "C"  Curve25519Point_t4149081277 * Curve25519Point_TwiceJacobianModified_m3954919757 (Curve25519Point_t4149081277 * __this, bool ___calculateW0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
