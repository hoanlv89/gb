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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field
struct SecP160R2Field_t3262302542;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field::.ctor()
extern "C"  void SecP160R2Field__ctor_m3002392897 (SecP160R2Field_t3262302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field::Add(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP160R2Field_Add_m3129015424 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field::AddExt(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP160R2Field_AddExt_m4134449183 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___xx0, UInt32U5BU5D_t59386216* ___yy1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field::AddOne(System.UInt32[],System.UInt32[])
extern "C"  void SecP160R2Field_AddOne_m1382186322 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  UInt32U5BU5D_t59386216* SecP160R2Field_FromBigInteger_m3667595654 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field::Half(System.UInt32[],System.UInt32[])
extern "C"  void SecP160R2Field_Half_m166146814 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field::Multiply(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP160R2Field_Multiply_m3133788847 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field::MultiplyAddToExt(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP160R2Field_MultiplyAddToExt_m3737405154 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field::Negate(System.UInt32[],System.UInt32[])
extern "C"  void SecP160R2Field_Negate_m2764900801 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field::Reduce(System.UInt32[],System.UInt32[])
extern "C"  void SecP160R2Field_Reduce_m140221141 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___xx0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field::Reduce32(System.UInt32,System.UInt32[])
extern "C"  void SecP160R2Field_Reduce32_m4063425192 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field::Square(System.UInt32[],System.UInt32[])
extern "C"  void SecP160R2Field_Square_m1371379668 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field::SquareN(System.UInt32[],System.Int32,System.UInt32[])
extern "C"  void SecP160R2Field_SquareN_m1945509235 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___n1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field::Subtract(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP160R2Field_Subtract_m387023863 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field::SubtractExt(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP160R2Field_SubtractExt_m1781507772 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___xx0, UInt32U5BU5D_t59386216* ___yy1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field::Twice(System.UInt32[],System.UInt32[])
extern "C"  void SecP160R2Field_Twice_m186092113 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field::.cctor()
extern "C"  void SecP160R2Field__cctor_m4025058244 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
