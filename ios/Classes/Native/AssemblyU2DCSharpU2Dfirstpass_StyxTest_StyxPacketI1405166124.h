#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_StyxTest_StyxPacketIn796194720.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StyxTest.StyxPacketInfo
struct  StyxPacketInfo_t1405166124  : public Il2CppObject
{
public:
	// System.Net.Sockets.Socket StyxTest.StyxPacketInfo::socket
	Socket_t3821512045 * ___socket_0;
	// System.Byte[] StyxTest.StyxPacketInfo::headerBuffer
	ByteU5BU5D_t3397334013* ___headerBuffer_2;
	// System.Byte[] StyxTest.StyxPacketInfo::packetBuffer
	ByteU5BU5D_t3397334013* ___packetBuffer_3;
	// System.Int32 StyxTest.StyxPacketInfo::packetLength
	int32_t ___packetLength_4;
	// System.Byte StyxTest.StyxPacketInfo::classId
	uint8_t ___classId_5;
	// System.Boolean StyxTest.StyxPacketInfo::complete
	bool ___complete_6;
	// StyxTest.StyxPacketInfo/STATE StyxTest.StyxPacketInfo::state
	int32_t ___state_7;
	// System.Int32 StyxTest.StyxPacketInfo::bytesLeft
	int32_t ___bytesLeft_8;

public:
	inline static int32_t get_offset_of_socket_0() { return static_cast<int32_t>(offsetof(StyxPacketInfo_t1405166124, ___socket_0)); }
	inline Socket_t3821512045 * get_socket_0() const { return ___socket_0; }
	inline Socket_t3821512045 ** get_address_of_socket_0() { return &___socket_0; }
	inline void set_socket_0(Socket_t3821512045 * value)
	{
		___socket_0 = value;
		Il2CppCodeGenWriteBarrier(&___socket_0, value);
	}

	inline static int32_t get_offset_of_headerBuffer_2() { return static_cast<int32_t>(offsetof(StyxPacketInfo_t1405166124, ___headerBuffer_2)); }
	inline ByteU5BU5D_t3397334013* get_headerBuffer_2() const { return ___headerBuffer_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_headerBuffer_2() { return &___headerBuffer_2; }
	inline void set_headerBuffer_2(ByteU5BU5D_t3397334013* value)
	{
		___headerBuffer_2 = value;
		Il2CppCodeGenWriteBarrier(&___headerBuffer_2, value);
	}

	inline static int32_t get_offset_of_packetBuffer_3() { return static_cast<int32_t>(offsetof(StyxPacketInfo_t1405166124, ___packetBuffer_3)); }
	inline ByteU5BU5D_t3397334013* get_packetBuffer_3() const { return ___packetBuffer_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_packetBuffer_3() { return &___packetBuffer_3; }
	inline void set_packetBuffer_3(ByteU5BU5D_t3397334013* value)
	{
		___packetBuffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___packetBuffer_3, value);
	}

	inline static int32_t get_offset_of_packetLength_4() { return static_cast<int32_t>(offsetof(StyxPacketInfo_t1405166124, ___packetLength_4)); }
	inline int32_t get_packetLength_4() const { return ___packetLength_4; }
	inline int32_t* get_address_of_packetLength_4() { return &___packetLength_4; }
	inline void set_packetLength_4(int32_t value)
	{
		___packetLength_4 = value;
	}

	inline static int32_t get_offset_of_classId_5() { return static_cast<int32_t>(offsetof(StyxPacketInfo_t1405166124, ___classId_5)); }
	inline uint8_t get_classId_5() const { return ___classId_5; }
	inline uint8_t* get_address_of_classId_5() { return &___classId_5; }
	inline void set_classId_5(uint8_t value)
	{
		___classId_5 = value;
	}

	inline static int32_t get_offset_of_complete_6() { return static_cast<int32_t>(offsetof(StyxPacketInfo_t1405166124, ___complete_6)); }
	inline bool get_complete_6() const { return ___complete_6; }
	inline bool* get_address_of_complete_6() { return &___complete_6; }
	inline void set_complete_6(bool value)
	{
		___complete_6 = value;
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(StyxPacketInfo_t1405166124, ___state_7)); }
	inline int32_t get_state_7() const { return ___state_7; }
	inline int32_t* get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(int32_t value)
	{
		___state_7 = value;
	}

	inline static int32_t get_offset_of_bytesLeft_8() { return static_cast<int32_t>(offsetof(StyxPacketInfo_t1405166124, ___bytesLeft_8)); }
	inline int32_t get_bytesLeft_8() const { return ___bytesLeft_8; }
	inline int32_t* get_address_of_bytesLeft_8() { return &___bytesLeft_8; }
	inline void set_bytesLeft_8(int32_t value)
	{
		___bytesLeft_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
