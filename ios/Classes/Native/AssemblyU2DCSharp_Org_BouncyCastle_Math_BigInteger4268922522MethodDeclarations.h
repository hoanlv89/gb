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

// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Random
struct Random_t1044426839;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Math.BigInteger[]
struct BigIntegerU5BU5D_t431507903;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Random1044426839.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void Org.BouncyCastle.Math.BigInteger::.cctor()
extern "C"  void BigInteger__cctor_m519798480 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.BigInteger::.ctor(System.Int32,System.Int32[],System.Boolean)
extern "C"  void BigInteger__ctor_m4015474058 (BigInteger_t4268922522 * __this, int32_t ___signum0, Int32U5BU5D_t3030399641* ___mag1, bool ___checkMag2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.BigInteger::.ctor(System.String)
extern "C"  void BigInteger__ctor_m2954672235 (BigInteger_t4268922522 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.BigInteger::.ctor(System.String,System.Int32)
extern "C"  void BigInteger__ctor_m3994946704 (BigInteger_t4268922522 * __this, String_t* ___str0, int32_t ___radix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.BigInteger::.ctor(System.Byte[])
extern "C"  void BigInteger__ctor_m1602049180 (BigInteger_t4268922522 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.BigInteger::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C"  void BigInteger__ctor_m2757629414 (BigInteger_t4268922522 * __this, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.BigInteger::.ctor(System.Int32,System.Byte[])
extern "C"  void BigInteger__ctor_m220281123 (BigInteger_t4268922522 * __this, int32_t ___sign0, ByteU5BU5D_t3397334013* ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.BigInteger::.ctor(System.Int32,System.Byte[],System.Int32,System.Int32)
extern "C"  void BigInteger__ctor_m4181625087 (BigInteger_t4268922522 * __this, int32_t ___sign0, ByteU5BU5D_t3397334013* ___bytes1, int32_t ___offset2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.BigInteger::.ctor(System.Int32,System.Random)
extern "C"  void BigInteger__ctor_m3133209470 (BigInteger_t4268922522 * __this, int32_t ___sizeInBits0, Random_t1044426839 * ___random1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.BigInteger::.ctor(System.Int32,System.Int32,System.Random)
extern "C"  void BigInteger__ctor_m4003070873 (BigInteger_t4268922522 * __this, int32_t ___bitLength0, int32_t ___certainty1, Random_t1044426839 * ___random2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::GetByteLength(System.Int32)
extern "C"  int32_t BigInteger_GetByteLength_m1581392328 (Il2CppObject * __this /* static, unused */, int32_t ___nBits0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Math.BigInteger::MakeMagnitude(System.Byte[],System.Int32,System.Int32)
extern "C"  Int32U5BU5D_t3030399641* BigInteger_MakeMagnitude_m1357215184 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Abs()
extern "C"  BigInteger_t4268922522 * BigInteger_Abs_m1298976574 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Math.BigInteger::AddMagnitudes(System.Int32[],System.Int32[])
extern "C"  Int32U5BU5D_t3030399641* BigInteger_AddMagnitudes_m1440257287 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___a0, Int32U5BU5D_t3030399641* ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Add(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_Add_m2937864739 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::AddToMagnitude(System.Int32[])
extern "C"  BigInteger_t4268922522 * BigInteger_AddToMagnitude_m1761304277 (BigInteger_t4268922522 * __this, Int32U5BU5D_t3030399641* ___magToAdd0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::And(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_And_m1452808921 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::AndNot(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_AndNot_m860808236 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::get_BitCount()
extern "C"  int32_t BigInteger_get_BitCount_m655662724 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::BitCnt(System.Int32)
extern "C"  int32_t BigInteger_BitCnt_m2890699184 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::CalcBitLength(System.Int32,System.Int32,System.Int32[])
extern "C"  int32_t BigInteger_CalcBitLength_m719134432 (Il2CppObject * __this /* static, unused */, int32_t ___sign0, int32_t ___indx1, Int32U5BU5D_t3030399641* ___mag2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::get_BitLength()
extern "C"  int32_t BigInteger_get_BitLength_m1710353873 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::BitLen(System.Int32)
extern "C"  int32_t BigInteger_BitLen_m29384176 (Il2CppObject * __this /* static, unused */, int32_t ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.BigInteger::QuickPow2Check()
extern "C"  bool BigInteger_QuickPow2Check_m980400874 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::CompareTo(System.Object)
extern "C"  int32_t BigInteger_CompareTo_m3341804841 (BigInteger_t4268922522 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::CompareTo(System.Int32,System.Int32[],System.Int32,System.Int32[])
extern "C"  int32_t BigInteger_CompareTo_m2555902299 (Il2CppObject * __this /* static, unused */, int32_t ___xIndx0, Int32U5BU5D_t3030399641* ___x1, int32_t ___yIndx2, Int32U5BU5D_t3030399641* ___y3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::CompareNoLeadingZeroes(System.Int32,System.Int32[],System.Int32,System.Int32[])
extern "C"  int32_t BigInteger_CompareNoLeadingZeroes_m2876335585 (Il2CppObject * __this /* static, unused */, int32_t ___xIndx0, Int32U5BU5D_t3030399641* ___x1, int32_t ___yIndx2, Int32U5BU5D_t3030399641* ___y3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::CompareTo(Org.BouncyCastle.Math.BigInteger)
extern "C"  int32_t BigInteger_CompareTo_m3939022453 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Math.BigInteger::Divide(System.Int32[],System.Int32[])
extern "C"  Int32U5BU5D_t3030399641* BigInteger_Divide_m2709645138 (BigInteger_t4268922522 * __this, Int32U5BU5D_t3030399641* ___x0, Int32U5BU5D_t3030399641* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Divide(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_Divide_m2169229337 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Math.BigInteger::DivideAndRemainder(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigIntegerU5BU5D_t431507903* BigInteger_DivideAndRemainder_m2241402927 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.BigInteger::Equals(System.Object)
extern "C"  bool BigInteger_Equals_m1692830334 (BigInteger_t4268922522 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.BigInteger::IsEqualMagnitude(Org.BouncyCastle.Math.BigInteger)
extern "C"  bool BigInteger_IsEqualMagnitude_m1841227297 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Gcd(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_Gcd_m1596334754 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::GetHashCode()
extern "C"  int32_t BigInteger_GetHashCode_m288795274 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Inc()
extern "C"  BigInteger_t4268922522 * BigInteger_Inc_m4232921386 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::get_IntValue()
extern "C"  int32_t BigInteger_get_IntValue_m2784623392 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.BigInteger::IsProbablePrime(System.Int32)
extern "C"  bool BigInteger_IsProbablePrime_m2997502800 (BigInteger_t4268922522 * __this, int32_t ___certainty0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.BigInteger::CheckProbablePrime(System.Int32,System.Random)
extern "C"  bool BigInteger_CheckProbablePrime_m2646689526 (BigInteger_t4268922522 * __this, int32_t ___certainty0, Random_t1044426839 * ___random1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.BigInteger::RabinMillerTest(System.Int32,System.Random)
extern "C"  bool BigInteger_RabinMillerTest_m2952387971 (BigInteger_t4268922522 * __this, int32_t ___certainty0, Random_t1044426839 * ___random1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Math.BigInteger::get_LongValue()
extern "C"  int64_t BigInteger_get_LongValue_m4149638296 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Max(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_Max_m1275837622 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Min(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_Min_m3809927836 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Mod(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_Mod_m4097338404 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ModInverse(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_ModInverse_m1183076374 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ModInversePow2(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_ModInversePow2_m3359656718 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::ModInverse32(System.Int32)
extern "C"  int32_t BigInteger_ModInverse32_m2124425733 (Il2CppObject * __this /* static, unused */, int32_t ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Math.BigInteger::ModInverse64(System.Int64)
extern "C"  int64_t BigInteger_ModInverse64_m3316404252 (Il2CppObject * __this /* static, unused */, int64_t ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ExtEuclid(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger&)
extern "C"  BigInteger_t4268922522 * BigInteger_ExtEuclid_m3310118111 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___a0, BigInteger_t4268922522 * ___b1, BigInteger_t4268922522 ** ___u1Out2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.BigInteger::ZeroOut(System.Int32[])
extern "C"  void BigInteger_ZeroOut_m2526824918 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ModPow(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_ModPow_m2719014084 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___e0, BigInteger_t4268922522 * ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ModPowBarrett(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_ModPowBarrett_m1145650490 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___b0, BigInteger_t4268922522 * ___e1, BigInteger_t4268922522 * ___m2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ReduceBarrett(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_ReduceBarrett_m3592051958 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___x0, BigInteger_t4268922522 * ___m1, BigInteger_t4268922522 * ___mr2, BigInteger_t4268922522 * ___yu3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ModPowMonty(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,System.Boolean)
extern "C"  BigInteger_t4268922522 * BigInteger_ModPowMonty_m992198142 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___b0, BigInteger_t4268922522 * ___e1, BigInteger_t4268922522 * ___m2, bool ___convert3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Math.BigInteger::GetWindowList(System.Int32[],System.Int32)
extern "C"  Int32U5BU5D_t3030399641* BigInteger_GetWindowList_m2973806631 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___mag0, int32_t ___extraBits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::CreateWindowEntry(System.Int32,System.Int32)
extern "C"  int32_t BigInteger_CreateWindowEntry_m1662197011 (Il2CppObject * __this /* static, unused */, int32_t ___mult0, int32_t ___zeroes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Math.BigInteger::Square(System.Int32[],System.Int32[])
extern "C"  Int32U5BU5D_t3030399641* BigInteger_Square_m353408492 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___w0, Int32U5BU5D_t3030399641* ___x1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Math.BigInteger::Multiply(System.Int32[],System.Int32[],System.Int32[])
extern "C"  Int32U5BU5D_t3030399641* BigInteger_Multiply_m1222681396 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___x0, Int32U5BU5D_t3030399641* ___y1, Int32U5BU5D_t3030399641* ___z2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::GetMQuote()
extern "C"  int32_t BigInteger_GetMQuote_m439688482 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.BigInteger::MontgomeryReduce(System.Int32[],System.Int32[],System.UInt32)
extern "C"  void BigInteger_MontgomeryReduce_m2220945944 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___x0, Int32U5BU5D_t3030399641* ___m1, uint32_t ___mDash2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.BigInteger::MultiplyMonty(System.Int32[],System.Int32[],System.Int32[],System.Int32[],System.UInt32,System.Boolean)
extern "C"  void BigInteger_MultiplyMonty_m590384119 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___a0, Int32U5BU5D_t3030399641* ___x1, Int32U5BU5D_t3030399641* ___y2, Int32U5BU5D_t3030399641* ___m3, uint32_t ___mDash4, bool ___smallMontyModulus5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.BigInteger::SquareMonty(System.Int32[],System.Int32[],System.Int32[],System.UInt32,System.Boolean)
extern "C"  void BigInteger_SquareMonty_m2671594593 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___a0, Int32U5BU5D_t3030399641* ___x1, Int32U5BU5D_t3030399641* ___m2, uint32_t ___mDash3, bool ___smallMontyModulus4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Org.BouncyCastle.Math.BigInteger::MultiplyMontyNIsOne(System.UInt32,System.UInt32,System.UInt32,System.UInt32)
extern "C"  uint32_t BigInteger_MultiplyMontyNIsOne_m1889467283 (Il2CppObject * __this /* static, unused */, uint32_t ___x0, uint32_t ___y1, uint32_t ___m2, uint32_t ___mDash3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Multiply(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_Multiply_m849108790 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Square()
extern "C"  BigInteger_t4268922522 * BigInteger_Square_m422708557 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Negate()
extern "C"  BigInteger_t4268922522 * BigInteger_Negate_m990872238 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::NextProbablePrime()
extern "C"  BigInteger_t4268922522 * BigInteger_NextProbablePrime_m1053704417 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Not()
extern "C"  BigInteger_t4268922522 * BigInteger_Not_m4086144025 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Pow(System.Int32)
extern "C"  BigInteger_t4268922522 * BigInteger_Pow_m1224984749 (BigInteger_t4268922522 * __this, int32_t ___exp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ProbablePrime(System.Int32,System.Random)
extern "C"  BigInteger_t4268922522 * BigInteger_ProbablePrime_m2009907159 (Il2CppObject * __this /* static, unused */, int32_t ___bitLength0, Random_t1044426839 * ___random1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::Remainder(System.Int32)
extern "C"  int32_t BigInteger_Remainder_m882071625 (BigInteger_t4268922522 * __this, int32_t ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Math.BigInteger::Remainder(System.Int32[],System.Int32[])
extern "C"  Int32U5BU5D_t3030399641* BigInteger_Remainder_m2061513820 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___x0, Int32U5BU5D_t3030399641* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Remainder(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_Remainder_m1477939729 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Math.BigInteger::LastNBits(System.Int32)
extern "C"  Int32U5BU5D_t3030399641* BigInteger_LastNBits_m3627060364 (BigInteger_t4268922522 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::DivideWords(System.Int32)
extern "C"  BigInteger_t4268922522 * BigInteger_DivideWords_m907871119 (BigInteger_t4268922522 * __this, int32_t ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::RemainderWords(System.Int32)
extern "C"  BigInteger_t4268922522 * BigInteger_RemainderWords_m1576087431 (BigInteger_t4268922522 * __this, int32_t ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Math.BigInteger::ShiftLeft(System.Int32[],System.Int32)
extern "C"  Int32U5BU5D_t3030399641* BigInteger_ShiftLeft_m4135173186 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___mag0, int32_t ___n1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::ShiftLeftOneInPlace(System.Int32[],System.Int32)
extern "C"  int32_t BigInteger_ShiftLeftOneInPlace_m663098408 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___x0, int32_t ___carry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ShiftLeft(System.Int32)
extern "C"  BigInteger_t4268922522 * BigInteger_ShiftLeft_m864312062 (BigInteger_t4268922522 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.BigInteger::ShiftRightInPlace(System.Int32,System.Int32[],System.Int32)
extern "C"  void BigInteger_ShiftRightInPlace_m649775038 (Il2CppObject * __this /* static, unused */, int32_t ___start0, Int32U5BU5D_t3030399641* ___mag1, int32_t ___n2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.BigInteger::ShiftRightOneInPlace(System.Int32,System.Int32[])
extern "C"  void BigInteger_ShiftRightOneInPlace_m3914483163 (Il2CppObject * __this /* static, unused */, int32_t ___start0, Int32U5BU5D_t3030399641* ___mag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ShiftRight(System.Int32)
extern "C"  BigInteger_t4268922522 * BigInteger_ShiftRight_m2692665381 (BigInteger_t4268922522 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::get_SignValue()
extern "C"  int32_t BigInteger_get_SignValue_m2858371506 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Math.BigInteger::Subtract(System.Int32,System.Int32[],System.Int32,System.Int32[])
extern "C"  Int32U5BU5D_t3030399641* BigInteger_Subtract_m4041253833 (Il2CppObject * __this /* static, unused */, int32_t ___xStart0, Int32U5BU5D_t3030399641* ___x1, int32_t ___yStart2, Int32U5BU5D_t3030399641* ___y3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Subtract(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_Subtract_m1443566190 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Org.BouncyCastle.Math.BigInteger::doSubBigLil(System.Int32[],System.Int32[])
extern "C"  Int32U5BU5D_t3030399641* BigInteger_doSubBigLil_m135304495 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___bigMag0, Int32U5BU5D_t3030399641* ___lilMag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Math.BigInteger::ToByteArray()
extern "C"  ByteU5BU5D_t3397334013* BigInteger_ToByteArray_m1166195969 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Math.BigInteger::ToByteArrayUnsigned()
extern "C"  ByteU5BU5D_t3397334013* BigInteger_ToByteArrayUnsigned_m2743122634 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Math.BigInteger::ToByteArray(System.Boolean)
extern "C"  ByteU5BU5D_t3397334013* BigInteger_ToByteArray_m3304052280 (BigInteger_t4268922522 * __this, bool ___unsigned0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.BigInteger::ToString()
extern "C"  String_t* BigInteger_ToString_m4159521224 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.BigInteger::ToString(System.Int32)
extern "C"  String_t* BigInteger_ToString_m1362241471 (BigInteger_t4268922522 * __this, int32_t ___radix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.BigInteger::AppendZeroExtendedString(System.Text.StringBuilder,System.String,System.Int32)
extern "C"  void BigInteger_AppendZeroExtendedString_m4263882654 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___sb0, String_t* ___s1, int32_t ___minLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::CreateUValueOf(System.UInt64)
extern "C"  BigInteger_t4268922522 * BigInteger_CreateUValueOf_m1421329552 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::CreateValueOf(System.Int64)
extern "C"  BigInteger_t4268922522 * BigInteger_CreateValueOf_m344276022 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ValueOf(System.Int64)
extern "C"  BigInteger_t4268922522 * BigInteger_ValueOf_m1928952742 (Il2CppObject * __this /* static, unused */, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::GetLowestSetBit()
extern "C"  int32_t BigInteger_GetLowestSetBit_m1918723934 (BigInteger_t4268922522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.BigInteger::GetLowestSetBitMaskFirst(System.Int32)
extern "C"  int32_t BigInteger_GetLowestSetBitMaskFirst_m2057258793 (BigInteger_t4268922522 * __this, int32_t ___firstWordMask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.BigInteger::TestBit(System.Int32)
extern "C"  bool BigInteger_TestBit_m1273188217 (BigInteger_t4268922522 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Or(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_Or_m1465041827 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Xor(Org.BouncyCastle.Math.BigInteger)
extern "C"  BigInteger_t4268922522 * BigInteger_Xor_m2104639315 (BigInteger_t4268922522 * __this, BigInteger_t4268922522 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::SetBit(System.Int32)
extern "C"  BigInteger_t4268922522 * BigInteger_SetBit_m2165271678 (BigInteger_t4268922522 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ClearBit(System.Int32)
extern "C"  BigInteger_t4268922522 * BigInteger_ClearBit_m4148064171 (BigInteger_t4268922522 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::FlipBit(System.Int32)
extern "C"  BigInteger_t4268922522 * BigInteger_FlipBit_m3160624749 (BigInteger_t4268922522 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::FlipExistingBit(System.Int32)
extern "C"  BigInteger_t4268922522 * BigInteger_FlipExistingBit_m2354884186 (BigInteger_t4268922522 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
