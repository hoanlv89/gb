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

// Org.BouncyCastle.Crypto.Engines.IesEngine
struct IesEngine_t1284744109;
// Org.BouncyCastle.Crypto.IBasicAgreement
struct IBasicAgreement_t1732109445;
// Org.BouncyCastle.Crypto.IDerivationFunction
struct IDerivationFunction_t1910850828;
// Org.BouncyCastle.Crypto.IMac
struct IMac_t2321756708;
// Org.BouncyCastle.Crypto.BufferedBlockCipher
struct BufferedBlockCipher_t711630611;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.Parameters.KdfParameters
struct KdfParameters_t1337840219;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_BufferedB711630611.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Crypto_Paramete1337840219.h"

// System.Void Org.BouncyCastle.Crypto.Engines.IesEngine::.ctor(Org.BouncyCastle.Crypto.IBasicAgreement,Org.BouncyCastle.Crypto.IDerivationFunction,Org.BouncyCastle.Crypto.IMac)
extern "C"  void IesEngine__ctor_m1437225256 (IesEngine_t1284744109 * __this, Il2CppObject * ___agree0, Il2CppObject * ___kdf1, Il2CppObject * ___mac2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.IesEngine::.ctor(Org.BouncyCastle.Crypto.IBasicAgreement,Org.BouncyCastle.Crypto.IDerivationFunction,Org.BouncyCastle.Crypto.IMac,Org.BouncyCastle.Crypto.BufferedBlockCipher)
extern "C"  void IesEngine__ctor_m3135878434 (IesEngine_t1284744109 * __this, Il2CppObject * ___agree0, Il2CppObject * ___kdf1, Il2CppObject * ___mac2, BufferedBlockCipher_t711630611 * ___cipher3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Engines.IesEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters,Org.BouncyCastle.Crypto.ICipherParameters,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void IesEngine_Init_m3257784990 (IesEngine_t1284744109 * __this, bool ___forEncryption0, Il2CppObject * ___privParameters1, Il2CppObject * ___pubParameters2, Il2CppObject * ___iesParameters3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.IesEngine::DecryptBlock(System.Byte[],System.Int32,System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* IesEngine_DecryptBlock_m4140038852 (IesEngine_t1284744109 * __this, ByteU5BU5D_t3397334013* ___in_enc0, int32_t ___inOff1, int32_t ___inLen2, ByteU5BU5D_t3397334013* ___z3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.IesEngine::EncryptBlock(System.Byte[],System.Int32,System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* IesEngine_EncryptBlock_m1419595528 (IesEngine_t1284744109 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___inLen2, ByteU5BU5D_t3397334013* ___z3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.IesEngine::GenerateKdfBytes(Org.BouncyCastle.Crypto.Parameters.KdfParameters,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* IesEngine_GenerateKdfBytes_m4184955916 (IesEngine_t1284744109 * __this, KdfParameters_t1337840219 * ___kParam0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.IesEngine::ProcessBlock(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* IesEngine_ProcessBlock_m3786581191 (IesEngine_t1284744109 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___inLen2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
