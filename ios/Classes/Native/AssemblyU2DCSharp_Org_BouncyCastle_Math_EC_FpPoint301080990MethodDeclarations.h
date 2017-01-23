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

// Org.BouncyCastle.Math.EC.FpPoint
struct FpPoint_t301080990;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t140895757;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// Org.BouncyCastle.Math.EC.ECFieldElement[]
struct ECFieldElementU5BU5D_t1670892899;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECCurve140895757.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"

// System.Void Org.BouncyCastle.Math.EC.FpPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  void FpPoint__ctor_m2557152462 (FpPoint_t301080990 * __this, ECCurve_t140895757 * ___curve0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.FpPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,System.Boolean)
extern "C"  void FpPoint__ctor_m1975286155 (FpPoint_t301080990 * __this, ECCurve_t140895757 * ___curve0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, bool ___withCompression3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.FpPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement[],System.Boolean)
extern "C"  void FpPoint__ctor_m2554555895 (FpPoint_t301080990 * __this, ECCurve_t140895757 * ___curve0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, ECFieldElementU5BU5D_t1670892899* ___zs3, bool ___withCompression4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.FpPoint::Detach()
extern "C"  ECPoint_t626351532 * FpPoint_Detach_m1259951875 (FpPoint_t301080990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpPoint::GetZCoord(System.Int32)
extern "C"  ECFieldElement_t1092946118 * FpPoint_GetZCoord_m4266981074 (FpPoint_t301080990 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.FpPoint::Add(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  ECPoint_t626351532 * FpPoint_Add_m4141257327 (FpPoint_t301080990 * __this, ECPoint_t626351532 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.FpPoint::Twice()
extern "C"  ECPoint_t626351532 * FpPoint_Twice_m135144012 (FpPoint_t301080990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.FpPoint::TwicePlus(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  ECPoint_t626351532 * FpPoint_TwicePlus_m745331150 (FpPoint_t301080990 * __this, ECPoint_t626351532 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.FpPoint::ThreeTimes()
extern "C"  ECPoint_t626351532 * FpPoint_ThreeTimes_m757060628 (FpPoint_t301080990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.FpPoint::TimesPow2(System.Int32)
extern "C"  ECPoint_t626351532 * FpPoint_TimesPow2_m3687963641 (FpPoint_t301080990 * __this, int32_t ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpPoint::Two(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * FpPoint_Two_m3939059908 (FpPoint_t301080990 * __this, ECFieldElement_t1092946118 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpPoint::Three(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * FpPoint_Three_m4206265610 (FpPoint_t301080990 * __this, ECFieldElement_t1092946118 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpPoint::Four(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * FpPoint_Four_m1917385280 (FpPoint_t301080990 * __this, ECFieldElement_t1092946118 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpPoint::Eight(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * FpPoint_Eight_m3503767537 (FpPoint_t301080990 * __this, ECFieldElement_t1092946118 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpPoint::DoubleProductFromSquares(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * FpPoint_DoubleProductFromSquares_m2354908504 (FpPoint_t301080990 * __this, ECFieldElement_t1092946118 * ___a0, ECFieldElement_t1092946118 * ___b1, ECFieldElement_t1092946118 * ___aSquared2, ECFieldElement_t1092946118 * ___bSquared3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.FpPoint::Negate()
extern "C"  ECPoint_t626351532 * FpPoint_Negate_m1841462132 (FpPoint_t301080990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpPoint::CalculateJacobianModifiedW(Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * FpPoint_CalculateJacobianModifiedW_m3299483149 (FpPoint_t301080990 * __this, ECFieldElement_t1092946118 * ___Z0, ECFieldElement_t1092946118 * ___ZSquared1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.FpPoint::GetJacobianModifiedW()
extern "C"  ECFieldElement_t1092946118 * FpPoint_GetJacobianModifiedW_m3843960779 (FpPoint_t301080990 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.FpPoint Org.BouncyCastle.Math.EC.FpPoint::TwiceJacobianModified(System.Boolean)
extern "C"  FpPoint_t301080990 * FpPoint_TwiceJacobianModified_m2257439881 (FpPoint_t301080990 * __this, bool ___calculateW0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
