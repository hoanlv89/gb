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

// Facebook.MiniJSON.Json/Parser
struct Parser_t3380793361;
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
#include "AssemblyU2DCSharp_Facebook_MiniJSON_Json_Parser_TO3846031241.h"

// System.Void Facebook.MiniJSON.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m1162720994 (Parser_t3380793361 * __this, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Facebook.MiniJSON.Json/Parser::get_PeekChar()
extern "C"  Il2CppChar Parser_get_PeekChar_m1690254910 (Parser_t3380793361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Facebook.MiniJSON.Json/Parser::get_NextChar()
extern "C"  Il2CppChar Parser_get_NextChar_m1960492832 (Parser_t3380793361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.MiniJSON.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m879792817 (Parser_t3380793361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.MiniJSON.Json/Parser/TOKEN Facebook.MiniJSON.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m864223865 (Parser_t3380793361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::Parse(System.String)
extern "C"  Il2CppObject * Parser_Parse_m60498626 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m528006051 (Parser_t3380793361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Facebook.MiniJSON.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t309261261 * Parser_ParseObject_m1564005300 (Parser_t3380793361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Facebook.MiniJSON.Json/Parser::ParseArray()
extern "C"  List_1_t2058570427 * Parser_ParseArray_m4058347175 (Parser_t3380793361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::ParseValue()
extern "C"  Il2CppObject * Parser_ParseValue_m624940835 (Parser_t3380793361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::ParseByToken(Facebook.MiniJSON.Json/Parser/TOKEN)
extern "C"  Il2CppObject * Parser_ParseByToken_m3046012291 (Parser_t3380793361 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.MiniJSON.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m1712045305 (Parser_t3380793361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::ParseNumber()
extern "C"  Il2CppObject * Parser_ParseNumber_m3279125099 (Parser_t3380793361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m1771510563 (Parser_t3380793361 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
