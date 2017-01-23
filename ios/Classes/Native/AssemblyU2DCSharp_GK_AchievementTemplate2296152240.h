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

// GK_AchievementTemplate
struct  GK_AchievementTemplate_t2296152240  : public Il2CppObject
{
public:
	// System.String GK_AchievementTemplate::Id
	String_t* ___Id_0;
	// System.String GK_AchievementTemplate::Description
	String_t* ___Description_1;
	// System.Single GK_AchievementTemplate::_progress
	float ____progress_2;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GK_AchievementTemplate_t2296152240, ___Id_0)); }
	inline String_t* get_Id_0() const { return ___Id_0; }
	inline String_t** get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(String_t* value)
	{
		___Id_0 = value;
		Il2CppCodeGenWriteBarrier(&___Id_0, value);
	}

	inline static int32_t get_offset_of_Description_1() { return static_cast<int32_t>(offsetof(GK_AchievementTemplate_t2296152240, ___Description_1)); }
	inline String_t* get_Description_1() const { return ___Description_1; }
	inline String_t** get_address_of_Description_1() { return &___Description_1; }
	inline void set_Description_1(String_t* value)
	{
		___Description_1 = value;
		Il2CppCodeGenWriteBarrier(&___Description_1, value);
	}

	inline static int32_t get_offset_of__progress_2() { return static_cast<int32_t>(offsetof(GK_AchievementTemplate_t2296152240, ____progress_2)); }
	inline float get__progress_2() const { return ____progress_2; }
	inline float* get_address_of__progress_2() { return &____progress_2; }
	inline void set__progress_2(float value)
	{
		____progress_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
