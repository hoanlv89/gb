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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field
struct SecT571Field_t686715528;
// System.UInt64[]
struct UInt64U5BU5D_t1668688775;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field::.ctor()
extern "C"  void SecT571Field__ctor_m598794393 (SecT571Field_t686715528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field::Add(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT571Field_Add_m3842038133 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field::Add(System.UInt64[],System.Int32,System.UInt64[],System.Int32,System.UInt64[],System.Int32)
extern "C"  void SecT571Field_Add_m1809996326 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, int32_t ___xOff1, UInt64U5BU5D_t1668688775* ___y2, int32_t ___yOff3, UInt64U5BU5D_t1668688775* ___z4, int32_t ___zOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field::AddBothTo(System.UInt64[],System.Int32,System.UInt64[],System.Int32,System.UInt64[],System.Int32)
extern "C"  void SecT571Field_AddBothTo_m590684276 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, int32_t ___xOff1, UInt64U5BU5D_t1668688775* ___y2, int32_t ___yOff3, UInt64U5BU5D_t1668688775* ___z4, int32_t ___zOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field::AddExt(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT571Field_AddExt_m1363553112 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___xx0, UInt64U5BU5D_t1668688775* ___yy1, UInt64U5BU5D_t1668688775* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field::AddOne(System.UInt64[],System.UInt64[])
extern "C"  void SecT571Field_AddOne_m1318816280 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64[] Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  UInt64U5BU5D_t1668688775* SecT571Field_FromBigInteger_m817000701 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field::Multiply(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT571Field_Multiply_m2515104306 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field::MultiplyAddToExt(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT571Field_MultiplyAddToExt_m2213853375 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field::Reduce(System.UInt64[],System.UInt64[])
extern "C"  void SecT571Field_Reduce_m2013858037 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___xx0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field::Reduce5(System.UInt64[],System.Int32)
extern "C"  void SecT571Field_Reduce5_m2752065548 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___z0, int32_t ___zOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field::Square(System.UInt64[],System.UInt64[])
extern "C"  void SecT571Field_Square_m4026837494 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field::SquareAddToExt(System.UInt64[],System.UInt64[])
extern "C"  void SecT571Field_SquareAddToExt_m2404577151 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___zz1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field::SquareN(System.UInt64[],System.Int32,System.UInt64[])
extern "C"  void SecT571Field_SquareN_m4036165763 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, int32_t ___n1, UInt64U5BU5D_t1668688775* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field::ImplMultiply(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT571Field_ImplMultiply_m523853940 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field::ImplMulwAcc(System.UInt64[],System.UInt64,System.UInt64[],System.Int32)
extern "C"  void SecT571Field_ImplMulwAcc_m2954517137 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___xs0, uint64_t ___y1, UInt64U5BU5D_t1668688775* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT571Field::ImplSquare(System.UInt64[],System.UInt64[])
extern "C"  void SecT571Field_ImplSquare_m1126149448 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___zz1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
