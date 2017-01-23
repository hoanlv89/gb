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

// System.IO.StringWriter
struct StringWriter_t4139609088;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.IFormatProvider
struct IFormatProvider_t2849799027;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.IO.StringWriter::.ctor()
extern "C"  void StringWriter__ctor_m59456937 (StringWriter_t4139609088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
extern "C"  void StringWriter__ctor_m1896773521 (StringWriter_t4139609088 * __this, StringBuilder_t1221177846 * ___sb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder,System.IFormatProvider)
extern "C"  void StringWriter__ctor_m2262370389 (StringWriter_t4139609088 * __this, StringBuilder_t1221177846 * ___sb0, Il2CppObject * ___formatProvider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Close()
extern "C"  void StringWriter_Close_m3864090879 (StringWriter_t4139609088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Dispose(System.Boolean)
extern "C"  void StringWriter_Dispose_m3703936621 (StringWriter_t4139609088 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StringWriter::ToString()
extern "C"  String_t* StringWriter_ToString_m2783694016 (StringWriter_t4139609088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char)
extern "C"  void StringWriter_Write_m4119283327 (StringWriter_t4139609088 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.String)
extern "C"  void StringWriter_Write_m3641447140 (StringWriter_t4139609088 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void StringWriter_Write_m2596694237 (StringWriter_t4139609088 * __this, CharU5BU5D_t1328083999* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
