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

// Org.BouncyCastle.Math.EC.LongArray
struct LongArray_t194261203;
// System.Int64[]
struct Int64U5BU5D_t717125112;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_LongArra194261203.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Math.EC.LongArray::.ctor(System.Int32)
extern "C"  void LongArray__ctor_m248791261 (LongArray_t194261203 * __this, int32_t ___intLen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::.ctor(System.Int64[])
extern "C"  void LongArray__ctor_m588120586 (LongArray_t194261203 * __this, Int64U5BU5D_t717125112* ___ints0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::.ctor(System.Int64[],System.Int32,System.Int32)
extern "C"  void LongArray__ctor_m1249045588 (LongArray_t194261203 * __this, Int64U5BU5D_t717125112* ___ints0, int32_t ___off1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void LongArray__ctor_m2176629364 (LongArray_t194261203 * __this, BigInteger_t4268922522 * ___bigInt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.LongArray::IsOne()
extern "C"  bool LongArray_IsOne_m448379680 (LongArray_t194261203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.LongArray::IsZero()
extern "C"  bool LongArray_IsZero_m1702808576 (LongArray_t194261203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.LongArray::GetUsedLength()
extern "C"  int32_t LongArray_GetUsedLength_m3785380043 (LongArray_t194261203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.LongArray::GetUsedLengthFrom(System.Int32)
extern "C"  int32_t LongArray_GetUsedLengthFrom_m1917157656 (LongArray_t194261203 * __this, int32_t ___from0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.LongArray::Degree()
extern "C"  int32_t LongArray_Degree_m1775498766 (LongArray_t194261203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.LongArray::DegreeFrom(System.Int32)
extern "C"  int32_t LongArray_DegreeFrom_m1368195845 (LongArray_t194261203 * __this, int32_t ___limit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.LongArray::BitLength(System.Int64)
extern "C"  int32_t LongArray_BitLength_m2116203315 (Il2CppObject * __this /* static, unused */, int64_t ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64[] Org.BouncyCastle.Math.EC.LongArray::ResizedInts(System.Int32)
extern "C"  Int64U5BU5D_t717125112* LongArray_ResizedInts_m290186208 (LongArray_t194261203 * __this, int32_t ___newLen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.LongArray::ToBigInteger()
extern "C"  BigInteger_t4268922522 * LongArray_ToBigInteger_m441749580 (LongArray_t194261203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Math.EC.LongArray::ShiftUp(System.Int64[],System.Int32,System.Int32,System.Int32)
extern "C"  int64_t LongArray_ShiftUp_m1959066437 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___x0, int32_t ___xOff1, int32_t ___count2, int32_t ___shift3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Math.EC.LongArray::ShiftUp(System.Int64[],System.Int32,System.Int64[],System.Int32,System.Int32,System.Int32)
extern "C"  int64_t LongArray_ShiftUp_m1469637090 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___x0, int32_t ___xOff1, Int64U5BU5D_t717125112* ___z2, int32_t ___zOff3, int32_t ___count4, int32_t ___shift5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.LongArray Org.BouncyCastle.Math.EC.LongArray::AddOne()
extern "C"  LongArray_t194261203 * LongArray_AddOne_m1343905189 (LongArray_t194261203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::AddShiftedByBitsSafe(Org.BouncyCastle.Math.EC.LongArray,System.Int32,System.Int32)
extern "C"  void LongArray_AddShiftedByBitsSafe_m719810677 (LongArray_t194261203 * __this, LongArray_t194261203 * ___other0, int32_t ___otherDegree1, int32_t ___bits2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Math.EC.LongArray::AddShiftedUp(System.Int64[],System.Int32,System.Int64[],System.Int32,System.Int32,System.Int32)
extern "C"  int64_t LongArray_AddShiftedUp_m1407602834 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___x0, int32_t ___xOff1, Int64U5BU5D_t717125112* ___y2, int32_t ___yOff3, int32_t ___count4, int32_t ___shift5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Math.EC.LongArray::AddShiftedDown(System.Int64[],System.Int32,System.Int64[],System.Int32,System.Int32,System.Int32)
extern "C"  int64_t LongArray_AddShiftedDown_m2357188555 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___x0, int32_t ___xOff1, Int64U5BU5D_t717125112* ___y2, int32_t ___yOff3, int32_t ___count4, int32_t ___shift5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::AddShiftedByWords(Org.BouncyCastle.Math.EC.LongArray,System.Int32)
extern "C"  void LongArray_AddShiftedByWords_m1010251644 (LongArray_t194261203 * __this, LongArray_t194261203 * ___other0, int32_t ___words1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::Add(System.Int64[],System.Int32,System.Int64[],System.Int32,System.Int32)
extern "C"  void LongArray_Add_m2317160720 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___x0, int32_t ___xOff1, Int64U5BU5D_t717125112* ___y2, int32_t ___yOff3, int32_t ___count4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::Add(System.Int64[],System.Int32,System.Int64[],System.Int32,System.Int64[],System.Int32,System.Int32)
extern "C"  void LongArray_Add_m3854181225 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___x0, int32_t ___xOff1, Int64U5BU5D_t717125112* ___y2, int32_t ___yOff3, Int64U5BU5D_t717125112* ___z4, int32_t ___zOff5, int32_t ___count6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::AddBoth(System.Int64[],System.Int32,System.Int64[],System.Int32,System.Int64[],System.Int32,System.Int32)
extern "C"  void LongArray_AddBoth_m2274140428 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___x0, int32_t ___xOff1, Int64U5BU5D_t717125112* ___y12, int32_t ___y1Off3, Int64U5BU5D_t717125112* ___y24, int32_t ___y2Off5, int32_t ___count6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::Distribute(System.Int64[],System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void LongArray_Distribute_m2587986151 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___x0, int32_t ___src1, int32_t ___dst12, int32_t ___dst23, int32_t ___count4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.LongArray::get_Length()
extern "C"  int32_t LongArray_get_Length_m3098691035 (LongArray_t194261203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::FlipWord(System.Int64[],System.Int32,System.Int32,System.Int64)
extern "C"  void LongArray_FlipWord_m4001876107 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___buf0, int32_t ___off1, int32_t ___bit2, int64_t ___word3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.LongArray::TestBitZero()
extern "C"  bool LongArray_TestBitZero_m4166334459 (LongArray_t194261203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.LongArray::TestBit(System.Int64[],System.Int32,System.Int32)
extern "C"  bool LongArray_TestBit_m3294638949 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___buf0, int32_t ___off1, int32_t ___n2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::FlipBit(System.Int64[],System.Int32,System.Int32)
extern "C"  void LongArray_FlipBit_m1805718530 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___buf0, int32_t ___off1, int32_t ___n2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::MultiplyWord(System.Int64,System.Int64[],System.Int32,System.Int64[],System.Int32)
extern "C"  void LongArray_MultiplyWord_m2395896884 (Il2CppObject * __this /* static, unused */, int64_t ___a0, Int64U5BU5D_t717125112* ___b1, int32_t ___bLen2, Int64U5BU5D_t717125112* ___c3, int32_t ___cOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.LongArray Org.BouncyCastle.Math.EC.LongArray::ModMultiplyLD(Org.BouncyCastle.Math.EC.LongArray,System.Int32,System.Int32[])
extern "C"  LongArray_t194261203 * LongArray_ModMultiplyLD_m3319186247 (LongArray_t194261203 * __this, LongArray_t194261203 * ___other0, int32_t ___m1, Int32U5BU5D_t3030399641* ___ks2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.LongArray Org.BouncyCastle.Math.EC.LongArray::ModMultiply(Org.BouncyCastle.Math.EC.LongArray,System.Int32,System.Int32[])
extern "C"  LongArray_t194261203 * LongArray_ModMultiply_m1727740303 (LongArray_t194261203 * __this, LongArray_t194261203 * ___other0, int32_t ___m1, Int32U5BU5D_t3030399641* ___ks2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.LongArray Org.BouncyCastle.Math.EC.LongArray::ModMultiplyAlt(Org.BouncyCastle.Math.EC.LongArray,System.Int32,System.Int32[])
extern "C"  LongArray_t194261203 * LongArray_ModMultiplyAlt_m1666243254 (LongArray_t194261203 * __this, LongArray_t194261203 * ___other0, int32_t ___m1, Int32U5BU5D_t3030399641* ___ks2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.LongArray Org.BouncyCastle.Math.EC.LongArray::ModReduce(System.Int32,System.Int32[])
extern "C"  LongArray_t194261203 * LongArray_ModReduce_m2575159934 (LongArray_t194261203 * __this, int32_t ___m0, Int32U5BU5D_t3030399641* ___ks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.LongArray Org.BouncyCastle.Math.EC.LongArray::Multiply(Org.BouncyCastle.Math.EC.LongArray,System.Int32,System.Int32[])
extern "C"  LongArray_t194261203 * LongArray_Multiply_m1508566949 (LongArray_t194261203 * __this, LongArray_t194261203 * ___other0, int32_t ___m1, Int32U5BU5D_t3030399641* ___ks2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::Reduce(System.Int32,System.Int32[])
extern "C"  void LongArray_Reduce_m1017461558 (LongArray_t194261203 * __this, int32_t ___m0, Int32U5BU5D_t3030399641* ___ks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.LongArray Org.BouncyCastle.Math.EC.LongArray::ReduceResult(System.Int64[],System.Int32,System.Int32,System.Int32,System.Int32[])
extern "C"  LongArray_t194261203 * LongArray_ReduceResult_m1886295375 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___buf0, int32_t ___off1, int32_t ___len2, int32_t ___m3, Int32U5BU5D_t3030399641* ___ks4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.LongArray::ReduceInPlace(System.Int64[],System.Int32,System.Int32,System.Int32,System.Int32[])
extern "C"  int32_t LongArray_ReduceInPlace_m4218916684 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___buf0, int32_t ___off1, int32_t ___len2, int32_t ___m3, Int32U5BU5D_t3030399641* ___ks4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::ReduceBitWise(System.Int64[],System.Int32,System.Int32,System.Int32,System.Int32[])
extern "C"  void LongArray_ReduceBitWise_m1298282913 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___buf0, int32_t ___off1, int32_t ___BitLength2, int32_t ___m3, Int32U5BU5D_t3030399641* ___ks4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::ReduceBit(System.Int64[],System.Int32,System.Int32,System.Int32,System.Int32[])
extern "C"  void LongArray_ReduceBit_m3029859985 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___buf0, int32_t ___off1, int32_t ___bit2, int32_t ___m3, Int32U5BU5D_t3030399641* ___ks4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::ReduceWordWise(System.Int64[],System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[])
extern "C"  void LongArray_ReduceWordWise_m1139886441 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___buf0, int32_t ___off1, int32_t ___len2, int32_t ___toBit3, int32_t ___m4, Int32U5BU5D_t3030399641* ___ks5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::ReduceWord(System.Int64[],System.Int32,System.Int32,System.Int64,System.Int32,System.Int32[])
extern "C"  void LongArray_ReduceWord_m1618296860 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___buf0, int32_t ___off1, int32_t ___bit2, int64_t ___word3, int32_t ___m4, Int32U5BU5D_t3030399641* ___ks5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::ReduceVectorWise(System.Int64[],System.Int32,System.Int32,System.Int32,System.Int32,System.Int32[])
extern "C"  void LongArray_ReduceVectorWise_m1915873808 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___buf0, int32_t ___off1, int32_t ___len2, int32_t ___words3, int32_t ___m4, Int32U5BU5D_t3030399641* ___ks5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::FlipVector(System.Int64[],System.Int32,System.Int64[],System.Int32,System.Int32,System.Int32)
extern "C"  void LongArray_FlipVector_m1725710856 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___x0, int32_t ___xOff1, Int64U5BU5D_t717125112* ___y2, int32_t ___yOff3, int32_t ___yLen4, int32_t ___bits5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.LongArray Org.BouncyCastle.Math.EC.LongArray::ModSquare(System.Int32,System.Int32[])
extern "C"  LongArray_t194261203 * LongArray_ModSquare_m1103792829 (LongArray_t194261203 * __this, int32_t ___m0, Int32U5BU5D_t3030399641* ___ks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.LongArray Org.BouncyCastle.Math.EC.LongArray::ModSquareN(System.Int32,System.Int32,System.Int32[])
extern "C"  LongArray_t194261203 * LongArray_ModSquareN_m4188551090 (LongArray_t194261203 * __this, int32_t ___n0, int32_t ___m1, Int32U5BU5D_t3030399641* ___ks2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.LongArray Org.BouncyCastle.Math.EC.LongArray::Square(System.Int32,System.Int32[])
extern "C"  LongArray_t194261203 * LongArray_Square_m2337879295 (LongArray_t194261203 * __this, int32_t ___m0, Int32U5BU5D_t3030399641* ___ks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::SquareInPlace(System.Int64[],System.Int32,System.Int32,System.Int32[])
extern "C"  void LongArray_SquareInPlace_m2907068142 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___x0, int32_t ___xLen1, int32_t ___m2, Int32U5BU5D_t3030399641* ___ks3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::Interleave(System.Int64[],System.Int32,System.Int64[],System.Int32,System.Int32,System.Int32)
extern "C"  void LongArray_Interleave_m3371992587 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___x0, int32_t ___xOff1, Int64U5BU5D_t717125112* ___z2, int32_t ___zOff3, int32_t ___count4, int32_t ___width5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::Interleave3(System.Int64[],System.Int32,System.Int64[],System.Int32,System.Int32)
extern "C"  void LongArray_Interleave3_m4242989541 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___x0, int32_t ___xOff1, Int64U5BU5D_t717125112* ___z2, int32_t ___zOff3, int32_t ___count4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Math.EC.LongArray::Interleave3(System.Int64)
extern "C"  int64_t LongArray_Interleave3_m1984717923 (Il2CppObject * __this /* static, unused */, int64_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Math.EC.LongArray::Interleave3_21to63(System.Int32)
extern "C"  int64_t LongArray_Interleave3_21to63_m3097565966 (Il2CppObject * __this /* static, unused */, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::Interleave5(System.Int64[],System.Int32,System.Int64[],System.Int32,System.Int32)
extern "C"  void LongArray_Interleave5_m2987096483 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___x0, int32_t ___xOff1, Int64U5BU5D_t717125112* ___z2, int32_t ___zOff3, int32_t ___count4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Math.EC.LongArray::Interleave5(System.Int64)
extern "C"  int64_t LongArray_Interleave5_m3008266841 (Il2CppObject * __this /* static, unused */, int64_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Math.EC.LongArray::Interleave3_13to65(System.Int32)
extern "C"  int64_t LongArray_Interleave3_13to65_m3484772569 (Il2CppObject * __this /* static, unused */, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::Interleave7(System.Int64[],System.Int32,System.Int64[],System.Int32,System.Int32)
extern "C"  void LongArray_Interleave7_m971838561 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___x0, int32_t ___xOff1, Int64U5BU5D_t717125112* ___z2, int32_t ___zOff3, int32_t ___count4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Math.EC.LongArray::Interleave7(System.Int64)
extern "C"  int64_t LongArray_Interleave7_m750063439 (Il2CppObject * __this /* static, unused */, int64_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::Interleave2_n(System.Int64[],System.Int32,System.Int64[],System.Int32,System.Int32,System.Int32)
extern "C"  void LongArray_Interleave2_n_m1309972706 (Il2CppObject * __this /* static, unused */, Int64U5BU5D_t717125112* ___x0, int32_t ___xOff1, Int64U5BU5D_t717125112* ___z2, int32_t ___zOff3, int32_t ___count4, int32_t ___rounds5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Math.EC.LongArray::Interleave2_n(System.Int64,System.Int32)
extern "C"  int64_t LongArray_Interleave2_n_m165548202 (Il2CppObject * __this /* static, unused */, int64_t ___x0, int32_t ___rounds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Math.EC.LongArray::Interleave4_16to64(System.Int32)
extern "C"  int64_t LongArray_Interleave4_16to64_m98029122 (Il2CppObject * __this /* static, unused */, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Math.EC.LongArray::Interleave2_32to64(System.Int32)
extern "C"  int64_t LongArray_Interleave2_32to64_m1479610730 (Il2CppObject * __this /* static, unused */, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.LongArray Org.BouncyCastle.Math.EC.LongArray::ModInverse(System.Int32,System.Int32[])
extern "C"  LongArray_t194261203 * LongArray_ModInverse_m3663028898 (LongArray_t194261203 * __this, int32_t ___m0, Int32U5BU5D_t3030399641* ___ks1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.LongArray::Equals(System.Object)
extern "C"  bool LongArray_Equals_m1548707805 (LongArray_t194261203 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.LongArray::Equals(Org.BouncyCastle.Math.EC.LongArray)
extern "C"  bool LongArray_Equals_m1690531326 (LongArray_t194261203 * __this, LongArray_t194261203 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.LongArray::GetHashCode()
extern "C"  int32_t LongArray_GetHashCode_m3013755255 (LongArray_t194261203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.LongArray Org.BouncyCastle.Math.EC.LongArray::Copy()
extern "C"  LongArray_t194261203 * LongArray_Copy_m4251554405 (LongArray_t194261203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.LongArray::ToString()
extern "C"  String_t* LongArray_ToString_m3373015615 (LongArray_t194261203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.LongArray::.cctor()
extern "C"  void LongArray__cctor_m344448631 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
