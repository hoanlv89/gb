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

// Org.BouncyCastle.Crypto.Modes.EaxBlockCipher
struct EaxBlockCipher_t1200038734;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void EaxBlockCipher__ctor_m195995500 (EaxBlockCipher_t1200038734 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::get_AlgorithmName()
extern "C"  String_t* EaxBlockCipher_get_AlgorithmName_m1901457786 (EaxBlockCipher_t1200038734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::GetUnderlyingCipher()
extern "C"  Il2CppObject * EaxBlockCipher_GetUnderlyingCipher_m3741136229 (EaxBlockCipher_t1200038734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::GetBlockSize()
extern "C"  int32_t EaxBlockCipher_GetBlockSize_m1811929820 (EaxBlockCipher_t1200038734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void EaxBlockCipher_Init_m2327849218 (EaxBlockCipher_t1200038734 * __this, bool ___forEncryption0, Il2CppObject * ___parameters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::InitCipher()
extern "C"  void EaxBlockCipher_InitCipher_m299951081 (EaxBlockCipher_t1200038734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::CalculateMac()
extern "C"  void EaxBlockCipher_CalculateMac_m1038570929 (EaxBlockCipher_t1200038734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::Reset()
extern "C"  void EaxBlockCipher_Reset_m1127484099 (EaxBlockCipher_t1200038734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::Reset(System.Boolean)
extern "C"  void EaxBlockCipher_Reset_m496785042 (EaxBlockCipher_t1200038734 * __this, bool ___clearMac0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::ProcessAadByte(System.Byte)
extern "C"  void EaxBlockCipher_ProcessAadByte_m1925877220 (EaxBlockCipher_t1200038734 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void EaxBlockCipher_ProcessAadBytes_m863164783 (EaxBlockCipher_t1200038734 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
extern "C"  int32_t EaxBlockCipher_ProcessByte_m4162560176 (EaxBlockCipher_t1200038734 * __this, uint8_t ___input0, ByteU5BU5D_t3397334013* ___outBytes1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t EaxBlockCipher_ProcessBytes_m1875407459 (EaxBlockCipher_t1200038734 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_t3397334013* ___outBytes3, int32_t ___outOff4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t EaxBlockCipher_DoFinal_m2614157133 (EaxBlockCipher_t1200038734 * __this, ByteU5BU5D_t3397334013* ___outBytes0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::GetMac()
extern "C"  ByteU5BU5D_t3397334013* EaxBlockCipher_GetMac_m3688129399 (EaxBlockCipher_t1200038734 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::GetUpdateOutputSize(System.Int32)
extern "C"  int32_t EaxBlockCipher_GetUpdateOutputSize_m2168373278 (EaxBlockCipher_t1200038734 * __this, int32_t ___len0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::GetOutputSize(System.Int32)
extern "C"  int32_t EaxBlockCipher_GetOutputSize_m3032386341 (EaxBlockCipher_t1200038734 * __this, int32_t ___len0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::Process(System.Byte,System.Byte[],System.Int32)
extern "C"  int32_t EaxBlockCipher_Process_m2025005202 (EaxBlockCipher_t1200038734 * __this, uint8_t ___b0, ByteU5BU5D_t3397334013* ___outBytes1, int32_t ___outOff2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::VerifyMac(System.Byte[],System.Int32)
extern "C"  bool EaxBlockCipher_VerifyMac_m415344888 (EaxBlockCipher_t1200038734 * __this, ByteU5BU5D_t3397334013* ___mac0, int32_t ___off1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
