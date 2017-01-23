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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeaderBoardItems
struct  LeaderBoardItems_t887351713  : public Il2CppObject
{
public:
	// System.String LeaderBoardItems::url
	String_t* ___url_0;
	// System.String LeaderBoardItems::name
	String_t* ___name_1;
	// System.Int32 LeaderBoardItems::point
	int32_t ___point_2;
	// System.Int32 LeaderBoardItems::av
	int32_t ___av_3;
	// System.Int32 LeaderBoardItems::M
	int32_t ___M_4;
	// System.Int32 LeaderBoardItems::V
	int32_t ___V_5;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(LeaderBoardItems_t887351713, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier(&___url_0, value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(LeaderBoardItems_t887351713, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_point_2() { return static_cast<int32_t>(offsetof(LeaderBoardItems_t887351713, ___point_2)); }
	inline int32_t get_point_2() const { return ___point_2; }
	inline int32_t* get_address_of_point_2() { return &___point_2; }
	inline void set_point_2(int32_t value)
	{
		___point_2 = value;
	}

	inline static int32_t get_offset_of_av_3() { return static_cast<int32_t>(offsetof(LeaderBoardItems_t887351713, ___av_3)); }
	inline int32_t get_av_3() const { return ___av_3; }
	inline int32_t* get_address_of_av_3() { return &___av_3; }
	inline void set_av_3(int32_t value)
	{
		___av_3 = value;
	}

	inline static int32_t get_offset_of_M_4() { return static_cast<int32_t>(offsetof(LeaderBoardItems_t887351713, ___M_4)); }
	inline int32_t get_M_4() const { return ___M_4; }
	inline int32_t* get_address_of_M_4() { return &___M_4; }
	inline void set_M_4(int32_t value)
	{
		___M_4 = value;
	}

	inline static int32_t get_offset_of_V_5() { return static_cast<int32_t>(offsetof(LeaderBoardItems_t887351713, ___V_5)); }
	inline int32_t get_V_5() const { return ___V_5; }
	inline int32_t* get_address_of_V_5() { return &___V_5; }
	inline void set_V_5(int32_t value)
	{
		___V_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
