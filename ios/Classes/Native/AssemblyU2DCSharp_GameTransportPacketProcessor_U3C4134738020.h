#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SimpleJSON.JSONNode
struct JSONNode_t1250409636;
// GamePoker
struct GamePoker_t4276346087;
// GameScenePoker
struct GameScenePoker_t1719994649;
// CubeiaClient
struct CubeiaClient_t2232589536;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameTransportPacketProcessor/<handlePokerGameTransportPacket>c__AnonStoreyC
struct  U3ChandlePokerGameTransportPacketU3Ec__AnonStoreyC_t4134738020  : public Il2CppObject
{
public:
	// SimpleJSON.JSONNode GameTransportPacketProcessor/<handlePokerGameTransportPacket>c__AnonStoreyC::gameData
	JSONNode_t1250409636 * ___gameData_0;
	// GamePoker GameTransportPacketProcessor/<handlePokerGameTransportPacket>c__AnonStoreyC::game
	GamePoker_t4276346087 * ___game_1;
	// GameScenePoker GameTransportPacketProcessor/<handlePokerGameTransportPacket>c__AnonStoreyC::gameScene
	GameScenePoker_t1719994649 * ___gameScene_2;
	// CubeiaClient GameTransportPacketProcessor/<handlePokerGameTransportPacket>c__AnonStoreyC::cubeia
	CubeiaClient_t2232589536 * ___cubeia_3;

public:
	inline static int32_t get_offset_of_gameData_0() { return static_cast<int32_t>(offsetof(U3ChandlePokerGameTransportPacketU3Ec__AnonStoreyC_t4134738020, ___gameData_0)); }
	inline JSONNode_t1250409636 * get_gameData_0() const { return ___gameData_0; }
	inline JSONNode_t1250409636 ** get_address_of_gameData_0() { return &___gameData_0; }
	inline void set_gameData_0(JSONNode_t1250409636 * value)
	{
		___gameData_0 = value;
		Il2CppCodeGenWriteBarrier(&___gameData_0, value);
	}

	inline static int32_t get_offset_of_game_1() { return static_cast<int32_t>(offsetof(U3ChandlePokerGameTransportPacketU3Ec__AnonStoreyC_t4134738020, ___game_1)); }
	inline GamePoker_t4276346087 * get_game_1() const { return ___game_1; }
	inline GamePoker_t4276346087 ** get_address_of_game_1() { return &___game_1; }
	inline void set_game_1(GamePoker_t4276346087 * value)
	{
		___game_1 = value;
		Il2CppCodeGenWriteBarrier(&___game_1, value);
	}

	inline static int32_t get_offset_of_gameScene_2() { return static_cast<int32_t>(offsetof(U3ChandlePokerGameTransportPacketU3Ec__AnonStoreyC_t4134738020, ___gameScene_2)); }
	inline GameScenePoker_t1719994649 * get_gameScene_2() const { return ___gameScene_2; }
	inline GameScenePoker_t1719994649 ** get_address_of_gameScene_2() { return &___gameScene_2; }
	inline void set_gameScene_2(GameScenePoker_t1719994649 * value)
	{
		___gameScene_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameScene_2, value);
	}

	inline static int32_t get_offset_of_cubeia_3() { return static_cast<int32_t>(offsetof(U3ChandlePokerGameTransportPacketU3Ec__AnonStoreyC_t4134738020, ___cubeia_3)); }
	inline CubeiaClient_t2232589536 * get_cubeia_3() const { return ___cubeia_3; }
	inline CubeiaClient_t2232589536 ** get_address_of_cubeia_3() { return &___cubeia_3; }
	inline void set_cubeia_3(CubeiaClient_t2232589536 * value)
	{
		___cubeia_3 = value;
		Il2CppCodeGenWriteBarrier(&___cubeia_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
