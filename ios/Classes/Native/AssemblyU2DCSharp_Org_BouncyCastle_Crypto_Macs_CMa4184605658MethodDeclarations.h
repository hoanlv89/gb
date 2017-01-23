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

// Org.BouncyCastle.Crypto.Macs.CMac
struct CMac_t4184605658;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t916483717;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_t3082042576;

#include "codegen/il2cpp-codegen.h"

// System.Void Org.BouncyCastle.Crypto.Macs.CMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
extern "C"  void CMac__ctor_m1553483326 (CMac_t4184605658 * __this, Il2CppObject * ___cipher0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
extern "C"  void CMac__ctor_m2693190949 (CMac_t4184605658 * __this, Il2CppObject * ___cipher0, int32_t ___macSizeInBits1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Macs.CMac::get_AlgorithmName()
extern "C"  String_t* CMac_get_AlgorithmName_m261472362 (CMac_t4184605658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.CMac::ShiftLeft(System.Byte[],System.Byte[])
extern "C"  int32_t CMac_ShiftLeft_m1295234135 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___block0, ByteU5BU5D_t3397334013* ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Crypto.Macs.CMac::DoubleLu(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* CMac_DoubleLu_m141948965 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CMac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
extern "C"  void CMac_Init_m4233402137 (CMac_t4184605658 * __this, Il2CppObject * ___parameters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.CMac::GetMacSize()
extern "C"  int32_t CMac_GetMacSize_m1137102252 (CMac_t4184605658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CMac::Update(System.Byte)
extern "C"  void CMac_Update_m2174132096 (CMac_t4184605658 * __this, uint8_t ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CMac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
extern "C"  void CMac_BlockUpdate_m16669365 (CMac_t4184605658 * __this, ByteU5BU5D_t3397334013* ___inBytes0, int32_t ___inOff1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Macs.CMac::DoFinal(System.Byte[],System.Int32)
extern "C"  int32_t CMac_DoFinal_m30086037 (CMac_t4184605658 * __this, ByteU5BU5D_t3397334013* ___outBytes0, int32_t ___outOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Macs.CMac::Reset()
extern "C"  void CMac_Reset_m18938115 (CMac_t4184605658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
