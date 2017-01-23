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

// Org.BouncyCastle.Crypto.BufferedStreamCipher
struct BufferedStreamCipher_t702588694;
// Org.BouncyCastle.Crypto.IStreamCipher
struct IStreamCipher_t1073853310;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.BufferedStreamCipher::.ctor(Org.BouncyCastle.Crypto.IStreamCipher)
extern "C"  void BufferedStreamCipher__ctor_m3310053423 (BufferedStreamCipher_t702588694 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.BufferedStreamCipher::get_AlgorithmName()
extern "C"  String_t* BufferedStreamCipher_get_AlgorithmName_m3843716092 (BufferedStreamCipher_t702588694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.BufferedStreamCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void BufferedStreamCipher_Init_m3722056528 (BufferedStreamCipher_t702588694 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedStreamCipher::GetBlockSize()
extern "C"  int32_t BufferedStreamCipher_GetBlockSize_m2509310798 (BufferedStreamCipher_t702588694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedStreamCipher::GetOutputSize(System.Int32)
extern "C"  int32_t BufferedStreamCipher_GetOutputSize_m2192139715 (BufferedStreamCipher_t702588694 * __this, int32_t ___inputLen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedStreamCipher::GetUpdateOutputSize(System.Int32)
extern "C"  int32_t BufferedStreamCipher_GetUpdateOutputSize_m3662434596 (BufferedStreamCipher_t702588694 * __this, int32_t ___inputLen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedStreamCipher::ProcessByte(System.Byte)
extern "C"  ByteU5BU5D_t3397334013* BufferedStreamCipher_ProcessByte_m3603658448 (BufferedStreamCipher_t702588694 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedStreamCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
extern "C"  int32_t BufferedStreamCipher_ProcessByte_m2772675078 (BufferedStreamCipher_t702588694 * __this, uint8_t ___input0, ByteU5BU5D_t3397334013* ___output1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedStreamCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* BufferedStreamCipher_ProcessBytes_m2259109997 (BufferedStreamCipher_t702588694 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.BufferedStreamCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t BufferedStreamCipher_ProcessBytes_m650711161 (BufferedStreamCipher_t702588694 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, ByteU5BU5D_t3397334013* ___output3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedStreamCipher::DoFinal()
extern "C"  ByteU5BU5D_t3397334013* BufferedStreamCipher_DoFinal_m1942903371 (BufferedStreamCipher_t702588694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.BufferedStreamCipher::DoFinal(System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* BufferedStreamCipher_DoFinal_m322541750 (BufferedStreamCipher_t702588694 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.BufferedStreamCipher::Reset()
extern "C"  void BufferedStreamCipher_Reset_m4077945889 (BufferedStreamCipher_t702588694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
