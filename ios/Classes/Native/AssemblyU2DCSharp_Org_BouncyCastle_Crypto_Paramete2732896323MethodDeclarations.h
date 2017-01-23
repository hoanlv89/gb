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

// Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters
struct DsaValidationParameters_t2732896323;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete2732896323.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters::.ctor(System.Byte[],System.Int32)
extern "C"  void DsaValidationParameters__ctor_m246204089 (DsaValidationParameters_t2732896323 * __this, ByteU5BU5D_t3397334013* ___seed0, int32_t ___counter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C"  void DsaValidationParameters__ctor_m2008057398 (DsaValidationParameters_t2732896323 * __this, ByteU5BU5D_t3397334013* ___seed0, int32_t ___counter1, int32_t ___usageIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters::GetSeed()
extern "C"  ByteU5BU5D_t3397334013* DsaValidationParameters_GetSeed_m375042652 (DsaValidationParameters_t2732896323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters::get_Counter()
extern "C"  int32_t DsaValidationParameters_get_Counter_m3105515036 (DsaValidationParameters_t2732896323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters::get_UsageIndex()
extern "C"  int32_t DsaValidationParameters_get_UsageIndex_m3041659263 (DsaValidationParameters_t2732896323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters::Equals(System.Object)
extern "C"  bool DsaValidationParameters_Equals_m2620232022 (DsaValidationParameters_t2732896323 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters::Equals(Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters)
extern "C"  bool DsaValidationParameters_Equals_m4282712204 (DsaValidationParameters_t2732896323 * __this, DsaValidationParameters_t2732896323 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters::GetHashCode()
extern "C"  int32_t DsaValidationParameters_GetHashCode_m1401093210 (DsaValidationParameters_t2732896323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
