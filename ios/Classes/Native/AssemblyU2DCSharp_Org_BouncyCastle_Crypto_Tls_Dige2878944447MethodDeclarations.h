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

// Org.BouncyCastle.Crypto.Tls.DigestInputBuffer/DigStream
struct DigStream_t2878944447;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1344033143;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Tls.DigestInputBuffer/DigStream::.ctor(Org.BouncyCastle.Crypto.IDigest)
extern "C"  void DigStream__ctor_m2981251658 (DigStream_t2878944447 * __this, Il2CppObject * ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.DigestInputBuffer/DigStream::WriteByte(System.Byte)
extern "C"  void DigStream_WriteByte_m3712135906 (DigStream_t2878944447 * __this, uint8_t ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Tls.DigestInputBuffer/DigStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void DigStream_Write_m3617147342 (DigStream_t2878944447 * __this, ByteU5BU5D_t3397334013* ___buf0, int32_t ___off1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
