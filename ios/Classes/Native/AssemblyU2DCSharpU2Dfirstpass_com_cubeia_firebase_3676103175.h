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

// com.cubeia.firebase.io.protocol.ChannelChatPacket
struct  ChannelChatPacket_t3676103175  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.ChannelChatPacket::channelid
	int32_t ___channelid_1;
	// System.Int32 com.cubeia.firebase.io.protocol.ChannelChatPacket::targetid
	int32_t ___targetid_2;
	// System.String com.cubeia.firebase.io.protocol.ChannelChatPacket::message
	String_t* ___message_3;

public:
	inline static int32_t get_offset_of_channelid_1() { return static_cast<int32_t>(offsetof(ChannelChatPacket_t3676103175, ___channelid_1)); }
	inline int32_t get_channelid_1() const { return ___channelid_1; }
	inline int32_t* get_address_of_channelid_1() { return &___channelid_1; }
	inline void set_channelid_1(int32_t value)
	{
		___channelid_1 = value;
	}

	inline static int32_t get_offset_of_targetid_2() { return static_cast<int32_t>(offsetof(ChannelChatPacket_t3676103175, ___targetid_2)); }
	inline int32_t get_targetid_2() const { return ___targetid_2; }
	inline int32_t* get_address_of_targetid_2() { return &___targetid_2; }
	inline void set_targetid_2(int32_t value)
	{
		___targetid_2 = value;
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(ChannelChatPacket_t3676103175, ___message_3)); }
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
