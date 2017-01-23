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

// Org.BouncyCastle.Math.EC.AbstractF2mCurve
struct AbstractF2mCurve_t4137102866;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Org.BouncyCastle.Math.Field.IFiniteField
struct IFiniteField_t3190882390;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_t626351532;
// Org.BouncyCastle.Math.BigInteger[]
struct BigIntegerU5BU5D_t431507903;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.EC.AbstractF2mCurve::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void AbstractF2mCurve__ctor_m3311310741 (AbstractF2mCurve_t4137102866 * __this, int32_t ___m0, int32_t ___k11, int32_t ___k22, int32_t ___k33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.AbstractF2mCurve::Inverse(System.Int32,System.Int32[],Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * AbstractF2mCurve_Inverse_m3565922414 (Il2CppObject * __this /* static, unused */, int32_t ___m0, Int32U5BU5D_t3030399641* ___ks1, BigInteger_t4268922522 * ___x2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.Field.IFiniteField Org.BouncyCastle.Math.EC.AbstractF2mCurve::BuildField(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  Il2CppObject * AbstractF2mCurve_BuildField_m3495271304 (Il2CppObject * __this /* static, unused */, int32_t ___m0, int32_t ___k11, int32_t ___k22, int32_t ___k33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Math.EC.AbstractF2mCurve::CreatePoint(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,System.Boolean)
extern "C"  ECPoint_t626351532 * AbstractF2mCurve_CreatePoint_m3070904207 (AbstractF2mCurve_t4137102866 * __this, BigInteger_t4268922522 * ___x0, BigInteger_t4268922522 * ___y1, bool ___withCompression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Math.EC.AbstractF2mCurve::GetSi()
extern "C"  BigIntegerU5BU5D_t431507903* AbstractF2mCurve_GetSi_m601529210 (AbstractF2mCurve_t4137102866 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.AbstractF2mCurve::get_IsKoblitz()
extern "C"  bool AbstractF2mCurve_get_IsKoblitz_m3908256043 (AbstractF2mCurve_t4137102866 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
