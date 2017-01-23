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

// com.cubeia.firebase.io.protocol.LocalServiceTransportPacket
struct  LocalServiceTransportPacket_t3503280477  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.LocalServiceTransportPacket::seq
	int32_t ___seq_1;
	// System.Byte[] com.cubeia.firebase.io.protocol.LocalServiceTransportPacket::servicedata
	ByteU5BU5D_t3397334013* ___servicedata_2;

public:
	inline static int32_t get_offset_of_seq_1() { return static_cast<int32_t>(offsetof(LocalServiceTransportPacket_t3503280477, ___seq_1)); }
	inline int32_t get_seq_1() const { return ___seq_1; }
	inline int32_t* get_address_of_seq_1() { return &___seq_1; }
	inline void set_seq_1(int32_t value)
	{
		___seq_1 = value;
	}

	inline static int32_t get_offset_of_servicedata_2() { return static_cast<int32_t>(offsetof(LocalServiceTransportPacket_t3503280477, ___servicedata_2)); }
	inline ByteU5BU5D_t3397334013* get_servicedata_2() const { return ___servicedata_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_servicedata_2() { return &___servicedata_2; }
	inline void set_servicedata_2(ByteU5BU5D_t3397334013* value)
	{
		___servicedata_2 = value;
		Il2CppCodeGenWriteBarrier(&___servicedata_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
