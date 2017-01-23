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

// SharpJson.Lexer
struct Lexer_t1055722548;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_SharpJson_Lexer_Token2967303148.h"

// System.Void SharpJson.Lexer::.ctor(System.String)
extern "C"  void Lexer__ctor_m1279135605 (Lexer_t1055722548 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SharpJson.Lexer::get_hasError()
extern "C"  bool Lexer_get_hasError_m1945982596 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SharpJson.Lexer::get_lineNumber()
extern "C"  int32_t Lexer_get_lineNumber_m371130613 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SharpJson.Lexer::set_lineNumber(System.Int32)
extern "C"  void Lexer_set_lineNumber_m363347402 (Lexer_t1055722548 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SharpJson.Lexer::get_parseNumbersAsFloat()
extern "C"  bool Lexer_get_parseNumbersAsFloat_m27053057 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SharpJson.Lexer::set_parseNumbersAsFloat(System.Boolean)
extern "C"  void Lexer_set_parseNumbersAsFloat_m2981474628 (Lexer_t1055722548 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SharpJson.Lexer::Reset()
extern "C"  void Lexer_Reset_m603571726 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SharpJson.Lexer::ParseString()
extern "C"  String_t* Lexer_ParseString_m606618626 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SharpJson.Lexer::GetNumberString()
extern "C"  String_t* Lexer_GetNumberString_m2145742472 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SharpJson.Lexer::ParseFloatNumber()
extern "C"  float Lexer_ParseFloatNumber_m85412491 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double SharpJson.Lexer::ParseDoubleNumber()
extern "C"  double Lexer_ParseDoubleNumber_m1440438797 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SharpJson.Lexer::GetLastIndexOfNumber(System.Int32)
extern "C"  int32_t Lexer_GetLastIndexOfNumber_m1813319022 (Lexer_t1055722548 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SharpJson.Lexer::SkipWhiteSpaces()
extern "C"  void Lexer_SkipWhiteSpaces_m4110911322 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SharpJson.Lexer/Token SharpJson.Lexer::LookAhead()
extern "C"  int32_t Lexer_LookAhead_m1086208316 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SharpJson.Lexer/Token SharpJson.Lexer::NextToken()
extern "C"  int32_t Lexer_NextToken_m914267194 (Lexer_t1055722548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SharpJson.Lexer/Token SharpJson.Lexer::NextToken(System.Char[],System.Int32&)
extern "C"  int32_t Lexer_NextToken_m3347974146 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
