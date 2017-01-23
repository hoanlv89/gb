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

// Org.BouncyCastle.Math.Raw.Nat160
struct Nat160_t79645350;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.Raw.Nat160::.ctor()
extern "C"  void Nat160__ctor_m4005212937 (Nat160_t79645350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat160::Add(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  uint32_t Nat160_Add_m108340369 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat160::AddBothTo(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  uint32_t Nat160_AddBothTo_m95456595 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat160::AddTo(System.UInt32[],System.UInt32[])
extern "C"  uint32_t Nat160_AddTo_m3164560854 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat160::AddTo(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32)
extern "C"  uint32_t Nat160_AddTo_m3687150260 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, uint32_t ___cIn4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat160::AddToEachOther(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat160_AddToEachOther_m325560759 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___u0, int32_t ___uOff1, UInt32U5BU5D_t59386216* ___v2, int32_t ___vOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat160::Copy(System.UInt32[],System.UInt32[])
extern "C"  void Nat160_Copy_m3183432666 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.Raw.Nat160::Create()
extern "C"  UInt32U5BU5D_t59386216* Nat160_Create_m875639828 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.Raw.Nat160::CreateExt()
extern "C"  UInt32U5BU5D_t59386216* Nat160_CreateExt_m3986123201 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat160::Diff(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  bool Nat160_Diff_m3585593543 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___y2, int32_t ___yOff3, UInt32U5BU5D_t59386216* ___z4, int32_t ___zOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat160::Eq(System.UInt32[],System.UInt32[])
extern "C"  bool Nat160_Eq_m876896941 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.Raw.Nat160::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  UInt32U5BU5D_t59386216* Nat160_FromBigInteger_m3808129422 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat160::GetBit(System.UInt32[],System.Int32)
extern "C"  uint32_t Nat160_GetBit_m2710571878 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___bit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat160::Gte(System.UInt32[],System.UInt32[])
extern "C"  bool Nat160_Gte_m1745145571 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat160::Gte(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  bool Nat160_Gte_m4274282863 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___y2, int32_t ___yOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat160::IsOne(System.UInt32[])
extern "C"  bool Nat160_IsOne_m453567189 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat160::IsZero(System.UInt32[])
extern "C"  bool Nat160_IsZero_m205071535 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat160::Mul(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void Nat160_Mul_m2771415911 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat160::Mul(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  void Nat160_Mul_m2945234648 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___y2, int32_t ___yOff3, UInt32U5BU5D_t59386216* ___zz4, int32_t ___zzOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat160::MulAddTo(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  uint32_t Nat160_MulAddTo_m581923846 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat160::MulAddTo(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat160_MulAddTo_m1927073427 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___y2, int32_t ___yOff3, UInt32U5BU5D_t59386216* ___zz4, int32_t ___zzOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Org.BouncyCastle.Math.Raw.Nat160::Mul33Add(System.UInt32,System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  uint64_t Nat160_Mul33Add_m401708375 (Il2CppObject * __this /* static, unused */, uint32_t ___w0, UInt32U5BU5D_t59386216* ___x1, int32_t ___xOff2, UInt32U5BU5D_t59386216* ___y3, int32_t ___yOff4, UInt32U5BU5D_t59386216* ___z5, int32_t ___zOff6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat160::MulWordAddExt(System.UInt32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat160_MulWordAddExt_m2955092482 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, UInt32U5BU5D_t59386216* ___yy1, int32_t ___yyOff2, UInt32U5BU5D_t59386216* ___zz3, int32_t ___zzOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat160::Mul33DWordAdd(System.UInt32,System.UInt64,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat160_Mul33DWordAdd_m2573827933 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, uint64_t ___y1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat160::Mul33WordAdd(System.UInt32,System.UInt32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat160_Mul33WordAdd_m858640990 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, uint32_t ___y1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat160::MulWordDwordAdd(System.UInt32,System.UInt64,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat160_MulWordDwordAdd_m1544510351 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, uint64_t ___y1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat160::MulWordsAdd(System.UInt32,System.UInt32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat160_MulWordsAdd_m438533609 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, uint32_t ___y1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat160::MulWord(System.UInt32,System.UInt32[],System.UInt32[],System.Int32)
extern "C"  uint32_t Nat160_MulWord_m2198804341 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat160::Square(System.UInt32[],System.UInt32[])
extern "C"  void Nat160_Square_m3676286732 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___zz1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat160::Square(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  void Nat160_Square_m3997164798 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___zz2, int32_t ___zzOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat160::Sub(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  int32_t Nat160_Sub_m2411435345 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat160::Sub(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  int32_t Nat160_Sub_m2996853102 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___y2, int32_t ___yOff3, UInt32U5BU5D_t59386216* ___z4, int32_t ___zOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat160::SubBothFrom(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  int32_t Nat160_SubBothFrom_m2657735692 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat160::SubFrom(System.UInt32[],System.UInt32[])
extern "C"  int32_t Nat160_SubFrom_m1528551229 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat160::SubFrom(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  int32_t Nat160_SubFrom_m144257253 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.Raw.Nat160::ToBigInteger(System.UInt32[])
extern "C"  BigInteger_t4268922522 * Nat160_ToBigInteger_m3482887791 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat160::Zero(System.UInt32[])
extern "C"  void Nat160_Zero_m1257685677 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___z0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
