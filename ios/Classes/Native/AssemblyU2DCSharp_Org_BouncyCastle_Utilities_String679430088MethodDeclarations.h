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

// Org.BouncyCastle.Utilities.Strings
struct Strings_t679430088;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Utilities.Strings::.ctor()
extern "C"  void Strings__ctor_m1770736011 (Strings_t679430088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Utilities.Strings::IsOneOf(System.String,System.String[])
extern "C"  bool Strings_IsOneOf_m3024224392 (Il2CppObject * __this /* static, unused */, String_t* ___s0, StringU5BU5D_t1642385972* ___candidates1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Utilities.Strings::FromByteArray(System.Byte[])
extern "C"  String_t* Strings_FromByteArray_m983017152 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.Strings::ToByteArray(System.Char[])
extern "C"  ByteU5BU5D_t3397334013* Strings_ToByteArray_m1521648586 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___cs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.Strings::ToByteArray(System.String)
extern "C"  ByteU5BU5D_t3397334013* Strings_ToByteArray_m2567600517 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Utilities.Strings::FromAsciiByteArray(System.Byte[])
extern "C"  String_t* Strings_FromAsciiByteArray_m898651785 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.Strings::ToAsciiByteArray(System.Char[])
extern "C"  ByteU5BU5D_t3397334013* Strings_ToAsciiByteArray_m1950513815 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___cs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.Strings::ToAsciiByteArray(System.String)
extern "C"  ByteU5BU5D_t3397334013* Strings_ToAsciiByteArray_m756260032 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Utilities.Strings::FromUtf8ByteArray(System.Byte[])
extern "C"  String_t* Strings_FromUtf8ByteArray_m2324132011 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.Strings::ToUtf8ByteArray(System.Char[])
extern "C"  ByteU5BU5D_t3397334013* Strings_ToUtf8ByteArray_m379607373 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___cs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.Strings::ToUtf8ByteArray(System.String)
extern "C"  ByteU5BU5D_t3397334013* Strings_ToUtf8ByteArray_m777031310 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
