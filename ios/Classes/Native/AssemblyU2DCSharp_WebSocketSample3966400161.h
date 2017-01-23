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
// BestHTTP.WebSocket.WebSocket
struct WebSocket_t71448861;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSample
struct  WebSocketSample_t3966400161  : public MonoBehaviour_t1158329972
{
public:
	// System.String WebSocketSample::address
	String_t* ___address_2;
	// System.String WebSocketSample::msgToSend
	String_t* ___msgToSend_3;
	// System.String WebSocketSample::Text
	String_t* ___Text_4;
	// BestHTTP.WebSocket.WebSocket WebSocketSample::webSocket
	WebSocket_t71448861 * ___webSocket_5;
	// UnityEngine.Vector2 WebSocketSample::scrollPos
	Vector2_t2243707579  ___scrollPos_6;

public:
	inline static int32_t get_offset_of_address_2() { return static_cast<int32_t>(offsetof(WebSocketSample_t3966400161, ___address_2)); }
	inline String_t* get_address_2() const { return ___address_2; }
	inline String_t** get_address_of_address_2() { return &___address_2; }
	inline void set_address_2(String_t* value)
	{
		___address_2 = value;
		Il2CppCodeGenWriteBarrier(&___address_2, value);
	}

	inline static int32_t get_offset_of_msgToSend_3() { return static_cast<int32_t>(offsetof(WebSocketSample_t3966400161, ___msgToSend_3)); }
	inline String_t* get_msgToSend_3() const { return ___msgToSend_3; }
	inline String_t** get_address_of_msgToSend_3() { return &___msgToSend_3; }
	inline void set_msgToSend_3(String_t* value)
	{
		___msgToSend_3 = value;
		Il2CppCodeGenWriteBarrier(&___msgToSend_3, value);
	}

	inline static int32_t get_offset_of_Text_4() { return static_cast<int32_t>(offsetof(WebSocketSample_t3966400161, ___Text_4)); }
	inline String_t* get_Text_4() const { return ___Text_4; }
	inline String_t** get_address_of_Text_4() { return &___Text_4; }
	inline void set_Text_4(String_t* value)
	{
		___Text_4 = value;
		Il2CppCodeGenWriteBarrier(&___Text_4, value);
	}

	inline static int32_t get_offset_of_webSocket_5() { return static_cast<int32_t>(offsetof(WebSocketSample_t3966400161, ___webSocket_5)); }
	inline WebSocket_t71448861 * get_webSocket_5() const { return ___webSocket_5; }
	inline WebSocket_t71448861 ** get_address_of_webSocket_5() { return &___webSocket_5; }
	inline void set_webSocket_5(WebSocket_t71448861 * value)
	{
		___webSocket_5 = value;
		Il2CppCodeGenWriteBarrier(&___webSocket_5, value);
	}

	inline static int32_t get_offset_of_scrollPos_6() { return static_cast<int32_t>(offsetof(WebSocketSample_t3966400161, ___scrollPos_6)); }
	inline Vector2_t2243707579  get_scrollPos_6() const { return ___scrollPos_6; }
	inline Vector2_t2243707579 * get_address_of_scrollPos_6() { return &___scrollPos_6; }
	inline void set_scrollPos_6(Vector2_t2243707579  value)
	{
		___scrollPos_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
