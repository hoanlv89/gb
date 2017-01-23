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

// Org.BouncyCastle.Asn1.Utilities.Asn1Dump
struct Asn1Dump_t4013099873;
// System.String
struct String_t;
// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t564283626;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// Org.BouncyCastle.Asn1.DerApplicationSpecific
struct DerApplicationSpecific_t2286556739;
// System.Object
struct Il2CppObject;
// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_t3447851422;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Object564283626.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_DerApplica2286556739.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Org_BouncyCastle_Asn1_Asn1Encoda3447851422.h"

// System.Void Org.BouncyCastle.Asn1.Utilities.Asn1Dump::.ctor()
extern "C"  void Asn1Dump__ctor_m2115284423 (Asn1Dump_t4013099873 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Utilities.Asn1Dump::AsString(System.String,System.Boolean,Org.BouncyCastle.Asn1.Asn1Object,System.Text.StringBuilder)
extern "C"  void Asn1Dump_AsString_m3798579946 (Il2CppObject * __this /* static, unused */, String_t* ___indent0, bool ___verbose1, Asn1Object_t564283626 * ___obj2, StringBuilder_t1221177846 * ___buf3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.Utilities.Asn1Dump::outputApplicationSpecific(System.String,System.String,System.Boolean,Org.BouncyCastle.Asn1.DerApplicationSpecific)
extern "C"  String_t* Asn1Dump_outputApplicationSpecific_m2626056228 (Il2CppObject * __this /* static, unused */, String_t* ___type0, String_t* ___indent1, bool ___verbose2, DerApplicationSpecific_t2286556739 * ___app3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.Utilities.Asn1Dump::DumpAsString(System.Object)
extern "C"  String_t* Asn1Dump_DumpAsString_m3083774647 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.Utilities.Asn1Dump::DumpAsString(Org.BouncyCastle.Asn1.Asn1Encodable)
extern "C"  String_t* Asn1Dump_DumpAsString_m2336776832 (Il2CppObject * __this /* static, unused */, Asn1Encodable_t3447851422 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.Utilities.Asn1Dump::DumpAsString(Org.BouncyCastle.Asn1.Asn1Encodable,System.Boolean)
extern "C"  String_t* Asn1Dump_DumpAsString_m670429023 (Il2CppObject * __this /* static, unused */, Asn1Encodable_t3447851422 * ___obj0, bool ___verbose1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.Utilities.Asn1Dump::dumpBinaryDataAsString(System.String,System.Byte[])
extern "C"  String_t* Asn1Dump_dumpBinaryDataAsString_m2335358635 (Il2CppObject * __this /* static, unused */, String_t* ___indent0, ByteU5BU5D_t3397334013* ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Org.BouncyCastle.Asn1.Utilities.Asn1Dump::calculateAscString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* Asn1Dump_calculateAscString_m2935286393 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___bytes0, int32_t ___off1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Org.BouncyCastle.Asn1.Utilities.Asn1Dump::.cctor()
extern "C"  void Asn1Dump__cctor_m1136536916 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
