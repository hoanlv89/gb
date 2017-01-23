#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameDummy
struct GameDummy_t3362350598;
// CubeiaClient
struct CubeiaClient_t2232589536;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameTransportPacketProcessor/<handleDummyGameTransportPacket>c__AnonStorey3
struct  U3ChandleDummyGameTransportPacketU3Ec__AnonStorey3_t33940979  : public Il2CppObject
{
public:
	// GameDummy GameTransportPacketProcessor/<handleDummyGameTransportPacket>c__AnonStorey3::game
	GameDummy_t3362350598 * ___game_0;
	// CubeiaClient GameTransportPacketProcessor/<handleDummyGameTransportPacket>c__AnonStorey3::cubeia
	CubeiaClient_t2232589536 * ___cubeia_1;

public:
	inline static int32_t get_offset_of_game_0() { return static_cast<int32_t>(offsetof(U3ChandleDummyGameTransportPacketU3Ec__AnonStorey3_t33940979, ___game_0)); }
	inline GameDummy_t3362350598 * get_game_0() const { return ___game_0; }
	inline GameDummy_t3362350598 ** get_address_of_game_0() { return &___game_0; }
	inline void set_game_0(GameDummy_t3362350598 * value)
	{
		___game_0 = value;
		Il2CppCodeGenWriteBarrier(&___game_0, value);
	}

	inline static int32_t get_offset_of_cubeia_1() { return static_cast<int32_t>(offsetof(U3ChandleDummyGameTransportPacketU3Ec__AnonStorey3_t33940979, ___cubeia_1)); }
	inline CubeiaClient_t2232589536 * get_cubeia_1() const { return ___cubeia_1; }
	inline CubeiaClient_t2232589536 ** get_address_of_cubeia_1() { return &___cubeia_1; }
	inline void set_cubeia_1(CubeiaClient_t2232589536 * value)
	{
		___cubeia_1 = value;
		Il2CppCodeGenWriteBarrier(&___cubeia_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
