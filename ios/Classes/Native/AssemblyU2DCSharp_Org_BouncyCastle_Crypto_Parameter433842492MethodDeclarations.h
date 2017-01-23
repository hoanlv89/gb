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

// Org.BouncyCastle.Crypto.Parameters.ParametersWithSalt
struct ParametersWithSalt_t433842492;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.ParametersWithSalt::.ctor(Org.BouncyCastle.Crypto.ICipherParameters,System.Byte[])
extern "C"  void ParametersWithSalt__ctor_m1282804334 (ParametersWithSalt_t433842492 * __this, Il2CppObject * ___parameters0, ByteU5BU5D_t3397334013* ___salt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.ParametersWithSalt::.ctor(Org.BouncyCastle.Crypto.ICipherParameters,System.Byte[],System.Int32,System.Int32)
extern "C"  void ParametersWithSalt__ctor_m2239193624 (ParametersWithSalt_t433842492 * __this, Il2CppObject * ___parameters0, ByteU5BU5D_t3397334013* ___salt1, int32_t ___saltOff2, int32_t ___saltLen3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithSalt::GetSalt()
extern "C"  ByteU5BU5D_t3397334013* ParametersWithSalt_GetSalt_m2271912558 (ParametersWithSalt_t433842492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithSalt::get_Parameters()
extern "C"  Il2CppObject * ParametersWithSalt_get_Parameters_m2591979059 (ParametersWithSalt_t433842492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
