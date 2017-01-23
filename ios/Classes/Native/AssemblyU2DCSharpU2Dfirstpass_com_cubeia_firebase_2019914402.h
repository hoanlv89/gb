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
#include "AssemblyU2DCSharpU2Dfirstpass_com_cubeia_firebase_io68853350.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.LobbyObjectUnsubscribePacket
struct  LobbyObjectUnsubscribePacket_t2019914402  : public Il2CppObject
{
public:
	// com.cubeia.firebase.io.protocol.Enums/LobbyType com.cubeia.firebase.io.protocol.LobbyObjectUnsubscribePacket::type
	int32_t ___type_1;
	// System.Int32 com.cubeia.firebase.io.protocol.LobbyObjectUnsubscribePacket::gameid
	int32_t ___gameid_2;
	// System.String com.cubeia.firebase.io.protocol.LobbyObjectUnsubscribePacket::address
	String_t* ___address_3;
	// System.Int32 com.cubeia.firebase.io.protocol.LobbyObjectUnsubscribePacket::objectid
	int32_t ___objectid_4;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(LobbyObjectUnsubscribePacket_t2019914402, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_gameid_2() { return static_cast<int32_t>(offsetof(LobbyObjectUnsubscribePacket_t2019914402, ___gameid_2)); }
	inline int32_t get_gameid_2() const { return ___gameid_2; }
	inline int32_t* get_address_of_gameid_2() { return &___gameid_2; }
	inline void set_gameid_2(int32_t value)
	{
		___gameid_2 = value;
	}

	inline static int32_t get_offset_of_address_3() { return static_cast<int32_t>(offsetof(LobbyObjectUnsubscribePacket_t2019914402, ___address_3)); }
	inline String_t* get_address_3() const { return ___address_3; }
	inline String_t** get_address_of_address_3() { return &___address_3; }
	inline void set_address_3(String_t* value)
	{
		___address_3 = value;
		Il2CppCodeGenWriteBarrier(&___address_3, value);
	}

	inline static int32_t get_offset_of_objectid_4() { return static_cast<int32_t>(offsetof(LobbyObjectUnsubscribePacket_t2019914402, ___objectid_4)); }
	inline int32_t get_objectid_4() const { return ___objectid_4; }
	inline int32_t* get_address_of_objectid_4() { return &___objectid_4; }
	inline void set_objectid_4(int32_t value)
	{
		___objectid_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
