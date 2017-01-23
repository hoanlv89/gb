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

// Org.BouncyCastle.Crypto.Parameters.KdfParameters
struct KdfParameters_t1337840219;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.KdfParameters::.ctor(System.Byte[],System.Byte[])
extern "C"  void KdfParameters__ctor_m482938399 (KdfParameters_t1337840219 * __this, ByteU5BU5D_t3397334013* ___shared0, ByteU5BU5D_t3397334013* ___iv1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KdfParameters::GetSharedSecret()
extern "C"  ByteU5BU5D_t3397334013* KdfParameters_GetSharedSecret_m2817547440 (KdfParameters_t1337840219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KdfParameters::GetIV()
extern "C"  ByteU5BU5D_t3397334013* KdfParameters_GetIV_m2730605186 (KdfParameters_t1337840219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
