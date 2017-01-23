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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field
struct SecT239Field_t4283905371;
// System.UInt64[]
struct UInt64U5BU5D_t1668688775;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field::.ctor()
extern "C"  void SecT239Field__ctor_m2540190142 (SecT239Field_t4283905371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field::Add(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT239Field_Add_m181115800 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field::AddExt(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT239Field_AddExt_m1099395515 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___xx0, UInt64U5BU5D_t1668688775* ___yy1, UInt64U5BU5D_t1668688775* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field::AddOne(System.UInt64[],System.UInt64[])
extern "C"  void SecT239Field_AddOne_m872509243 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64[] Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  UInt64U5BU5D_t1668688775* SecT239Field_FromBigInteger_m202025030 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field::Multiply(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT239Field_Multiply_m3147217467 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field::MultiplyAddToExt(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT239Field_MultiplyAddToExt_m16834308 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field::Reduce(System.UInt64[],System.UInt64[])
extern "C"  void SecT239Field_Reduce_m3095761836 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___xx0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field::Reduce17(System.UInt64[],System.Int32)
extern "C"  void SecT239Field_Reduce17_m4028547648 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___z0, int32_t ___zOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field::Square(System.UInt64[],System.UInt64[])
extern "C"  void SecT239Field_Square_m1583912875 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field::SquareAddToExt(System.UInt64[],System.UInt64[])
extern "C"  void SecT239Field_SquareAddToExt_m3530218296 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___zz1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field::SquareN(System.UInt64[],System.Int32,System.UInt64[])
extern "C"  void SecT239Field_SquareN_m3940293898 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, int32_t ___n1, UInt64U5BU5D_t1668688775* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field::ImplCompactExt(System.UInt64[])
extern "C"  void SecT239Field_ImplCompactExt_m945111553 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___zz0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field::ImplExpand(System.UInt64[],System.UInt64[])
extern "C"  void SecT239Field_ImplExpand_m1275486748 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field::ImplMultiply(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT239Field_ImplMultiply_m4114130767 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field::ImplMulwAcc(System.UInt64,System.UInt64,System.UInt64[],System.Int32)
extern "C"  void SecT239Field_ImplMulwAcc_m950134294 (Il2CppObject * __this /* static, unused */, uint64_t ___x0, uint64_t ___y1, UInt64U5BU5D_t1668688775* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field::ImplSquare(System.UInt64[],System.UInt64[])
extern "C"  void SecT239Field_ImplSquare_m2289201391 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___zz1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
