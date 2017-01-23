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

// TopControler
struct  TopControler_t4241234961  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.RectTransform TopControler::bt_chat
	RectTransform_t3349966182 * ___bt_chat_2;

public:
	inline static int32_t get_offset_of_bt_chat_2() { return static_cast<int32_t>(offsetof(TopControler_t4241234961, ___bt_chat_2)); }
	inline RectTransform_t3349966182 * get_bt_chat_2() const { return ___bt_chat_2; }
	inline RectTransform_t3349966182 ** get_address_of_bt_chat_2() { return &___bt_chat_2; }
	inline void set_bt_chat_2(RectTransform_t3349966182 * value)
	{
		___bt_chat_2 = value;
		Il2CppCodeGenWriteBarrier(&___bt_chat_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
