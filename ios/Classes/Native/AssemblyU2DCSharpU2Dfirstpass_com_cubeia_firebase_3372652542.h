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

// com.cubeia.firebase.io.protocol.GameVersionPacket
struct  GameVersionPacket_t3372652542  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.GameVersionPacket::game
	int32_t ___game_1;
	// System.Int32 com.cubeia.firebase.io.protocol.GameVersionPacket::operatorid
	int32_t ___operatorid_2;
	// System.String com.cubeia.firebase.io.protocol.GameVersionPacket::version
	String_t* ___version_3;

public:
	inline static int32_t get_offset_of_game_1() { return static_cast<int32_t>(offsetof(GameVersionPacket_t3372652542, ___game_1)); }
	inline int32_t get_game_1() const { return ___game_1; }
	inline int32_t* get_address_of_game_1() { return &___game_1; }
	inline void set_game_1(int32_t value)
	{
		___game_1 = value;
	}

	inline static int32_t get_offset_of_operatorid_2() { return static_cast<int32_t>(offsetof(GameVersionPacket_t3372652542, ___operatorid_2)); }
	inline int32_t get_operatorid_2() const { return ___operatorid_2; }
	inline int32_t* get_address_of_operatorid_2() { return &___operatorid_2; }
	inline void set_operatorid_2(int32_t value)
	{
		___operatorid_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(GameVersionPacket_t3372652542, ___version_3)); }
	inline String_t* get_version_3() const { return ___version_3; }
	inline String_t** get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(String_t* value)
	{
		___version_3 = value;
		Il2CppCodeGenWriteBarrier(&___version_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
