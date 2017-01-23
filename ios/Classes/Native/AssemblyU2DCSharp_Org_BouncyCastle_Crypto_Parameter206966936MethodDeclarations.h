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

// Org.BouncyCastle.Crypto.Parameters.IesWithCipherParameters
struct IesWithCipherParameters_t206966936;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.IesWithCipherParameters::.ctor(System.Byte[],System.Byte[],System.Int32,System.Int32)
extern "C"  void IesWithCipherParameters__ctor_m374965808 (IesWithCipherParameters_t206966936 * __this, ByteU5BU5D_t3397334013* ___derivation0, ByteU5BU5D_t3397334013* ___encoding1, int32_t ___macKeySize2, int32_t ___cipherKeySize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.IesWithCipherParameters::get_CipherKeySize()
extern "C"  int32_t IesWithCipherParameters_get_CipherKeySize_m405459002 (IesWithCipherParameters_t206966936 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
