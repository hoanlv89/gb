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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field
struct SecT233Field_t4283899217;
// System.UInt64[]
struct UInt64U5BU5D_t1668688775;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field::.ctor()
extern "C"  void SecT233Field__ctor_m2242010632 (SecT233Field_t4283899217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field::Add(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT233Field_Add_m165544270 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field::AddExt(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT233Field_AddExt_m2277010161 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___xx0, UInt64U5BU5D_t1668688775* ___yy1, UInt64U5BU5D_t1668688775* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field::AddOne(System.UInt64[],System.UInt64[])
extern "C"  void SecT233Field_AddOne_m3221997825 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64[] Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  UInt64U5BU5D_t1668688775* SecT233Field_FromBigInteger_m2139281932 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field::Multiply(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT233Field_Multiply_m2530871873 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field::MultiplyAddToExt(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT233Field_MultiplyAddToExt_m268775694 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field::Reduce(System.UInt64[],System.UInt64[])
extern "C"  void SecT233Field_Reduce_m2796109030 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___xx0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field::Reduce23(System.UInt64[],System.Int32)
extern "C"  void SecT233Field_Reduce23_m1206161989 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___z0, int32_t ___zOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field::Square(System.UInt64[],System.UInt64[])
extern "C"  void SecT233Field_Square_m1755120613 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field::SquareAddToExt(System.UInt64[],System.UInt64[])
extern "C"  void SecT233Field_SquareAddToExt_m2622744686 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___zz1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field::SquareN(System.UInt64[],System.Int32,System.UInt64[])
extern "C"  void SecT233Field_SquareN_m1541421204 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, int32_t ___n1, UInt64U5BU5D_t1668688775* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field::ImplCompactExt(System.UInt64[])
extern "C"  void SecT233Field_ImplCompactExt_m3902113467 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___zz0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field::ImplExpand(System.UInt64[],System.UInt64[])
extern "C"  void SecT233Field_ImplExpand_m1391300050 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field::ImplMultiply(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT233Field_ImplMultiply_m2828283973 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field::ImplMulwAcc(System.UInt64,System.UInt64,System.UInt64[],System.Int32)
extern "C"  void SecT233Field_ImplMulwAcc_m4253863692 (Il2CppObject * __this /* static, unused */, uint64_t ___x0, uint64_t ___y1, UInt64U5BU5D_t1668688775* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT233Field::ImplSquare(System.UInt64[],System.UInt64[])
extern "C"  void SecT233Field_ImplSquare_m3858475833 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___zz1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
