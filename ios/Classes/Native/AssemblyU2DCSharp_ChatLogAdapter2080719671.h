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

// ChatLogAdapter
struct  ChatLogAdapter_t2080719671  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform ChatLogAdapter::ChatLogItem
	RectTransform_t3349966182 * ___ChatLogItem_2;
	// System.Boolean ChatLogAdapter::debugOn
	bool ___debugOn_3;

public:
	inline static int32_t get_offset_of_ChatLogItem_2() { return static_cast<int32_t>(offsetof(ChatLogAdapter_t2080719671, ___ChatLogItem_2)); }
	inline RectTransform_t3349966182 * get_ChatLogItem_2() const { return ___ChatLogItem_2; }
	inline RectTransform_t3349966182 ** get_address_of_ChatLogItem_2() { return &___ChatLogItem_2; }
	inline void set_ChatLogItem_2(RectTransform_t3349966182 * value)
	{
		___ChatLogItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___ChatLogItem_2, value);
	}

	inline static int32_t get_offset_of_debugOn_3() { return static_cast<int32_t>(offsetof(ChatLogAdapter_t2080719671, ___debugOn_3)); }
	inline bool get_debugOn_3() const { return ___debugOn_3; }
	inline bool* get_address_of_debugOn_3() { return &___debugOn_3; }
	inline void set_debugOn_3(bool value)
	{
		___debugOn_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
