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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field
struct SecT409Field_t3878961688;
// System.UInt64[]
struct UInt64U5BU5D_t1668688775;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field::.ctor()
extern "C"  void SecT409Field__ctor_m1850157175 (SecT409Field_t3878961688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field::Add(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT409Field_Add_m2849692343 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field::AddExt(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT409Field_AddExt_m3303078148 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___xx0, UInt64U5BU5D_t1668688775* ___yy1, UInt64U5BU5D_t1668688775* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field::AddOne(System.UInt64[],System.UInt64[])
extern "C"  void SecT409Field_AddOne_m2010137484 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64[] Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  UInt64U5BU5D_t1668688775* SecT409Field_FromBigInteger_m2911488439 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field::Multiply(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT409Field_Multiply_m1502125722 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field::MultiplyAddToExt(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT409Field_MultiplyAddToExt_m1147250865 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field::Reduce(System.UInt64[],System.UInt64[])
extern "C"  void SecT409Field_Reduce_m1668634395 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___xx0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field::Reduce39(System.UInt64[],System.Int32)
extern "C"  void SecT409Field_Reduce39_m3980766613 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___z0, int32_t ___zOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field::Square(System.UInt64[],System.UInt64[])
extern "C"  void SecT409Field_Square_m2724682522 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field::SquareAddToExt(System.UInt64[],System.UInt64[])
extern "C"  void SecT409Field_SquareAddToExt_m3235932781 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___zz1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field::SquareN(System.UInt64[],System.Int32,System.UInt64[])
extern "C"  void SecT409Field_SquareN_m3579682477 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, int32_t ___n1, UInt64U5BU5D_t1668688775* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field::ImplCompactExt(System.UInt64[])
extern "C"  void SecT409Field_ImplCompactExt_m2486811020 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___zz0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field::ImplExpand(System.UInt64[],System.UInt64[])
extern "C"  void SecT409Field_ImplExpand_m1057687257 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field::ImplMultiply(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT409Field_ImplMultiply_m1624265272 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field::ImplMulwAcc(System.UInt64[],System.UInt64,System.UInt64[],System.Int32)
extern "C"  void SecT409Field_ImplMulwAcc_m2697244483 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___xs0, uint64_t ___y1, UInt64U5BU5D_t1668688775* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT409Field::ImplSquare(System.UInt64[],System.UInt64[])
extern "C"  void SecT409Field_ImplSquare_m778452648 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___zz1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
