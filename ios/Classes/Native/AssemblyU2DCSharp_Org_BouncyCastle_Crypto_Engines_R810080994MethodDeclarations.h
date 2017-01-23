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

// Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine
struct Rfc3211WrapEngine_t810080994;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void Rfc3211WrapEngine__ctor_m1124576305 (Rfc3211WrapEngine_t810080994 * __this, Il2CppObject * ___engine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void Rfc3211WrapEngine_Init_m3015189999 (Rfc3211WrapEngine_t810080994 * __this, bool ___forWrapping0, Il2CppObject * ___param1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine::get_AlgorithmName()
extern "C"  String_t* Rfc3211WrapEngine_get_AlgorithmName_m1674863971 (Rfc3211WrapEngine_t810080994 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine::Wrap(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Rfc3211WrapEngine_Wrap_m3181313036 (Rfc3211WrapEngine_t810080994 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine::Unwrap(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* Rfc3211WrapEngine_Unwrap_m808365599 (Rfc3211WrapEngine_t810080994 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
