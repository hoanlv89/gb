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

// Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier
struct WTauNafMultiplier_t1999582299;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// Org.BouncyCastle.Math.EC.AbstractF2mPoint
struct AbstractF2mPoint_t883694769;
// Org.BouncyCastle.Math.EC.Abc.ZTauElement
struct ZTauElement_t2571810054;
// Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo
struct PreCompInfo_t1123315090;
// System.SByte[]
struct SByteU5BU5D_t3472287392;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECPoint626351532.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Abstract883694769.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Abc_ZTa2571810054.h"

// System.Void Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier::.ctor()
extern "C"  void WTauNafMultiplier__ctor_m2874824155 (WTauNafMultiplier_t1999582299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier::MultiplyPositive(Org.BouncyCastle.Math.EC.ECPoint,Org.BouncyCastle.Math.BigInteger)
extern "C"  ECPoint_t626351532 * WTauNafMultiplier_MultiplyPositive_m3339348241 (WTauNafMultiplier_t1999582299 * __this, ECPoint_t626351532 * ___point0, BigInteger_t4268922522 * ___k1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.AbstractF2mPoint Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier::MultiplyWTnaf(Org.BouncyCastle.Math.EC.AbstractF2mPoint,Org.BouncyCastle.Math.EC.Abc.ZTauElement,Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo,System.SByte,System.SByte)
extern "C"  AbstractF2mPoint_t883694769 * WTauNafMultiplier_MultiplyWTnaf_m418834529 (WTauNafMultiplier_t1999582299 * __this, AbstractF2mPoint_t883694769 * ___p0, ZTauElement_t2571810054 * ___lambda1, Il2CppObject * ___preCompInfo2, int8_t ___a3, int8_t ___mu4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.AbstractF2mPoint Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier::MultiplyFromWTnaf(Org.BouncyCastle.Math.EC.AbstractF2mPoint,System.SByte[],Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo)
extern "C"  AbstractF2mPoint_t883694769 * WTauNafMultiplier_MultiplyFromWTnaf_m2079942165 (Il2CppObject * __this /* static, unused */, AbstractF2mPoint_t883694769 * ___p0, SByteU5BU5D_t3472287392* ___u1, Il2CppObject * ___preCompInfo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier::.cctor()
extern "C"  void WTauNafMultiplier__cctor_m1178158518 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
