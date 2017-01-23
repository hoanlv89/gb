#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Styx.PacketOutputStream
struct  PacketOutputStream_t1989328347  : public Il2CppObject
{
public:
	// System.IO.BinaryWriter Styx.PacketOutputStream::writer
	BinaryWriter_t3179371318 * ___writer_1;

public:
	inline static int32_t get_offset_of_writer_1() { return static_cast<int32_t>(offsetof(PacketOutputStream_t1989328347, ___writer_1)); }
	inline BinaryWriter_t3179371318 * get_writer_1() const { return ___writer_1; }
	inline BinaryWriter_t3179371318 ** get_address_of_writer_1() { return &___writer_1; }
	inline void set_writer_1(BinaryWriter_t3179371318 * value)
	{
		___writer_1 = value;
		Il2CppCodeGenWriteBarrier(&___writer_1, value);
	}
};

struct PacketOutputStream_t1989328347_StaticFields
{
public:
	// System.Int32 Styx.PacketOutputStream::STRING_MAX_BYTES
	int32_t ___STRING_MAX_BYTES_0;

public:
	inline static int32_t get_offset_of_STRING_MAX_BYTES_0() { return static_cast<int32_t>(offsetof(PacketOutputStream_t1989328347_StaticFields, ___STRING_MAX_BYTES_0)); }
	inline int32_t get_STRING_MAX_BYTES_0() const { return ___STRING_MAX_BYTES_0; }
	inline int32_t* get_address_of_STRING_MAX_BYTES_0() { return &___STRING_MAX_BYTES_0; }
	inline void set_STRING_MAX_BYTES_0(int32_t value)
	{
		___STRING_MAX_BYTES_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
