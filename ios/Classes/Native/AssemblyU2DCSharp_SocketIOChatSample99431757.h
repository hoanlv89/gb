#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BestHTTP.SocketIO.SocketManager
struct SocketManager_t3470268644;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// BestHTTP.SocketIO.Events.SocketIOCallback
struct SocketIOCallback_t88619200;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "AssemblyU2DCSharp_SocketIOChatSample_ChatStates4095670774.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_DateTime693205669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SocketIOChatSample
struct  SocketIOChatSample_t99431757  : public MonoBehaviour_t1158329972
{
public:
	// System.TimeSpan SocketIOChatSample::TYPING_TIMER_LENGTH
	TimeSpan_t3430258949  ___TYPING_TIMER_LENGTH_2;
	// BestHTTP.SocketIO.SocketManager SocketIOChatSample::Manager
	SocketManager_t3470268644 * ___Manager_3;
	// SocketIOChatSample/ChatStates SocketIOChatSample::State
	int32_t ___State_4;
	// System.String SocketIOChatSample::userName
	String_t* ___userName_5;
	// System.String SocketIOChatSample::message
	String_t* ___message_6;
	// System.String SocketIOChatSample::chatLog
	String_t* ___chatLog_7;
	// UnityEngine.Vector2 SocketIOChatSample::scrollPos
	Vector2_t2243707579  ___scrollPos_8;
	// System.Boolean SocketIOChatSample::typing
	bool ___typing_9;
	// System.DateTime SocketIOChatSample::lastTypingTime
	DateTime_t693205669  ___lastTypingTime_10;
	// System.Collections.Generic.List`1<System.String> SocketIOChatSample::typingUsers
	List_1_t1398341365 * ___typingUsers_11;

public:
	inline static int32_t get_offset_of_TYPING_TIMER_LENGTH_2() { return static_cast<int32_t>(offsetof(SocketIOChatSample_t99431757, ___TYPING_TIMER_LENGTH_2)); }
	inline TimeSpan_t3430258949  get_TYPING_TIMER_LENGTH_2() const { return ___TYPING_TIMER_LENGTH_2; }
	inline TimeSpan_t3430258949 * get_address_of_TYPING_TIMER_LENGTH_2() { return &___TYPING_TIMER_LENGTH_2; }
	inline void set_TYPING_TIMER_LENGTH_2(TimeSpan_t3430258949  value)
	{
		___TYPING_TIMER_LENGTH_2 = value;
	}

	inline static int32_t get_offset_of_Manager_3() { return static_cast<int32_t>(offsetof(SocketIOChatSample_t99431757, ___Manager_3)); }
	inline SocketManager_t3470268644 * get_Manager_3() const { return ___Manager_3; }
	inline SocketManager_t3470268644 ** get_address_of_Manager_3() { return &___Manager_3; }
	inline void set_Manager_3(SocketManager_t3470268644 * value)
	{
		___Manager_3 = value;
		Il2CppCodeGenWriteBarrier(&___Manager_3, value);
	}

	inline static int32_t get_offset_of_State_4() { return static_cast<int32_t>(offsetof(SocketIOChatSample_t99431757, ___State_4)); }
	inline int32_t get_State_4() const { return ___State_4; }
	inline int32_t* get_address_of_State_4() { return &___State_4; }
	inline void set_State_4(int32_t value)
	{
		___State_4 = value;
	}

	inline static int32_t get_offset_of_userName_5() { return static_cast<int32_t>(offsetof(SocketIOChatSample_t99431757, ___userName_5)); }
	inline String_t* get_userName_5() const { return ___userName_5; }
	inline String_t** get_address_of_userName_5() { return &___userName_5; }
	inline void set_userName_5(String_t* value)
	{
		___userName_5 = value;
		Il2CppCodeGenWriteBarrier(&___userName_5, value);
	}

	inline static int32_t get_offset_of_message_6() { return static_cast<int32_t>(offsetof(SocketIOChatSample_t99431757, ___message_6)); }
	inline String_t* get_message_6() const { return ___message_6; }
	inline String_t** get_address_of_message_6() { return &___message_6; }
	inline void set_message_6(String_t* value)
	{
		___message_6 = value;
		Il2CppCodeGenWriteBarrier(&___message_6, value);
	}

	inline static int32_t get_offset_of_chatLog_7() { return static_cast<int32_t>(offsetof(SocketIOChatSample_t99431757, ___chatLog_7)); }
	inline String_t* get_chatLog_7() const { return ___chatLog_7; }
	inline String_t** get_address_of_chatLog_7() { return &___chatLog_7; }
	inline void set_chatLog_7(String_t* value)
	{
		___chatLog_7 = value;
		Il2CppCodeGenWriteBarrier(&___chatLog_7, value);
	}

	inline static int32_t get_offset_of_scrollPos_8() { return static_cast<int32_t>(offsetof(SocketIOChatSample_t99431757, ___scrollPos_8)); }
	inline Vector2_t2243707579  get_scrollPos_8() const { return ___scrollPos_8; }
	inline Vector2_t2243707579 * get_address_of_scrollPos_8() { return &___scrollPos_8; }
	inline void set_scrollPos_8(Vector2_t2243707579  value)
	{
		___scrollPos_8 = value;
	}

	inline static int32_t get_offset_of_typing_9() { return static_cast<int32_t>(offsetof(SocketIOChatSample_t99431757, ___typing_9)); }
	inline bool get_typing_9() const { return ___typing_9; }
	inline bool* get_address_of_typing_9() { return &___typing_9; }
	inline void set_typing_9(bool value)
	{
		___typing_9 = value;
	}

	inline static int32_t get_offset_of_lastTypingTime_10() { return static_cast<int32_t>(offsetof(SocketIOChatSample_t99431757, ___lastTypingTime_10)); }
	inline DateTime_t693205669  get_lastTypingTime_10() const { return ___lastTypingTime_10; }
	inline DateTime_t693205669 * get_address_of_lastTypingTime_10() { return &___lastTypingTime_10; }
	inline void set_lastTypingTime_10(DateTime_t693205669  value)
	{
		___lastTypingTime_10 = value;
	}

	inline static int32_t get_offset_of_typingUsers_11() { return static_cast<int32_t>(offsetof(SocketIOChatSample_t99431757, ___typingUsers_11)); }
	inline List_1_t1398341365 * get_typingUsers_11() const { return ___typingUsers_11; }
	inline List_1_t1398341365 ** get_address_of_typingUsers_11() { return &___typingUsers_11; }
	inline void set_typingUsers_11(List_1_t1398341365 * value)
	{
		___typingUsers_11 = value;
		Il2CppCodeGenWriteBarrier(&___typingUsers_11, value);
	}
};

struct SocketIOChatSample_t99431757_StaticFields
{
public:
	// BestHTTP.SocketIO.Events.SocketIOCallback SocketIOChatSample::<>f__am$cache0
	SocketIOCallback_t88619200 * ___U3CU3Ef__amU24cache0_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_12() { return static_cast<int32_t>(offsetof(SocketIOChatSample_t99431757_StaticFields, ___U3CU3Ef__amU24cache0_12)); }
	inline SocketIOCallback_t88619200 * get_U3CU3Ef__amU24cache0_12() const { return ___U3CU3Ef__amU24cache0_12; }
	inline SocketIOCallback_t88619200 ** get_address_of_U3CU3Ef__amU24cache0_12() { return &___U3CU3Ef__amU24cache0_12; }
	inline void set_U3CU3Ef__amU24cache0_12(SocketIOCallback_t88619200 * value)
	{
		___U3CU3Ef__amU24cache0_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
