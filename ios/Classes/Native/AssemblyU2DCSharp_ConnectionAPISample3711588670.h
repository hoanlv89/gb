#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t19570940;
// BestHTTP.SignalR.Connection
struct Connection_t2915781690;
// System.String
struct String_t;
// BestHTTP.Examples.GUIMessageList
struct GUIMessageList_t2719866248;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConnectionAPISample
struct  ConnectionAPISample_t3711588670  : public MonoBehaviour_t1158329972
{
public:
	// System.Uri ConnectionAPISample::URI
	Uri_t19570940 * ___URI_2;
	// BestHTTP.SignalR.Connection ConnectionAPISample::signalRConnection
	Connection_t2915781690 * ___signalRConnection_3;
	// System.String ConnectionAPISample::ToEveryBodyText
	String_t* ___ToEveryBodyText_4;
	// System.String ConnectionAPISample::ToMeText
	String_t* ___ToMeText_5;
	// System.String ConnectionAPISample::PrivateMessageText
	String_t* ___PrivateMessageText_6;
	// System.String ConnectionAPISample::PrivateMessageUserOrGroupName
	String_t* ___PrivateMessageUserOrGroupName_7;
	// BestHTTP.Examples.GUIMessageList ConnectionAPISample::messages
	GUIMessageList_t2719866248 * ___messages_8;

public:
	inline static int32_t get_offset_of_URI_2() { return static_cast<int32_t>(offsetof(ConnectionAPISample_t3711588670, ___URI_2)); }
	inline Uri_t19570940 * get_URI_2() const { return ___URI_2; }
	inline Uri_t19570940 ** get_address_of_URI_2() { return &___URI_2; }
	inline void set_URI_2(Uri_t19570940 * value)
	{
		___URI_2 = value;
		Il2CppCodeGenWriteBarrier(&___URI_2, value);
	}

	inline static int32_t get_offset_of_signalRConnection_3() { return static_cast<int32_t>(offsetof(ConnectionAPISample_t3711588670, ___signalRConnection_3)); }
	inline Connection_t2915781690 * get_signalRConnection_3() const { return ___signalRConnection_3; }
	inline Connection_t2915781690 ** get_address_of_signalRConnection_3() { return &___signalRConnection_3; }
	inline void set_signalRConnection_3(Connection_t2915781690 * value)
	{
		___signalRConnection_3 = value;
		Il2CppCodeGenWriteBarrier(&___signalRConnection_3, value);
	}

	inline static int32_t get_offset_of_ToEveryBodyText_4() { return static_cast<int32_t>(offsetof(ConnectionAPISample_t3711588670, ___ToEveryBodyText_4)); }
	inline String_t* get_ToEveryBodyText_4() const { return ___ToEveryBodyText_4; }
	inline String_t** get_address_of_ToEveryBodyText_4() { return &___ToEveryBodyText_4; }
	inline void set_ToEveryBodyText_4(String_t* value)
	{
		___ToEveryBodyText_4 = value;
		Il2CppCodeGenWriteBarrier(&___ToEveryBodyText_4, value);
	}

	inline static int32_t get_offset_of_ToMeText_5() { return static_cast<int32_t>(offsetof(ConnectionAPISample_t3711588670, ___ToMeText_5)); }
	inline String_t* get_ToMeText_5() const { return ___ToMeText_5; }
	inline String_t** get_address_of_ToMeText_5() { return &___ToMeText_5; }
	inline void set_ToMeText_5(String_t* value)
	{
		___ToMeText_5 = value;
		Il2CppCodeGenWriteBarrier(&___ToMeText_5, value);
	}

	inline static int32_t get_offset_of_PrivateMessageText_6() { return static_cast<int32_t>(offsetof(ConnectionAPISample_t3711588670, ___PrivateMessageText_6)); }
	inline String_t* get_PrivateMessageText_6() const { return ___PrivateMessageText_6; }
	inline String_t** get_address_of_PrivateMessageText_6() { return &___PrivateMessageText_6; }
	inline void set_PrivateMessageText_6(String_t* value)
	{
		___PrivateMessageText_6 = value;
		Il2CppCodeGenWriteBarrier(&___PrivateMessageText_6, value);
	}

	inline static int32_t get_offset_of_PrivateMessageUserOrGroupName_7() { return static_cast<int32_t>(offsetof(ConnectionAPISample_t3711588670, ___PrivateMessageUserOrGroupName_7)); }
	inline String_t* get_PrivateMessageUserOrGroupName_7() const { return ___PrivateMessageUserOrGroupName_7; }
	inline String_t** get_address_of_PrivateMessageUserOrGroupName_7() { return &___PrivateMessageUserOrGroupName_7; }
	inline void set_PrivateMessageUserOrGroupName_7(String_t* value)
	{
		___PrivateMessageUserOrGroupName_7 = value;
		Il2CppCodeGenWriteBarrier(&___PrivateMessageUserOrGroupName_7, value);
	}

	inline static int32_t get_offset_of_messages_8() { return static_cast<int32_t>(offsetof(ConnectionAPISample_t3711588670, ___messages_8)); }
	inline GUIMessageList_t2719866248 * get_messages_8() const { return ___messages_8; }
	inline GUIMessageList_t2719866248 ** get_address_of_messages_8() { return &___messages_8; }
	inline void set_messages_8(GUIMessageList_t2719866248 * value)
	{
		___messages_8 = value;
		Il2CppCodeGenWriteBarrier(&___messages_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
