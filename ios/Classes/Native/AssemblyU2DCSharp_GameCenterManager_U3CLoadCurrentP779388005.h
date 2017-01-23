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
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GK_TimeSpan1050271570.h"
#include "AssemblyU2DCSharp_GK_CollectionType3353981271.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCenterManager/<LoadCurrentPlayerScoreLocal>c__Iterator0
struct  U3CLoadCurrentPlayerScoreLocalU3Ec__Iterator0_t779388005  : public Il2CppObject
{
public:
	// System.String GameCenterManager/<LoadCurrentPlayerScoreLocal>c__Iterator0::leaderboardId
	String_t* ___leaderboardId_0;
	// GK_TimeSpan GameCenterManager/<LoadCurrentPlayerScoreLocal>c__Iterator0::timeSpan
	int32_t ___timeSpan_1;
	// GK_CollectionType GameCenterManager/<LoadCurrentPlayerScoreLocal>c__Iterator0::collection
	int32_t ___collection_2;
	// System.Object GameCenterManager/<LoadCurrentPlayerScoreLocal>c__Iterator0::$current
	Il2CppObject * ___U24current_3;
	// System.Boolean GameCenterManager/<LoadCurrentPlayerScoreLocal>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 GameCenterManager/<LoadCurrentPlayerScoreLocal>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_leaderboardId_0() { return static_cast<int32_t>(offsetof(U3CLoadCurrentPlayerScoreLocalU3Ec__Iterator0_t779388005, ___leaderboardId_0)); }
	inline String_t* get_leaderboardId_0() const { return ___leaderboardId_0; }
	inline String_t** get_address_of_leaderboardId_0() { return &___leaderboardId_0; }
	inline void set_leaderboardId_0(String_t* value)
	{
		___leaderboardId_0 = value;
		Il2CppCodeGenWriteBarrier(&___leaderboardId_0, value);
	}

	inline static int32_t get_offset_of_timeSpan_1() { return static_cast<int32_t>(offsetof(U3CLoadCurrentPlayerScoreLocalU3Ec__Iterator0_t779388005, ___timeSpan_1)); }
	inline int32_t get_timeSpan_1() const { return ___timeSpan_1; }
	inline int32_t* get_address_of_timeSpan_1() { return &___timeSpan_1; }
	inline void set_timeSpan_1(int32_t value)
	{
		___timeSpan_1 = value;
	}

	inline static int32_t get_offset_of_collection_2() { return static_cast<int32_t>(offsetof(U3CLoadCurrentPlayerScoreLocalU3Ec__Iterator0_t779388005, ___collection_2)); }
	inline int32_t get_collection_2() const { return ___collection_2; }
	inline int32_t* get_address_of_collection_2() { return &___collection_2; }
	inline void set_collection_2(int32_t value)
	{
		___collection_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CLoadCurrentPlayerScoreLocalU3Ec__Iterator0_t779388005, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CLoadCurrentPlayerScoreLocalU3Ec__Iterator0_t779388005, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CLoadCurrentPlayerScoreLocalU3Ec__Iterator0_t779388005, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
