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
// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param>
struct List_1_t890982683;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.PlayerInfoPacket
struct  PlayerInfoPacket_t1772682825  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.PlayerInfoPacket::pid
	int32_t ___pid_1;
	// System.String com.cubeia.firebase.io.protocol.PlayerInfoPacket::nick
	String_t* ___nick_2;
	// System.Collections.Generic.List`1<com.cubeia.firebase.io.protocol.Param> com.cubeia.firebase.io.protocol.PlayerInfoPacket::details
	List_1_t890982683 * ___details_3;

public:
	inline static int32_t get_offset_of_pid_1() { return static_cast<int32_t>(offsetof(PlayerInfoPacket_t1772682825, ___pid_1)); }
	inline int32_t get_pid_1() const { return ___pid_1; }
	inline int32_t* get_address_of_pid_1() { return &___pid_1; }
	inline void set_pid_1(int32_t value)
	{
		___pid_1 = value;
	}

	inline static int32_t get_offset_of_nick_2() { return static_cast<int32_t>(offsetof(PlayerInfoPacket_t1772682825, ___nick_2)); }
	inline String_t* get_nick_2() const { return ___nick_2; }
	inline String_t** get_address_of_nick_2() { return &___nick_2; }
	inline void set_nick_2(String_t* value)
	{
		___nick_2 = value;
		Il2CppCodeGenWriteBarrier(&___nick_2, value);
	}

	inline static int32_t get_offset_of_details_3() { return static_cast<int32_t>(offsetof(PlayerInfoPacket_t1772682825, ___details_3)); }
	inline List_1_t890982683 * get_details_3() const { return ___details_3; }
	inline List_1_t890982683 ** get_address_of_details_3() { return &___details_3; }
	inline void set_details_3(List_1_t890982683 * value)
	{
		___details_3 = value;
		Il2CppCodeGenWriteBarrier(&___details_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
