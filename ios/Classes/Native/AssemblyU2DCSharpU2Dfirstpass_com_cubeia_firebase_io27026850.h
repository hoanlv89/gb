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

// com.cubeia.firebase.io.protocol.TableChatPacket
struct  TableChatPacket_t27026850  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.TableChatPacket::tableid
	int32_t ___tableid_1;
	// System.Int32 com.cubeia.firebase.io.protocol.TableChatPacket::pid
	int32_t ___pid_2;
	// System.String com.cubeia.firebase.io.protocol.TableChatPacket::message
	String_t* ___message_3;

public:
	inline static int32_t get_offset_of_tableid_1() { return static_cast<int32_t>(offsetof(TableChatPacket_t27026850, ___tableid_1)); }
	inline int32_t get_tableid_1() const { return ___tableid_1; }
	inline int32_t* get_address_of_tableid_1() { return &___tableid_1; }
	inline void set_tableid_1(int32_t value)
	{
		___tableid_1 = value;
	}

	inline static int32_t get_offset_of_pid_2() { return static_cast<int32_t>(offsetof(TableChatPacket_t27026850, ___pid_2)); }
	inline int32_t get_pid_2() const { return ___pid_2; }
	inline int32_t* get_address_of_pid_2() { return &___pid_2; }
	inline void set_pid_2(int32_t value)
	{
		___pid_2 = value;
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(TableChatPacket_t27026850, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier(&___message_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
