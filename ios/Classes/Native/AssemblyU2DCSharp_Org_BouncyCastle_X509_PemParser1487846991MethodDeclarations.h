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

// Org.BouncyCastle.X509.PemParser
struct PemParser_t1487846991;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Asn1.Asn1Sequence
struct Asn1Sequence_t54253652;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.X509.PemParser::.ctor(System.String)
extern "C"  void PemParser__ctor_m4050347094 (PemParser_t1487846991 * __this, String_t* ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.X509.PemParser::ReadLine(System.IO.Stream)
extern "C"  String_t* PemParser_ReadLine_m906266748 (PemParser_t1487846991 * __this, Stream_t3255436806 * ___inStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Sequence Org.BouncyCastle.X509.PemParser::ReadPemObject(System.IO.Stream)
extern "C"  Asn1Sequence_t54253652 * PemParser_ReadPemObject_m3281981264 (PemParser_t1487846991 * __this, Stream_t3255436806 * ___inStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
