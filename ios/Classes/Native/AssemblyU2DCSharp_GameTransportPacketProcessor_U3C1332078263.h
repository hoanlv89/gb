#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CubeiaClient
struct CubeiaClient_t2232589536;
// GameTienLen
struct GameTienLen_t3970652277;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameTransportPacketProcessor/<handleTienlenGameTransportPacket>c__AnonStoreyB
struct  U3ChandleTienlenGameTransportPacketU3Ec__AnonStoreyB_t1332078263  : public Il2CppObject
{
public:
	// CubeiaClient GameTransportPacketProcessor/<handleTienlenGameTransportPacket>c__AnonStoreyB::cubeia
	CubeiaClient_t2232589536 * ___cubeia_0;
	// GameTienLen GameTransportPacketProcessor/<handleTienlenGameTransportPacket>c__AnonStoreyB::game
	GameTienLen_t3970652277 * ___game_1;

public:
	inline static int32_t get_offset_of_cubeia_0() { return static_cast<int32_t>(offsetof(U3ChandleTienlenGameTransportPacketU3Ec__AnonStoreyB_t1332078263, ___cubeia_0)); }
	inline CubeiaClient_t2232589536 * get_cubeia_0() const { return ___cubeia_0; }
	inline CubeiaClient_t2232589536 ** get_address_of_cubeia_0() { return &___cubeia_0; }
	inline void set_cubeia_0(CubeiaClient_t2232589536 * value)
	{
		___cubeia_0 = value;
		Il2CppCodeGenWriteBarrier(&___cubeia_0, value);
	}

	inline static int32_t get_offset_of_game_1() { return static_cast<int32_t>(offsetof(U3ChandleTienlenGameTransportPacketU3Ec__AnonStoreyB_t1332078263, ___game_1)); }
	inline GameTienLen_t3970652277 * get_game_1() const { return ___game_1; }
	inline GameTienLen_t3970652277 ** get_address_of_game_1() { return &___game_1; }
	inline void set_game_1(GameTienLen_t3970652277 * value)
	{
		___game_1 = value;
		Il2CppCodeGenWriteBarrier(&___game_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
