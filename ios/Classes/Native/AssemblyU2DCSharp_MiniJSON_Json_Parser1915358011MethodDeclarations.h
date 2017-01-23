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

// MiniJSON.Json/Parser
struct Parser_t1915358011;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_MiniJSON_Json_Parser_TOKEN2182318091.h"

// System.Void MiniJSON.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m3499396204 (Parser_t1915358011 * __this, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C"  bool Parser_IsWordBreak_m857113916 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSON.Json/Parser::Parse(System.String)
extern "C"  Il2CppObject * Parser_Parse_m3173459038 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m353727513 (Parser_t1915358011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> MiniJSON.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t309261261 * Parser_ParseObject_m2580302178 (Parser_t1915358011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> MiniJSON.Json/Parser::ParseArray()
extern "C"  List_1_t2058570427 * Parser_ParseArray_m826232729 (Parser_t1915358011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSON.Json/Parser::ParseValue()
extern "C"  Il2CppObject * Parser_ParseValue_m4148225961 (Parser_t1915358011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSON.Json/Parser::ParseByToken(MiniJSON.Json/Parser/TOKEN)
extern "C"  Il2CppObject * Parser_ParseByToken_m1465403699 (Parser_t1915358011 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJSON.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m4155630979 (Parser_t1915358011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSON.Json/Parser::ParseNumber()
extern "C"  Il2CppObject * Parser_ParseNumber_m525963377 (Parser_t1915358011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m428178885 (Parser_t1915358011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char MiniJSON.Json/Parser::get_PeekChar()
extern "C"  Il2CppChar Parser_get_PeekChar_m881680600 (Parser_t1915358011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char MiniJSON.Json/Parser::get_NextChar()
extern "C"  Il2CppChar Parser_get_NextChar_m1286186670 (Parser_t1915358011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJSON.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m1984149123 (Parser_t1915358011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MiniJSON.Json/Parser/TOKEN MiniJSON.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m3661141469 (Parser_t1915358011 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
