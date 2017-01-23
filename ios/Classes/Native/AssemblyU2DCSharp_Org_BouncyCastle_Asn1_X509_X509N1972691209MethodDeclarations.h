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

// Org.BouncyCastle.Asn1.X509.X509NameEntryConverter
struct X509NameEntryConverter_t1972691209;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Asn1.X509.X509NameEntryConverter::.ctor()
extern "C"  void X509NameEntryConverter__ctor_m3233613675 (X509NameEntryConverter_t1972691209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Org.BouncyCastle.Asn1.Asn1Object Org.BouncyCastle.Asn1.X509.X509NameEntryConverter::ConvertHexEncoded(System.String,System.Int32)
extern "C"  Asn1Object_t564283626 * X509NameEntryConverter_ConvertHexEncoded_m1404101448 (X509NameEntryConverter_t1972691209 * __this, String_t* ___hexString0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.X509.X509NameEntryConverter::CanBePrintable(System.String)
extern "C"  bool X509NameEntryConverter_CanBePrintable_m445590521 (X509NameEntryConverter_t1972691209 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
