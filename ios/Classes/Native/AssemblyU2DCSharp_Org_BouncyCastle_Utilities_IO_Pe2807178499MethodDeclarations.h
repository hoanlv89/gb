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

// Org.BouncyCastle.Utilities.IO.Pem.PemReader
struct PemReader_t2807178499;
// System.IO.TextReader
struct TextReader_t1561828458;
// Org.BouncyCastle.Utilities.IO.Pem.PemObject
struct PemObject_t1142728083;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Utilities.IO.Pem.PemReader::.ctor(System.IO.TextReader)
extern "C"  void PemReader__ctor_m2276630137 (PemReader_t2807178499 * __this, TextReader_t1561828458 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader Org.BouncyCastle.Utilities.IO.Pem.PemReader::get_Reader()
extern "C"  TextReader_t1561828458 * PemReader_get_Reader_m2816012730 (PemReader_t2807178499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IO.Pem.PemObject Org.BouncyCastle.Utilities.IO.Pem.PemReader::ReadPemObject()
extern "C"  PemObject_t1142728083 * PemReader_ReadPemObject_m463377147 (PemReader_t2807178499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Utilities.IO.Pem.PemObject Org.BouncyCastle.Utilities.IO.Pem.PemReader::LoadObject(System.String)
extern "C"  PemObject_t1142728083 * PemReader_LoadObject_m413326129 (PemReader_t2807178499 * __this, String_t* ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
