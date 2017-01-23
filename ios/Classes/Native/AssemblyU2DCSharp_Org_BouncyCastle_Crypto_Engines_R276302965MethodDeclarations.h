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

// Org.BouncyCastle.Crypto.Engines.RC2WrapEngine
struct RC2WrapEngine_t276302965;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::.ctor()
extern "C"  void RC2WrapEngine__ctor_m1806508480 (RC2WrapEngine_t276302965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void RC2WrapEngine_Init_m3861683302 (RC2WrapEngine_t276302965 * __this, bool ___forWrapping0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::get_AlgorithmName()
extern "C"  String_t* RC2WrapEngine_get_AlgorithmName_m2925180108 (RC2WrapEngine_t276302965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::Wrap(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* RC2WrapEngine_Wrap_m2064173449 (RC2WrapEngine_t276302965 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::Unwrap(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* RC2WrapEngine_Unwrap_m3706865998 (RC2WrapEngine_t276302965 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::CalculateCmsKeyChecksum(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* RC2WrapEngine_CalculateCmsKeyChecksum_m602537338 (RC2WrapEngine_t276302965 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::CheckCmsKeyChecksum(System.Byte[],System.Byte[])
extern "C"  bool RC2WrapEngine_CheckCmsKeyChecksum_m3181564871 (RC2WrapEngine_t276302965 * __this, ByteU5BU5D_t3397334013* ___key0, ByteU5BU5D_t3397334013* ___checksum1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.RC2WrapEngine::.cctor()
extern "C"  void RC2WrapEngine__cctor_m2348989477 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
