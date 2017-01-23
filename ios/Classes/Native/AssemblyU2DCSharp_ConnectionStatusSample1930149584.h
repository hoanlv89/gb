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
// BestHTTP.Examples.GUIMessageList
struct GUIMessageList_t2719866248;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConnectionStatusSample
struct  ConnectionStatusSample_t1930149584  : public MonoBehaviour_t1158329972
{
public:
	// System.Uri ConnectionStatusSample::URI
	Uri_t19570940 * ___URI_2;
	// BestHTTP.SignalR.Connection ConnectionStatusSample::signalRConnection
	Connection_t2915781690 * ___signalRConnection_3;
	// BestHTTP.Examples.GUIMessageList ConnectionStatusSample::messages
	GUIMessageList_t2719866248 * ___messages_4;

public:
	inline static int32_t get_offset_of_URI_2() { return static_cast<int32_t>(offsetof(ConnectionStatusSample_t1930149584, ___URI_2)); }
	inline Uri_t19570940 * get_URI_2() const { return ___URI_2; }
	inline Uri_t19570940 ** get_address_of_URI_2() { return &___URI_2; }
	inline void set_URI_2(Uri_t19570940 * value)
	{
		___URI_2 = value;
		Il2CppCodeGenWriteBarrier(&___URI_2, value);
	}

	inline static int32_t get_offset_of_signalRConnection_3() { return static_cast<int32_t>(offsetof(ConnectionStatusSample_t1930149584, ___signalRConnection_3)); }
	inline Connection_t2915781690 * get_signalRConnection_3() const { return ___signalRConnection_3; }
	inline Connection_t2915781690 ** get_address_of_signalRConnection_3() { return &___signalRConnection_3; }
	inline void set_signalRConnection_3(Connection_t2915781690 * value)
	{
		___signalRConnection_3 = value;
		Il2CppCodeGenWriteBarrier(&___signalRConnection_3, value);
	}

	inline static int32_t get_offset_of_messages_4() { return static_cast<int32_t>(offsetof(ConnectionStatusSample_t1930149584, ___messages_4)); }
	inline GUIMessageList_t2719866248 * get_messages_4() const { return ___messages_4; }
	inline GUIMessageList_t2719866248 ** get_address_of_messages_4() { return &___messages_4; }
	inline void set_messages_4(GUIMessageList_t2719866248 * value)
	{
		___messages_4 = value;
		Il2CppCodeGenWriteBarrier(&___messages_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
