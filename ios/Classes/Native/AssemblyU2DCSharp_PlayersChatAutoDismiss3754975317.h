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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayersChatAutoDismiss
struct  PlayersChatAutoDismiss_t3754975317  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform PlayersChatAutoDismiss::PFPlayersChatItem
	RectTransform_t3349966182 * ___PFPlayersChatItem_2;
	// System.Single PlayersChatAutoDismiss::showedTime
	float ___showedTime_3;

public:
	inline static int32_t get_offset_of_PFPlayersChatItem_2() { return static_cast<int32_t>(offsetof(PlayersChatAutoDismiss_t3754975317, ___PFPlayersChatItem_2)); }
	inline RectTransform_t3349966182 * get_PFPlayersChatItem_2() const { return ___PFPlayersChatItem_2; }
	inline RectTransform_t3349966182 ** get_address_of_PFPlayersChatItem_2() { return &___PFPlayersChatItem_2; }
	inline void set_PFPlayersChatItem_2(RectTransform_t3349966182 * value)
	{
		___PFPlayersChatItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___PFPlayersChatItem_2, value);
	}

	inline static int32_t get_offset_of_showedTime_3() { return static_cast<int32_t>(offsetof(PlayersChatAutoDismiss_t3754975317, ___showedTime_3)); }
	inline float get_showedTime_3() const { return ___showedTime_3; }
	inline float* get_address_of_showedTime_3() { return &___showedTime_3; }
	inline void set_showedTime_3(float value)
	{
		___showedTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
