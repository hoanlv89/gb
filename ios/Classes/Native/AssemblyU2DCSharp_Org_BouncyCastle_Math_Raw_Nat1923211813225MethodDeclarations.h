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

// Org.BouncyCastle.Math.Raw.Nat192
struct Nat192_t3211813225;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// System.UInt64[]
struct UInt64U5BU5D_t1668688775;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.Raw.Nat192::.ctor()
extern "C"  void Nat192__ctor_m1110317370 (Nat192_t3211813225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat192::Add(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  uint32_t Nat192_Add_m112766384 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat192::AddBothTo(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  uint32_t Nat192_AddBothTo_m1251921230 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat192::AddTo(System.UInt32[],System.UInt32[])
extern "C"  uint32_t Nat192_AddTo_m2165987845 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat192::AddTo(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32)
extern "C"  uint32_t Nat192_AddTo_m2602522613 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, uint32_t ___cIn4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat192::AddToEachOther(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat192_AddToEachOther_m3937932514 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___u0, int32_t ___uOff1, UInt32U5BU5D_t59386216* ___v2, int32_t ___vOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat192::Copy(System.UInt32[],System.UInt32[])
extern "C"  void Nat192_Copy_m1008611913 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat192::Copy64(System.UInt64[],System.UInt64[])
extern "C"  void Nat192_Copy64_m3114084411 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.Raw.Nat192::Create()
extern "C"  UInt32U5BU5D_t59386216* Nat192_Create_m2489504237 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64[] Org.BouncyCastle.Math.Raw.Nat192::Create64()
extern "C"  UInt64U5BU5D_t1668688775* Nat192_Create64_m3537817490 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.Raw.Nat192::CreateExt()
extern "C"  UInt32U5BU5D_t59386216* Nat192_CreateExt_m2126995866 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64[] Org.BouncyCastle.Math.Raw.Nat192::CreateExt64()
extern "C"  UInt64U5BU5D_t1668688775* Nat192_CreateExt64_m1820021057 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat192::Diff(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  bool Nat192_Diff_m2889033102 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___y2, int32_t ___yOff3, UInt32U5BU5D_t59386216* ___z4, int32_t ___zOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat192::Eq(System.UInt32[],System.UInt32[])
extern "C"  bool Nat192_Eq_m4105976378 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat192::Eq64(System.UInt64[],System.UInt64[])
extern "C"  bool Nat192_Eq64_m2321252500 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, UInt64U5BU5D_t1668688775* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32[] Org.BouncyCastle.Math.Raw.Nat192::FromBigInteger(Org.BouncyCastle.Math.BigInteger)
extern "C"  UInt32U5BU5D_t59386216* Nat192_FromBigInteger_m1560259371 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64[] Org.BouncyCastle.Math.Raw.Nat192::FromBigInteger64(Org.BouncyCastle.Math.BigInteger)
extern "C"  UInt64U5BU5D_t1668688775* Nat192_FromBigInteger64_m307458224 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat192::GetBit(System.UInt32[],System.Int32)
extern "C"  uint32_t Nat192_GetBit_m1146944005 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___bit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat192::Gte(System.UInt32[],System.UInt32[])
extern "C"  bool Nat192_Gte_m3084541428 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat192::Gte(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  bool Nat192_Gte_m360593286 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___y2, int32_t ___yOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat192::IsOne(System.UInt32[])
extern "C"  bool Nat192_IsOne_m3090021338 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat192::IsOne64(System.UInt64[])
extern "C"  bool Nat192_IsOne64_m2198289869 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat192::IsZero(System.UInt32[])
extern "C"  bool Nat192_IsZero_m4042150390 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat192::IsZero64(System.UInt64[])
extern "C"  bool Nat192_IsZero64_m1114217235 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat192::Mul(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  void Nat192_Mul_m64616434 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat192::Mul(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  void Nat192_Mul_m1498853499 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___y2, int32_t ___yOff3, UInt32U5BU5D_t59386216* ___zz4, int32_t ___zzOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat192::MulAddTo(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  uint32_t Nat192_MulAddTo_m1702419291 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___zz2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat192::MulAddTo(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat192_MulAddTo_m3264559606 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___y2, int32_t ___yOff3, UInt32U5BU5D_t59386216* ___zz4, int32_t ___zzOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Org.BouncyCastle.Math.Raw.Nat192::Mul33Add(System.UInt32,System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  uint64_t Nat192_Mul33Add_m2671760788 (Il2CppObject * __this /* static, unused */, uint32_t ___w0, UInt32U5BU5D_t59386216* ___x1, int32_t ___xOff2, UInt32U5BU5D_t59386216* ___y3, int32_t ___yOff4, UInt32U5BU5D_t59386216* ___z5, int32_t ___zOff6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat192::MulWordAddExt(System.UInt32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat192_MulWordAddExt_m2848947657 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, UInt32U5BU5D_t59386216* ___yy1, int32_t ___yyOff2, UInt32U5BU5D_t59386216* ___zz3, int32_t ___zzOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat192::Mul33DWordAdd(System.UInt32,System.UInt64,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat192_Mul33DWordAdd_m843758012 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, uint64_t ___y1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat192::Mul33WordAdd(System.UInt32,System.UInt32,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat192_Mul33WordAdd_m335191835 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, uint32_t ___y1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat192::MulWordDwordAdd(System.UInt32,System.UInt64,System.UInt32[],System.Int32)
extern "C"  uint32_t Nat192_MulWordDwordAdd_m4053479378 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, uint64_t ___y1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat192::MulWord(System.UInt32,System.UInt32[],System.UInt32[],System.Int32)
extern "C"  uint32_t Nat192_MulWord_m1029656494 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat192::Square(System.UInt32[],System.UInt32[])
extern "C"  void Nat192_Square_m1443020269 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___zz1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat192::Square(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  void Nat192_Square_m1732159397 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___zz2, int32_t ___zzOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat192::Sub(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  int32_t Nat192_Sub_m2344292292 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat192::Sub(System.UInt32[],System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  int32_t Nat192_Sub_m1059584601 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___y2, int32_t ___yOff3, UInt32U5BU5D_t59386216* ___z4, int32_t ___zOff5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat192::SubBothFrom(System.UInt32[],System.UInt32[],System.UInt32[])
extern "C"  int32_t Nat192_SubBothFrom_m2400355475 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___y1, UInt32U5BU5D_t59386216* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat192::SubFrom(System.UInt32[],System.UInt32[])
extern "C"  int32_t Nat192_SubFrom_m2921937392 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, UInt32U5BU5D_t59386216* ___z1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.Raw.Nat192::SubFrom(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
extern "C"  int32_t Nat192_SubFrom_m2167082218 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, int32_t ___xOff1, UInt32U5BU5D_t59386216* ___z2, int32_t ___zOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.Raw.Nat192::ToBigInteger(System.UInt32[])
extern "C"  BigInteger_t4268922522 * Nat192_ToBigInteger_m4165121558 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.Raw.Nat192::ToBigInteger64(System.UInt64[])
extern "C"  BigInteger_t4268922522 * Nat192_ToBigInteger64_m3951895619 (Il2CppObject * __this /* static, unused */, UInt64U5BU5D_t1668688775* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Raw.Nat192::Zero(System.UInt32[])
extern "C"  void Nat192_Zero_m4036268948 (Il2CppObject * __this /* static, unused */, UInt32U5BU5D_t59386216* ___z0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
