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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field
struct SecP192R1Field_t2630330398;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::.ctor()
extern "C"  void SecP192R1Field__ctor_m1079904835 (SecP192R1Field_t2630330398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::Add(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP192R1Field_Add_m4097342412 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::AddExt(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP192R1Field_AddExt_m3685385745 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___xx0, UInt32U5BU5D_t59386216* ___yy1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::AddOne(System.UInt32[],System.UInt32[])
extern "C"  void SecP192R1Field_AddOne_m434719342 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  UInt32U5BU5D_t59386216* SecP192R1Field_FromBigInteger_m540250846 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::Half(System.UInt32[],System.UInt32[])
extern "C"  void SecP192R1Field_Half_m3578631926 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::Multiply(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP192R1Field_Multiply_m976165265 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::MultiplyAddToExt(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP192R1Field_MultiplyAddToExt_m2585585146 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::Negate(System.UInt32[],System.UInt32[])
extern "C"  void SecP192R1Field_Negate_m4020308451 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::Reduce(System.UInt32[],System.UInt32[])
extern "C"  void SecP192R1Field_Reduce_m1376472543 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___xx0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::Reduce32(System.UInt32,System.UInt32[])
extern "C"  void SecP192R1Field_Reduce32_m1981371228 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::Square(System.UInt32[],System.UInt32[])
extern "C"  void SecP192R1Field_Square_m1313769184 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::SquareN(System.UInt32[],System.Int32,System.UInt32[])
extern "C"  void SecP192R1Field_SquareN_m114690933 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___n1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::Subtract(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP192R1Field_Subtract_m768631089 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::SubtractExt(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP192R1Field_SubtractExt_m3644055160 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___xx0, UInt32U5BU5D_t59386216* ___yy1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::Twice(System.UInt32[],System.UInt32[])
extern "C"  void SecP192R1Field_Twice_m2164042435 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::AddPInvTo(System.UInt32[])
extern "C"  void SecP192R1Field_AddPInvTo_m1529309054 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___z0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::SubPInvFrom(System.UInt32[])
extern "C"  void SecP192R1Field_SubPInvFrom_m301227094 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___z0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field::.cctor()
extern "C"  void SecP192R1Field__cctor_m4287125012 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
