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

// Org.BouncyCastle.Crypto.Paddings.ISO10126d2Padding
struct ISO10126d2Padding_t3010076608;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"

// System.Void Org.BouncyCastle.Crypto.Paddings.ISO10126d2Padding::.ctor()
extern "C"  void ISO10126d2Padding__ctor_m2132246632 (ISO10126d2Padding_t3010076608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Paddings.ISO10126d2Padding::Init(Org.BouncyCastle.Security.SecureRandom)
extern "C"  void ISO10126d2Padding_Init_m2142890552 (ISO10126d2Padding_t3010076608 * __this, SecureRandom_t3117234712 * ___random0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Paddings.ISO10126d2Padding::get_PaddingName()
extern "C"  String_t* ISO10126d2Padding_get_PaddingName_m223030014 (ISO10126d2Padding_t3010076608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.ISO10126d2Padding::AddPadding(System.Byte[],System.Int32)
extern "C"  int32_t ISO10126d2Padding_AddPadding_m804518658 (ISO10126d2Padding_t3010076608 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.ISO10126d2Padding::PadCount(System.Byte[])
extern "C"  int32_t ISO10126d2Padding_PadCount_m669119065 (ISO10126d2Padding_t3010076608 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
