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

// Org.BouncyCastle.Crypto.Check
struct Check_t1143849288;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Crypto.Check::.ctor()
extern "C"  void Check__ctor_m3680439540 (Check_t1143849288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Check::DataLength(System.Boolean,System.String)
extern "C"  void Check_DataLength_m2089168599 (Il2CppObject * __this /* static, unused */, bool ___condition0, String_t* ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Check::DataLength(System.Byte[],System.Int32,System.Int32,System.String)
extern "C"  void Check_DataLength_m2209015795 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, int32_t ___off1, int32_t ___len2, String_t* ___msg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Crypto.Check::OutputLength(System.Byte[],System.Int32,System.Int32,System.String)
extern "C"  void Check_OutputLength_m4149101236 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, int32_t ___off1, int32_t ___len2, String_t* ___msg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
