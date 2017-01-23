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

// Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher
struct OpenPgpCfbBlockCipher_t1145356922;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void OpenPgpCfbBlockCipher__ctor_m962613120 (OpenPgpCfbBlockCipher_t1145356922 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::GetUnderlyingCipher()
extern "C"  Il2CppObject * OpenPgpCfbBlockCipher_GetUnderlyingCipher_m1369534945 (OpenPgpCfbBlockCipher_t1145356922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::get_AlgorithmName()
extern "C"  String_t* OpenPgpCfbBlockCipher_get_AlgorithmName_m3608381232 (OpenPgpCfbBlockCipher_t1145356922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::get_IsPartialBlockOkay()
extern "C"  bool OpenPgpCfbBlockCipher_get_IsPartialBlockOkay_m2649099735 (OpenPgpCfbBlockCipher_t1145356922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::GetBlockSize()
extern "C"  int32_t OpenPgpCfbBlockCipher_GetBlockSize_m2679038124 (OpenPgpCfbBlockCipher_t1145356922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t OpenPgpCfbBlockCipher_ProcessBlock_m3844782696 (OpenPgpCfbBlockCipher_t1145356922 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___output2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::Reset()
extern "C"  void OpenPgpCfbBlockCipher_Reset_m1166371223 (OpenPgpCfbBlockCipher_t1145356922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void OpenPgpCfbBlockCipher_Init_m3357539138 (OpenPgpCfbBlockCipher_t1145356922 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::EncryptByte(System.Byte,System.Int32)
extern "C"  uint8_t OpenPgpCfbBlockCipher_EncryptByte_m3670488097 (OpenPgpCfbBlockCipher_t1145356922 * __this, uint8_t ___data0, int32_t ___blockOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t OpenPgpCfbBlockCipher_EncryptBlock_m2797804700 (OpenPgpCfbBlockCipher_t1145356922 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t OpenPgpCfbBlockCipher_DecryptBlock_m2439730552 (OpenPgpCfbBlockCipher_t1145356922 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, ByteU5BU5D_t3397334013* ___outBytes2, int32_t ___outOff3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
