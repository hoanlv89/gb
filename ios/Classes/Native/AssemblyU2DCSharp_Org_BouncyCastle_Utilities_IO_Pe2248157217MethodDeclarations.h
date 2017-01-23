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

// Org.BouncyCastle.Utilities.IO.Pem.PemWriter
struct PemWriter_t2248157217;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// Org.BouncyCastle.Utilities.IO.Pem.PemObject
struct PemObject_t1142728083;
// Org.BouncyCastle.Utilities.IO.Pem.PemObjectGenerator
struct PemObjectGenerator_t1483901832;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Utilities_IO_Pe1142728083.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Utilities.IO.Pem.PemWriter::.ctor(System.IO.TextWriter)
extern "C"  void PemWriter__ctor_m682865721 (PemWriter_t2248157217 * __this, TextWriter_t4027217640 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter Org.BouncyCastle.Utilities.IO.Pem.PemWriter::get_Writer()
extern "C"  TextWriter_t4027217640 * PemWriter_get_Writer_m1109124470 (PemWriter_t2248157217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Utilities.IO.Pem.PemWriter::GetOutputSize(Org.BouncyCastle.Utilities.IO.Pem.PemObject)
extern "C"  int32_t PemWriter_GetOutputSize_m730419611 (PemWriter_t2248157217 * __this, PemObject_t1142728083 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.Pem.PemWriter::WriteObject(Org.BouncyCastle.Utilities.IO.Pem.PemObjectGenerator)
extern "C"  void PemWriter_WriteObject_m3868558650 (PemWriter_t2248157217 * __this, Il2CppObject * ___objGen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.Pem.PemWriter::WriteEncoded(System.Byte[])
extern "C"  void PemWriter_WriteEncoded_m3561177298 (PemWriter_t2248157217 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.Pem.PemWriter::WritePreEncapsulationBoundary(System.String)
extern "C"  void PemWriter_WritePreEncapsulationBoundary_m93761250 (PemWriter_t2248157217 * __this, String_t* ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Utilities.IO.Pem.PemWriter::WritePostEncapsulationBoundary(System.String)
extern "C"  void PemWriter_WritePostEncapsulationBoundary_m159368069 (PemWriter_t2248157217 * __this, String_t* ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
