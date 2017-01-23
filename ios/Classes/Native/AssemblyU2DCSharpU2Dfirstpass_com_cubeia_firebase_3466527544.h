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

// com.cubeia.firebase.io.protocol.MttTransportPacket
struct  MttTransportPacket_t3466527544  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.MttTransportPacket::mttid
	int32_t ___mttid_1;
	// System.Int32 com.cubeia.firebase.io.protocol.MttTransportPacket::pid
	int32_t ___pid_2;
	// System.Byte[] com.cubeia.firebase.io.protocol.MttTransportPacket::mttdata
	ByteU5BU5D_t3397334013* ___mttdata_3;

public:
	inline static int32_t get_offset_of_mttid_1() { return static_cast<int32_t>(offsetof(MttTransportPacket_t3466527544, ___mttid_1)); }
	inline int32_t get_mttid_1() const { return ___mttid_1; }
	inline int32_t* get_address_of_mttid_1() { return &___mttid_1; }
	inline void set_mttid_1(int32_t value)
	{
		___mttid_1 = value;
	}

	inline static int32_t get_offset_of_pid_2() { return static_cast<int32_t>(offsetof(MttTransportPacket_t3466527544, ___pid_2)); }
	inline int32_t get_pid_2() const { return ___pid_2; }
	inline int32_t* get_address_of_pid_2() { return &___pid_2; }
	inline void set_pid_2(int32_t value)
	{
		___pid_2 = value;
	}

	inline static int32_t get_offset_of_mttdata_3() { return static_cast<int32_t>(offsetof(MttTransportPacket_t3466527544, ___mttdata_3)); }
	inline ByteU5BU5D_t3397334013* get_mttdata_3() const { return ___mttdata_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_mttdata_3() { return &___mttdata_3; }
	inline void set_mttdata_3(ByteU5BU5D_t3397334013* value)
	{
		___mttdata_3 = value;
		Il2CppCodeGenWriteBarrier(&___mttdata_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
