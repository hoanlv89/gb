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

// Org.BouncyCastle.Asn1.BerTaggedObjectParser
struct BerTaggedObjectParser_t3812856247;
// System.IO.Stream
struct Stream_t3255436806;
// Org.BouncyCastle.Asn1.Asn1StreamParser
struct Asn1StreamParser_t3208800844;
// Org.BouncyCastle.Asn1.IAsn1Convertible
struct IAsn1Convertible_t983765413;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Stream3208800844.h"

// System.Void Org.BouncyCastle.Asn1.BerTaggedObjectParser::.ctor(System.Int32,System.Int32,System.IO.Stream)
extern "C"  void BerTaggedObjectParser__ctor_m148798626 (BerTaggedObjectParser_t3812856247 * __this, int32_t ___baseTag0, int32_t ___tagNumber1, Stream_t3255436806 * ___contentStream2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.BerTaggedObjectParser::.ctor(System.Boolean,System.Int32,Org.BouncyCastle.Asn1.Asn1StreamParser)
extern "C"  void BerTaggedObjectParser__ctor_m3004452154 (BerTaggedObjectParser_t3812856247 * __this, bool ___constructed0, int32_t ___tagNumber1, Asn1StreamParser_t3208800844 * ___parser2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.BerTaggedObjectParser::get_IsConstructed()
extern "C"  bool BerTaggedObjectParser_get_IsConstructed_m427044270 (BerTaggedObjectParser_t3812856247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Org.BouncyCastle.Asn1.BerTaggedObjectParser::get_TagNo()
extern "C"  int32_t BerTaggedObjectParser_get_TagNo_m922762185 (BerTaggedObjectParser_t3812856247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.IAsn1Convertible Org.BouncyCastle.Asn1.BerTaggedObjectParser::GetObjectParser(System.Int32,System.Boolean)
extern "C"  Il2CppObject * BerTaggedObjectParser_GetObjectParser_m2397417238 (BerTaggedObjectParser_t3812856247 * __this, int32_t ___tag0, bool ___isExplicit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.BerTaggedObjectParser::ToAsn1Object()
extern "C"  Asn1Object_t564283626 * BerTaggedObjectParser_ToAsn1Object_m3546207620 (BerTaggedObjectParser_t3812856247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
