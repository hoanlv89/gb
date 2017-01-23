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

// OneSignalPush.MiniJSON.Json/Parser
struct Parser_t573853353;
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
#include "AssemblyU2DCSharp_OneSignalPush_MiniJSON_Json_Pars2423637025.h"

// System.Void OneSignalPush.MiniJSON.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m1536606318 (Parser_t573853353 * __this, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OneSignalPush.MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C"  bool Parser_IsWordBreak_m426365206 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OneSignalPush.MiniJSON.Json/Parser::Parse(System.String)
extern "C"  Il2CppObject * Parser_Parse_m4011890284 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalPush.MiniJSON.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m1103534211 (Parser_t573853353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> OneSignalPush.MiniJSON.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t309261261 * Parser_ParseObject_m224404372 (Parser_t573853353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> OneSignalPush.MiniJSON.Json/Parser::ParseArray()
extern "C"  List_1_t2058570427 * Parser_ParseArray_m1449604995 (Parser_t573853353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OneSignalPush.MiniJSON.Json/Parser::ParseValue()
extern "C"  Il2CppObject * Parser_ParseValue_m3084487695 (Parser_t573853353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OneSignalPush.MiniJSON.Json/Parser::ParseByToken(OneSignalPush.MiniJSON.Json/Parser/TOKEN)
extern "C"  Il2CppObject * Parser_ParseByToken_m1458617675 (Parser_t573853353 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OneSignalPush.MiniJSON.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m1644534913 (Parser_t573853353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OneSignalPush.MiniJSON.Json/Parser::ParseNumber()
extern "C"  Il2CppObject * Parser_ParseNumber_m1156207895 (Parser_t573853353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OneSignalPush.MiniJSON.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m2918122787 (Parser_t573853353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char OneSignalPush.MiniJSON.Json/Parser::get_PeekChar()
extern "C"  Il2CppChar Parser_get_PeekChar_m2862206066 (Parser_t573853353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char OneSignalPush.MiniJSON.Json/Parser::get_NextChar()
extern "C"  Il2CppChar Parser_get_NextChar_m2503840700 (Parser_t573853353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String OneSignalPush.MiniJSON.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m3619481009 (Parser_t573853353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// OneSignalPush.MiniJSON.Json/Parser/TOKEN OneSignalPush.MiniJSON.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m1447692241 (Parser_t573853353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
