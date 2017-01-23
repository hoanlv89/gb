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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.ForcedLogoutPacket
struct  ForcedLogoutPacket_t2079334695  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.ForcedLogoutPacket::code
	int32_t ___code_1;
	// System.String com.cubeia.firebase.io.protocol.ForcedLogoutPacket::message
	String_t* ___message_2;

public:
	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(ForcedLogoutPacket_t2079334695, ___code_1)); }
	inline int32_t get_code_1() const { return ___code_1; }
	inline int32_t* get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(int32_t value)
	{
		___code_1 = value;
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(ForcedLogoutPacket_t2079334695, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier(&___message_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
