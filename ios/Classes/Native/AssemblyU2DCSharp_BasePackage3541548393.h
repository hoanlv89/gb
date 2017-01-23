#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.MemoryStream
struct MemoryStream_t743994179;
// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BasePackage
struct  BasePackage_t3541548393  : public Il2CppObject
{
public:
	// System.IO.MemoryStream BasePackage::buffer
	MemoryStream_t743994179 * ___buffer_0;
	// System.IO.BinaryWriter BasePackage::writer
	BinaryWriter_t3179371318 * ___writer_1;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(BasePackage_t3541548393, ___buffer_0)); }
	inline MemoryStream_t743994179 * get_buffer_0() const { return ___buffer_0; }
	inline MemoryStream_t743994179 ** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(MemoryStream_t743994179 * value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_writer_1() { return static_cast<int32_t>(offsetof(BasePackage_t3541548393, ___writer_1)); }
	inline BinaryWriter_t3179371318 * get_writer_1() const { return ___writer_1; }
	inline BinaryWriter_t3179371318 ** get_address_of_writer_1() { return &___writer_1; }
	inline void set_writer_1(BinaryWriter_t3179371318 * value)
	{
		___writer_1 = value;
		Il2CppCodeGenWriteBarrier(&___writer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
