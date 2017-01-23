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

// Org.BouncyCastle.Crypto.Paddings.X923Padding
struct X923Padding_t2660499907;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_t3117234712;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Security_Secure3117234712.h"

// System.Void Org.BouncyCastle.Crypto.Paddings.X923Padding::.ctor()
extern "C"  void X923Padding__ctor_m4177060497 (X923Padding_t2660499907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Paddings.X923Padding::Init(Org.BouncyCastle.Security.SecureRandom)
extern "C"  void X923Padding_Init_m3175951233 (X923Padding_t2660499907 * __this, SecureRandom_t3117234712 * ___random0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Crypto.Paddings.X923Padding::get_PaddingName()
extern "C"  String_t* X923Padding_get_PaddingName_m1793112291 (X923Padding_t2660499907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.X923Padding::AddPadding(System.Byte[],System.Int32)
extern "C"  int32_t X923Padding_AddPadding_m3219607277 (X923Padding_t2660499907 * __this, ByteU5BU5D_t3397334013* ___input0, int32_t ___inOff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.X923Padding::PadCount(System.Byte[])
extern "C"  int32_t X923Padding_PadCount_m1703905462 (X923Padding_t2660499907 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
