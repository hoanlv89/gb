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

// NewsItem
struct  NewsItem_t154948812  : public Il2CppObject
{
public:
	// System.Int32 NewsItem::id
	int32_t ___id_0;
	// System.String NewsItem::title
	String_t* ___title_1;
	// System.String NewsItem::time
	String_t* ___time_2;
	// System.String NewsItem::link
	String_t* ___link_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(NewsItem_t154948812, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_title_1() { return static_cast<int32_t>(offsetof(NewsItem_t154948812, ___title_1)); }
	inline String_t* get_title_1() const { return ___title_1; }
	inline String_t** get_address_of_title_1() { return &___title_1; }
	inline void set_title_1(String_t* value)
	{
		___title_1 = value;
		Il2CppCodeGenWriteBarrier(&___title_1, value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(NewsItem_t154948812, ___time_2)); }
	inline String_t* get_time_2() const { return ___time_2; }
	inline String_t** get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(String_t* value)
	{
		___time_2 = value;
		Il2CppCodeGenWriteBarrier(&___time_2, value);
	}

	inline static int32_t get_offset_of_link_3() { return static_cast<int32_t>(offsetof(NewsItem_t154948812, ___link_3)); }
	inline String_t* get_link_3() const { return ___link_3; }
	inline String_t** get_address_of_link_3() { return &___link_3; }
	inline void set_link_3(String_t* value)
	{
		___link_3 = value;
		Il2CppCodeGenWriteBarrier(&___link_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
