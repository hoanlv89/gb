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

// Org.BouncyCastle.Crypto.Paddings.TbcPadding
struct TbcPadding_t3233791910;
// System.String
struct String_t;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"

// System.Void Org.BouncyCastle.Crypto.Paddings.TbcPadding::.ctor()
extern "C"  void TbcPadding__ctor_m342795576 (TbcPadding_t3233791910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Paddings.TbcPadding::get_PaddingName()
extern "C"  String_t* TbcPadding_get_PaddingName_m2644479248 (TbcPadding_t3233791910 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Paddings.TbcPadding::Init(Org.BouncyCastle.Security.SecureRandom)
extern "C"  void TbcPadding_Init_m746281672 (TbcPadding_t3233791910 * __this, SecureRandom_t3117234712 * ___random0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.TbcPadding::AddPadding(System.Byte[],System.Int32)
extern "C"  int32_t TbcPadding_AddPadding_m2993275158 (TbcPadding_t3233791910 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.TbcPadding::PadCount(System.Byte[])
extern "C"  int32_t TbcPadding_PadCount_m3148423823 (TbcPadding_t3233791910 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
