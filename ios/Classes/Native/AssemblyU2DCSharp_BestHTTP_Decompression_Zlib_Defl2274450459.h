﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BestHTTP.Decompression.Zlib.ZlibBaseStream
struct ZlibBaseStream_t3383394762;
// System.IO.Stream
struct Stream_t3255436806;

#include "mscorlib_System_IO_Stream3255436806.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BestHTTP.Decompression.Zlib.DeflateStream
struct  DeflateStream_t2274450459  : public Stream_t3255436806
{
public:
	// BestHTTP.Decompression.Zlib.ZlibBaseStream BestHTTP.Decompression.Zlib.DeflateStream::_baseStream
	ZlibBaseStream_t3383394762 * ____baseStream_1;
	// System.IO.Stream BestHTTP.Decompression.Zlib.DeflateStream::_innerStream
	Stream_t3255436806 * ____innerStream_2;
	// System.Boolean BestHTTP.Decompression.Zlib.DeflateStream::_disposed
	bool ____disposed_3;

public:
	inline static int32_t get_offset_of__baseStream_1() { return static_cast<int32_t>(offsetof(DeflateStream_t2274450459, ____baseStream_1)); }
	inline ZlibBaseStream_t3383394762 * get__baseStream_1() const { return ____baseStream_1; }
	inline ZlibBaseStream_t3383394762 ** get_address_of__baseStream_1() { return &____baseStream_1; }
	inline void set__baseStream_1(ZlibBaseStream_t3383394762 * value)
	{
		____baseStream_1 = value;
		Il2CppCodeGenWriteBarrier(&____baseStream_1, value);
	}

	inline static int32_t get_offset_of__innerStream_2() { return static_cast<int32_t>(offsetof(DeflateStream_t2274450459, ____innerStream_2)); }
	inline Stream_t3255436806 * get__innerStream_2() const { return ____innerStream_2; }
	inline Stream_t3255436806 ** get_address_of__innerStream_2() { return &____innerStream_2; }
	inline void set__innerStream_2(Stream_t3255436806 * value)
	{
		____innerStream_2 = value;
		Il2CppCodeGenWriteBarrier(&____innerStream_2, value);
	}

	inline static int32_t get_offset_of__disposed_3() { return static_cast<int32_t>(offsetof(DeflateStream_t2274450459, ____disposed_3)); }
	inline bool get__disposed_3() const { return ____disposed_3; }
	inline bool* get_address_of__disposed_3() { return &____disposed_3; }
	inline void set__disposed_3(bool value)
	{
		____disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
