#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GK_AchievementTemplate
struct GK_AchievementTemplate_t2296152240;

#include "AssemblyU2DCSharp_ISN_Result2775631610.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_AchievementProgressResult
struct  GK_AchievementProgressResult_t3539574352  : public ISN_Result_t2775631610
{
public:
	// GK_AchievementTemplate GK_AchievementProgressResult::_tpl
	GK_AchievementTemplate_t2296152240 * ____tpl_2;

public:
	inline static int32_t get_offset_of__tpl_2() { return static_cast<int32_t>(offsetof(GK_AchievementProgressResult_t3539574352, ____tpl_2)); }
	inline GK_AchievementTemplate_t2296152240 * get__tpl_2() const { return ____tpl_2; }
	inline GK_AchievementTemplate_t2296152240 ** get_address_of__tpl_2() { return &____tpl_2; }
	inline void set__tpl_2(GK_AchievementTemplate_t2296152240 * value)
	{
		____tpl_2 = value;
		Il2CppCodeGenWriteBarrier(&____tpl_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
