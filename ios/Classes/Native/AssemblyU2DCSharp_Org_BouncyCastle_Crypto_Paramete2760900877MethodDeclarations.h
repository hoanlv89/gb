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

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2760900877;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::.ctor(Org.BouncyCastle.Crypto.ICipherParameters,System.Byte[])
extern "C"  void ParametersWithIV__ctor_m2641033061 (ParametersWithIV_t2760900877 * __this, Il2CppObject * ___parameters0, ByteU5BU5D_t3397334013* ___iv1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::.ctor(Org.BouncyCastle.Crypto.ICipherParameters,System.Byte[],System.Int32,System.Int32)
extern "C"  void ParametersWithIV__ctor_m587179241 (ParametersWithIV_t2760900877 * __this, Il2CppObject * ___parameters0, ByteU5BU5D_t3397334013* ___iv1, int32_t ___ivOff2, int32_t ___ivLen3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::GetIV()
extern "C"  ByteU5BU5D_t3397334013* ParametersWithIV_GetIV_m3273206564 (ParametersWithIV_t2760900877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::get_Parameters()
extern "C"  Il2CppObject * ParametersWithIV_get_Parameters_m3998407736 (ParametersWithIV_t2760900877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
