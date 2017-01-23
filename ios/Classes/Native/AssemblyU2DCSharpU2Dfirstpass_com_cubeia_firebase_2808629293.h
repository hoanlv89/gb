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

// com.cubeia.firebase.io.protocol.NotifyJoinPacket
struct  NotifyJoinPacket_t2808629293  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.NotifyJoinPacket::tableid
	int32_t ___tableid_1;
	// System.Int32 com.cubeia.firebase.io.protocol.NotifyJoinPacket::pid
	int32_t ___pid_2;
	// System.String com.cubeia.firebase.io.protocol.NotifyJoinPacket::nick
	String_t* ___nick_3;
	// System.Byte com.cubeia.firebase.io.protocol.NotifyJoinPacket::seat
	uint8_t ___seat_4;

public:
	inline static int32_t get_offset_of_tableid_1() { return static_cast<int32_t>(offsetof(NotifyJoinPacket_t2808629293, ___tableid_1)); }
	inline int32_t get_tableid_1() const { return ___tableid_1; }
	inline int32_t* get_address_of_tableid_1() { return &___tableid_1; }
	inline void set_tableid_1(int32_t value)
	{
		___tableid_1 = value;
	}

	inline static int32_t get_offset_of_pid_2() { return static_cast<int32_t>(offsetof(NotifyJoinPacket_t2808629293, ___pid_2)); }
	inline int32_t get_pid_2() const { return ___pid_2; }
	inline int32_t* get_address_of_pid_2() { return &___pid_2; }
	inline void set_pid_2(int32_t value)
	{
		___pid_2 = value;
	}

	inline static int32_t get_offset_of_nick_3() { return static_cast<int32_t>(offsetof(NotifyJoinPacket_t2808629293, ___nick_3)); }
	inline String_t* get_nick_3() const { return ___nick_3; }
	inline String_t** get_address_of_nick_3() { return &___nick_3; }
	inline void set_nick_3(String_t* value)
	{
		___nick_3 = value;
		Il2CppCodeGenWriteBarrier(&___nick_3, value);
	}

	inline static int32_t get_offset_of_seat_4() { return static_cast<int32_t>(offsetof(NotifyJoinPacket_t2808629293, ___seat_4)); }
	inline uint8_t get_seat_4() const { return ___seat_4; }
	inline uint8_t* get_address_of_seat_4() { return &___seat_4; }
	inline void set_seat_4(uint8_t value)
	{
		___seat_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
