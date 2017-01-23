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

// Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement
struct SecP256K1FieldElement_t3640352222;
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
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_EC_Custom_3640352222.h"

// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::.ctor(Org.BouncyCastle.Math.BigInteger)
extern "C"  void SecP256K1FieldElement__ctor_m4149359101 (SecP256K1FieldElement_t3640352222 * __this, BigInteger_t4268922522 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::.ctor()
extern "C"  void SecP256K1FieldElement__ctor_m3352896899 (SecP256K1FieldElement_t3640352222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::.ctor(System.UInt32[])
extern "C"  void SecP256K1FieldElement__ctor_m177969657 (SecP256K1FieldElement_t3640352222 * __this, UInt32U5BU5D_t59386216* ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::get_IsZero()
extern "C"  bool SecP256K1FieldElement_get_IsZero_m3399343240 (SecP256K1FieldElement_t3640352222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::get_IsOne()
extern "C"  bool SecP256K1FieldElement_get_IsOne_m3199615384 (SecP256K1FieldElement_t3640352222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::TestBitZero()
extern "C"  bool SecP256K1FieldElement_TestBitZero_m1577029334 (SecP256K1FieldElement_t3640352222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::ToBigInteger()
extern "C"  BigInteger_t4268922522 * SecP256K1FieldElement_ToBigInteger_m1469576995 (SecP256K1FieldElement_t3640352222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::get_FieldName()
extern "C"  String_t* SecP256K1FieldElement_get_FieldName_m3387225548 (SecP256K1FieldElement_t3640352222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::get_FieldSize()
extern "C"  int32_t SecP256K1FieldElement_get_FieldSize_m455640211 (SecP256K1FieldElement_t3640352222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP256K1FieldElement_Add_m3164470373 (SecP256K1FieldElement_t3640352222 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::AddOne()
extern "C"  ECFieldElement_t1092946118 * SecP256K1FieldElement_AddOne_m3502860507 (SecP256K1FieldElement_t3640352222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP256K1FieldElement_Subtract_m1357081476 (SecP256K1FieldElement_t3640352222 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP256K1FieldElement_Multiply_m1421640020 (SecP256K1FieldElement_t3640352222 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  ECFieldElement_t1092946118 * SecP256K1FieldElement_Divide_m3971355015 (SecP256K1FieldElement_t3640352222 * __this, ECFieldElement_t1092946118 * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::Negate()
extern "C"  ECFieldElement_t1092946118 * SecP256K1FieldElement_Negate_m1997891052 (SecP256K1FieldElement_t3640352222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::Square()
extern "C"  ECFieldElement_t1092946118 * SecP256K1FieldElement_Square_m429948995 (SecP256K1FieldElement_t3640352222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::Invert()
extern "C"  ECFieldElement_t1092946118 * SecP256K1FieldElement_Invert_m78023786 (SecP256K1FieldElement_t3640352222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::Sqrt()
extern "C"  ECFieldElement_t1092946118 * SecP256K1FieldElement_Sqrt_m273516116 (SecP256K1FieldElement_t3640352222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::Equals(System.Object)
extern "C"  bool SecP256K1FieldElement_Equals_m2519537106 (SecP256K1FieldElement_t3640352222 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement)
extern "C"  bool SecP256K1FieldElement_Equals_m1784825976 (SecP256K1FieldElement_t3640352222 * __this, ECFieldElement_t1092946118 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement)
extern "C"  bool SecP256K1FieldElement_Equals_m2053354910 (SecP256K1FieldElement_t3640352222 * __this, SecP256K1FieldElement_t3640352222 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::GetHashCode()
extern "C"  int32_t SecP256K1FieldElement_GetHashCode_m2195597322 (SecP256K1FieldElement_t3640352222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.EC.Custom.Sec.SecP256K1FieldElement::.cctor()
extern "C"  void SecP256K1FieldElement__cctor_m3931984648 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
