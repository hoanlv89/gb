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

// Org.BouncyCastle.Asn1.BerGenerator
struct BerGenerator_t1021114948;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"

// System.Void Org.BouncyCastle.Asn1.BerGenerator::.ctor(System.IO.Stream)
extern "C"  void BerGenerator__ctor_m1804772227 (BerGenerator_t1021114948 * __this, Stream_t3255436806 * ___outStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerGenerator::.ctor(System.IO.Stream,System.Int32,System.Boolean)
extern "C"  void BerGenerator__ctor_m2615383225 (BerGenerator_t1021114948 * __this, Stream_t3255436806 * ___outStream0, int32_t ___tagNo1, bool ___isExplicit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerGenerator::AddObject(Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  void BerGenerator_AddObject_m159181909 (BerGenerator_t1021114948 * __this, Asn1Encodable_t3447851422 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Org.BouncyCastle.Asn1.BerGenerator::GetRawOutputStream()
extern "C"  Stream_t3255436806 * BerGenerator_GetRawOutputStream_m3567625533 (BerGenerator_t1021114948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerGenerator::Close()
extern "C"  void BerGenerator_Close_m316368568 (BerGenerator_t1021114948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerGenerator::WriteHdr(System.Int32)
extern "C"  void BerGenerator_WriteHdr_m1722215236 (BerGenerator_t1021114948 * __this, int32_t ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerGenerator::WriteBerHeader(System.Int32)
extern "C"  void BerGenerator_WriteBerHeader_m3684505218 (BerGenerator_t1021114948 * __this, int32_t ___tag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerGenerator::WriteBerBody(System.IO.Stream)
extern "C"  void BerGenerator_WriteBerBody_m711050879 (BerGenerator_t1021114948 * __this, Stream_t3255436806 * ___contentStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerGenerator::WriteBerEnd()
extern "C"  void BerGenerator_WriteBerEnd_m134926099 (BerGenerator_t1021114948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
