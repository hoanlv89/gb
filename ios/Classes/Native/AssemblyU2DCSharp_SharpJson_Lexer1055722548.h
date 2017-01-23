#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t1328083999;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SharpJson.Lexer
struct  Lexer_t1055722548  : public Il2CppObject
{
public:
	// System.Int32 SharpJson.Lexer::<lineNumber>k__BackingField
	int32_t ___U3ClineNumberU3Ek__BackingField_0;
	// System.Boolean SharpJson.Lexer::<parseNumbersAsFloat>k__BackingField
	bool ___U3CparseNumbersAsFloatU3Ek__BackingField_1;
	// System.Char[] SharpJson.Lexer::json
	CharU5BU5D_t1328083999* ___json_2;
	// System.Int32 SharpJson.Lexer::index
	int32_t ___index_3;
	// System.Boolean SharpJson.Lexer::success
	bool ___success_4;
	// System.Char[] SharpJson.Lexer::stringBuffer
	CharU5BU5D_t1328083999* ___stringBuffer_5;

public:
	inline static int32_t get_offset_of_U3ClineNumberU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Lexer_t1055722548, ___U3ClineNumberU3Ek__BackingField_0)); }
	inline int32_t get_U3ClineNumberU3Ek__BackingField_0() const { return ___U3ClineNumberU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3ClineNumberU3Ek__BackingField_0() { return &___U3ClineNumberU3Ek__BackingField_0; }
	inline void set_U3ClineNumberU3Ek__BackingField_0(int32_t value)
	{
		___U3ClineNumberU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CparseNumbersAsFloatU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Lexer_t1055722548, ___U3CparseNumbersAsFloatU3Ek__BackingField_1)); }
	inline bool get_U3CparseNumbersAsFloatU3Ek__BackingField_1() const { return ___U3CparseNumbersAsFloatU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CparseNumbersAsFloatU3Ek__BackingField_1() { return &___U3CparseNumbersAsFloatU3Ek__BackingField_1; }
	inline void set_U3CparseNumbersAsFloatU3Ek__BackingField_1(bool value)
	{
		___U3CparseNumbersAsFloatU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_json_2() { return static_cast<int32_t>(offsetof(Lexer_t1055722548, ___json_2)); }
	inline CharU5BU5D_t1328083999* get_json_2() const { return ___json_2; }
	inline CharU5BU5D_t1328083999** get_address_of_json_2() { return &___json_2; }
	inline void set_json_2(CharU5BU5D_t1328083999* value)
	{
		___json_2 = value;
		Il2CppCodeGenWriteBarrier(&___json_2, value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(Lexer_t1055722548, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_success_4() { return static_cast<int32_t>(offsetof(Lexer_t1055722548, ___success_4)); }
	inline bool get_success_4() const { return ___success_4; }
	inline bool* get_address_of_success_4() { return &___success_4; }
	inline void set_success_4(bool value)
	{
		___success_4 = value;
	}

	inline static int32_t get_offset_of_stringBuffer_5() { return static_cast<int32_t>(offsetof(Lexer_t1055722548, ___stringBuffer_5)); }
	inline CharU5BU5D_t1328083999* get_stringBuffer_5() const { return ___stringBuffer_5; }
	inline CharU5BU5D_t1328083999** get_address_of_stringBuffer_5() { return &___stringBuffer_5; }
	inline void set_stringBuffer_5(CharU5BU5D_t1328083999* value)
	{
		___stringBuffer_5 = value;
		Il2CppCodeGenWriteBarrier(&___stringBuffer_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
