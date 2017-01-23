#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BestHTTP.Decompression.Zlib.ZlibBaseStream
struct ZlibBaseStream_t3383394762;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t663144255;

#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BestHTTP.Decompression.Zlib.GZipStream
struct  GZipStream_t1683233742  : public Stream_t3255436806
{
public:
	// System.Nullable`1<System.DateTime> BestHTTP.Decompression.Zlib.GZipStream::LastModified
	Nullable_1_t3251239280  ___LastModified_1;
	// System.Int32 BestHTTP.Decompression.Zlib.GZipStream::_headerByteCount
	int32_t ____headerByteCount_2;
	// BestHTTP.Decompression.Zlib.ZlibBaseStream BestHTTP.Decompression.Zlib.GZipStream::_baseStream
	ZlibBaseStream_t3383394762 * ____baseStream_3;
	// System.Boolean BestHTTP.Decompression.Zlib.GZipStream::_disposed
	bool ____disposed_4;
	// System.Boolean BestHTTP.Decompression.Zlib.GZipStream::_firstReadDone
	bool ____firstReadDone_5;
	// System.String BestHTTP.Decompression.Zlib.GZipStream::_FileName
	String_t* ____FileName_6;
	// System.String BestHTTP.Decompression.Zlib.GZipStream::_Comment
	String_t* ____Comment_7;
	// System.Int32 BestHTTP.Decompression.Zlib.GZipStream::_Crc32
	int32_t ____Crc32_8;

public:
	inline static int32_t get_offset_of_LastModified_1() { return static_cast<int32_t>(offsetof(GZipStream_t1683233742, ___LastModified_1)); }
	inline Nullable_1_t3251239280  get_LastModified_1() const { return ___LastModified_1; }
	inline Nullable_1_t3251239280 * get_address_of_LastModified_1() { return &___LastModified_1; }
	inline void set_LastModified_1(Nullable_1_t3251239280  value)
	{
		___LastModified_1 = value;
	}

	inline static int32_t get_offset_of__headerByteCount_2() { return static_cast<int32_t>(offsetof(GZipStream_t1683233742, ____headerByteCount_2)); }
	inline int32_t get__headerByteCount_2() const { return ____headerByteCount_2; }
	inline int32_t* get_address_of__headerByteCount_2() { return &____headerByteCount_2; }
	inline void set__headerByteCount_2(int32_t value)
	{
		____headerByteCount_2 = value;
	}

	inline static int32_t get_offset_of__baseStream_3() { return static_cast<int32_t>(offsetof(GZipStream_t1683233742, ____baseStream_3)); }
	inline ZlibBaseStream_t3383394762 * get__baseStream_3() const { return ____baseStream_3; }
	inline ZlibBaseStream_t3383394762 ** get_address_of__baseStream_3() { return &____baseStream_3; }
	inline void set__baseStream_3(ZlibBaseStream_t3383394762 * value)
	{
		____baseStream_3 = value;
		Il2CppCodeGenWriteBarrier(&____baseStream_3, value);
	}

	inline static int32_t get_offset_of__disposed_4() { return static_cast<int32_t>(offsetof(GZipStream_t1683233742, ____disposed_4)); }
	inline bool get__disposed_4() const { return ____disposed_4; }
	inline bool* get_address_of__disposed_4() { return &____disposed_4; }
	inline void set__disposed_4(bool value)
	{
		____disposed_4 = value;
	}

	inline static int32_t get_offset_of__firstReadDone_5() { return static_cast<int32_t>(offsetof(GZipStream_t1683233742, ____firstReadDone_5)); }
	inline bool get__firstReadDone_5() const { return ____firstReadDone_5; }
	inline bool* get_address_of__firstReadDone_5() { return &____firstReadDone_5; }
	inline void set__firstReadDone_5(bool value)
	{
		____firstReadDone_5 = value;
	}

	inline static int32_t get_offset_of__FileName_6() { return static_cast<int32_t>(offsetof(GZipStream_t1683233742, ____FileName_6)); }
	inline String_t* get__FileName_6() const { return ____FileName_6; }
	inline String_t** get_address_of__FileName_6() { return &____FileName_6; }
	inline void set__FileName_6(String_t* value)
	{
		____FileName_6 = value;
		Il2CppCodeGenWriteBarrier(&____FileName_6, value);
	}

	inline static int32_t get_offset_of__Comment_7() { return static_cast<int32_t>(offsetof(GZipStream_t1683233742, ____Comment_7)); }
	inline String_t* get__Comment_7() const { return ____Comment_7; }
	inline String_t** get_address_of__Comment_7() { return &____Comment_7; }
	inline void set__Comment_7(String_t* value)
	{
		____Comment_7 = value;
		Il2CppCodeGenWriteBarrier(&____Comment_7, value);
	}

	inline static int32_t get_offset_of__Crc32_8() { return static_cast<int32_t>(offsetof(GZipStream_t1683233742, ____Crc32_8)); }
	inline int32_t get__Crc32_8() const { return ____Crc32_8; }
	inline int32_t* get_address_of__Crc32_8() { return &____Crc32_8; }
	inline void set__Crc32_8(int32_t value)
	{
		____Crc32_8 = value;
	}
};

struct GZipStream_t1683233742_StaticFields
{
public:
	// System.DateTime BestHTTP.Decompression.Zlib.GZipStream::_unixEpoch
	DateTime_t693205669  ____unixEpoch_9;
	// System.Text.Encoding BestHTTP.Decompression.Zlib.GZipStream::iso8859dash1
	Encoding_t663144255 * ___iso8859dash1_10;

public:
	inline static int32_t get_offset_of__unixEpoch_9() { return static_cast<int32_t>(offsetof(GZipStream_t1683233742_StaticFields, ____unixEpoch_9)); }
	inline DateTime_t693205669  get__unixEpoch_9() const { return ____unixEpoch_9; }
	inline DateTime_t693205669 * get_address_of__unixEpoch_9() { return &____unixEpoch_9; }
	inline void set__unixEpoch_9(DateTime_t693205669  value)
	{
		____unixEpoch_9 = value;
	}

	inline static int32_t get_offset_of_iso8859dash1_10() { return static_cast<int32_t>(offsetof(GZipStream_t1683233742_StaticFields, ___iso8859dash1_10)); }
	inline Encoding_t663144255 * get_iso8859dash1_10() const { return ___iso8859dash1_10; }
	inline Encoding_t663144255 ** get_address_of_iso8859dash1_10() { return &___iso8859dash1_10; }
	inline void set_iso8859dash1_10(Encoding_t663144255 * value)
	{
		___iso8859dash1_10 = value;
		Il2CppCodeGenWriteBarrier(&___iso8859dash1_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
