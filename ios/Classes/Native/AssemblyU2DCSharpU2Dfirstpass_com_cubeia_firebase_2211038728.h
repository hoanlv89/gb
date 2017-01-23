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

// com.cubeia.firebase.io.protocol.NotifyInvitedPacket
struct  NotifyInvitedPacket_t2211038728  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.NotifyInvitedPacket::inviter
	int32_t ___inviter_1;
	// System.String com.cubeia.firebase.io.protocol.NotifyInvitedPacket::screenname
	String_t* ___screenname_2;
	// System.Int32 com.cubeia.firebase.io.protocol.NotifyInvitedPacket::tableid
	int32_t ___tableid_3;
	// System.Byte com.cubeia.firebase.io.protocol.NotifyInvitedPacket::seat
	uint8_t ___seat_4;

public:
	inline static int32_t get_offset_of_inviter_1() { return static_cast<int32_t>(offsetof(NotifyInvitedPacket_t2211038728, ___inviter_1)); }
	inline int32_t get_inviter_1() const { return ___inviter_1; }
	inline int32_t* get_address_of_inviter_1() { return &___inviter_1; }
	inline void set_inviter_1(int32_t value)
	{
		___inviter_1 = value;
	}

	inline static int32_t get_offset_of_screenname_2() { return static_cast<int32_t>(offsetof(NotifyInvitedPacket_t2211038728, ___screenname_2)); }
	inline String_t* get_screenname_2() const { return ___screenname_2; }
	inline String_t** get_address_of_screenname_2() { return &___screenname_2; }
	inline void set_screenname_2(String_t* value)
	{
		___screenname_2 = value;
		Il2CppCodeGenWriteBarrier(&___screenname_2, value);
	}

	inline static int32_t get_offset_of_tableid_3() { return static_cast<int32_t>(offsetof(NotifyInvitedPacket_t2211038728, ___tableid_3)); }
	inline int32_t get_tableid_3() const { return ___tableid_3; }
	inline int32_t* get_address_of_tableid_3() { return &___tableid_3; }
	inline void set_tableid_3(int32_t value)
	{
		___tableid_3 = value;
	}

	inline static int32_t get_offset_of_seat_4() { return static_cast<int32_t>(offsetof(NotifyInvitedPacket_t2211038728, ___seat_4)); }
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
