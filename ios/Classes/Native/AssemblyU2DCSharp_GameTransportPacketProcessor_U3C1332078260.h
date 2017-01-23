#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Player
struct Player_t1147783557;
// SimpleJSON.JSONNode
struct JSONNode_t1250409636;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameTransportPacketProcessor/<handleTienlenGameTransportPacket>c__AnonStoreyA
struct  U3ChandleTienlenGameTransportPacketU3Ec__AnonStoreyA_t1332078260  : public Il2CppObject
{
public:
	// Player GameTransportPacketProcessor/<handleTienlenGameTransportPacket>c__AnonStoreyA::onTurnPlayer
	Player_t1147783557 * ___onTurnPlayer_0;
	// SimpleJSON.JSONNode GameTransportPacketProcessor/<handleTienlenGameTransportPacket>c__AnonStoreyA::data
	JSONNode_t1250409636 * ___data_1;

public:
	inline static int32_t get_offset_of_onTurnPlayer_0() { return static_cast<int32_t>(offsetof(U3ChandleTienlenGameTransportPacketU3Ec__AnonStoreyA_t1332078260, ___onTurnPlayer_0)); }
	inline Player_t1147783557 * get_onTurnPlayer_0() const { return ___onTurnPlayer_0; }
	inline Player_t1147783557 ** get_address_of_onTurnPlayer_0() { return &___onTurnPlayer_0; }
	inline void set_onTurnPlayer_0(Player_t1147783557 * value)
	{
		___onTurnPlayer_0 = value;
		Il2CppCodeGenWriteBarrier(&___onTurnPlayer_0, value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(U3ChandleTienlenGameTransportPacketU3Ec__AnonStoreyA_t1332078260, ___data_1)); }
	inline JSONNode_t1250409636 * get_data_1() const { return ___data_1; }
	inline JSONNode_t1250409636 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(JSONNode_t1250409636 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
