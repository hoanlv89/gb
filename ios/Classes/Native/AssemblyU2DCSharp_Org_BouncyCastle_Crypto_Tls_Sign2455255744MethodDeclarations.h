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

// Org.BouncyCastle.Crypto.Tls.SignerInputBuffer/SigStream
struct SigStream_t2455255744;
// Org.BouncyCastle.Crypto.ISigner
struct ISigner_t3640387509;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Tls.SignerInputBuffer/SigStream::.ctor(Org.BouncyCastle.Crypto.ISigner)
extern "C"  void SigStream__ctor_m3253787863 (SigStream_t2455255744 * __this, Il2CppObject * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.SignerInputBuffer/SigStream::WriteByte(System.Byte)
extern "C"  void SigStream_WriteByte_m2067821115 (SigStream_t2455255744 * __this, uint8_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.SignerInputBuffer/SigStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void SigStream_Write_m4156415327 (SigStream_t2455255744 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___off1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
