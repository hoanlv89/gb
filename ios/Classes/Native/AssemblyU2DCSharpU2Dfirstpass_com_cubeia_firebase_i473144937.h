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

// com.cubeia.firebase.io.protocol.EncryptedTransportPacket
struct  EncryptedTransportPacket_t473144937  : public Il2CppObject
{
public:
	// System.Byte com.cubeia.firebase.io.protocol.EncryptedTransportPacket::func
	uint8_t ___func_1;
	// System.Byte[] com.cubeia.firebase.io.protocol.EncryptedTransportPacket::payload
	ByteU5BU5D_t3397334013* ___payload_2;

public:
	inline static int32_t get_offset_of_func_1() { return static_cast<int32_t>(offsetof(EncryptedTransportPacket_t473144937, ___func_1)); }
	inline uint8_t get_func_1() const { return ___func_1; }
	inline uint8_t* get_address_of_func_1() { return &___func_1; }
	inline void set_func_1(uint8_t value)
	{
		___func_1 = value;
	}

	inline static int32_t get_offset_of_payload_2() { return static_cast<int32_t>(offsetof(EncryptedTransportPacket_t473144937, ___payload_2)); }
	inline ByteU5BU5D_t3397334013* get_payload_2() const { return ___payload_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_payload_2() { return &___payload_2; }
	inline void set_payload_2(ByteU5BU5D_t3397334013* value)
	{
		___payload_2 = value;
		Il2CppCodeGenWriteBarrier(&___payload_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
