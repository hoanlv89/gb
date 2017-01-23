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

// Org.BouncyCastle.Math.Field.FiniteFields
struct FiniteFields_t239290640;
// Org.BouncyCastle.Math.Field.IPolynomialExtensionField
struct IPolynomialExtensionField_t1198756504;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// Org.BouncyCastle.Math.Field.IFiniteField
struct IFiniteField_t3190882390;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Math_BigInteger4268922522.h"

// System.Void Org.BouncyCastle.Math.Field.FiniteFields::.ctor()
extern "C"  void FiniteFields__ctor_m1331165919 (FiniteFields_t239290640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.Field.IPolynomialExtensionField Org.BouncyCastle.Math.Field.FiniteFields::GetBinaryExtensionField(System.Int32[])
extern "C"  Il2CppObject * FiniteFields_GetBinaryExtensionField_m100298341 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3030399641* ___exponents0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.Field.IFiniteField Org.BouncyCastle.Math.Field.FiniteFields::GetPrimeField(Org.BouncyCastle.Math.BigInteger)
extern "C"  Il2CppObject * FiniteFields_GetPrimeField_m1100915455 (Il2CppObject * __this /* static, unused */, BigInteger_t4268922522 * ___characteristic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Math.Field.FiniteFields::.cctor()
extern "C"  void FiniteFields__cctor_m2304291792 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
