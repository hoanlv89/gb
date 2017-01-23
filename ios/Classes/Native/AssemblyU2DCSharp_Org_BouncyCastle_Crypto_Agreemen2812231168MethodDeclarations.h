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

// Org.BouncyCastle.Crypto.Agreement.ECDHBasicAgreement
struct ECDHBasicAgreement_t2812231168;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_t4268922522;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Agreement.ECDHBasicAgreement::.ctor()
extern "C"  void ECDHBasicAgreement__ctor_m116335638 (ECDHBasicAgreement_t2812231168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Agreement.ECDHBasicAgreement::Init(Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void ECDHBasicAgreement_Init_m169135285 (ECDHBasicAgreement_t2812231168 * __this, Il2CppObject * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Agreement.ECDHBasicAgreement::GetFieldSize()
extern "C"  int32_t ECDHBasicAgreement_GetFieldSize_m929365757 (ECDHBasicAgreement_t2812231168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Agreement.ECDHBasicAgreement::CalculateAgreement(Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  BigInteger_t4268922522 * ECDHBasicAgreement_CalculateAgreement_m2792112130 (ECDHBasicAgreement_t2812231168 * __this, Il2CppObject * ___pubKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
