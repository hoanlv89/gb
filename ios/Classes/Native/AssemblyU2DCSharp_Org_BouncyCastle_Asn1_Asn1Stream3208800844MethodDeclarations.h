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

// Org.BouncyCastle.Asn1.Asn1StreamParser
struct Asn1StreamParser_t3208800844;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Org.BouncyCastle.Asn1.IAsn1Convertible
struct IAsn1Convertible_t983765413;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// Org.BouncyCastle.Asn1.Asn1EncodableVector
struct Asn1EncodableVector_t3471733113;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"

// System.Void Org.BouncyCastle.Asn1.Asn1StreamParser::.ctor(System.IO.Stream)
extern "C"  void Asn1StreamParser__ctor_m3527736699 (Asn1StreamParser_t3208800844 * __this, Stream_t3255436806 * ___inStream0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Asn1StreamParser::.ctor(System.IO.Stream,System.Int32)
extern "C"  void Asn1StreamParser__ctor_m1049805322 (Asn1StreamParser_t3208800844 * __this, Stream_t3255436806 * ___inStream0, int32_t ___limit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Asn1StreamParser::.ctor(System.Byte[])
extern "C"  void Asn1StreamParser__ctor_m2386415959 (Asn1StreamParser_t3208800844 * __this, ByteU5BU5D_t3397334013* ___encoding0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.IAsn1Convertible Org.BouncyCastle.Asn1.Asn1StreamParser::ReadIndef(System.Int32)
extern "C"  Il2CppObject * Asn1StreamParser_ReadIndef_m1611612104 (Asn1StreamParser_t3208800844 * __this, int32_t ___tagValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.IAsn1Convertible Org.BouncyCastle.Asn1.Asn1StreamParser::ReadImplicit(System.Boolean,System.Int32)
extern "C"  Il2CppObject * Asn1StreamParser_ReadImplicit_m3600923612 (Asn1StreamParser_t3208800844 * __this, bool ___constructed0, int32_t ___tag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.Asn1StreamParser::ReadTaggedObject(System.Boolean,System.Int32)
extern "C"  Asn1Object_t564283626 * Asn1StreamParser_ReadTaggedObject_m2786341235 (Asn1StreamParser_t3208800844 * __this, bool ___constructed0, int32_t ___tag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.IAsn1Convertible Org.BouncyCastle.Asn1.Asn1StreamParser::ReadObject()
extern "C"  Il2CppObject * Asn1StreamParser_ReadObject_m2419960216 (Asn1StreamParser_t3208800844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Asn1StreamParser::Set00Check(System.Boolean)
extern "C"  void Asn1StreamParser_Set00Check_m4024961663 (Asn1StreamParser_t3208800844 * __this, bool ___enabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1EncodableVector Org.BouncyCastle.Asn1.Asn1StreamParser::ReadVector()
extern "C"  Asn1EncodableVector_t3471733113 * Asn1StreamParser_ReadVector_m2939618366 (Asn1StreamParser_t3208800844 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
