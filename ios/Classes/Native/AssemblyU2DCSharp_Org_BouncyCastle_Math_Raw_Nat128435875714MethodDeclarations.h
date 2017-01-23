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

// Org.BouncyCastle.Math.Raw.Nat128
struct Nat128_t435875714;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// System.UInt64[]
struct UInt64U5BU5D_t1668688775;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.Raw.Nat128::.ctor()
extern "C"  void Nat128__ctor_m3263605933 (Nat128_t435875714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat128::Add(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  uint32_t Nat128_Add_m539202357 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat128::AddBothTo(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  uint32_t Nat128_AddBothTo_m2057956215 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat128::AddTo(System.UInt32[],System.UInt32[])
extern "C"  uint32_t Nat128_AddTo_m2680909746 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat128::AddTo(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32)
extern "C"  uint32_t Nat128_AddTo_m2535898248 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, uint32_t ___cIn4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat128::AddToEachOther(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat128_AddToEachOther_m2979495131 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___u0, int32_t ___uOff1, UInt32U5BU5D_t59386216* ___v2, int32_t ___vOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat128::Copy(System.UInt32[],System.UInt32[])
extern "C"  void Nat128_Copy_m1818052614 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat128::Copy64(System.UInt64[],System.UInt64[])
extern "C"  void Nat128_Copy64_m4277824788 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.Raw.Nat128::Create()
extern "C"  UInt32U5BU5D_t59386216* Nat128_Create_m2882379448 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64[] Org.BouncyCastle.Math.Raw.Nat128::Create64()
extern "C"  UInt64U5BU5D_t1668688775* Nat128_Create64_m1017804349 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.Raw.Nat128::CreateExt()
extern "C"  UInt32U5BU5D_t59386216* Nat128_CreateExt_m111301397 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64[] Org.BouncyCastle.Math.Raw.Nat128::CreateExt64()
extern "C"  UInt64U5BU5D_t1668688775* Nat128_CreateExt64_m1956436804 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat128::Diff(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  bool Nat128_Diff_m606400955 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___y2, int32_t ___yOff3, UInt32U5BU5D_t59386216* ___z4, int32_t ___zOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat128::Eq(System.UInt32[],System.UInt32[])
extern "C"  bool Nat128_Eq_m1165931153 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat128::Eq64(System.UInt64[],System.UInt64[])
extern "C"  bool Nat128_Eq64_m494535543 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.Raw.Nat128::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  UInt32U5BU5D_t59386216* Nat128_FromBigInteger_m1422102834 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64[] Org.BouncyCastle.Math.Raw.Nat128::FromBigInteger64(Org.BouncyCastle.Math.BigInteger)
extern "C"  UInt64U5BU5D_t1668688775* Nat128_FromBigInteger64_m2793980823 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat128::GetBit(System.UInt32[],System.Int32)
extern "C"  uint32_t Nat128_GetBit_m287139858 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___bit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat128::Gte(System.UInt32[],System.UInt32[])
extern "C"  bool Nat128_Gte_m259920855 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat128::Gte(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  bool Nat128_Gte_m2799216355 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___y2, int32_t ___yOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat128::IsOne(System.UInt32[])
extern "C"  bool Nat128_IsOne_m1188784969 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat128::IsOne64(System.UInt64[])
extern "C"  bool Nat128_IsOne64_m3295844340 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat128::IsZero(System.UInt32[])
extern "C"  bool Nat128_IsZero_m1464145043 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat128::IsZero64(System.UInt64[])
extern "C"  bool Nat128_IsZero64_m1452498966 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat128::Mul(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void Nat128_Mul_m588546059 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat128::Mul(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  void Nat128_Mul_m3938833204 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___y2, int32_t ___yOff3, UInt32U5BU5D_t59386216* ___zz4, int32_t ___zzOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat128::MulAddTo(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  uint32_t Nat128_MulAddTo_m1063408434 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat128::MulAddTo(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat128_MulAddTo_m3322073839 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___y2, int32_t ___yOff3, UInt32U5BU5D_t59386216* ___zz4, int32_t ___zzOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Org.BouncyCastle.Math.Raw.Nat128::Mul33Add(System.UInt32,System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  uint64_t Nat128_Mul33Add_m1791576443 (Il2CppObject * __this /* static, unused */, uint32_t ___w0, UInt32U5BU5D_t59386216* ___x1, int32_t ___xOff2, UInt32U5BU5D_t59386216* ___y3, int32_t ___yOff4, UInt32U5BU5D_t59386216* ___z5, int32_t ___zOff6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat128::MulWordAddExt(System.UInt32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat128_MulWordAddExt_m1411104046 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, UInt32U5BU5D_t59386216* ___yy1, int32_t ___yyOff2, UInt32U5BU5D_t59386216* ___zz3, int32_t ___zzOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat128::Mul33DWordAdd(System.UInt32,System.UInt64,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat128_Mul33DWordAdd_m1692801289 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, uint64_t ___y1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat128::Mul33WordAdd(System.UInt32,System.UInt32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat128_Mul33WordAdd_m336354690 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, uint32_t ___y1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat128::MulWordDwordAdd(System.UInt32,System.UInt64,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat128_MulWordDwordAdd_m2846796219 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, uint64_t ___y1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat128::MulWordsAdd(System.UInt32,System.UInt32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat128_MulWordsAdd_m1369119685 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, uint32_t ___y1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat128::MulWord(System.UInt32,System.UInt32[],System.UInt32[],System.Int32)
extern "C"  uint32_t Nat128_MulWord_m1927864353 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat128::Square(System.UInt32[],System.UInt32[])
extern "C"  void Nat128_Square_m2738967472 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___zz1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat128::Square(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  void Nat128_Square_m1662798626 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___zz2, int32_t ___zzOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat128::Sub(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  int32_t Nat128_Sub_m4188910149 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat128::Sub(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  int32_t Nat128_Sub_m2429724538 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___y2, int32_t ___yOff3, UInt32U5BU5D_t59386216* ___z4, int32_t ___zOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat128::SubBothFrom(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  int32_t Nat128_SubBothFrom_m4126791664 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat128::SubFrom(System.UInt32[],System.UInt32[])
extern "C"  int32_t Nat128_SubFrom_m2423173977 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat128::SubFrom(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  int32_t Nat128_SubFrom_m296891009 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.Raw.Nat128::ToBigInteger(System.UInt32[])
extern "C"  BigInteger_t4268922522 * Nat128_ToBigInteger_m3293329363 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.Raw.Nat128::ToBigInteger64(System.UInt64[])
extern "C"  BigInteger_t4268922522 * Nat128_ToBigInteger64_m3672850694 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat128::Zero(System.UInt32[])
extern "C"  void Nat128_Zero_m2968625361 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___z0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
