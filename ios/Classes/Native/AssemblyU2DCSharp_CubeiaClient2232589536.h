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
// RoomGame
struct RoomGame_t2389026731;
// RoomGame[]
struct RoomGameU5BU5D_t2517542218;
// System.Collections.Generic.List`1<TableGame>
struct List_1_t402749618;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t926074657;
// Styx.StyxSerializer
struct StyxSerializer_t309677892;
// System.Collections.Generic.Queue`1<Styx.ProtocolObject>
struct Queue_1_t2974962562;
// System.Comparison`1<TableGame>
struct Comparison_1_t2295367337;
// System.Action
struct Action_t3226471752;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Boolean3825574718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CubeiaClient
struct  CubeiaClient_t2232589536  : public Il2CppObject
{
public:
	// System.Int32 CubeiaClient::PORT
	int32_t ___PORT_1;
	// System.String CubeiaClient::accesstoken
	String_t* ___accesstoken_2;
	// System.Int32 CubeiaClient::levelId
	int32_t ___levelId_3;
	// System.String CubeiaClient::connectedIP
	String_t* ___connectedIP_4;
	// System.Int32 CubeiaClient::gameId
	int32_t ___gameId_5;
	// System.Int32 CubeiaClient::tableId
	int32_t ___tableId_6;
	// RoomGame CubeiaClient::currentRoom
	RoomGame_t2389026731 * ___currentRoom_7;
	// RoomGame[] CubeiaClient::roomList
	RoomGameU5BU5D_t2517542218* ___roomList_8;
	// System.Collections.Generic.List`1<TableGame> CubeiaClient::tableList
	List_1_t402749618 * ___tableList_9;
	// System.Net.Sockets.Socket CubeiaClient::socket
	Socket_t3821512045 * ___socket_10;
	// System.Threading.ManualResetEvent CubeiaClient::connected
	ManualResetEvent_t926074657 * ___connected_11;
	// Styx.StyxSerializer CubeiaClient::serializer
	StyxSerializer_t309677892 * ___serializer_12;
	// System.Collections.Generic.Queue`1<Styx.ProtocolObject> modreq(System.Runtime.CompilerServices.IsVolatile) CubeiaClient::protocalObjectQueue
	Queue_1_t2974962562 * ___protocalObjectQueue_13;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) CubeiaClient::pauseReceiving
	bool ___pauseReceiving_14;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) CubeiaClient::onConnecting
	bool ___onConnecting_15;

