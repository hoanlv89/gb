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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field
struct SecP192K1Field_t1160771483;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field::.ctor()
extern "C"  void SecP192K1Field__ctor_m2706305584 (SecP192K1Field_t1160771483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field::Add(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP192K1Field_Add_m842007673 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field::AddExt(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP192K1Field_AddExt_m1808154446 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___xx0, UInt32U5BU5D_t59386216* ___yy1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field::AddOne(System.UInt32[],System.UInt32[])
extern "C"  void SecP192K1Field_AddOne_m2257259435 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  UInt32U5BU5D_t59386216* SecP192K1Field_FromBigInteger_m3659751361 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field::Half(System.UInt32[],System.UInt32[])
extern "C"  void SecP192K1Field_Half_m3386983481 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field::Multiply(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP192K1Field_Multiply_m904046836 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field::MultiplyAddToExt(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP192K1Field_MultiplyAddToExt_m2458777127 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field::Negate(System.UInt32[],System.UInt32[])
extern "C"  void SecP192K1Field_Negate_m622767750 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field::Reduce(System.UInt32[],System.UInt32[])
extern "C"  void SecP192K1Field_Reduce_m1565651426 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___xx0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field::Reduce32(System.UInt32,System.UInt32[])
extern "C"  void SecP192K1Field_Reduce32_m3577231673 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field::Square(System.UInt32[],System.UInt32[])
extern "C"  void SecP192K1Field_Square_m3960280803 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field::SquareN(System.UInt32[],System.Int32,System.UInt32[])
extern "C"  void SecP192K1Field_SquareN_m3199966050 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___n1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field::Subtract(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP192K1Field_Subtract_m197169092 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field::SubtractExt(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP192K1Field_SubtractExt_m3111155829 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___xx0, UInt32U5BU5D_t59386216* ___yy1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field::Twice(System.UInt32[],System.UInt32[])
extern "C"  void SecP192K1Field_Twice_m4222858134 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field::.cctor()
extern "C"  void SecP192K1Field__cctor_m1739454833 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
