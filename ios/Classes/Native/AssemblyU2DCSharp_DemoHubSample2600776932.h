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
// DemoHub
struct DemoHub_t1843661618;
// TypedDemoHub
struct TypedDemoHub_t3402660614;
// BestHTTP.SignalR.Hubs.Hub
struct Hub_t272719679;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoHubSample
struct  DemoHubSample_t2600776932  : public MonoBehaviour_t1158329972
{
public:
	// System.Uri DemoHubSample::URI
	Uri_t19570940 * ___URI_2;
	// BestHTTP.SignalR.Connection DemoHubSample::signalRConnection
	Connection_t2915781690 * ___signalRConnection_3;
	// DemoHub DemoHubSample::demoHub
	DemoHub_t1843661618 * ___demoHub_4;
	// TypedDemoHub DemoHubSample::typedDemoHub
	TypedDemoHub_t3402660614 * ___typedDemoHub_5;
	// BestHTTP.SignalR.Hubs.Hub DemoHubSample::vbDemoHub
	Hub_t272719679 * ___vbDemoHub_6;
	// System.String DemoHubSample::vbReadStateResult
	String_t* ___vbReadStateResult_7;
	// UnityEngine.Vector2 DemoHubSample::scrollPos
	Vector2_t2243707579  ___scrollPos_8;

public:
	inline static int32_t get_offset_of_URI_2() { return static_cast<int32_t>(offsetof(DemoHubSample_t2600776932, ___URI_2)); }
	inline Uri_t19570940 * get_URI_2() const { return ___URI_2; }
	inline Uri_t19570940 ** get_address_of_URI_2() { return &___URI_2; }
	inline void set_URI_2(Uri_t19570940 * value)
	{
		___URI_2 = value;
		Il2CppCodeGenWriteBarrier(&___URI_2, value);
	}

	inline static int32_t get_offset_of_signalRConnection_3() { return static_cast<int32_t>(offsetof(DemoHubSample_t2600776932, ___signalRConnection_3)); }
	inline Connection_t2915781690 * get_signalRConnection_3() const { return ___signalRConnection_3; }
	inline Connection_t2915781690 ** get_address_of_signalRConnection_3() { return &___signalRConnection_3; }
	inline void set_signalRConnection_3(Connection_t2915781690 * value)
	{
		___signalRConnection_3 = value;
		Il2CppCodeGenWriteBarrier(&___signalRConnection_3, value);
	}

	inline static int32_t get_offset_of_demoHub_4() { return static_cast<int32_t>(offsetof(DemoHubSample_t2600776932, ___demoHub_4)); }
	inline DemoHub_t1843661618 * get_demoHub_4() const { return ___demoHub_4; }
	inline DemoHub_t1843661618 ** get_address_of_demoHub_4() { return &___demoHub_4; }
	inline void set_demoHub_4(DemoHub_t1843661618 * value)
	{
		___demoHub_4 = value;
		Il2CppCodeGenWriteBarrier(&___demoHub_4, value);
	}

	inline static int32_t get_offset_of_typedDemoHub_5() { return static_cast<int32_t>(offsetof(DemoHubSample_t2600776932, ___typedDemoHub_5)); }
	inline TypedDemoHub_t3402660614 * get_typedDemoHub_5() const { return ___typedDemoHub_5; }
	inline TypedDemoHub_t3402660614 ** get_address_of_typedDemoHub_5() { return &___typedDemoHub_5; }
	inline void set_typedDemoHub_5(TypedDemoHub_t3402660614 * value)
	{
		___typedDemoHub_5 = value;
		Il2CppCodeGenWriteBarrier(&___typedDemoHub_5, value);
	}

	inline static int32_t get_offset_of_vbDemoHub_6() { return static_cast<int32_t>(offsetof(DemoHubSample_t2600776932, ___vbDemoHub_6)); }
	inline Hub_t272719679 * get_vbDemoHub_6() const { return ___vbDemoHub_6; }
	inline Hub_t272719679 ** get_address_of_vbDemoHub_6() { return &___vbDemoHub_6; }
	inline void set_vbDemoHub_6(Hub_t272719679 * value)
	{
		___vbDemoHub_6 = value;
		Il2CppCodeGenWriteBarrier(&___vbDemoHub_6, value);
	}

	inline static int32_t get_offset_of_vbReadStateResult_7() { return static_cast<int32_t>(offsetof(DemoHubSample_t2600776932, ___vbReadStateResult_7)); }
	inline String_t* get_vbReadStateResult_7() const { return ___vbReadStateResult_7; }
	inline String_t** get_address_of_vbReadStateResult_7() { return &___vbReadStateResult_7; }
	inline void set_vbReadStateResult_7(String_t* value)
	{
		___vbReadStateResult_7 = value;
		Il2CppCodeGenWriteBarrier(&___vbReadStateResult_7, value);
	}

	inline static int32_t get_offset_of_scrollPos_8() { return static_cast<int32_t>(offsetof(DemoHubSample_t2600776932, ___scrollPos_8)); }
	inline Vector2_t2243707579  get_scrollPos_8() const { return ___scrollPos_8; }
	inline Vector2_t2243707579 * get_address_of_scrollPos_8() { return &___scrollPos_8; }
	inline void set_scrollPos_8(Vector2_t2243707579  value)
	{
		___scrollPos_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
