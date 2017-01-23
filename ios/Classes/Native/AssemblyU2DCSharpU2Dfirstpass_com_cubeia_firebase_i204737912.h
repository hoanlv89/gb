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
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// com.cubeia.firebase.io.protocol.ServiceTransportPacket
struct  ServiceTransportPacket_t204737912  : public Il2CppObject
{
public:
	// System.Int32 com.cubeia.firebase.io.protocol.ServiceTransportPacket::pid
	int32_t ___pid_1;
	// System.Int32 com.cubeia.firebase.io.protocol.ServiceTransportPacket::seq
	int32_t ___seq_2;
	// System.String com.cubeia.firebase.io.protocol.ServiceTransportPacket::service
	String_t* ___service_3;
	// System.Byte com.cubeia.firebase.io.protocol.ServiceTransportPacket::idtype
	uint8_t ___idtype_4;
	// System.Byte[] com.cubeia.firebase.io.protocol.ServiceTransportPacket::servicedata
	ByteU5BU5D_t3397334013* ___servicedata_5;
	// System.Int32 com.cubeia.firebase.io.protocol.ServiceTransportPacket::fixed_miss
	int32_t ___fixed_miss_6;

public:
	inline static int32_t get_offset_of_pid_1() { return static_cast<int32_t>(offsetof(ServiceTransportPacket_t204737912, ___pid_1)); }
	inline int32_t get_pid_1() const { return ___pid_1; }
	inline int32_t* get_address_of_pid_1() { return &___pid_1; }
	inline void set_pid_1(int32_t value)
	{
		___pid_1 = value;
	}

	inline static int32_t get_offset_of_seq_2() { return static_cast<int32_t>(offsetof(ServiceTransportPacket_t204737912, ___seq_2)); }
	inline int32_t get_seq_2() const { return ___seq_2; }
	inline int32_t* get_address_of_seq_2() { return &___seq_2; }
	inline void set_seq_2(int32_t value)
	{
		___seq_2 = value;
	}

	inline static int32_t get_offset_of_service_3() { return static_cast<int32_t>(offsetof(ServiceTransportPacket_t204737912, ___service_3)); }
	inline String_t* get_service_3() const { return ___service_3; }
	inline String_t** get_address_of_service_3() { return &___service_3; }
	inline void set_service_3(String_t* value)
	{
		___service_3 = value;
		Il2CppCodeGenWriteBarrier(&___service_3, value);
	}

	inline static int32_t get_offset_of_idtype_4() { return static_cast<int32_t>(offsetof(ServiceTransportPacket_t204737912, ___idtype_4)); }
	inline uint8_t get_idtype_4() const { return ___idtype_4; }
	inline uint8_t* get_address_of_idtype_4() { return &___idtype_4; }
	inline void set_idtype_4(uint8_t value)
	{
		___idtype_4 = value;
	}

	inline static int32_t get_offset_of_servicedata_5() { return static_cast<int32_t>(offsetof(ServiceTransportPacket_t204737912, ___servicedata_5)); }
	inline ByteU5BU5D_t3397334013* get_servicedata_5() const { return ___servicedata_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_servicedata_5() { return &___servicedata_5; }
	inline void set_servicedata_5(ByteU5BU5D_t3397334013* value)
	{
		___servicedata_5 = value;
		Il2CppCodeGenWriteBarrier(&___servicedata_5, value);
	}

	inline static int32_t get_offset_of_fixed_miss_6() { return static_cast<int32_t>(offsetof(ServiceTransportPacket_t204737912, ___fixed_miss_6)); }
	inline int32_t get_fixed_miss_6() const { return ___fixed_miss_6; }
	inline int32_t* get_address_of_fixed_miss_6() { return &___fixed_miss_6; }
	inline void set_fixed_miss_6(int32_t value)
	{
		___fixed_miss_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
