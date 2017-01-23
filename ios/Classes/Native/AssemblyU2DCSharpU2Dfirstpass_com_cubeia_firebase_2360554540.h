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

// com.cubeia.firebase.io.protocol.VersionPacket
struct  VersionPacket_t2360554540  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.VersionPacket::game
	int32_t ___game_1;
	// System.Int32 com.cubeia.firebase.io.protocol.VersionPacket::operatorid
	int32_t ___operatorid_2;
	// System.Int32 com.cubeia.firebase.io.protocol.VersionPacket::protocol
	int32_t ___protocol_3;

public:
	inline static int32_t get_offset_of_game_1() { return static_cast<int32_t>(offsetof(VersionPacket_t2360554540, ___game_1)); }
	inline int32_t get_game_1() const { return ___game_1; }
	inline int32_t* get_address_of_game_1() { return &___game_1; }
	inline void set_game_1(int32_t value)
	{
		___game_1 = value;
	}

	inline static int32_t get_offset_of_operatorid_2() { return static_cast<int32_t>(offsetof(VersionPacket_t2360554540, ___operatorid_2)); }
	inline int32_t get_operatorid_2() const { return ___operatorid_2; }
	inline int32_t* get_address_of_operatorid_2() { return &___operatorid_2; }
	inline void set_operatorid_2(int32_t value)
	{
		___operatorid_2 = value;
	}

	inline static int32_t get_offset_of_protocol_3() { return static_cast<int32_t>(offsetof(VersionPacket_t2360554540, ___protocol_3)); }
	inline int32_t get_protocol_3() const { return ___protocol_3; }
	inline int32_t* get_address_of_protocol_3() { return &___protocol_3; }
	inline void set_protocol_3(int32_t value)
	{
		___protocol_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
