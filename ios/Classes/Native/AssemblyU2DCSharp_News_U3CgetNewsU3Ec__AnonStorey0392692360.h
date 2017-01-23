#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NewsItem
struct NewsItem_t154948812;
// News
struct News_t1129599781;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// News/<getNews>c__AnonStorey0
struct  U3CgetNewsU3Ec__AnonStorey0_t392692360  : public Il2CppObject
{
public:
	// NewsItem News/<getNews>c__AnonStorey0::newsItem
	NewsItem_t154948812 * ___newsItem_0;
	// News News/<getNews>c__AnonStorey0::$this
	News_t1129599781 * ___U24this_1;

public:
	inline static int32_t get_offset_of_newsItem_0() { return static_cast<int32_t>(offsetof(U3CgetNewsU3Ec__AnonStorey0_t392692360, ___newsItem_0)); }
	inline NewsItem_t154948812 * get_newsItem_0() const { return ___newsItem_0; }
	inline NewsItem_t154948812 ** get_address_of_newsItem_0() { return &___newsItem_0; }
	inline void set_newsItem_0(NewsItem_t154948812 * value)
	{
		___newsItem_0 = value;
		Il2CppCodeGenWriteBarrier(&___newsItem_0, value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CgetNewsU3Ec__AnonStorey0_t392692360, ___U24this_1)); }
	inline News_t1129599781 * get_U24this_1() const { return ___U24this_1; }
	inline News_t1129599781 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(News_t1129599781 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
