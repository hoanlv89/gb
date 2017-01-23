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

// Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters
struct DHKeyGenerationParameters_t1952252333;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// Org.BouncyCastle.Crypto.Parameters.DHParameters
struct DHParameters_t431035336;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Parameter431035336.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters::.ctor(Org.BouncyCastle.Security.SecureRandom,Org.BouncyCastle.Crypto.Parameters.DHParameters)
extern "C"  void DHKeyGenerationParameters__ctor_m1087898742 (DHKeyGenerationParameters_t1952252333 * __this, SecureRandom_t3117234712 * ___random0, DHParameters_t431035336 * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.Parameters.DHParameters Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters::get_Parameters()
extern "C"  DHParameters_t431035336 * DHKeyGenerationParameters_get_Parameters_m3888319038 (DHKeyGenerationParameters_t1952252333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters::GetStrength(Org.BouncyCastle.Crypto.Parameters.DHParameters)
extern "C"  int32_t DHKeyGenerationParameters_GetStrength_m483952067 (Il2CppObject * __this /* static, unused */, DHParameters_t431035336 * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
