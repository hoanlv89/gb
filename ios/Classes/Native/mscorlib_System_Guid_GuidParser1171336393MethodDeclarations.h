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

// System.Guid/GuidParser
struct GuidParser_t1171336393;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Guid2533601593.h"

// System.Void System.Guid/GuidParser::.ctor(System.String)
extern "C"  void GuidParser__ctor_m899289925 (GuidParser_t1171336393 * __this, String_t* ___src0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::Reset()
extern "C"  void GuidParser_Reset_m3389485794 (GuidParser_t1171336393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid/GuidParser::AtEnd()
extern "C"  bool GuidParser_AtEnd_m2677290225 (GuidParser_t1171336393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ThrowFormatException()
extern "C"  void GuidParser_ThrowFormatException_m3624496589 (GuidParser_t1171336393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Guid/GuidParser::ParseHex(System.Int32,System.Boolean)
extern "C"  uint64_t GuidParser_ParseHex_m3163482281 (GuidParser_t1171336393 * __this, int32_t ___length0, bool ___strictLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid/GuidParser::ParseOptChar(System.Char)
extern "C"  bool GuidParser_ParseOptChar_m2971086730 (GuidParser_t1171336393 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ParseChar(System.Char)
extern "C"  void GuidParser_ParseChar_m3420026477 (GuidParser_t1171336393 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::ParseGuid1()
extern "C"  Guid_t2533601593  GuidParser_ParseGuid1_m3287593959 (GuidParser_t1171336393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ParseHexPrefix()
extern "C"  void GuidParser_ParseHexPrefix_m1055495199 (GuidParser_t1171336393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::ParseGuid2()
extern "C"  Guid_t2533601593  GuidParser_ParseGuid2_m3287593992 (GuidParser_t1171336393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::Parse()
extern "C"  Guid_t2533601593  GuidParser_Parse_m817290877 (GuidParser_t1171336393 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
