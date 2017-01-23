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

// Org.BouncyCastle.Crypto.Parameters.ElGamalKeyGenerationParameters
struct ElGamalKeyGenerationParameters_t303785198;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// Org.BouncyCastle.Crypto.Parameters.ElGamalParameters
struct ElGamalParameters_t1215309569;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete1215309569.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.ElGamalKeyGenerationParameters::.ctor(Org.BouncyCastle.Security.SecureRandom,Org.BouncyCastle.Crypto.Parameters.ElGamalParameters)
extern "C"  void ElGamalKeyGenerationParameters__ctor_m1887523322 (ElGamalKeyGenerationParameters_t303785198 * __this, SecureRandom_t3117234712 * ___random0, ElGamalParameters_t1215309569 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.ElGamalParameters Org.BouncyCastle.Crypto.Parameters.ElGamalKeyGenerationParameters::get_Parameters()
extern "C"  ElGamalParameters_t1215309569 * ElGamalKeyGenerationParameters_get_Parameters_m2742970518 (ElGamalKeyGenerationParameters_t303785198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.ElGamalKeyGenerationParameters::GetStrength(Org.BouncyCastle.Crypto.Parameters.ElGamalParameters)
extern "C"  int32_t ElGamalKeyGenerationParameters_GetStrength_m410797891 (Il2CppObject * __this /* static, unused */, ElGamalParameters_t1215309569 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
