#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameNotification
struct  GameNotification_t3308424925  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button GameNotification::close
	Button_t2872111280 * ___close_2;
	// UnityEngine.UI.Text GameNotification::content
	Text_t356221433 * ___content_3;
	// System.Collections.IEnumerator GameNotification::delayDismiss
	Il2CppObject * ___delayDismiss_4;

public:
	inline static int32_t get_offset_of_close_2() { return static_cast<int32_t>(offsetof(GameNotification_t3308424925, ___close_2)); }
	inline Button_t2872111280 * get_close_2() const { return ___close_2; }
	inline Button_t2872111280 ** get_address_of_close_2() { return &___close_2; }
	inline void set_close_2(Button_t2872111280 * value)
	{
		___close_2 = value;
		Il2CppCodeGenWriteBarrier(&___close_2, value);
	}

	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(GameNotification_t3308424925, ___content_3)); }
	inline Text_t356221433 * get_content_3() const { return ___content_3; }
	inline Text_t356221433 ** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(Text_t356221433 * value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier(&___content_3, value);
	}

	inline static int32_t get_offset_of_delayDismiss_4() { return static_cast<int32_t>(offsetof(GameNotification_t3308424925, ___delayDismiss_4)); }
	inline Il2CppObject * get_delayDismiss_4() const { return ___delayDismiss_4; }
	inline Il2CppObject ** get_address_of_delayDismiss_4() { return &___delayDismiss_4; }
	inline void set_delayDismiss_4(Il2CppObject * value)
	{
		___delayDismiss_4 = value;
		Il2CppCodeGenWriteBarrier(&___delayDismiss_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
