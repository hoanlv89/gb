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

// Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
struct ParametersWithRandom_t16149445;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::.ctor(Org.BouncyCastle.Crypto.ICipherParameters,Org.BouncyCastle.Security.SecureRandom)
extern "C"  void ParametersWithRandom__ctor_m3254306006 (ParametersWithRandom_t16149445 * __this, Il2CppObject * ___parameters0, SecureRandom_t3117234712 * ___random1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::.ctor(Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void ParametersWithRandom__ctor_m2008093468 (ParametersWithRandom_t16149445 * __this, Il2CppObject * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::GetRandom()
extern "C"  SecureRandom_t3117234712 * ParametersWithRandom_GetRandom_m2525956827 (ParametersWithRandom_t16149445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::get_Random()
extern "C"  SecureRandom_t3117234712 * ParametersWithRandom_get_Random_m103313324 (ParametersWithRandom_t16149445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::get_Parameters()
extern "C"  Il2CppObject * ParametersWithRandom_get_Parameters_m1593828180 (ParametersWithRandom_t16149445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
