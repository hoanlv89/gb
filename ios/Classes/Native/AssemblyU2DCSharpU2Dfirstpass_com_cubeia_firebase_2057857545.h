#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.GameTransportPacket
struct  GameTransportPacket_t2057857545  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.GameTransportPacket::tableid
	int32_t ___tableid_1;
	// System.Int32 com.cubeia.firebase.io.protocol.GameTransportPacket::pid
	int32_t ___pid_2;
	// System.Byte[] com.cubeia.firebase.io.protocol.GameTransportPacket::gamedata
	ByteU5BU5D_t3397334013* ___gamedata_3;
	// System.Int32 com.cubeia.firebase.io.protocol.GameTransportPacket::fixed_miss
	int32_t ___fixed_miss_4;

public:
	inline static int32_t get_offset_of_tableid_1() { return static_cast<int32_t>(offsetof(GameTransportPacket_t2057857545, ___tableid_1)); }
	inline int32_t get_tableid_1() const { return ___tableid_1; }
	inline int32_t* get_address_of_tableid_1() { return &___tableid_1; }
	inline void set_tableid_1(int32_t value)
	{
		___tableid_1 = value;
	}

	inline static int32_t get_offset_of_pid_2() { return static_cast<int32_t>(offsetof(GameTransportPacket_t2057857545, ___pid_2)); }
	inline int32_t get_pid_2() const { return ___pid_2; }
	inline int32_t* get_address_of_pid_2() { return &___pid_2; }
	inline void set_pid_2(int32_t value)
	{
		___pid_2 = value;
	}

	inline static int32_t get_offset_of_gamedata_3() { return static_cast<int32_t>(offsetof(GameTransportPacket_t2057857545, ___gamedata_3)); }
	inline ByteU5BU5D_t3397334013* get_gamedata_3() const { return ___gamedata_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_gamedata_3() { return &___gamedata_3; }
	inline void set_gamedata_3(ByteU5BU5D_t3397334013* value)
	{
		___gamedata_3 = value;
		Il2CppCodeGenWriteBarrier(&___gamedata_3, value);
	}

	inline static int32_t get_offset_of_fixed_miss_4() { return static_cast<int32_t>(offsetof(GameTransportPacket_t2057857545, ___fixed_miss_4)); }
	inline int32_t get_fixed_miss_4() const { return ___fixed_miss_4; }
	inline int32_t* get_address_of_fixed_miss_4() { return &___fixed_miss_4; }
	inline void set_fixed_miss_4(int32_t value)
	{
		___fixed_miss_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
