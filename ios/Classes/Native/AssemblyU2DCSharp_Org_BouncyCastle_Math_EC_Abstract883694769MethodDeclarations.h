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

// Org.BouncyCastle.Math.EC.AbstractF2mPoint
struct AbstractF2mPoint_t883694769;
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

// System.Void Org.BouncyCastle.Math.EC.AbstractF2mPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,System.Boolean)
extern "C"  void AbstractF2mPoint__ctor_m1516819796 (AbstractF2mPoint_t883694769 * __this, ECCurve_t140895757 * ___curve0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, bool ___withCompression3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.AbstractF2mPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement,Org.BouncyCastle.Math.EC.ECFieldElement[],System.Boolean)
extern "C"  void AbstractF2mPoint__ctor_m1672625900 (AbstractF2mPoint_t883694769 * __this, ECCurve_t140895757 * ___curve0, ECFieldElement_t1092946118 * ___x1, ECFieldElement_t1092946118 * ___y2, ECFieldElementU5BU5D_t1670892899* ___zs3, bool ___withCompression4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.AbstractF2mPoint::SatisfiesCurveEquation()
extern "C"  bool AbstractF2mPoint_SatisfiesCurveEquation_m3093431626 (AbstractF2mPoint_t883694769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.AbstractF2mPoint::ScaleX(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECPoint_t626351532 * AbstractF2mPoint_ScaleX_m3896751329 (AbstractF2mPoint_t883694769 * __this, ECFieldElement_t1092946118 * ___scale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.AbstractF2mPoint::ScaleY(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECPoint_t626351532 * AbstractF2mPoint_ScaleY_m345787782 (AbstractF2mPoint_t883694769 * __this, ECFieldElement_t1092946118 * ___scale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.AbstractF2mPoint::Subtract(Org.BouncyCastle.Math.EC.ECPoint)
extern "C"  ECPoint_t626351532 * AbstractF2mPoint_Subtract_m851598717 (AbstractF2mPoint_t883694769 * __this, ECPoint_t626351532 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.AbstractF2mPoint Org.BouncyCastle.Math.EC.AbstractF2mPoint::Tau()
extern "C"  AbstractF2mPoint_t883694769 * AbstractF2mPoint_Tau_m187088824 (AbstractF2mPoint_t883694769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.AbstractF2mPoint Org.BouncyCastle.Math.EC.AbstractF2mPoint::TauPow(System.Int32)
extern "C"  AbstractF2mPoint_t883694769 * AbstractF2mPoint_TauPow_m3016501517 (AbstractF2mPoint_t883694769 * __this, int32_t ___pow0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
