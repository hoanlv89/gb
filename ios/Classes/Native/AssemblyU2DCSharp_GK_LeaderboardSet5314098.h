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
// System.Collections.Generic.List`1<GK_LeaderBoardInfo>
struct List_1_t3039336626;
// System.Action`1<ISN_LoadSetLeaderboardsInfoResult>
struct Action_1_t3799589186;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_LeaderboardSet
struct  GK_LeaderboardSet_t5314098  : public Il2CppObject
{
public:
	// System.String GK_LeaderboardSet::Title
	String_t* ___Title_0;
	// System.String GK_LeaderboardSet::Identifier
	String_t* ___Identifier_1;
	// System.String GK_LeaderboardSet::GroupIdentifier
	String_t* ___GroupIdentifier_2;
	// System.Collections.Generic.List`1<GK_LeaderBoardInfo> GK_LeaderboardSet::_BoardsInfo
	List_1_t3039336626 * ____BoardsInfo_3;
	// System.Action`1<ISN_LoadSetLeaderboardsInfoResult> GK_LeaderboardSet::OnLoaderboardsInfoLoaded
	Action_1_t3799589186 * ___OnLoaderboardsInfoLoaded_4;

public:
	inline static int32_t get_offset_of_Title_0() { return static_cast<int32_t>(offsetof(GK_LeaderboardSet_t5314098, ___Title_0)); }
	inline String_t* get_Title_0() const { return ___Title_0; }
	inline String_t** get_address_of_Title_0() { return &___Title_0; }
	inline void set_Title_0(String_t* value)
	{
		___Title_0 = value;
		Il2CppCodeGenWriteBarrier(&___Title_0, value);
	}

	inline static int32_t get_offset_of_Identifier_1() { return static_cast<int32_t>(offsetof(GK_LeaderboardSet_t5314098, ___Identifier_1)); }
	inline String_t* get_Identifier_1() const { return ___Identifier_1; }
	inline String_t** get_address_of_Identifier_1() { return &___Identifier_1; }
	inline void set_Identifier_1(String_t* value)
	{
		___Identifier_1 = value;
		Il2CppCodeGenWriteBarrier(&___Identifier_1, value);
	}

	inline static int32_t get_offset_of_GroupIdentifier_2() { return static_cast<int32_t>(offsetof(GK_LeaderboardSet_t5314098, ___GroupIdentifier_2)); }
	inline String_t* get_GroupIdentifier_2() const { return ___GroupIdentifier_2; }
	inline String_t** get_address_of_GroupIdentifier_2() { return &___GroupIdentifier_2; }
	inline void set_GroupIdentifier_2(String_t* value)
	{
		___GroupIdentifier_2 = value;
		Il2CppCodeGenWriteBarrier(&___GroupIdentifier_2, value);
	}

	inline static int32_t get_offset_of__BoardsInfo_3() { return static_cast<int32_t>(offsetof(GK_LeaderboardSet_t5314098, ____BoardsInfo_3)); }
	inline List_1_t3039336626 * get__BoardsInfo_3() const { return ____BoardsInfo_3; }
	inline List_1_t3039336626 ** get_address_of__BoardsInfo_3() { return &____BoardsInfo_3; }
	inline void set__BoardsInfo_3(List_1_t3039336626 * value)
	{
		____BoardsInfo_3 = value;
		Il2CppCodeGenWriteBarrier(&____BoardsInfo_3, value);
	}

	inline static int32_t get_offset_of_OnLoaderboardsInfoLoaded_4() { return static_cast<int32_t>(offsetof(GK_LeaderboardSet_t5314098, ___OnLoaderboardsInfoLoaded_4)); }
	inline Action_1_t3799589186 * get_OnLoaderboardsInfoLoaded_4() const { return ___OnLoaderboardsInfoLoaded_4; }
	inline Action_1_t3799589186 ** get_address_of_OnLoaderboardsInfoLoaded_4() { return &___OnLoaderboardsInfoLoaded_4; }
	inline void set_OnLoaderboardsInfoLoaded_4(Action_1_t3799589186 * value)
	{
		___OnLoaderboardsInfoLoaded_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnLoaderboardsInfoLoaded_4, value);
	}
};

struct GK_LeaderboardSet_t5314098_StaticFields
{
public:
	// System.Action`1<ISN_LoadSetLeaderboardsInfoResult> GK_LeaderboardSet::<>f__am$cache0
	Action_1_t3799589186 * ___U3CU3Ef__amU24cache0_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_5() { return static_cast<int32_t>(offsetof(GK_LeaderboardSet_t5314098_StaticFields, ___U3CU3Ef__amU24cache0_5)); }
	inline Action_1_t3799589186 * get_U3CU3Ef__amU24cache0_5() const { return ___U3CU3Ef__amU24cache0_5; }
	inline Action_1_t3799589186 ** get_address_of_U3CU3Ef__amU24cache0_5() { return &___U3CU3Ef__amU24cache0_5; }
	inline void set_U3CU3Ef__amU24cache0_5(Action_1_t3799589186 * value)
	{
		___U3CU3Ef__amU24cache0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