public:
	inline static int32_t get_offset_of_PORT_1() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536, ___PORT_1)); }
	inline int32_t get_PORT_1() const { return ___PORT_1; }
	inline int32_t* get_address_of_PORT_1() { return &___PORT_1; }
	inline void set_PORT_1(int32_t value)
	{
		___PORT_1 = value;
	}

	inline static int32_t get_offset_of_accesstoken_2() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536, ___accesstoken_2)); }
	inline String_t* get_accesstoken_2() const { return ___accesstoken_2; }
	inline String_t** get_address_of_accesstoken_2() { return &___accesstoken_2; }
	inline void set_accesstoken_2(String_t* value)
	{
		___accesstoken_2 = value;
		Il2CppCodeGenWriteBarrier(&___accesstoken_2, value);
	}

	inline static int32_t get_offset_of_levelId_3() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536, ___levelId_3)); }
	inline int32_t get_levelId_3() const { return ___levelId_3; }
	inline int32_t* get_address_of_levelId_3() { return &___levelId_3; }
	inline void set_levelId_3(int32_t value)
	{
		___levelId_3 = value;
	}

	inline static int32_t get_offset_of_connectedIP_4() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536, ___connectedIP_4)); }
	inline String_t* get_connectedIP_4() const { return ___connectedIP_4; }
	inline String_t** get_address_of_connectedIP_4() { return &___connectedIP_4; }
	inline void set_connectedIP_4(String_t* value)
	{
		___connectedIP_4 = value;
		Il2CppCodeGenWriteBarrier(&___connectedIP_4, value);
	}

	inline static int32_t get_offset_of_gameId_5() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536, ___gameId_5)); }
	inline int32_t get_gameId_5() const { return ___gameId_5; }
	inline int32_t* get_address_of_gameId_5() { return &___gameId_5; }
	inline void set_gameId_5(int32_t value)
	{
		___gameId_5 = value;
	}

	inline static int32_t get_offset_of_tableId_6() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536, ___tableId_6)); }
	inline int32_t get_tableId_6() const { return ___tableId_6; }
	inline int32_t* get_address_of_tableId_6() { return &___tableId_6; }
	inline void set_tableId_6(int32_t value)
	{
		___tableId_6 = value;
	}

	inline static int32_t get_offset_of_currentRoom_7() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536, ___currentRoom_7)); }
	inline RoomGame_t2389026731 * get_currentRoom_7() const { return ___currentRoom_7; }
	inline RoomGame_t2389026731 ** get_address_of_currentRoom_7() { return &___currentRoom_7; }
	inline void set_currentRoom_7(RoomGame_t2389026731 * value)
	{
		___currentRoom_7 = value;
		Il2CppCodeGenWriteBarrier(&___currentRoom_7, value);
	}

	inline static int32_t get_offset_of_roomList_8() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536, ___roomList_8)); }
	inline RoomGameU5BU5D_t2517542218* get_roomList_8() const { return ___roomList_8; }
	inline RoomGameU5BU5D_t2517542218** get_address_of_roomList_8() { return &___roomList_8; }
	inline void set_roomList_8(RoomGameU5BU5D_t2517542218* value)
	{
		___roomList_8 = value;
		Il2CppCodeGenWriteBarrier(&___roomList_8, value);
	}

	inline static int32_t get_offset_of_tableList_9() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536, ___tableList_9)); }
	inline List_1_t402749618 * get_tableList_9() const { return ___tableList_9; }
	inline List_1_t402749618 ** get_address_of_tableList_9() { return &___tableList_9; }
	inline void set_tableList_9(List_1_t402749618 * value)
	{
		___tableList_9 = value;
		Il2CppCodeGenWriteBarrier(&___tableList_9, value);
	}

	inline static int32_t get_offset_of_socket_10() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536, ___socket_10)); }
	inline Socket_t3821512045 * get_socket_10() const { return ___socket_10; }
	inline Socket_t3821512045 ** get_address_of_socket_10() { return &___socket_10; }
	inline void set_socket_10(Socket_t3821512045 * value)
	{
		___socket_10 = value;
		Il2CppCodeGenWriteBarrier(&___socket_10, value);
	}

	inline static int32_t get_offset_of_connected_11() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536, ___connected_11)); }
	inline ManualResetEvent_t926074657 * get_connected_11() const { return ___connected_11; }
	inline ManualResetEvent_t926074657 ** get_address_of_connected_11() { return &___connected_11; }
	inline void set_connected_11(ManualResetEvent_t926074657 * value)
	{
		___connected_11 = value;
		Il2CppCodeGenWriteBarrier(&___connected_11, value);
	}

	inline static int32_t get_offset_of_serializer_12() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536, ___serializer_12)); }
	inline StyxSerializer_t309677892 * get_serializer_12() const { return ___serializer_12; }
	inline StyxSerializer_t309677892 ** get_address_of_serializer_12() { return &___serializer_12; }
	inline void set_serializer_12(StyxSerializer_t309677892 * value)
	{
		___serializer_12 = value;
		Il2CppCodeGenWriteBarrier(&___serializer_12, value);
	}

	inline static int32_t get_offset_of_protocalObjectQueue_13() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536, ___protocalObjectQueue_13)); }
	inline Queue_1_t2974962562 * get_protocalObjectQueue_13() const { return ___protocalObjectQueue_13; }
	inline Queue_1_t2974962562 ** get_address_of_protocalObjectQueue_13() { return &___protocalObjectQueue_13; }
	inline void set_protocalObjectQueue_13(Queue_1_t2974962562 * value)
	{
		___protocalObjectQueue_13 = value;
		Il2CppCodeGenWriteBarrier(&___protocalObjectQueue_13, value);
	}

	inline static int32_t get_offset_of_pauseReceiving_14() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536, ___pauseReceiving_14)); }
	inline bool get_pauseReceiving_14() const { return ___pauseReceiving_14; }
	inline bool* get_address_of_pauseReceiving_14() { return &___pauseReceiving_14; }
	inline void set_pauseReceiving_14(bool value)
	{
		___pauseReceiving_14 = value;
	}

	inline static int32_t get_offset_of_onConnecting_15() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536, ___onConnecting_15)); }
	inline bool get_onConnecting_15() const { return ___onConnecting_15; }
	inline bool* get_address_of_onConnecting_15() { return &___onConnecting_15; }
	inline void set_onConnecting_15(bool value)
	{
		___onConnecting_15 = value;
	}
};

struct CubeiaClient_t2232589536_StaticFields
{
public:
	// System.String CubeiaClient::HOST
	String_t* ___HOST_0;
	// System.Comparison`1<TableGame> CubeiaClient::<>f__am$cache0
	Comparison_1_t2295367337 * ___U3CU3Ef__amU24cache0_16;
	// System.Action CubeiaClient::<>f__am$cache1
	Action_t3226471752 * ___U3CU3Ef__amU24cache1_17;

public:
	inline static int32_t get_offset_of_HOST_0() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536_StaticFields, ___HOST_0)); }
	inline String_t* get_HOST_0() const { return ___HOST_0; }
	inline String_t** get_address_of_HOST_0() { return &___HOST_0; }
	inline void set_HOST_0(String_t* value)
	{
		___HOST_0 = value;
		Il2CppCodeGenWriteBarrier(&___HOST_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_16() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536_StaticFields, ___U3CU3Ef__amU24cache0_16)); }
	inline Comparison_1_t2295367337 * get_U3CU3Ef__amU24cache0_16() const { return ___U3CU3Ef__amU24cache0_16; }
	inline Comparison_1_t2295367337 ** get_address_of_U3CU3Ef__amU24cache0_16() { return &___U3CU3Ef__amU24cache0_16; }
	inline void set_U3CU3Ef__amU24cache0_16(Comparison_1_t2295367337 * value)
	{
		___U3CU3Ef__amU24cache0_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_17() { return static_cast<int32_t>(offsetof(CubeiaClient_t2232589536_StaticFields, ___U3CU3Ef__amU24cache1_17)); }
	inline Action_t3226471752 * get_U3CU3Ef__amU24cache1_17() const { return ___U3CU3Ef__amU24cache1_17; }
	inline Action_t3226471752 ** get_address_of_U3CU3Ef__amU24cache1_17() { return &___U3CU3Ef__amU24cache1_17; }
	inline void set_U3CU3Ef__amU24cache1_17(Action_t3226471752 * value)
	{
		___U3CU3Ef__amU24cache1_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
