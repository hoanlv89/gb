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

// Org.BouncyCastle.Asn1.LazyAsn1InputStream
struct LazyAsn1InputStream_t2434367547;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Asn1.DerSequence
struct DerSequence_t4250014174;
// Org.BouncyCastle.Asn1.DefiniteLengthInputStream
struct DefiniteLengthInputStream_t1065419872;
// Org.BouncyCastle.Asn1.DerSet
struct DerSet_t2720781401;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DefiniteLe1065419872.h"

// System.Void Org.BouncyCastle.Asn1.LazyAsn1InputStream::.ctor(System.Byte[])
extern "C"  void LazyAsn1InputStream__ctor_m4137036394 (LazyAsn1InputStream_t2434367547 * __this, ByteU5BU5D_t3397334013* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.LazyAsn1InputStream::.ctor(System.IO.Stream)
extern "C"  void LazyAsn1InputStream__ctor_m3684364168 (LazyAsn1InputStream_t2434367547 * __this, Stream_t3255436806 * ___inputStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerSequence Org.BouncyCastle.Asn1.LazyAsn1InputStream::CreateDerSequence(Org.BouncyCastle.Asn1.DefiniteLengthInputStream)
extern "C"  DerSequence_t4250014174 * LazyAsn1InputStream_CreateDerSequence_m3232684574 (LazyAsn1InputStream_t2434367547 * __this, DefiniteLengthInputStream_t1065419872 * ___dIn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.DerSet Org.BouncyCastle.Asn1.LazyAsn1InputStream::CreateDerSet(Org.BouncyCastle.Asn1.DefiniteLengthInputStream)
extern "C"  DerSet_t2720781401 * LazyAsn1InputStream_CreateDerSet_m259414510 (LazyAsn1InputStream_t2434367547 * __this, DefiniteLengthInputStream_t1065419872 * ___dIn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
