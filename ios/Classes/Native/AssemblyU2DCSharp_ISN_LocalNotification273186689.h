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

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_LocalNotification
struct  ISN_LocalNotification_t273186689  : public Il2CppObject
{
public:
	// System.Int32 ISN_LocalNotification::_Id
	int32_t ____Id_0;
	// System.DateTime ISN_LocalNotification::_Date
	DateTime_t693205669  ____Date_1;
	// System.String ISN_LocalNotification::_Message
	String_t* ____Message_2;
	// System.Boolean ISN_LocalNotification::_UseSound
	bool ____UseSound_3;
	// System.Int32 ISN_LocalNotification::_Badges
	int32_t ____Badges_4;
	// System.String ISN_LocalNotification::_Data
	String_t* ____Data_5;

public:
	inline static int32_t get_offset_of__Id_0() { return static_cast<int32_t>(offsetof(ISN_LocalNotification_t273186689, ____Id_0)); }
	inline int32_t get__Id_0() const { return ____Id_0; }
	inline int32_t* get_address_of__Id_0() { return &____Id_0; }
	inline void set__Id_0(int32_t value)
	{
		____Id_0 = value;
	}

	inline static int32_t get_offset_of__Date_1() { return static_cast<int32_t>(offsetof(ISN_LocalNotification_t273186689, ____Date_1)); }
	inline DateTime_t693205669  get__Date_1() const { return ____Date_1; }
	inline DateTime_t693205669 * get_address_of__Date_1() { return &____Date_1; }
	inline void set__Date_1(DateTime_t693205669  value)
	{
		____Date_1 = value;
	}

	inline static int32_t get_offset_of__Message_2() { return static_cast<int32_t>(offsetof(ISN_LocalNotification_t273186689, ____Message_2)); }
	inline String_t* get__Message_2() const { return ____Message_2; }
	inline String_t** get_address_of__Message_2() { return &____Message_2; }
	inline void set__Message_2(String_t* value)
	{
		____Message_2 = value;
		Il2CppCodeGenWriteBarrier(&____Message_2, value);
	}

	inline static int32_t get_offset_of__UseSound_3() { return static_cast<int32_t>(offsetof(ISN_LocalNotification_t273186689, ____UseSound_3)); }
	inline bool get__UseSound_3() const { return ____UseSound_3; }
	inline bool* get_address_of__UseSound_3() { return &____UseSound_3; }
	inline void set__UseSound_3(bool value)
	{
		____UseSound_3 = value;
	}

	inline static int32_t get_offset_of__Badges_4() { return static_cast<int32_t>(offsetof(ISN_LocalNotification_t273186689, ____Badges_4)); }
	inline int32_t get__Badges_4() const { return ____Badges_4; }
	inline int32_t* get_address_of__Badges_4() { return &____Badges_4; }
	inline void set__Badges_4(int32_t value)
	{
		____Badges_4 = value;
	}

	inline static int32_t get_offset_of__Data_5() { return static_cast<int32_t>(offsetof(ISN_LocalNotification_t273186689, ____Data_5)); }
	inline String_t* get__Data_5() const { return ____Data_5; }
	inline String_t** get_address_of__Data_5() { return &____Data_5; }
	inline void set__Data_5(String_t* value)
	{
		____Data_5 = value;
		Il2CppCodeGenWriteBarrier(&____Data_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
