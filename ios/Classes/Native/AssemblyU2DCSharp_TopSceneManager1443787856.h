#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TopSceneManager
struct  TopSceneManager_t1443787856  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject TopSceneManager::webview
	GameObject_t1756533147 * ___webview_2;
	// UnityEngine.UI.Text TopSceneManager::countDownText
	Text_t356221433 * ___countDownText_3;
	// System.Int32 TopSceneManager::countDown
	int32_t ___countDown_4;

public:
	inline static int32_t get_offset_of_webview_2() { return static_cast<int32_t>(offsetof(TopSceneManager_t1443787856, ___webview_2)); }
	inline GameObject_t1756533147 * get_webview_2() const { return ___webview_2; }
	inline GameObject_t1756533147 ** get_address_of_webview_2() { return &___webview_2; }
	inline void set_webview_2(GameObject_t1756533147 * value)
	{
		___webview_2 = value;
		Il2CppCodeGenWriteBarrier(&___webview_2, value);
	}

	inline static int32_t get_offset_of_countDownText_3() { return static_cast<int32_t>(offsetof(TopSceneManager_t1443787856, ___countDownText_3)); }
	inline Text_t356221433 * get_countDownText_3() const { return ___countDownText_3; }
	inline Text_t356221433 ** get_address_of_countDownText_3() { return &___countDownText_3; }
	inline void set_countDownText_3(Text_t356221433 * value)
	{
		___countDownText_3 = value;
		Il2CppCodeGenWriteBarrier(&___countDownText_3, value);
	}

	inline static int32_t get_offset_of_countDown_4() { return static_cast<int32_t>(offsetof(TopSceneManager_t1443787856, ___countDown_4)); }
	inline int32_t get_countDown_4() const { return ___countDown_4; }
	inline int32_t* get_address_of_countDown_4() { return &___countDown_4; }
	inline void set_countDown_4(int32_t value)
	{
		___countDown_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
