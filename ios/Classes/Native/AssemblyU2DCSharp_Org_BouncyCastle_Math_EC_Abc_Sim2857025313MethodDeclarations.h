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

// Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal
struct SimpleBigDecimal_t2857025313;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Abc_Sim2857025313.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::.ctor(Org.BouncyCastle.Math.BigInteger,System.Int32)
extern "C"  void SimpleBigDecimal__ctor_m4033136271 (SimpleBigDecimal_t2857025313 * __this, BigInteger_t4268922522 * ___bigInt0, int32_t ___scale1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::.ctor(Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal)
extern "C"  void SimpleBigDecimal__ctor_m1719622527 (SimpleBigDecimal_t2857025313 * __this, SimpleBigDecimal_t2857025313 * ___limBigDec0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::GetInstance(Org.BouncyCastle.Math.BigInteger,System.Int32)
extern "C"  SimpleBigDecimal_t2857025313 * SimpleBigDecimal_GetInstance_m2942365898 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___val0, int32_t ___scale1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::CheckScale(Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal)
extern "C"  void SimpleBigDecimal_CheckScale_m1164248489 (SimpleBigDecimal_t2857025313 * __this, SimpleBigDecimal_t2857025313 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::AdjustScale(System.Int32)
extern "C"  SimpleBigDecimal_t2857025313 * SimpleBigDecimal_AdjustScale_m1320333220 (SimpleBigDecimal_t2857025313 * __this, int32_t ___newScale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::Add(Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal)
extern "C"  SimpleBigDecimal_t2857025313 * SimpleBigDecimal_Add_m2575789334 (SimpleBigDecimal_t2857025313 * __this, SimpleBigDecimal_t2857025313 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::Add(Org.BouncyCastle.Math.BigInteger)
extern "C"  SimpleBigDecimal_t2857025313 * SimpleBigDecimal_Add_m1738520915 (SimpleBigDecimal_t2857025313 * __this, BigInteger_t4268922522 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::Negate()
extern "C"  SimpleBigDecimal_t2857025313 * SimpleBigDecimal_Negate_m280578994 (SimpleBigDecimal_t2857025313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::Subtract(Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal)
extern "C"  SimpleBigDecimal_t2857025313 * SimpleBigDecimal_Subtract_m2908524855 (SimpleBigDecimal_t2857025313 * __this, SimpleBigDecimal_t2857025313 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::Subtract(Org.BouncyCastle.Math.BigInteger)
extern "C"  SimpleBigDecimal_t2857025313 * SimpleBigDecimal_Subtract_m832058342 (SimpleBigDecimal_t2857025313 * __this, BigInteger_t4268922522 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::Multiply(Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal)
extern "C"  SimpleBigDecimal_t2857025313 * SimpleBigDecimal_Multiply_m4010169255 (SimpleBigDecimal_t2857025313 * __this, SimpleBigDecimal_t2857025313 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::Multiply(Org.BouncyCastle.Math.BigInteger)
extern "C"  SimpleBigDecimal_t2857025313 * SimpleBigDecimal_Multiply_m440277502 (SimpleBigDecimal_t2857025313 * __this, BigInteger_t4268922522 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::Divide(Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal)
extern "C"  SimpleBigDecimal_t2857025313 * SimpleBigDecimal_Divide_m1889750970 (SimpleBigDecimal_t2857025313 * __this, SimpleBigDecimal_t2857025313 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::Divide(Org.BouncyCastle.Math.BigInteger)
extern "C"  SimpleBigDecimal_t2857025313 * SimpleBigDecimal_Divide_m1697199741 (SimpleBigDecimal_t2857025313 * __this, BigInteger_t4268922522 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::ShiftLeft(System.Int32)
extern "C"  SimpleBigDecimal_t2857025313 * SimpleBigDecimal_ShiftLeft_m2517028726 (SimpleBigDecimal_t2857025313 * __this, int32_t ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::CompareTo(Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal)
extern "C"  int32_t SimpleBigDecimal_CompareTo_m1732785701 (SimpleBigDecimal_t2857025313 * __this, SimpleBigDecimal_t2857025313 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::CompareTo(Org.BouncyCastle.Math.BigInteger)
extern "C"  int32_t SimpleBigDecimal_CompareTo_m3980101346 (SimpleBigDecimal_t2857025313 * __this, BigInteger_t4268922522 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::Floor()
extern "C"  BigInteger_t4268922522 * SimpleBigDecimal_Floor_m149189449 (SimpleBigDecimal_t2857025313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::Round()
extern "C"  BigInteger_t4268922522 * SimpleBigDecimal_Round_m765064123 (SimpleBigDecimal_t2857025313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::get_IntValue()
extern "C"  int32_t SimpleBigDecimal_get_IntValue_m1660874911 (SimpleBigDecimal_t2857025313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::get_LongValue()
extern "C"  int64_t SimpleBigDecimal_get_LongValue_m307723057 (SimpleBigDecimal_t2857025313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::get_Scale()
extern "C"  int32_t SimpleBigDecimal_get_Scale_m3358370555 (SimpleBigDecimal_t2857025313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::ToString()
extern "C"  String_t* SimpleBigDecimal_ToString_m4281280559 (SimpleBigDecimal_t2857025313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::Equals(System.Object)
extern "C"  bool SimpleBigDecimal_Equals_m627869305 (SimpleBigDecimal_t2857025313 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal::GetHashCode()
extern "C"  int32_t SimpleBigDecimal_GetHashCode_m678225603 (SimpleBigDecimal_t2857025313 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
