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

// Org.BouncyCastle.Crypto.Parameters.IesParameters
struct IesParameters_t4148998567;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.IesParameters::.ctor(System.Byte[],System.Byte[],System.Int32)
extern "C"  void IesParameters__ctor_m968405808 (IesParameters_t4148998567 * __this, ByteU5BU5D_t3397334013* ___derivation0, ByteU5BU5D_t3397334013* ___encoding1, int32_t ___macKeySize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.IesParameters::GetDerivationV()
extern "C"  ByteU5BU5D_t3397334013* IesParameters_GetDerivationV_m1195154300 (IesParameters_t4148998567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.IesParameters::GetEncodingV()
extern "C"  ByteU5BU5D_t3397334013* IesParameters_GetEncodingV_m1435970220 (IesParameters_t4148998567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.IesParameters::get_MacKeySize()
extern "C"  int32_t IesParameters_get_MacKeySize_m796785607 (IesParameters_t4148998567 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
