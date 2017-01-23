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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field
struct SecT131Field_t4283726064;
// System.UInt64[]
struct UInt64U5BU5D_t1668688775;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field::.ctor()
extern "C"  void SecT131Field__ctor_m3292001673 (SecT131Field_t4283726064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field::Add(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT131Field_Add_m3222250765 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field::AddExt(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT131Field_AddExt_m3127201904 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___xx0, UInt64U5BU5D_t1668688775* ___yy1, UInt64U5BU5D_t1668688775* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field::AddOne(System.UInt64[],System.UInt64[])
extern "C"  void SecT131Field_AddOne_m4231945984 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64[] Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  UInt64U5BU5D_t1668688775* SecT131Field_FromBigInteger_m2777606029 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field::Multiply(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT131Field_Multiply_m512226082 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field::MultiplyAddToExt(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT131Field_MultiplyAddToExt_m1950021807 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field::Reduce(System.UInt64[],System.UInt64[])
extern "C"  void SecT131Field_Reduce_m3583466725 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___xx0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field::Reduce61(System.UInt64[],System.Int32)
extern "C"  void SecT131Field_Reduce61_m2207129834 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___z0, int32_t ___zOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field::Square(System.UInt64[],System.UInt64[])
extern "C"  void SecT131Field_Square_m3908371174 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field::SquareAddToExt(System.UInt64[],System.UInt64[])
extern "C"  void SecT131Field_SquareAddToExt_m3202074479 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___zz1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field::SquareN(System.UInt64[],System.Int32,System.UInt64[])
extern "C"  void SecT131Field_SquareN_m970505587 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, int32_t ___n1, UInt64U5BU5D_t1668688775* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field::ImplCompactExt(System.UInt64[])
extern "C"  void SecT131Field_ImplCompactExt_m3003692540 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___zz0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field::ImplMultiply(System.UInt64[],System.UInt64[],System.UInt64[])
extern "C"  void SecT131Field_ImplMultiply_m2811208292 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, UInt64U5BU5D_t1668688775* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field::ImplMulw(System.UInt64,System.UInt64,System.UInt64[],System.Int32)
extern "C"  void SecT131Field_ImplMulw_m1991821236 (Il2CppObject * __this /* static, unused */, uint64_t ___x0, uint64_t ___y1, UInt64U5BU5D_t1668688775* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field::ImplSquare(System.UInt64[],System.UInt64[])
extern "C"  void SecT131Field_ImplSquare_m4265781048 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___zz1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
