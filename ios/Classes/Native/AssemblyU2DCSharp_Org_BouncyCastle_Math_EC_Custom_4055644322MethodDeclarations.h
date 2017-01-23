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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field
struct SecP256K1Field_t4055644322;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field::.ctor()
extern "C"  void SecP256K1Field__ctor_m984827169 (SecP256K1Field_t4055644322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field::Add(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP256K1Field_Add_m570935092 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field::AddExt(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP256K1Field_AddExt_m926196659 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___xx0, UInt32U5BU5D_t59386216* ___yy1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field::AddOne(System.UInt32[],System.UInt32[])
extern "C"  void SecP256K1Field_AddOne_m3885459218 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  UInt32U5BU5D_t59386216* SecP256K1Field_FromBigInteger_m738905586 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field::Half(System.UInt32[],System.UInt32[])
extern "C"  void SecP256K1Field_Half_m1901895818 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field::Multiply(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP256K1Field_Multiply_m2123697523 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field::MultiplyAddToExt(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP256K1Field_MultiplyAddToExt_m1846080554 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field::Negate(System.UInt32[],System.UInt32[])
extern "C"  void SecP256K1Field_Negate_m1894299425 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field::Reduce(System.UInt32[],System.UInt32[])
extern "C"  void SecP256K1Field_Reduce_m3451655957 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___xx0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field::Reduce32(System.UInt32,System.UInt32[])
extern "C"  void SecP256K1Field_Reduce32_m3697652036 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field::Square(System.UInt32[],System.UInt32[])
extern "C"  void SecP256K1Field_Square_m701251092 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field::SquareN(System.UInt32[],System.Int32,System.UInt32[])
extern "C"  void SecP256K1Field_SquareN_m980801135 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___n1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field::Subtract(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP256K1Field_Subtract_m3525454723 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field::SubtractExt(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void SecP256K1Field_SubtractExt_m3146549272 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___xx0, UInt32U5BU5D_t59386216* ___yy1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field::Twice(System.UInt32[],System.UInt32[])
extern "C"  void SecP256K1Field_Twice_m1681734273 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1Field::.cctor()
extern "C"  void SecP256K1Field__cctor_m4069149776 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
