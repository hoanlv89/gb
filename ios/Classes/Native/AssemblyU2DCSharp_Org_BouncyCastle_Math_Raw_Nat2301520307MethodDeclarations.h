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

// Org.BouncyCastle.Math.Raw.Nat
struct Nat_t2301520307;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// System.UInt64[]
struct UInt64U5BU5D_t1668688775;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.Raw.Nat::.ctor()
extern "C"  void Nat__ctor_m3386330608 (Nat_t2301520307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::Add(System.Int32,System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  uint32_t Nat_Add_m93667643 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, UInt32U5BU5D_t59386216* ___y2, UInt32U5BU5D_t59386216* ___z3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::Add33At(System.Int32,System.UInt32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_Add33At_m4280681695 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zPos3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::Add33At(System.Int32,System.UInt32,System.UInt32[],System.Int32,System.Int32)
extern "C"  uint32_t Nat_Add33At_m1739840622 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, int32_t ___zPos4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::Add33To(System.Int32,System.UInt32,System.UInt32[])
extern "C"  uint32_t Nat_Add33To_m2996097524 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::Add33To(System.Int32,System.UInt32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_Add33To_m959743397 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::AddBothTo(System.Int32,System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  uint32_t Nat_AddBothTo_m1339783877 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, UInt32U5BU5D_t59386216* ___y2, UInt32U5BU5D_t59386216* ___z3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::AddBothTo(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_AddBothTo_m3797016070 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, int32_t ___xOff2, UInt32U5BU5D_t59386216* ___y3, int32_t ___yOff4, UInt32U5BU5D_t59386216* ___z5, int32_t ___zOff6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::AddDWordAt(System.Int32,System.UInt64,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_AddDWordAt_m4201453752 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint64_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zPos3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::AddDWordAt(System.Int32,System.UInt64,System.UInt32[],System.Int32,System.Int32)
extern "C"  uint32_t Nat_AddDWordAt_m2172283011 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint64_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, int32_t ___zPos4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::AddDWordTo(System.Int32,System.UInt64,System.UInt32[])
extern "C"  uint32_t Nat_AddDWordTo_m3703092889 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint64_t ___x1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::AddDWordTo(System.Int32,System.UInt64,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_AddDWordTo_m2871013644 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint64_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::AddTo(System.Int32,System.UInt32[],System.UInt32[])
extern "C"  uint32_t Nat_AddTo_m973856990 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::AddTo(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_AddTo_m859606460 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, int32_t ___xOff2, UInt32U5BU5D_t59386216* ___z3, int32_t ___zOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::AddWordAt(System.Int32,System.UInt32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_AddWordAt_m2920217525 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zPos3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::AddWordAt(System.Int32,System.UInt32,System.UInt32[],System.Int32,System.Int32)
extern "C"  uint32_t Nat_AddWordAt_m1908318000 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, int32_t ___zPos4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::AddWordTo(System.Int32,System.UInt32,System.UInt32[])
extern "C"  uint32_t Nat_AddWordTo_m2807814950 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::AddWordTo(System.Int32,System.UInt32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_AddWordTo_m718351443 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat::Copy(System.Int32,System.UInt32[],System.UInt32[])
extern "C"  void Nat_Copy_m585179338 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.Raw.Nat::Copy(System.Int32,System.UInt32[])
extern "C"  UInt32U5BU5D_t59386216* Nat_Copy_m92032661 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.Raw.Nat::Create(System.Int32)
extern "C"  UInt32U5BU5D_t59386216* Nat_Create_m1365932916 (Il2CppObject * __this /* static, unused */, int32_t ___len0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64[] Org.BouncyCastle.Math.Raw.Nat::Create64(System.Int32)
extern "C"  UInt64U5BU5D_t1668688775* Nat_Create64_m3990195863 (Il2CppObject * __this /* static, unused */, int32_t ___len0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::Dec(System.Int32,System.UInt32[])
extern "C"  int32_t Nat_Dec_m2332899705 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::Dec(System.Int32,System.UInt32[],System.UInt32[])
extern "C"  int32_t Nat_Dec_m2984972599 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::DecAt(System.Int32,System.UInt32[],System.Int32)
extern "C"  int32_t Nat_DecAt_m4086378205 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___z1, int32_t ___zPos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::DecAt(System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C"  int32_t Nat_DecAt_m4101694556 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___z1, int32_t ___zOff2, int32_t ___zPos3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat::Eq(System.Int32,System.UInt32[],System.UInt32[])
extern "C"  bool Nat_Eq_m1850715371 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, UInt32U5BU5D_t59386216* ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.Raw.Nat::FromBigInteger(System.Int32,Org.BouncyCastle.Math.BigInteger)
extern "C"  UInt32U5BU5D_t59386216* Nat_FromBigInteger_m896646388 (Il2CppObject * __this /* static, unused */, int32_t ___bits0, BigInteger_t4268922522 * ___x1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::GetBit(System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_GetBit_m652488599 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___bit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat::Gte(System.Int32,System.UInt32[],System.UInt32[])
extern "C"  bool Nat_Gte_m3830240601 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, UInt32U5BU5D_t59386216* ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::Inc(System.Int32,System.UInt32[])
extern "C"  uint32_t Nat_Inc_m1583406852 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::Inc(System.Int32,System.UInt32[],System.UInt32[])
extern "C"  uint32_t Nat_Inc_m3645842812 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::IncAt(System.Int32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_IncAt_m3249887836 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___z1, int32_t ___zPos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::IncAt(System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C"  uint32_t Nat_IncAt_m1530605451 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___z1, int32_t ___zOff2, int32_t ___zPos3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat::IsOne(System.Int32,System.UInt32[])
extern "C"  bool Nat_IsOne_m3269160707 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat::IsZero(System.Int32,System.UInt32[])
extern "C"  bool Nat_IsZero_m282828197 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat::Mul(System.Int32,System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void Nat_Mul_m2395029713 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, UInt32U5BU5D_t59386216* ___y2, UInt32U5BU5D_t59386216* ___zz3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat::Mul(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  void Nat_Mul_m2001481312 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, int32_t ___xOff2, UInt32U5BU5D_t59386216* ___y3, int32_t ___yOff4, UInt32U5BU5D_t59386216* ___zz5, int32_t ___zzOff6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::Mul31BothAdd(System.Int32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32[],System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_Mul31BothAdd_m1877544845 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___a1, UInt32U5BU5D_t59386216* ___x2, uint32_t ___b3, UInt32U5BU5D_t59386216* ___y4, UInt32U5BU5D_t59386216* ___z5, int32_t ___zOff6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::MulWord(System.Int32,System.UInt32,System.UInt32[],System.UInt32[])
extern "C"  uint32_t Nat_MulWord_m1934179598 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___y2, UInt32U5BU5D_t59386216* ___z3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::MulWord(System.Int32,System.UInt32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_MulWord_m3397316460 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___y2, int32_t ___yOff3, UInt32U5BU5D_t59386216* ___z4, int32_t ___zOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::MulWordAddTo(System.Int32,System.UInt32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_MulWordAddTo_m1157482946 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___y2, int32_t ___yOff3, UInt32U5BU5D_t59386216* ___z4, int32_t ___zOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::MulWordDwordAddAt(System.Int32,System.UInt32,System.UInt64,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_MulWordDwordAddAt_m4067682292 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, uint64_t ___y2, UInt32U5BU5D_t59386216* ___z3, int32_t ___zPos4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftDownBit(System.Int32,System.UInt32[],System.UInt32)
extern "C"  uint32_t Nat_ShiftDownBit_m24024643 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___z1, uint32_t ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftDownBit(System.Int32,System.UInt32[],System.Int32,System.UInt32)
extern "C"  uint32_t Nat_ShiftDownBit_m4045216834 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___z1, int32_t ___zOff2, uint32_t ___c3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftDownBit(System.Int32,System.UInt32[],System.UInt32,System.UInt32[])
extern "C"  uint32_t Nat_ShiftDownBit_m3513326869 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, uint32_t ___c2, UInt32U5BU5D_t59386216* ___z3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftDownBit(System.Int32,System.UInt32[],System.Int32,System.UInt32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_ShiftDownBit_m1205016973 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, int32_t ___xOff2, uint32_t ___c3, UInt32U5BU5D_t59386216* ___z4, int32_t ___zOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftDownBits(System.Int32,System.UInt32[],System.Int32,System.UInt32)
extern "C"  uint32_t Nat_ShiftDownBits_m1339185345 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___z1, int32_t ___bits2, uint32_t ___c3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftDownBits(System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32)
extern "C"  uint32_t Nat_ShiftDownBits_m2079373158 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___z1, int32_t ___zOff2, int32_t ___bits3, uint32_t ___c4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftDownBits(System.Int32,System.UInt32[],System.Int32,System.UInt32,System.UInt32[])
extern "C"  uint32_t Nat_ShiftDownBits_m1415220251 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, int32_t ___bits2, uint32_t ___c3, UInt32U5BU5D_t59386216* ___z4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftDownBits(System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_ShiftDownBits_m313079071 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, int32_t ___xOff2, int32_t ___bits3, uint32_t ___c4, UInt32U5BU5D_t59386216* ___z5, int32_t ___zOff6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftDownWord(System.Int32,System.UInt32[],System.UInt32)
extern "C"  uint32_t Nat_ShiftDownWord_m2091907060 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___z1, uint32_t ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftUpBit(System.Int32,System.UInt32[],System.UInt32)
extern "C"  uint32_t Nat_ShiftUpBit_m340111412 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___z1, uint32_t ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftUpBit(System.Int32,System.UInt32[],System.Int32,System.UInt32)
extern "C"  uint32_t Nat_ShiftUpBit_m3485676473 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___z1, int32_t ___zOff2, uint32_t ___c3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftUpBit(System.Int32,System.UInt32[],System.UInt32,System.UInt32[])
extern "C"  uint32_t Nat_ShiftUpBit_m3165604580 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, uint32_t ___c2, UInt32U5BU5D_t59386216* ___z3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftUpBit(System.Int32,System.UInt32[],System.Int32,System.UInt32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_ShiftUpBit_m2268898518 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, int32_t ___xOff2, uint32_t ___c3, UInt32U5BU5D_t59386216* ___z4, int32_t ___zOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Org.BouncyCastle.Math.Raw.Nat::ShiftUpBit64(System.Int32,System.UInt64[],System.Int32,System.UInt64,System.UInt64[],System.Int32)
extern "C"  uint64_t Nat_ShiftUpBit64_m3818228874 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt64U5BU5D_t1668688775* ___x1, int32_t ___xOff2, uint64_t ___c3, UInt64U5BU5D_t1668688775* ___z4, int32_t ___zOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftUpBits(System.Int32,System.UInt32[],System.Int32,System.UInt32)
extern "C"  uint32_t Nat_ShiftUpBits_m3048521628 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___z1, int32_t ___bits2, uint32_t ___c3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftUpBits(System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32)
extern "C"  uint32_t Nat_ShiftUpBits_m4198151987 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___z1, int32_t ___zOff2, int32_t ___bits3, uint32_t ___c4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Org.BouncyCastle.Math.Raw.Nat::ShiftUpBits64(System.Int32,System.UInt64[],System.Int32,System.Int32,System.UInt64)
extern "C"  uint64_t Nat_ShiftUpBits64_m2799359896 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt64U5BU5D_t1668688775* ___z1, int32_t ___zOff2, int32_t ___bits3, uint64_t ___c4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftUpBits(System.Int32,System.UInt32[],System.Int32,System.UInt32,System.UInt32[])
extern "C"  uint32_t Nat_ShiftUpBits_m279652480 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, int32_t ___bits2, uint32_t ___c3, UInt32U5BU5D_t59386216* ___z4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftUpBits(System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_ShiftUpBits_m13283986 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, int32_t ___xOff2, int32_t ___bits3, uint32_t ___c4, UInt32U5BU5D_t59386216* ___z5, int32_t ___zOff6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Org.BouncyCastle.Math.Raw.Nat::ShiftUpBits64(System.Int32,System.UInt64[],System.Int32,System.Int32,System.UInt64,System.UInt64[],System.Int32)
extern "C"  uint64_t Nat_ShiftUpBits64_m3167697160 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt64U5BU5D_t1668688775* ___x1, int32_t ___xOff2, int32_t ___bits3, uint64_t ___c4, UInt64U5BU5D_t1668688775* ___z5, int32_t ___zOff6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat::Square(System.Int32,System.UInt32[],System.UInt32[])
extern "C"  void Nat_Square_m2710738284 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat::Square(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  void Nat_Square_m547687422 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, int32_t ___xOff2, UInt32U5BU5D_t59386216* ___zz3, int32_t ___zzOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::SquareWordAdd(System.UInt32[],System.Int32,System.UInt32[])
extern "C"  uint32_t Nat_SquareWordAdd_m2988321410 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xPos1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::SquareWordAdd(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat_SquareWordAdd_m4027881024 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, int32_t ___xPos2, UInt32U5BU5D_t59386216* ___z3, int32_t ___zOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::Sub(System.Int32,System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  int32_t Nat_Sub_m3593585779 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, UInt32U5BU5D_t59386216* ___y2, UInt32U5BU5D_t59386216* ___z3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::Sub(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  int32_t Nat_Sub_m2136559670 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, int32_t ___xOff2, UInt32U5BU5D_t59386216* ___y3, int32_t ___yOff4, UInt32U5BU5D_t59386216* ___z5, int32_t ___zOff6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::Sub33At(System.Int32,System.UInt32,System.UInt32[],System.Int32)
extern "C"  int32_t Nat_Sub33At_m4065067895 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zPos3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::Sub33At(System.Int32,System.UInt32,System.UInt32[],System.Int32,System.Int32)
extern "C"  int32_t Nat_Sub33At_m2187902724 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, int32_t ___zPos4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::Sub33From(System.Int32,System.UInt32,System.UInt32[])
extern "C"  int32_t Nat_Sub33From_m2505782189 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::Sub33From(System.Int32,System.UInt32,System.UInt32[],System.Int32)
extern "C"  int32_t Nat_Sub33From_m2419678650 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::SubBothFrom(System.Int32,System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  int32_t Nat_SubBothFrom_m2194674402 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, UInt32U5BU5D_t59386216* ___y2, UInt32U5BU5D_t59386216* ___z3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::SubBothFrom(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  int32_t Nat_SubBothFrom_m1455160861 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, int32_t ___xOff2, UInt32U5BU5D_t59386216* ___y3, int32_t ___yOff4, UInt32U5BU5D_t59386216* ___z5, int32_t ___zOff6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::SubDWordAt(System.Int32,System.UInt64,System.UInt32[],System.Int32)
extern "C"  int32_t Nat_SubDWordAt_m1801570074 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint64_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zPos3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::SubDWordAt(System.Int32,System.UInt64,System.UInt32[],System.Int32,System.Int32)
extern "C"  int32_t Nat_SubDWordAt_m3514069907 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint64_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, int32_t ___zPos4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::SubDWordFrom(System.Int32,System.UInt64,System.UInt32[])
extern "C"  int32_t Nat_SubDWordFrom_m1190329130 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint64_t ___x1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::SubDWordFrom(System.Int32,System.UInt64,System.UInt32[],System.Int32)
extern "C"  int32_t Nat_SubDWordFrom_m2866815449 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint64_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::SubFrom(System.Int32,System.UInt32[],System.UInt32[])
extern "C"  int32_t Nat_SubFrom_m2725016707 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::SubFrom(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  int32_t Nat_SubFrom_m1337913631 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, int32_t ___xOff2, UInt32U5BU5D_t59386216* ___z3, int32_t ___zOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::SubWordAt(System.Int32,System.UInt32,System.UInt32[],System.Int32)
extern "C"  int32_t Nat_SubWordAt_m2259231001 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zPos3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::SubWordAt(System.Int32,System.UInt32,System.UInt32[],System.Int32,System.Int32)
extern "C"  int32_t Nat_SubWordAt_m271069418 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, int32_t ___zPos4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::SubWordFrom(System.Int32,System.UInt32,System.UInt32[])
extern "C"  int32_t Nat_SubWordFrom_m3581782491 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat::SubWordFrom(System.Int32,System.UInt32,System.UInt32[],System.Int32)
extern "C"  int32_t Nat_SubWordFrom_m1040975020 (Il2CppObject * __this /* static, unused */, int32_t ___len0, uint32_t ___x1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.Raw.Nat::ToBigInteger(System.Int32,System.UInt32[])
extern "C"  BigInteger_t4268922522 * Nat_ToBigInteger_m3634388821 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___x1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat::Zero(System.Int32,System.UInt32[])
extern "C"  void Nat_Zero_m2312748467 (Il2CppObject * __this /* static, unused */, int32_t ___len0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
