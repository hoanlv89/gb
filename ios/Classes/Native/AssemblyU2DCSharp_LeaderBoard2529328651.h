#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// System.String
struct String_t;
// Utils/Executor
struct Executor_t2576254565;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeaderBoard
struct  LeaderBoard_t2529328651  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 LeaderBoard::flag
	int32_t ___flag_2;
	// UnityEngine.RectTransform LeaderBoard::LeaderboardItem
	RectTransform_t3349966182 * ___LeaderboardItem_3;
	// UnityEngine.RectTransform LeaderBoard::TOP3
	RectTransform_t3349966182 * ___TOP3_4;
	// UnityEngine.RectTransform LeaderBoard::ListView
	RectTransform_t3349966182 * ___ListView_5;
	// UnityEngine.RectTransform LeaderBoard::Content
	RectTransform_t3349966182 * ___Content_6;
	// UnityEngine.RectTransform LeaderBoard::ScroolBar
	RectTransform_t3349966182 * ___ScroolBar_7;
	// UnityEngine.Sprite[] LeaderBoard::listTopRank
	SpriteU5BU5D_t3359083662* ___listTopRank_8;

public:
	inline static int32_t get_offset_of_flag_2() { return static_cast<int32_t>(offsetof(LeaderBoard_t2529328651, ___flag_2)); }
	inline int32_t get_flag_2() const { return ___flag_2; }
	inline int32_t* get_address_of_flag_2() { return &___flag_2; }
	inline void set_flag_2(int32_t value)
	{
		___flag_2 = value;
	}

	inline static int32_t get_offset_of_LeaderboardItem_3() { return static_cast<int32_t>(offsetof(LeaderBoard_t2529328651, ___LeaderboardItem_3)); }
	inline RectTransform_t3349966182 * get_LeaderboardItem_3() const { return ___LeaderboardItem_3; }
	inline RectTransform_t3349966182 ** get_address_of_LeaderboardItem_3() { return &___LeaderboardItem_3; }
	inline void set_LeaderboardItem_3(RectTransform_t3349966182 * value)
	{
		___LeaderboardItem_3 = value;
		Il2CppCodeGenWriteBarrier(&___LeaderboardItem_3, value);
	}

	inline static int32_t get_offset_of_TOP3_4() { return static_cast<int32_t>(offsetof(LeaderBoard_t2529328651, ___TOP3_4)); }
	inline RectTransform_t3349966182 * get_TOP3_4() const { return ___TOP3_4; }
	inline RectTransform_t3349966182 ** get_address_of_TOP3_4() { return &___TOP3_4; }
	inline void set_TOP3_4(RectTransform_t3349966182 * value)
	{
		___TOP3_4 = value;
		Il2CppCodeGenWriteBarrier(&___TOP3_4, value);
	}

	inline static int32_t get_offset_of_ListView_5() { return static_cast<int32_t>(offsetof(LeaderBoard_t2529328651, ___ListView_5)); }
	inline RectTransform_t3349966182 * get_ListView_5() const { return ___ListView_5; }
	inline RectTransform_t3349966182 ** get_address_of_ListView_5() { return &___ListView_5; }
	inline void set_ListView_5(RectTransform_t3349966182 * value)
	{
		___ListView_5 = value;
		Il2CppCodeGenWriteBarrier(&___ListView_5, value);
	}

	inline static int32_t get_offset_of_Content_6() { return static_cast<int32_t>(offsetof(LeaderBoard_t2529328651, ___Content_6)); }
	inline RectTransform_t3349966182 * get_Content_6() const { return ___Content_6; }
	inline RectTransform_t3349966182 ** get_address_of_Content_6() { return &___Content_6; }
	inline void set_Content_6(RectTransform_t3349966182 * value)
	{
		___Content_6 = value;
		Il2CppCodeGenWriteBarrier(&___Content_6, value);
	}

	inline static int32_t get_offset_of_ScroolBar_7() { return static_cast<int32_t>(offsetof(LeaderBoard_t2529328651, ___ScroolBar_7)); }
	inline RectTransform_t3349966182 * get_ScroolBar_7() const { return ___ScroolBar_7; }
	inline RectTransform_t3349966182 ** get_address_of_ScroolBar_7() { return &___ScroolBar_7; }
	inline void set_ScroolBar_7(RectTransform_t3349966182 * value)
	{
		___ScroolBar_7 = value;
		Il2CppCodeGenWriteBarrier(&___ScroolBar_7, value);
	}

	inline static int32_t get_offset_of_listTopRank_8() { return static_cast<int32_t>(offsetof(LeaderBoard_t2529328651, ___listTopRank_8)); }
	inline SpriteU5BU5D_t3359083662* get_listTopRank_8() const { return ___listTopRank_8; }
	inline SpriteU5BU5D_t3359083662** get_address_of_listTopRank_8() { return &___listTopRank_8; }
	inline void set_listTopRank_8(SpriteU5BU5D_t3359083662* value)
	{
		___listTopRank_8 = value;
		Il2CppCodeGenWriteBarrier(&___listTopRank_8, value);
	}
};

struct LeaderBoard_t2529328651_StaticFields
{
public:
	// System.String LeaderBoard::presents
	String_t* ___presents_9;
	// Utils/Executor LeaderBoard::<>f__am$cache0
	Executor_t2576254565 * ___U3CU3Ef__amU24cache0_10;

public:
	inline static int32_t get_offset_of_presents_9() { return static_cast<int32_t>(offsetof(LeaderBoard_t2529328651_StaticFields, ___presents_9)); }
	inline String_t* get_presents_9() const { return ___presents_9; }
	inline String_t** get_address_of_presents_9() { return &___presents_9; }
	inline void set_presents_9(String_t* value)
	{
		___presents_9 = value;
		Il2CppCodeGenWriteBarrier(&___presents_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_10() { return static_cast<int32_t>(offsetof(LeaderBoard_t2529328651_StaticFields, ___U3CU3Ef__amU24cache0_10)); }
	inline Executor_t2576254565 * get_U3CU3Ef__amU24cache0_10() const { return ___U3CU3Ef__amU24cache0_10; }
	inline Executor_t2576254565 ** get_address_of_U3CU3Ef__amU24cache0_10() { return &___U3CU3Ef__amU24cache0_10; }
	inline void set_U3CU3Ef__amU24cache0_10(Executor_t2576254565 * value)
	{
		___U3CU3Ef__amU24cache0_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
