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
// System.Threading.AutoResetEvent
struct AutoResetEvent_t15112628;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "mscorlib_System_IO_Stream3255436806.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UploadStream
struct  UploadStream_t108391441  : public Stream_t3255436806
{
public:
	// System.IO.MemoryStream UploadStream::ReadBuffer
	MemoryStream_t743994179 * ___ReadBuffer_1;
	// System.IO.MemoryStream UploadStream::WriteBuffer
	MemoryStream_t743994179 * ___WriteBuffer_2;
	// System.Boolean UploadStream::noMoreData
	bool ___noMoreData_3;
	// System.Threading.AutoResetEvent UploadStream::ARE
	AutoResetEvent_t15112628 * ___ARE_4;
	// System.Object UploadStream::locker
	Il2CppObject * ___locker_5;
	// System.String UploadStream::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_ReadBuffer_1() { return static_cast<int32_t>(offsetof(UploadStream_t108391441, ___ReadBuffer_1)); }
	inline MemoryStream_t743994179 * get_ReadBuffer_1() const { return ___ReadBuffer_1; }
	inline MemoryStream_t743994179 ** get_address_of_ReadBuffer_1() { return &___ReadBuffer_1; }
	inline void set_ReadBuffer_1(MemoryStream_t743994179 * value)
	{
		___ReadBuffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___ReadBuffer_1, value);
	}

	inline static int32_t get_offset_of_WriteBuffer_2() { return static_cast<int32_t>(offsetof(UploadStream_t108391441, ___WriteBuffer_2)); }
	inline MemoryStream_t743994179 * get_WriteBuffer_2() const { return ___WriteBuffer_2; }
	inline MemoryStream_t743994179 ** get_address_of_WriteBuffer_2() { return &___WriteBuffer_2; }
	inline void set_WriteBuffer_2(MemoryStream_t743994179 * value)
	{
		___WriteBuffer_2 = value;
		Il2CppCodeGenWriteBarrier(&___WriteBuffer_2, value);
	}

	inline static int32_t get_offset_of_noMoreData_3() { return static_cast<int32_t>(offsetof(UploadStream_t108391441, ___noMoreData_3)); }
	inline bool get_noMoreData_3() const { return ___noMoreData_3; }
	inline bool* get_address_of_noMoreData_3() { return &___noMoreData_3; }
	inline void set_noMoreData_3(bool value)
	{
		___noMoreData_3 = value;
	}

	inline static int32_t get_offset_of_ARE_4() { return static_cast<int32_t>(offsetof(UploadStream_t108391441, ___ARE_4)); }
	inline AutoResetEvent_t15112628 * get_ARE_4() const { return ___ARE_4; }
	inline AutoResetEvent_t15112628 ** get_address_of_ARE_4() { return &___ARE_4; }
	inline void set_ARE_4(AutoResetEvent_t15112628 * value)
	{
		___ARE_4 = value;
		Il2CppCodeGenWriteBarrier(&___ARE_4, value);
	}

	inline static int32_t get_offset_of_locker_5() { return static_cast<int32_t>(offsetof(UploadStream_t108391441, ___locker_5)); }
	inline Il2CppObject * get_locker_5() const { return ___locker_5; }
	inline Il2CppObject ** get_address_of_locker_5() { return &___locker_5; }
	inline void set_locker_5(Il2CppObject * value)
	{
		___locker_5 = value;
		Il2CppCodeGenWriteBarrier(&___locker_5, value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UploadStream_t108391441, ___U3CNameU3Ek__BackingField_6)); }
	inline String_t* get_U3CNameU3Ek__BackingField_6() const { return ___U3CNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_6() { return &___U3CNameU3Ek__BackingField_6; }
	inline void set_U3CNameU3Ek__BackingField_6(String_t* value)
	{
		___U3CNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
