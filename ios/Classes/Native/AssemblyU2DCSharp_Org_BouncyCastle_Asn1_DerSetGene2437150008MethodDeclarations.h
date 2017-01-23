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

// Org.BouncyCastle.Asn1.DerSetGenerator
struct DerSetGenerator_t2437150008;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"

// System.Void Org.BouncyCastle.Asn1.DerSetGenerator::.ctor(System.IO.Stream)
extern "C"  void DerSetGenerator__ctor_m86096927 (DerSetGenerator_t2437150008 * __this, Stream_t3255436806 * ___outStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerSetGenerator::.ctor(System.IO.Stream,System.Int32,System.Boolean)
extern "C"  void DerSetGenerator__ctor_m1221354277 (DerSetGenerator_t2437150008 * __this, Stream_t3255436806 * ___outStream0, int32_t ___tagNo1, bool ___isExplicit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerSetGenerator::AddObject(Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void DerSetGenerator_AddObject_m2530661361 (DerSetGenerator_t2437150008 * __this, Asn1Encodable_t3447851422 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Org.BouncyCastle.Asn1.DerSetGenerator::GetRawOutputStream()
extern "C"  Stream_t3255436806 * DerSetGenerator_GetRawOutputStream_m1530125209 (DerSetGenerator_t2437150008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.DerSetGenerator::Close()
extern "C"  void DerSetGenerator_Close_m1802628558 (DerSetGenerator_t2437150008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
