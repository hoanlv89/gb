#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.Param
struct  Param_t1521861551  : public Il2CppObject
{
public:
	// System.String com.cubeia.firebase.io.protocol.Param::key
	String_t* ___key_1;
	// System.Byte com.cubeia.firebase.io.protocol.Param::type
	uint8_t ___type_2;
	// System.Byte[] com.cubeia.firebase.io.protocol.Param::value
	ByteU5BU5D_t3397334013* ___value_3;

public:
	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(Param_t1521861551, ___key_1)); }
	inline String_t* get_key_1() const { return ___key_1; }
	inline String_t** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(String_t* value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier(&___key_1, value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(Param_t1521861551, ___type_2)); }
	inline uint8_t get_type_2() const { return ___type_2; }
	inline uint8_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(uint8_t value)
	{
		___type_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(Param_t1521861551, ___value_3)); }
	inline ByteU5BU5D_t3397334013* get_value_3() const { return ___value_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(ByteU5BU5D_t3397334013* value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier(&___value_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
