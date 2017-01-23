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

// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t215653120;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Parameters.KeyParameter::.ctor(System.Byte[])
extern "C"  void KeyParameter__ctor_m381792505 (KeyParameter_t215653120 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Parameters.KeyParameter::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C"  void KeyParameter__ctor_m1081329133 (KeyParameter_t215653120 * __this, ByteU5BU5D_t3397334013* ___key0, int32_t ___keyOff1, int32_t ___keyLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::GetKey()
extern "C"  ByteU5BU5D_t3397334013* KeyParameter_GetKey_m3967335047 (KeyParameter_t215653120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
