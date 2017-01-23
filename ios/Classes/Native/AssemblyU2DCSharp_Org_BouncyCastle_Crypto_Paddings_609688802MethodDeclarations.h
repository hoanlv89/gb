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

// Org.BouncyCastle.Crypto.Paddings.ISO7816d4Padding
struct ISO7816d4Padding_t609688802;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"

// System.Void Org.BouncyCastle.Crypto.Paddings.ISO7816d4Padding::.ctor()
extern "C"  void ISO7816d4Padding__ctor_m2879193490 (ISO7816d4Padding_t609688802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Paddings.ISO7816d4Padding::Init(Org.BouncyCastle.Security.SecureRandom)
extern "C"  void ISO7816d4Padding_Init_m3491336146 (ISO7816d4Padding_t609688802 * __this, SecureRandom_t3117234712 * ___random0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Paddings.ISO7816d4Padding::get_PaddingName()
extern "C"  String_t* ISO7816d4Padding_get_PaddingName_m3409320570 (ISO7816d4Padding_t609688802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.ISO7816d4Padding::AddPadding(System.Byte[],System.Int32)
extern "C"  int32_t ISO7816d4Padding_AddPadding_m1815958420 (ISO7816d4Padding_t609688802 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.ISO7816d4Padding::PadCount(System.Byte[])
extern "C"  int32_t ISO7816d4Padding_PadCount_m770299419 (ISO7816d4Padding_t609688802 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
