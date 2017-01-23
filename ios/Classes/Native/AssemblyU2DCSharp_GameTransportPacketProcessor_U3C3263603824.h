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
// GameSceneBinh
struct GameSceneBinh_t1621464423;
// GameBinh
struct GameBinh_t369720813;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameTransportPacketProcessor/<handleBinhGameTransportPacket>c__AnonStorey10
struct  U3ChandleBinhGameTransportPacketU3Ec__AnonStorey10_t3263603824  : public Il2CppObject
{
public:
	// CubeiaClient GameTransportPacketProcessor/<handleBinhGameTransportPacket>c__AnonStorey10::cubeia
	CubeiaClient_t2232589536 * ___cubeia_0;
	// GameSceneBinh GameTransportPacketProcessor/<handleBinhGameTransportPacket>c__AnonStorey10::gameScene
	GameSceneBinh_t1621464423 * ___gameScene_1;
	// GameBinh GameTransportPacketProcessor/<handleBinhGameTransportPacket>c__AnonStorey10::game
	GameBinh_t369720813 * ___game_2;

public:
	inline static int32_t get_offset_of_cubeia_0() { return static_cast<int32_t>(offsetof(U3ChandleBinhGameTransportPacketU3Ec__AnonStorey10_t3263603824, ___cubeia_0)); }
	inline CubeiaClient_t2232589536 * get_cubeia_0() const { return ___cubeia_0; }
	inline CubeiaClient_t2232589536 ** get_address_of_cubeia_0() { return &___cubeia_0; }
	inline void set_cubeia_0(CubeiaClient_t2232589536 * value)
	{
		___cubeia_0 = value;
		Il2CppCodeGenWriteBarrier(&___cubeia_0, value);
	}

	inline static int32_t get_offset_of_gameScene_1() { return static_cast<int32_t>(offsetof(U3ChandleBinhGameTransportPacketU3Ec__AnonStorey10_t3263603824, ___gameScene_1)); }
	inline GameSceneBinh_t1621464423 * get_gameScene_1() const { return ___gameScene_1; }
	inline GameSceneBinh_t1621464423 ** get_address_of_gameScene_1() { return &___gameScene_1; }
	inline void set_gameScene_1(GameSceneBinh_t1621464423 * value)
	{
		___gameScene_1 = value;
		Il2CppCodeGenWriteBarrier(&___gameScene_1, value);
	}

	inline static int32_t get_offset_of_game_2() { return static_cast<int32_t>(offsetof(U3ChandleBinhGameTransportPacketU3Ec__AnonStorey10_t3263603824, ___game_2)); }
	inline GameBinh_t369720813 * get_game_2() const { return ___game_2; }
	inline GameBinh_t369720813 ** get_address_of_game_2() { return &___game_2; }
	inline void set_game_2(GameBinh_t369720813 * value)
	{
		___game_2 = value;
		Il2CppCodeGenWriteBarrier(&___game_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
