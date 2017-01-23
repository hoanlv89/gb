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

// Org.BouncyCastle.Crypto.KeyGenerationParameters
struct KeyGenerationParameters_t650995725;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"

// System.Void Org.BouncyCastle.Crypto.KeyGenerationParameters::.ctor(Org.BouncyCastle.Security.SecureRandom,System.Int32)
extern "C"  void KeyGenerationParameters__ctor_m1440505598 (KeyGenerationParameters_t650995725 * __this, SecureRandom_t3117234712 * ___random0, int32_t ___strength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.KeyGenerationParameters::get_Random()
extern "C"  SecureRandom_t3117234712 * KeyGenerationParameters_get_Random_m1295034236 (KeyGenerationParameters_t650995725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.KeyGenerationParameters::get_Strength()
extern "C"  int32_t KeyGenerationParameters_get_Strength_m4059315669 (KeyGenerationParameters_t650995725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
