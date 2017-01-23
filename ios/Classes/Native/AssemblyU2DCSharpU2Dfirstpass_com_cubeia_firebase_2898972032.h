#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.LeaveChatChannelPacket
struct  LeaveChatChannelPacket_t2898972032  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.LeaveChatChannelPacket::channelid
	int32_t ___channelid_1;

public:
	inline static int32_t get_offset_of_channelid_1() { return static_cast<int32_t>(offsetof(LeaveChatChannelPacket_t2898972032, ___channelid_1)); }
	inline int32_t get_channelid_1() const { return ___channelid_1; }
	inline int32_t* get_address_of_channelid_1() { return &___channelid_1; }
	inline void set_channelid_1(int32_t value)
	{
		___channelid_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
