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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement
struct SecP384R1FieldElement_t3721703645;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// System.String
struct String_t;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_t1092946118;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_ECField1092946118.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_3721703645.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecP384R1FieldElement__ctor_m3073001148 (SecP384R1FieldElement_t3721703645 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::.ctor()
extern "C"  void SecP384R1FieldElement__ctor_m2225826470 (SecP384R1FieldElement_t3721703645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::.ctor(System.UInt32[])
extern "C"  void SecP384R1FieldElement__ctor_m648131904 (SecP384R1FieldElement_t3721703645 * __this, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::get_IsZero()
extern "C"  bool SecP384R1FieldElement_get_IsZero_m2386617389 (SecP384R1FieldElement_t3721703645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::get_IsOne()
extern "C"  bool SecP384R1FieldElement_get_IsOne_m1828192039 (SecP384R1FieldElement_t3721703645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::TestBitZero()
extern "C"  bool SecP384R1FieldElement_TestBitZero_m1131306639 (SecP384R1FieldElement_t3721703645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecP384R1FieldElement_ToBigInteger_m2138237682 (SecP384R1FieldElement_t3721703645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::get_FieldName()
extern "C"  String_t* SecP384R1FieldElement_get_FieldName_m1069404845 (SecP384R1FieldElement_t3721703645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::get_FieldSize()
extern "C"  int32_t SecP384R1FieldElement_get_FieldSize_m2867442298 (SecP384R1FieldElement_t3721703645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP384R1FieldElement_Add_m478456706 (SecP384R1FieldElement_t3721703645 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecP384R1FieldElement_AddOne_m156836350 (SecP384R1FieldElement_t3721703645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP384R1FieldElement_Subtract_m1211029247 (SecP384R1FieldElement_t3721703645 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP384R1FieldElement_Multiply_m3575351095 (SecP384R1FieldElement_t3721703645 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP384R1FieldElement_Divide_m1685399464 (SecP384R1FieldElement_t3721703645 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecP384R1FieldElement_Negate_m1968451401 (SecP384R1FieldElement_t3721703645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecP384R1FieldElement_Square_m112698144 (SecP384R1FieldElement_t3721703645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecP384R1FieldElement_Invert_m1376088547 (SecP384R1FieldElement_t3721703645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecP384R1FieldElement_Sqrt_m2224631641 (SecP384R1FieldElement_t3721703645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::Equals(System.Object)
extern "C"  bool SecP384R1FieldElement_Equals_m3631249985 (SecP384R1FieldElement_t3721703645 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecP384R1FieldElement_Equals_m2566674833 (SecP384R1FieldElement_t3721703645 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement)
extern "C"  bool SecP384R1FieldElement_Equals_m2325811838 (SecP384R1FieldElement_t3721703645 * __this, SecP384R1FieldElement_t3721703645 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::GetHashCode()
extern "C"  int32_t SecP384R1FieldElement_GetHashCode_m1212959899 (SecP384R1FieldElement_t3721703645 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP384R1FieldElement::.cctor()
extern "C"  void SecP384R1FieldElement__cctor_m3184855243 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
