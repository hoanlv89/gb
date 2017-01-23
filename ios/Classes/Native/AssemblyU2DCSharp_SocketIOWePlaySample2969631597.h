#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;
// BestHTTP.SocketIO.Socket
struct Socket_t2716624701;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Action
struct Action_t3226471752;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_SocketIOWePlaySample_States2200208360.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SocketIOWePlaySample
struct  SocketIOWePlaySample_t2969631597  : public MonoBehaviour_t1158329972
{
public:
	// System.String[] SocketIOWePlaySample::controls
	StringU5BU5D_t1642385972* ___controls_2;
	// System.Int32 SocketIOWePlaySample::MaxMessages
	int32_t ___MaxMessages_4;
	// SocketIOWePlaySample/States SocketIOWePlaySample::State
	int32_t ___State_5;
	// BestHTTP.SocketIO.Socket SocketIOWePlaySample::Socket
	Socket_t2716624701 * ___Socket_6;
	// System.String SocketIOWePlaySample::Nick
	String_t* ___Nick_7;
	// System.String SocketIOWePlaySample::messageToSend
	String_t* ___messageToSend_8;
	// System.Int32 SocketIOWePlaySample::connections
	int32_t ___connections_9;
	// System.Collections.Generic.List`1<System.String> SocketIOWePlaySample::messages
	List_1_t1398341365 * ___messages_10;
	// UnityEngine.Vector2 SocketIOWePlaySample::scrollPos
	Vector2_t2243707579  ___scrollPos_11;
	// UnityEngine.Texture2D SocketIOWePlaySample::FrameTexture
	Texture2D_t3542995729 * ___FrameTexture_12;

public:
	inline static int32_t get_offset_of_controls_2() { return static_cast<int32_t>(offsetof(SocketIOWePlaySample_t2969631597, ___controls_2)); }
	inline StringU5BU5D_t1642385972* get_controls_2() const { return ___controls_2; }
	inline StringU5BU5D_t1642385972** get_address_of_controls_2() { return &___controls_2; }
	inline void set_controls_2(StringU5BU5D_t1642385972* value)
	{
		___controls_2 = value;
		Il2CppCodeGenWriteBarrier(&___controls_2, value);
	}

	inline static int32_t get_offset_of_MaxMessages_4() { return static_cast<int32_t>(offsetof(SocketIOWePlaySample_t2969631597, ___MaxMessages_4)); }
	inline int32_t get_MaxMessages_4() const { return ___MaxMessages_4; }
	inline int32_t* get_address_of_MaxMessages_4() { return &___MaxMessages_4; }
	inline void set_MaxMessages_4(int32_t value)
	{
		___MaxMessages_4 = value;
	}

	inline static int32_t get_offset_of_State_5() { return static_cast<int32_t>(offsetof(SocketIOWePlaySample_t2969631597, ___State_5)); }
	inline int32_t get_State_5() const { return ___State_5; }
	inline int32_t* get_address_of_State_5() { return &___State_5; }
	inline void set_State_5(int32_t value)
	{
		___State_5 = value;
	}

	inline static int32_t get_offset_of_Socket_6() { return static_cast<int32_t>(offsetof(SocketIOWePlaySample_t2969631597, ___Socket_6)); }
	inline Socket_t2716624701 * get_Socket_6() const { return ___Socket_6; }
	inline Socket_t2716624701 ** get_address_of_Socket_6() { return &___Socket_6; }
	inline void set_Socket_6(Socket_t2716624701 * value)
	{
		___Socket_6 = value;
		Il2CppCodeGenWriteBarrier(&___Socket_6, value);
	}

	inline static int32_t get_offset_of_Nick_7() { return static_cast<int32_t>(offsetof(SocketIOWePlaySample_t2969631597, ___Nick_7)); }
	inline String_t* get_Nick_7() const { return ___Nick_7; }
	inline String_t** get_address_of_Nick_7() { return &___Nick_7; }
	inline void set_Nick_7(String_t* value)
	{
		___Nick_7 = value;
		Il2CppCodeGenWriteBarrier(&___Nick_7, value);
	}

	inline static int32_t get_offset_of_messageToSend_8() { return static_cast<int32_t>(offsetof(SocketIOWePlaySample_t2969631597, ___messageToSend_8)); }
	inline String_t* get_messageToSend_8() const { return ___messageToSend_8; }
	inline String_t** get_address_of_messageToSend_8() { return &___messageToSend_8; }
	inline void set_messageToSend_8(String_t* value)
	{
		___messageToSend_8 = value;
		Il2CppCodeGenWriteBarrier(&___messageToSend_8, value);
	}

	inline static int32_t get_offset_of_connections_9() { return static_cast<int32_t>(offsetof(SocketIOWePlaySample_t2969631597, ___connections_9)); }
	inline int32_t get_connections_9() const { return ___connections_9; }
	inline int32_t* get_address_of_connections_9() { return &___connections_9; }
	inline void set_connections_9(int32_t value)
	{
		___connections_9 = value;
	}

	inline static int32_t get_offset_of_messages_10() { return static_cast<int32_t>(offsetof(SocketIOWePlaySample_t2969631597, ___messages_10)); }
	inline List_1_t1398341365 * get_messages_10() const { return ___messages_10; }
	inline List_1_t1398341365 ** get_address_of_messages_10() { return &___messages_10; }
	inline void set_messages_10(List_1_t1398341365 * value)
	{
		___messages_10 = value;
		Il2CppCodeGenWriteBarrier(&___messages_10, value);
	}

	inline static int32_t get_offset_of_scrollPos_11() { return static_cast<int32_t>(offsetof(SocketIOWePlaySample_t2969631597, ___scrollPos_11)); }
	inline Vector2_t2243707579  get_scrollPos_11() const { return ___scrollPos_11; }
	inline Vector2_t2243707579 * get_address_of_scrollPos_11() { return &___scrollPos_11; }
	inline void set_scrollPos_11(Vector2_t2243707579  value)
	{
		___scrollPos_11 = value;
	}

	inline static int32_t get_offset_of_FrameTexture_12() { return static_cast<int32_t>(offsetof(SocketIOWePlaySample_t2969631597, ___FrameTexture_12)); }
	inline Texture2D_t3542995729 * get_FrameTexture_12() const { return ___FrameTexture_12; }
	inline Texture2D_t3542995729 ** get_address_of_FrameTexture_12() { return &___FrameTexture_12; }
	inline void set_FrameTexture_12(Texture2D_t3542995729 * value)
	{
		___FrameTexture_12 = value;
		Il2CppCodeGenWriteBarrier(&___FrameTexture_12, value);
	}
};

struct SocketIOWePlaySample_t2969631597_StaticFields
{
public:
	// System.Action SocketIOWePlaySample::<>f__am$cache0
	Action_t3226471752 * ___U3CU3Ef__amU24cache0_13;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_13() { return static_cast<int32_t>(offsetof(SocketIOWePlaySample_t2969631597_StaticFields, ___U3CU3Ef__amU24cache0_13)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache0_13() const { return ___U3CU3Ef__amU24cache0_13; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache0_13() { return &___U3CU3Ef__amU24cache0_13; }
	inline void set_U3CU3Ef__amU24cache0_13(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
