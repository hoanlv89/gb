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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AuthenticationSample
struct  AuthenticationSample_t557132374  : public MonoBehaviour_t1158329972
{
public:
	// System.Uri AuthenticationSample::URI
	Uri_t19570940 * ___URI_2;
	// BestHTTP.SignalR.Connection AuthenticationSample::signalRConnection
	Connection_t2915781690 * ___signalRConnection_3;
	// System.String AuthenticationSample::userName
	String_t* ___userName_4;
	// System.String AuthenticationSample::role
	String_t* ___role_5;
	// UnityEngine.Vector2 AuthenticationSample::scrollPos
	Vector2_t2243707579  ___scrollPos_6;

public:
	inline static int32_t get_offset_of_URI_2() { return static_cast<int32_t>(offsetof(AuthenticationSample_t557132374, ___URI_2)); }
	inline Uri_t19570940 * get_URI_2() const { return ___URI_2; }
	inline Uri_t19570940 ** get_address_of_URI_2() { return &___URI_2; }
	inline void set_URI_2(Uri_t19570940 * value)
	{
		___URI_2 = value;
		Il2CppCodeGenWriteBarrier(&___URI_2, value);
	}

	inline static int32_t get_offset_of_signalRConnection_3() { return static_cast<int32_t>(offsetof(AuthenticationSample_t557132374, ___signalRConnection_3)); }
	inline Connection_t2915781690 * get_signalRConnection_3() const { return ___signalRConnection_3; }
	inline Connection_t2915781690 ** get_address_of_signalRConnection_3() { return &___signalRConnection_3; }
	inline void set_signalRConnection_3(Connection_t2915781690 * value)
	{
		___signalRConnection_3 = value;
		Il2CppCodeGenWriteBarrier(&___signalRConnection_3, value);
	}

	inline static int32_t get_offset_of_userName_4() { return static_cast<int32_t>(offsetof(AuthenticationSample_t557132374, ___userName_4)); }
	inline String_t* get_userName_4() const { return ___userName_4; }
	inline String_t** get_address_of_userName_4() { return &___userName_4; }
	inline void set_userName_4(String_t* value)
	{
		___userName_4 = value;
		Il2CppCodeGenWriteBarrier(&___userName_4, value);
	}

	inline static int32_t get_offset_of_role_5() { return static_cast<int32_t>(offsetof(AuthenticationSample_t557132374, ___role_5)); }
	inline String_t* get_role_5() const { return ___role_5; }
	inline String_t** get_address_of_role_5() { return &___role_5; }
	inline void set_role_5(String_t* value)
	{
		___role_5 = value;
		Il2CppCodeGenWriteBarrier(&___role_5, value);
	}

	inline static int32_t get_offset_of_scrollPos_6() { return static_cast<int32_t>(offsetof(AuthenticationSample_t557132374, ___scrollPos_6)); }
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
