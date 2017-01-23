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

// Org.BouncyCastle.Asn1.X509.X509NameTokenizer
struct X509NameTokenizer_t3449226918;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Org.BouncyCastle.Asn1.X509.X509NameTokenizer::.ctor(System.String)
extern "C"  void X509NameTokenizer__ctor_m3611703094 (X509NameTokenizer_t3449226918 * __this, String_t* ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.X509.X509NameTokenizer::.ctor(System.String,System.Char)
extern "C"  void X509NameTokenizer__ctor_m1105436173 (X509NameTokenizer_t3449226918 * __this, String_t* ___oid0, Il2CppChar ___separator1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Org.BouncyCastle.Asn1.X509.X509NameTokenizer::HasMoreTokens()
extern "C"  bool X509NameTokenizer_HasMoreTokens_m3336543191 (X509NameTokenizer_t3449226918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.X509.X509NameTokenizer::NextToken()
extern "C"  String_t* X509NameTokenizer_NextToken_m1700449653 (X509NameTokenizer_t3449226918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
