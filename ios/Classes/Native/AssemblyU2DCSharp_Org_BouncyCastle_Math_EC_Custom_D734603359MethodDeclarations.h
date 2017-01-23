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

// Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field
struct Curve25519Field_t734603359;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::.ctor()
extern "C"  void Curve25519Field__ctor_m2670672055 (Curve25519Field_t734603359 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::Add(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void Curve25519Field_Add_m262118276 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::AddExt(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void Curve25519Field_AddExt_m3862647757 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___xx0, UInt32U5BU5D_t59386216* ___yy1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::AddOne(System.UInt32[],System.UInt32[])
extern "C"  void Curve25519Field_AddOne_m2720652446 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  UInt32U5BU5D_t59386216* Curve25519Field_FromBigInteger_m3775953560 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::Half(System.UInt32[],System.UInt32[])
extern "C"  void Curve25519Field_Half_m1740611006 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::Multiply(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void Curve25519Field_Multiply_m3776069765 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::MultiplyAddToExt(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void Curve25519Field_MultiplyAddToExt_m948676202 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::Negate(System.UInt32[],System.UInt32[])
extern "C"  void Curve25519Field_Negate_m3745544895 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::Reduce(System.UInt32[],System.UInt32[])
extern "C"  void Curve25519Field_Reduce_m3325636091 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___xx0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::Reduce27(System.UInt32,System.UInt32[])
extern "C"  void Curve25519Field_Reduce27_m837185454 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::Square(System.UInt32[],System.UInt32[])
extern "C"  void Curve25519Field_Square_m3767099232 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::SquareN(System.UInt32[],System.Int32,System.UInt32[])
extern "C"  void Curve25519Field_SquareN_m2623043793 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___n1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::Subtract(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void Curve25519Field_Subtract_m2625426341 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::SubtractExt(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void Curve25519Field_SubtractExt_m4215854528 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___xx0, UInt32U5BU5D_t59386216* ___yy1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::Twice(System.UInt32[],System.UInt32[])
extern "C"  void Curve25519Field_Twice_m2106773327 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::AddPTo(System.UInt32[])
extern "C"  uint32_t Curve25519Field_AddPTo_m864745644 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___z0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::AddPExtTo(System.UInt32[])
extern "C"  uint32_t Curve25519Field_AddPExtTo_m3412037321 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___zz0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::SubPFrom(System.UInt32[])
extern "C"  int32_t Curve25519Field_SubPFrom_m2491205745 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___z0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::SubPExtFrom(System.UInt32[])
extern "C"  int32_t Curve25519Field_SubPExtFrom_m2048253084 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___zz0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519Field::.cctor()
extern "C"  void Curve25519Field__cctor_m1783481980 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
