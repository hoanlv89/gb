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

// Org.BouncyCastle.Crypto.Engines.DesEdeWrapEngine
struct DesEdeWrapEngine_t4248411376;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Engines.DesEdeWrapEngine::.ctor()
extern "C"  void DesEdeWrapEngine__ctor_m4118200879 (DesEdeWrapEngine_t4248411376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.DesEdeWrapEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void DesEdeWrapEngine_Init_m3384815847 (DesEdeWrapEngine_t4248411376 * __this, bool ___forWrapping0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Engines.DesEdeWrapEngine::get_AlgorithmName()
extern "C"  String_t* DesEdeWrapEngine_get_AlgorithmName_m1920741295 (DesEdeWrapEngine_t4248411376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.DesEdeWrapEngine::Wrap(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* DesEdeWrapEngine_Wrap_m150537346 (DesEdeWrapEngine_t4248411376 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.DesEdeWrapEngine::Unwrap(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* DesEdeWrapEngine_Unwrap_m1566077367 (DesEdeWrapEngine_t4248411376 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.DesEdeWrapEngine::CalculateCmsKeyChecksum(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* DesEdeWrapEngine_CalculateCmsKeyChecksum_m2762980795 (DesEdeWrapEngine_t4248411376 * __this, ByteU5BU5D_t3397334013* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Engines.DesEdeWrapEngine::CheckCmsKeyChecksum(System.Byte[],System.Byte[])
extern "C"  bool DesEdeWrapEngine_CheckCmsKeyChecksum_m3913755198 (DesEdeWrapEngine_t4248411376 * __this, ByteU5BU5D_t3397334013* ___key0, ByteU5BU5D_t3397334013* ___checksum1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.DesEdeWrapEngine::reverse(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* DesEdeWrapEngine_reverse_m2310758090 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.DesEdeWrapEngine::.cctor()
extern "C"  void DesEdeWrapEngine__cctor_m2908328332 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
