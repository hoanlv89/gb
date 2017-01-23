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

// Org.BouncyCastle.Utilities.IO.Pem.PemObject
struct PemObject_t1142728083;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.IList
struct IList_t3321498491;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Utilities.IO.Pem.PemObject::.ctor(System.String,System.Byte[])
extern "C"  void PemObject__ctor_m1417182403 (PemObject_t1142728083 * __this, String_t* ___type0, ByteU5BU5D_t3397334013* ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.Pem.PemObject::.ctor(System.String,System.Collections.IList,System.Byte[])
extern "C"  void PemObject__ctor_m2628480570 (PemObject_t1142728083 * __this, String_t* ___type0, Il2CppObject * ___headers1, ByteU5BU5D_t3397334013* ___content2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Utilities.IO.Pem.PemObject::get_Type()
extern "C"  String_t* PemObject_get_Type_m1032827674 (PemObject_t1142728083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Org.BouncyCastle.Utilities.IO.Pem.PemObject::get_Headers()
extern "C"  Il2CppObject * PemObject_get_Headers_m2753707371 (PemObject_t1142728083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Org.BouncyCastle.Utilities.IO.Pem.PemObject::get_Content()
extern "C"  ByteU5BU5D_t3397334013* PemObject_get_Content_m3596336448 (PemObject_t1142728083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IO.Pem.PemObject Org.BouncyCastle.Utilities.IO.Pem.PemObject::Generate()
extern "C"  PemObject_t1142728083 * PemObject_Generate_m809715643 (PemObject_t1142728083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
