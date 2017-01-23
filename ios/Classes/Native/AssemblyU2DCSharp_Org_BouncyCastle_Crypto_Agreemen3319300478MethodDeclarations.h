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

// Org.BouncyCastle.Crypto.Agreement.DHBasicAgreement
struct DHBasicAgreement_t3319300478;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Agreement.DHBasicAgreement::.ctor()
extern "C"  void DHBasicAgreement__ctor_m331483758 (DHBasicAgreement_t3319300478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Agreement.DHBasicAgreement::Init(Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void DHBasicAgreement_Init_m165177611 (DHBasicAgreement_t3319300478 * __this, Il2CppObject * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Agreement.DHBasicAgreement::GetFieldSize()
extern "C"  int32_t DHBasicAgreement_GetFieldSize_m379644247 (DHBasicAgreement_t3319300478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Agreement.DHBasicAgreement::CalculateAgreement(Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  BigInteger_t4268922522 * DHBasicAgreement_CalculateAgreement_m120989222 (DHBasicAgreement_t3319300478 * __this, Il2CppObject * ___pubKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
