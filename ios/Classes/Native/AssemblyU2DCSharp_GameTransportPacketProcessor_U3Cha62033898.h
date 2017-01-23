#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameChan
struct GameChan_t4167295034;
// SimpleJSON.JSONNode
struct JSONNode_t1250409636;
// CubeiaClient
struct CubeiaClient_t2232589536;
// GameSceneChan
struct GameSceneChan_t3496724586;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameTransportPacketProcessor/<handleChanGameTransportPacket>c__AnonStorey6
struct  U3ChandleChanGameTransportPacketU3Ec__AnonStorey6_t62033898  : public Il2CppObject
{
public:
	// GameChan GameTransportPacketProcessor/<handleChanGameTransportPacket>c__AnonStorey6::game
	GameChan_t4167295034 * ___game_0;
	// SimpleJSON.JSONNode GameTransportPacketProcessor/<handleChanGameTransportPacket>c__AnonStorey6::gameData
	JSONNode_t1250409636 * ___gameData_1;
	// CubeiaClient GameTransportPacketProcessor/<handleChanGameTransportPacket>c__AnonStorey6::cubeia
	CubeiaClient_t2232589536 * ___cubeia_2;
	// GameSceneChan GameTransportPacketProcessor/<handleChanGameTransportPacket>c__AnonStorey6::gameScene
	GameSceneChan_t3496724586 * ___gameScene_3;

public:
	inline static int32_t get_offset_of_game_0() { return static_cast<int32_t>(offsetof(U3ChandleChanGameTransportPacketU3Ec__AnonStorey6_t62033898, ___game_0)); }
	inline GameChan_t4167295034 * get_game_0() const { return ___game_0; }
	inline GameChan_t4167295034 ** get_address_of_game_0() { return &___game_0; }
	inline void set_game_0(GameChan_t4167295034 * value)
	{
		___game_0 = value;
		Il2CppCodeGenWriteBarrier(&___game_0, value);
	}

	inline static int32_t get_offset_of_gameData_1() { return static_cast<int32_t>(offsetof(U3ChandleChanGameTransportPacketU3Ec__AnonStorey6_t62033898, ___gameData_1)); }
	inline JSONNode_t1250409636 * get_gameData_1() const { return ___gameData_1; }
	inline JSONNode_t1250409636 ** get_address_of_gameData_1() { return &___gameData_1; }
	inline void set_gameData_1(JSONNode_t1250409636 * value)
	{
		___gameData_1 = value;
		Il2CppCodeGenWriteBarrier(&___gameData_1, value);
	}

	inline static int32_t get_offset_of_cubeia_2() { return static_cast<int32_t>(offsetof(U3ChandleChanGameTransportPacketU3Ec__AnonStorey6_t62033898, ___cubeia_2)); }
	inline CubeiaClient_t2232589536 * get_cubeia_2() const { return ___cubeia_2; }
	inline CubeiaClient_t2232589536 ** get_address_of_cubeia_2() { return &___cubeia_2; }
	inline void set_cubeia_2(CubeiaClient_t2232589536 * value)
	{
		___cubeia_2 = value;
		Il2CppCodeGenWriteBarrier(&___cubeia_2, value);
	}

	inline static int32_t get_offset_of_gameScene_3() { return static_cast<int32_t>(offsetof(U3ChandleChanGameTransportPacketU3Ec__AnonStorey6_t62033898, ___gameScene_3)); }
	inline GameSceneChan_t3496724586 * get_gameScene_3() const { return ___gameScene_3; }
	inline GameSceneChan_t3496724586 ** get_address_of_gameScene_3() { return &___gameScene_3; }
	inline void set_gameScene_3(GameSceneChan_t3496724586 * value)
	{
		___gameScene_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameScene_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
