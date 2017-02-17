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
// GameApplication
struct GameApplication_t4152476660;
// CubeiaClient
struct CubeiaClient_t2232589536;
// GameScene
struct GameScene_t1466645730;
// Game
struct Game_t1600141214;
// User
struct User_t719925459;
// BestHTTP.SocketIO.SocketManager
struct SocketManager_t3470268644;
// BestHTTP.SocketIO.Socket
struct Socket_t2716624701;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Collections.Generic.List`1<BannerData>
struct List_1_t1996374442;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GameApplication_GameApp3068551626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameApplication
struct  GameApplication_t4152476660  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct GameApplication_t4152476660_StaticFields
{
public:
	// System.Boolean GameApplication::DEBUG_ON
	bool ___DEBUG_ON_2;
	// System.Int32 GameApplication::ENCODE
	int32_t ___ENCODE_3;
	// GameApplication/GameApp GameApplication::gameApp
	int32_t ___gameApp_4;
	// GameApplication GameApplication::mInstance
	GameApplication_t4152476660 * ___mInstance_9;
	// CubeiaClient GameApplication::cubeiaClient
	CubeiaClient_t2232589536 * ___cubeiaClient_10;
	// GameScene GameApplication::mgameScene
	GameScene_t1466645730 * ___mgameScene_11;
	// Game GameApplication::mgameObject
	Game_t1600141214 * ___mgameObject_12;
	// User GameApplication::mUser
	User_t719925459 * ___mUser_13;
	// System.String GameApplication::mUniqueIdentifier
	String_t* ___mUniqueIdentifier_14;
	// BestHTTP.SocketIO.SocketManager GameApplication::Manager
	SocketManager_t3470268644 * ___Manager_15;
	// BestHTTP.SocketIO.Socket GameApplication::socketIO
	Socket_t2716624701 * ___socketIO_16;
	// System.Boolean GameApplication::checkConnectSocketIO
	bool ___checkConnectSocketIO_17;
	// System.String GameApplication::url_paymentconfig
	String_t* ___url_paymentconfig_18;
	// System.String GameApplication::url_getIpByUser
	String_t* ___url_getIpByUser_19;
	// System.String GameApplication::url_dis_register
	String_t* ___url_dis_register_20;
	// System.String GameApplication::url_dis_get_update_info
	String_t* ___url_dis_get_update_info_21;
	// System.String GameApplication::url_postgamelog
	String_t* ___url_postgamelog_22;
	// System.String GameApplication::url_playerReportErr
	String_t* ___url_playerReportErr_23;
	// System.String GameApplication::url_receivegamelog
	String_t* ___url_receivegamelog_24;
	// System.String GameApplication::url_receivelogs
	String_t* ___url_receivelogs_25;
	// System.String GameApplication::url_caothu_ngay
	String_t* ___url_caothu_ngay_26;
	// System.String GameApplication::url_caothu_tuan
	String_t* ___url_caothu_tuan_27;
	// System.String GameApplication::url_caothu_thang
	String_t* ___url_caothu_thang_28;
	// System.String GameApplication::url_caothu_homqua
	String_t* ___url_caothu_homqua_29;
	// System.String GameApplication::url_caothu_giaithuong
	String_t* ___url_caothu_giaithuong_30;
	// System.String GameApplication::url_dungsi_homqua
	String_t* ___url_dungsi_homqua_31;
	// System.String GameApplication::url_dungsi_tuan
	String_t* ___url_dungsi_tuan_32;
	// System.String GameApplication::url_dungsi_thang
	String_t* ___url_dungsi_thang_33;
	// System.String GameApplication::url_dungsi_giaituan
	String_t* ___url_dungsi_giaituan_34;
	// System.String GameApplication::url_dungsi_giaithang
	String_t* ___url_dungsi_giaithang_35;
	// System.String GameApplication::url_dungsi_gioithieu
	String_t* ___url_dungsi_gioithieu_36;
	// System.String GameApplication::url_sharedailybonus
	String_t* ___url_sharedailybonus_37;
	// System.String GameApplication::configURL
	String_t* ___configURL_38;
	// System.String GameApplication::fanpageURL
	String_t* ___fanpageURL_39;
	// System.String GameApplication::fanpageID
	String_t* ___fanpageID_40;
	// System.String GameApplication::groupURL
	String_t* ___groupURL_41;
	// System.String GameApplication::groupID
	String_t* ___groupID_42;
	// System.String GameApplication::inviteJoinFBMsg
	String_t* ___inviteJoinFBMsg_43;
	// System.String GameApplication::checkUserLikedFBURL
	String_t* ___checkUserLikedFBURL_44;
	// System.String GameApplication::checkUserJoinedFBURL
	String_t* ___checkUserJoinedFBURL_45;
	// System.String GameApplication::apnDeviceToken
	String_t* ___apnDeviceToken_46;
	// System.String GameApplication::installtrackinglink
	String_t* ___installtrackinglink_47;
	// System.String GameApplication::notiservice
	String_t* ___notiservice_48;
	// System.Boolean GameApplication::hasInvitableFriends
	bool ___hasInvitableFriends_49;
	// System.Boolean GameApplication::hasCheckedFBService
	bool ___hasCheckedFBService_50;
	// System.Boolean GameApplication::hasLikedFanpage
	bool ___hasLikedFanpage_51;
	// System.Boolean GameApplication::hasJoinedGroup
	bool ___hasJoinedGroup_52;
	// System.String GameApplication::HOTLINE
	String_t* ___HOTLINE_53;
	// System.Int32 GameApplication::minVip
	int32_t ___minVip_54;
	// System.Int32 GameApplication::minGold
	int32_t ___minGold_55;
	// System.Int32 GameApplication::avatar_count
	int32_t ___avatar_count_56;
	// System.String GameApplication::avatar_build
	String_t* ___avatar_build_57;
	// System.String GameApplication::urlTrackingEvent
	String_t* ___urlTrackingEvent_58;
	// System.Collections.Generic.List`1<System.Int32> GameApplication::stakeList
	List_1_t1440998580 * ___stakeList_59;
	// System.Collections.Generic.List`1<System.Int32> GameApplication::ccusList
	List_1_t1440998580 * ___ccusList_60;
	// System.Collections.Generic.List`1<BannerData> GameApplication::bannerData
	List_1_t1996374442 * ___bannerData_61;
	// System.Int32 GameApplication::notify_MT
	int32_t ___notify_MT_62;
	// System.Boolean GameApplication::onReconnect
	bool ___onReconnect_63;
	// System.Boolean GameApplication::showRegName
	bool ___showRegName_64;
	// System.Int32 GameApplication::inChangingAvatar
	int32_t ___inChangingAvatar_65;

public:
	inline static int32_t get_offset_of_DEBUG_ON_2() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___DEBUG_ON_2)); }
	inline bool get_DEBUG_ON_2() const { return ___DEBUG_ON_2; }
	inline bool* get_address_of_DEBUG_ON_2() { return &___DEBUG_ON_2; }
	inline void set_DEBUG_ON_2(bool value)
	{
		___DEBUG_ON_2 = value;
	}

	inline static int32_t get_offset_of_ENCODE_3() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___ENCODE_3)); }
	inline int32_t get_ENCODE_3() const { return ___ENCODE_3; }
	inline int32_t* get_address_of_ENCODE_3() { return &___ENCODE_3; }
	inline void set_ENCODE_3(int32_t value)
	{
		___ENCODE_3 = value;
	}

	inline static int32_t get_offset_of_gameApp_4() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___gameApp_4)); }
	inline int32_t get_gameApp_4() const { return ___gameApp_4; }
	inline int32_t* get_address_of_gameApp_4() { return &___gameApp_4; }
	inline void set_gameApp_4(int32_t value)
	{
		___gameApp_4 = value;
	}

	inline static int32_t get_offset_of_mInstance_9() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___mInstance_9)); }
	inline GameApplication_t4152476660 * get_mInstance_9() const { return ___mInstance_9; }
	inline GameApplication_t4152476660 ** get_address_of_mInstance_9() { return &___mInstance_9; }
	inline void set_mInstance_9(GameApplication_t4152476660 * value)
	{
		___mInstance_9 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_9, value);
	}

	inline static int32_t get_offset_of_cubeiaClient_10() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___cubeiaClient_10)); }
	inline CubeiaClient_t2232589536 * get_cubeiaClient_10() const { return ___cubeiaClient_10; }
	inline CubeiaClient_t2232589536 ** get_address_of_cubeiaClient_10() { return &___cubeiaClient_10; }
	inline void set_cubeiaClient_10(CubeiaClient_t2232589536 * value)
	{
		___cubeiaClient_10 = value;
		Il2CppCodeGenWriteBarrier(&___cubeiaClient_10, value);
	}

	inline static int32_t get_offset_of_mgameScene_11() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___mgameScene_11)); }
	inline GameScene_t1466645730 * get_mgameScene_11() const { return ___mgameScene_11; }
	inline GameScene_t1466645730 ** get_address_of_mgameScene_11() { return &___mgameScene_11; }
	inline void set_mgameScene_11(GameScene_t1466645730 * value)
	{
		___mgameScene_11 = value;
		Il2CppCodeGenWriteBarrier(&___mgameScene_11, value);
	}

	inline static int32_t get_offset_of_mgameObject_12() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___mgameObject_12)); }
	inline Game_t1600141214 * get_mgameObject_12() const { return ___mgameObject_12; }
	inline Game_t1600141214 ** get_address_of_mgameObject_12() { return &___mgameObject_12; }
	inline void set_mgameObject_12(Game_t1600141214 * value)
	{
		___mgameObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___mgameObject_12, value);
	}

	inline static int32_t get_offset_of_mUser_13() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___mUser_13)); }
	inline User_t719925459 * get_mUser_13() const { return ___mUser_13; }
	inline User_t719925459 ** get_address_of_mUser_13() { return &___mUser_13; }
	inline void set_mUser_13(User_t719925459 * value)
	{
		___mUser_13 = value;
		Il2CppCodeGenWriteBarrier(&___mUser_13, value);
	}

	inline static int32_t get_offset_of_mUniqueIdentifier_14() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___mUniqueIdentifier_14)); }
	inline String_t* get_mUniqueIdentifier_14() const { return ___mUniqueIdentifier_14; }
	inline String_t** get_address_of_mUniqueIdentifier_14() { return &___mUniqueIdentifier_14; }
	inline void set_mUniqueIdentifier_14(String_t* value)
	{
		___mUniqueIdentifier_14 = value;
		Il2CppCodeGenWriteBarrier(&___mUniqueIdentifier_14, value);
	}

	inline static int32_t get_offset_of_Manager_15() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___Manager_15)); }
	inline SocketManager_t3470268644 * get_Manager_15() const { return ___Manager_15; }
	inline SocketManager_t3470268644 ** get_address_of_Manager_15() { return &___Manager_15; }
	inline void set_Manager_15(SocketManager_t3470268644 * value)
	{
		___Manager_15 = value;
		Il2CppCodeGenWriteBarrier(&___Manager_15, value);
	}

	inline static int32_t get_offset_of_socketIO_16() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___socketIO_16)); }
	inline Socket_t2716624701 * get_socketIO_16() const { return ___socketIO_16; }
	inline Socket_t2716624701 ** get_address_of_socketIO_16() { return &___socketIO_16; }
	inline void set_socketIO_16(Socket_t2716624701 * value)
	{
		___socketIO_16 = value;
		Il2CppCodeGenWriteBarrier(&___socketIO_16, value);
	}

	inline static int32_t get_offset_of_checkConnectSocketIO_17() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___checkConnectSocketIO_17)); }
	inline bool get_checkConnectSocketIO_17() const { return ___checkConnectSocketIO_17; }
	inline bool* get_address_of_checkConnectSocketIO_17() { return &___checkConnectSocketIO_17; }
	inline void set_checkConnectSocketIO_17(bool value)
	{
		___checkConnectSocketIO_17 = value;
	}

	inline static int32_t get_offset_of_url_paymentconfig_18() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_paymentconfig_18)); }
	inline String_t* get_url_paymentconfig_18() const { return ___url_paymentconfig_18; }
	inline String_t** get_address_of_url_paymentconfig_18() { return &___url_paymentconfig_18; }
	inline void set_url_paymentconfig_18(String_t* value)
	{
		___url_paymentconfig_18 = value;
		Il2CppCodeGenWriteBarrier(&___url_paymentconfig_18, value);
	}

	inline static int32_t get_offset_of_url_getIpByUser_19() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_getIpByUser_19)); }
	inline String_t* get_url_getIpByUser_19() const { return ___url_getIpByUser_19; }
	inline String_t** get_address_of_url_getIpByUser_19() { return &___url_getIpByUser_19; }
	inline void set_url_getIpByUser_19(String_t* value)
	{
		___url_getIpByUser_19 = value;
		Il2CppCodeGenWriteBarrier(&___url_getIpByUser_19, value);
	}

	inline static int32_t get_offset_of_url_dis_register_20() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_dis_register_20)); }
	inline String_t* get_url_dis_register_20() const { return ___url_dis_register_20; }
	inline String_t** get_address_of_url_dis_register_20() { return &___url_dis_register_20; }
	inline void set_url_dis_register_20(String_t* value)
	{
		___url_dis_register_20 = value;
		Il2CppCodeGenWriteBarrier(&___url_dis_register_20, value);
	}

	inline static int32_t get_offset_of_url_dis_get_update_info_21() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_dis_get_update_info_21)); }
	inline String_t* get_url_dis_get_update_info_21() const { return ___url_dis_get_update_info_21; }
	inline String_t** get_address_of_url_dis_get_update_info_21() { return &___url_dis_get_update_info_21; }
	inline void set_url_dis_get_update_info_21(String_t* value)
	{
		___url_dis_get_update_info_21 = value;
		Il2CppCodeGenWriteBarrier(&___url_dis_get_update_info_21, value);
	}

	inline static int32_t get_offset_of_url_postgamelog_22() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_postgamelog_22)); }
	inline String_t* get_url_postgamelog_22() const { return ___url_postgamelog_22; }
	inline String_t** get_address_of_url_postgamelog_22() { return &___url_postgamelog_22; }
	inline void set_url_postgamelog_22(String_t* value)
	{
		___url_postgamelog_22 = value;
		Il2CppCodeGenWriteBarrier(&___url_postgamelog_22, value);
	}

	inline static int32_t get_offset_of_url_playerReportErr_23() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_playerReportErr_23)); }
	inline String_t* get_url_playerReportErr_23() const { return ___url_playerReportErr_23; }
	inline String_t** get_address_of_url_playerReportErr_23() { return &___url_playerReportErr_23; }
	inline void set_url_playerReportErr_23(String_t* value)
	{
		___url_playerReportErr_23 = value;
		Il2CppCodeGenWriteBarrier(&___url_playerReportErr_23, value);
	}

	inline static int32_t get_offset_of_url_receivegamelog_24() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_receivegamelog_24)); }
	inline String_t* get_url_receivegamelog_24() const { return ___url_receivegamelog_24; }
	inline String_t** get_address_of_url_receivegamelog_24() { return &___url_receivegamelog_24; }
	inline void set_url_receivegamelog_24(String_t* value)
	{
		___url_receivegamelog_24 = value;
		Il2CppCodeGenWriteBarrier(&___url_receivegamelog_24, value);
	}

	inline static int32_t get_offset_of_url_receivelogs_25() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_receivelogs_25)); }
	inline String_t* get_url_receivelogs_25() const { return ___url_receivelogs_25; }
	inline String_t** get_address_of_url_receivelogs_25() { return &___url_receivelogs_25; }
	inline void set_url_receivelogs_25(String_t* value)
	{
		___url_receivelogs_25 = value;
		Il2CppCodeGenWriteBarrier(&___url_receivelogs_25, value);
	}

	inline static int32_t get_offset_of_url_caothu_ngay_26() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_caothu_ngay_26)); }
	inline String_t* get_url_caothu_ngay_26() const { return ___url_caothu_ngay_26; }
	inline String_t** get_address_of_url_caothu_ngay_26() { return &___url_caothu_ngay_26; }
	inline void set_url_caothu_ngay_26(String_t* value)
	{
		___url_caothu_ngay_26 = value;
		Il2CppCodeGenWriteBarrier(&___url_caothu_ngay_26, value);
	}

	inline static int32_t get_offset_of_url_caothu_tuan_27() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_caothu_tuan_27)); }
	inline String_t* get_url_caothu_tuan_27() const { return ___url_caothu_tuan_27; }
	inline String_t** get_address_of_url_caothu_tuan_27() { return &___url_caothu_tuan_27; }
	inline void set_url_caothu_tuan_27(String_t* value)
	{
		___url_caothu_tuan_27 = value;
		Il2CppCodeGenWriteBarrier(&___url_caothu_tuan_27, value);
	}

	inline static int32_t get_offset_of_url_caothu_thang_28() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_caothu_thang_28)); }
	inline String_t* get_url_caothu_thang_28() const { return ___url_caothu_thang_28; }
	inline String_t** get_address_of_url_caothu_thang_28() { return &___url_caothu_thang_28; }
	inline void set_url_caothu_thang_28(String_t* value)
	{
		___url_caothu_thang_28 = value;
		Il2CppCodeGenWriteBarrier(&___url_caothu_thang_28, value);
	}

	inline static int32_t get_offset_of_url_caothu_homqua_29() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_caothu_homqua_29)); }
	inline String_t* get_url_caothu_homqua_29() const { return ___url_caothu_homqua_29; }
	inline String_t** get_address_of_url_caothu_homqua_29() { return &___url_caothu_homqua_29; }
	inline void set_url_caothu_homqua_29(String_t* value)
	{
		___url_caothu_homqua_29 = value;
		Il2CppCodeGenWriteBarrier(&___url_caothu_homqua_29, value);
	}

	inline static int32_t get_offset_of_url_caothu_giaithuong_30() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_caothu_giaithuong_30)); }
	inline String_t* get_url_caothu_giaithuong_30() const { return ___url_caothu_giaithuong_30; }
	inline String_t** get_address_of_url_caothu_giaithuong_30() { return &___url_caothu_giaithuong_30; }
	inline void set_url_caothu_giaithuong_30(String_t* value)
	{
		___url_caothu_giaithuong_30 = value;
		Il2CppCodeGenWriteBarrier(&___url_caothu_giaithuong_30, value);
	}

	inline static int32_t get_offset_of_url_dungsi_homqua_31() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_dungsi_homqua_31)); }
	inline String_t* get_url_dungsi_homqua_31() const { return ___url_dungsi_homqua_31; }
	inline String_t** get_address_of_url_dungsi_homqua_31() { return &___url_dungsi_homqua_31; }
	inline void set_url_dungsi_homqua_31(String_t* value)
	{
		___url_dungsi_homqua_31 = value;
		Il2CppCodeGenWriteBarrier(&___url_dungsi_homqua_31, value);
	}

	inline static int32_t get_offset_of_url_dungsi_tuan_32() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_dungsi_tuan_32)); }
	inline String_t* get_url_dungsi_tuan_32() const { return ___url_dungsi_tuan_32; }
	inline String_t** get_address_of_url_dungsi_tuan_32() { return &___url_dungsi_tuan_32; }
	inline void set_url_dungsi_tuan_32(String_t* value)
	{
		___url_dungsi_tuan_32 = value;
		Il2CppCodeGenWriteBarrier(&___url_dungsi_tuan_32, value);
	}

	inline static int32_t get_offset_of_url_dungsi_thang_33() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_dungsi_thang_33)); }
	inline String_t* get_url_dungsi_thang_33() const { return ___url_dungsi_thang_33; }
	inline String_t** get_address_of_url_dungsi_thang_33() { return &___url_dungsi_thang_33; }
	inline void set_url_dungsi_thang_33(String_t* value)
	{
		___url_dungsi_thang_33 = value;
		Il2CppCodeGenWriteBarrier(&___url_dungsi_thang_33, value);
	}

	inline static int32_t get_offset_of_url_dungsi_giaituan_34() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_dungsi_giaituan_34)); }
	inline String_t* get_url_dungsi_giaituan_34() const { return ___url_dungsi_giaituan_34; }
	inline String_t** get_address_of_url_dungsi_giaituan_34() { return &___url_dungsi_giaituan_34; }
	inline void set_url_dungsi_giaituan_34(String_t* value)
	{
		___url_dungsi_giaituan_34 = value;
		Il2CppCodeGenWriteBarrier(&___url_dungsi_giaituan_34, value);
	}

	inline static int32_t get_offset_of_url_dungsi_giaithang_35() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_dungsi_giaithang_35)); }
	inline String_t* get_url_dungsi_giaithang_35() const { return ___url_dungsi_giaithang_35; }
	inline String_t** get_address_of_url_dungsi_giaithang_35() { return &___url_dungsi_giaithang_35; }
	inline void set_url_dungsi_giaithang_35(String_t* value)
	{
		___url_dungsi_giaithang_35 = value;
		Il2CppCodeGenWriteBarrier(&___url_dungsi_giaithang_35, value);
	}

	inline static int32_t get_offset_of_url_dungsi_gioithieu_36() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_dungsi_gioithieu_36)); }
	inline String_t* get_url_dungsi_gioithieu_36() const { return ___url_dungsi_gioithieu_36; }
	inline String_t** get_address_of_url_dungsi_gioithieu_36() { return &___url_dungsi_gioithieu_36; }
	inline void set_url_dungsi_gioithieu_36(String_t* value)
	{
		___url_dungsi_gioithieu_36 = value;
		Il2CppCodeGenWriteBarrier(&___url_dungsi_gioithieu_36, value);
	}

	inline static int32_t get_offset_of_url_sharedailybonus_37() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___url_sharedailybonus_37)); }
	inline String_t* get_url_sharedailybonus_37() const { return ___url_sharedailybonus_37; }
	inline String_t** get_address_of_url_sharedailybonus_37() { return &___url_sharedailybonus_37; }
	inline void set_url_sharedailybonus_37(String_t* value)
	{
		___url_sharedailybonus_37 = value;
		Il2CppCodeGenWriteBarrier(&___url_sharedailybonus_37, value);
	}

	inline static int32_t get_offset_of_configURL_38() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___configURL_38)); }
	inline String_t* get_configURL_38() const { return ___configURL_38; }
	inline String_t** get_address_of_configURL_38() { return &___configURL_38; }
	inline void set_configURL_38(String_t* value)
	{
		___configURL_38 = value;
		Il2CppCodeGenWriteBarrier(&___configURL_38, value);
	}

	inline static int32_t get_offset_of_fanpageURL_39() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___fanpageURL_39)); }
	inline String_t* get_fanpageURL_39() const { return ___fanpageURL_39; }
	inline String_t** get_address_of_fanpageURL_39() { return &___fanpageURL_39; }
	inline void set_fanpageURL_39(String_t* value)
	{
		___fanpageURL_39 = value;
		Il2CppCodeGenWriteBarrier(&___fanpageURL_39, value);
	}

	inline static int32_t get_offset_of_fanpageID_40() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___fanpageID_40)); }
	inline String_t* get_fanpageID_40() const { return ___fanpageID_40; }
	inline String_t** get_address_of_fanpageID_40() { return &___fanpageID_40; }
	inline void set_fanpageID_40(String_t* value)
	{
		___fanpageID_40 = value;
		Il2CppCodeGenWriteBarrier(&___fanpageID_40, value);
	}

	inline static int32_t get_offset_of_groupURL_41() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___groupURL_41)); }
	inline String_t* get_groupURL_41() const { return ___groupURL_41; }
	inline String_t** get_address_of_groupURL_41() { return &___groupURL_41; }
	inline void set_groupURL_41(String_t* value)
	{
		___groupURL_41 = value;
		Il2CppCodeGenWriteBarrier(&___groupURL_41, value);
	}

	inline static int32_t get_offset_of_groupID_42() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___groupID_42)); }
	inline String_t* get_groupID_42() const { return ___groupID_42; }
	inline String_t** get_address_of_groupID_42() { return &___groupID_42; }
	inline void set_groupID_42(String_t* value)
	{
		___groupID_42 = value;
		Il2CppCodeGenWriteBarrier(&___groupID_42, value);
	}

	inline static int32_t get_offset_of_inviteJoinFBMsg_43() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___inviteJoinFBMsg_43)); }
	inline String_t* get_inviteJoinFBMsg_43() const { return ___inviteJoinFBMsg_43; }
	inline String_t** get_address_of_inviteJoinFBMsg_43() { return &___inviteJoinFBMsg_43; }
	inline void set_inviteJoinFBMsg_43(String_t* value)
	{
		___inviteJoinFBMsg_43 = value;
		Il2CppCodeGenWriteBarrier(&___inviteJoinFBMsg_43, value);
	}

	inline static int32_t get_offset_of_checkUserLikedFBURL_44() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___checkUserLikedFBURL_44)); }
	inline String_t* get_checkUserLikedFBURL_44() const { return ___checkUserLikedFBURL_44; }
	inline String_t** get_address_of_checkUserLikedFBURL_44() { return &___checkUserLikedFBURL_44; }
	inline void set_checkUserLikedFBURL_44(String_t* value)
	{
		___checkUserLikedFBURL_44 = value;
		Il2CppCodeGenWriteBarrier(&___checkUserLikedFBURL_44, value);
	}

	inline static int32_t get_offset_of_checkUserJoinedFBURL_45() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___checkUserJoinedFBURL_45)); }
	inline String_t* get_checkUserJoinedFBURL_45() const { return ___checkUserJoinedFBURL_45; }
	inline String_t** get_address_of_checkUserJoinedFBURL_45() { return &___checkUserJoinedFBURL_45; }
	inline void set_checkUserJoinedFBURL_45(String_t* value)
	{
		___checkUserJoinedFBURL_45 = value;
		Il2CppCodeGenWriteBarrier(&___checkUserJoinedFBURL_45, value);
	}

	inline static int32_t get_offset_of_apnDeviceToken_46() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___apnDeviceToken_46)); }
	inline String_t* get_apnDeviceToken_46() const { return ___apnDeviceToken_46; }
	inline String_t** get_address_of_apnDeviceToken_46() { return &___apnDeviceToken_46; }
	inline void set_apnDeviceToken_46(String_t* value)
	{
		___apnDeviceToken_46 = value;
		Il2CppCodeGenWriteBarrier(&___apnDeviceToken_46, value);
	}

	inline static int32_t get_offset_of_installtrackinglink_47() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___installtrackinglink_47)); }
	inline String_t* get_installtrackinglink_47() const { return ___installtrackinglink_47; }
	inline String_t** get_address_of_installtrackinglink_47() { return &___installtrackinglink_47; }
	inline void set_installtrackinglink_47(String_t* value)
	{
		___installtrackinglink_47 = value;
		Il2CppCodeGenWriteBarrier(&___installtrackinglink_47, value);
	}

	inline static int32_t get_offset_of_notiservice_48() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___notiservice_48)); }
	inline String_t* get_notiservice_48() const { return ___notiservice_48; }
	inline String_t** get_address_of_notiservice_48() { return &___notiservice_48; }
	inline void set_notiservice_48(String_t* value)
	{
		___notiservice_48 = value;
		Il2CppCodeGenWriteBarrier(&___notiservice_48, value);
	}

	inline static int32_t get_offset_of_hasInvitableFriends_49() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___hasInvitableFriends_49)); }
	inline bool get_hasInvitableFriends_49() const { return ___hasInvitableFriends_49; }
	inline bool* get_address_of_hasInvitableFriends_49() { return &___hasInvitableFriends_49; }
	inline void set_hasInvitableFriends_49(bool value)
	{
		___hasInvitableFriends_49 = value;
	}

	inline static int32_t get_offset_of_hasCheckedFBService_50() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___hasCheckedFBService_50)); }
	inline bool get_hasCheckedFBService_50() const { return ___hasCheckedFBService_50; }
	inline bool* get_address_of_hasCheckedFBService_50() { return &___hasCheckedFBService_50; }
	inline void set_hasCheckedFBService_50(bool value)
	{
		___hasCheckedFBService_50 = value;
	}

	inline static int32_t get_offset_of_hasLikedFanpage_51() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___hasLikedFanpage_51)); }
	inline bool get_hasLikedFanpage_51() const { return ___hasLikedFanpage_51; }
	inline bool* get_address_of_hasLikedFanpage_51() { return &___hasLikedFanpage_51; }
	inline void set_hasLikedFanpage_51(bool value)
	{
		___hasLikedFanpage_51 = value;
	}

	inline static int32_t get_offset_of_hasJoinedGroup_52() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___hasJoinedGroup_52)); }
	inline bool get_hasJoinedGroup_52() const { return ___hasJoinedGroup_52; }
	inline bool* get_address_of_hasJoinedGroup_52() { return &___hasJoinedGroup_52; }
	inline void set_hasJoinedGroup_52(bool value)
	{
		___hasJoinedGroup_52 = value;
	}

	inline static int32_t get_offset_of_HOTLINE_53() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___HOTLINE_53)); }
	inline String_t* get_HOTLINE_53() const { return ___HOTLINE_53; }
	inline String_t** get_address_of_HOTLINE_53() { return &___HOTLINE_53; }
	inline void set_HOTLINE_53(String_t* value)
	{
		___HOTLINE_53 = value;
		Il2CppCodeGenWriteBarrier(&___HOTLINE_53, value);
	}

	inline static int32_t get_offset_of_minVip_54() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___minVip_54)); }
	inline int32_t get_minVip_54() const { return ___minVip_54; }
	inline int32_t* get_address_of_minVip_54() { return &___minVip_54; }
	inline void set_minVip_54(int32_t value)
	{
		___minVip_54 = value;
	}

	inline static int32_t get_offset_of_minGold_55() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___minGold_55)); }
	inline int32_t get_minGold_55() const { return ___minGold_55; }
	inline int32_t* get_address_of_minGold_55() { return &___minGold_55; }
	inline void set_minGold_55(int32_t value)
	{
		___minGold_55 = value;
	}

	inline static int32_t get_offset_of_avatar_count_56() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___avatar_count_56)); }
	inline int32_t get_avatar_count_56() const { return ___avatar_count_56; }
	inline int32_t* get_address_of_avatar_count_56() { return &___avatar_count_56; }
	inline void set_avatar_count_56(int32_t value)
	{
		___avatar_count_56 = value;
	}

	inline static int32_t get_offset_of_avatar_build_57() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___avatar_build_57)); }
	inline String_t* get_avatar_build_57() const { return ___avatar_build_57; }
	inline String_t** get_address_of_avatar_build_57() { return &___avatar_build_57; }
	inline void set_avatar_build_57(String_t* value)
	{
		___avatar_build_57 = value;
		Il2CppCodeGenWriteBarrier(&___avatar_build_57, value);
	}

	inline static int32_t get_offset_of_urlTrackingEvent_58() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___urlTrackingEvent_58)); }
	inline String_t* get_urlTrackingEvent_58() const { return ___urlTrackingEvent_58; }
	inline String_t** get_address_of_urlTrackingEvent_58() { return &___urlTrackingEvent_58; }
	inline void set_urlTrackingEvent_58(String_t* value)
	{
		___urlTrackingEvent_58 = value;
		Il2CppCodeGenWriteBarrier(&___urlTrackingEvent_58, value);
	}

	inline static int32_t get_offset_of_stakeList_59() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___stakeList_59)); }
	inline List_1_t1440998580 * get_stakeList_59() const { return ___stakeList_59; }
	inline List_1_t1440998580 ** get_address_of_stakeList_59() { return &___stakeList_59; }
	inline void set_stakeList_59(List_1_t1440998580 * value)
	{
		___stakeList_59 = value;
		Il2CppCodeGenWriteBarrier(&___stakeList_59, value);
	}

	inline static int32_t get_offset_of_ccusList_60() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___ccusList_60)); }
	inline List_1_t1440998580 * get_ccusList_60() const { return ___ccusList_60; }
	inline List_1_t1440998580 ** get_address_of_ccusList_60() { return &___ccusList_60; }
	inline void set_ccusList_60(List_1_t1440998580 * value)
	{
		___ccusList_60 = value;
		Il2CppCodeGenWriteBarrier(&___ccusList_60, value);
	}

	inline static int32_t get_offset_of_bannerData_61() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___bannerData_61)); }
	inline List_1_t1996374442 * get_bannerData_61() const { return ___bannerData_61; }
	inline List_1_t1996374442 ** get_address_of_bannerData_61() { return &___bannerData_61; }
	inline void set_bannerData_61(List_1_t1996374442 * value)
	{
		___bannerData_61 = value;
		Il2CppCodeGenWriteBarrier(&___bannerData_61, value);
	}

	inline static int32_t get_offset_of_notify_MT_62() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___notify_MT_62)); }
	inline int32_t get_notify_MT_62() const { return ___notify_MT_62; }
	inline int32_t* get_address_of_notify_MT_62() { return &___notify_MT_62; }
	inline void set_notify_MT_62(int32_t value)
	{
		___notify_MT_62 = value;
	}

	inline static int32_t get_offset_of_onReconnect_63() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___onReconnect_63)); }
	inline bool get_onReconnect_63() const { return ___onReconnect_63; }
	inline bool* get_address_of_onReconnect_63() { return &___onReconnect_63; }
	inline void set_onReconnect_63(bool value)
	{
		___onReconnect_63 = value;
	}

	inline static int32_t get_offset_of_showRegName_64() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___showRegName_64)); }
	inline bool get_showRegName_64() const { return ___showRegName_64; }
	inline bool* get_address_of_showRegName_64() { return &___showRegName_64; }
	inline void set_showRegName_64(bool value)
	{
		___showRegName_64 = value;
	}

	inline static int32_t get_offset_of_inChangingAvatar_65() { return static_cast<int32_t>(offsetof(GameApplication_t4152476660_StaticFields, ___inChangingAvatar_65)); }
	inline int32_t get_inChangingAvatar_65() const { return ___inChangingAvatar_65; }
	inline int32_t* get_address_of_inChangingAvatar_65() { return &___inChangingAvatar_65; }
	inline void set_inChangingAvatar_65(int32_t value)
	{
		___inChangingAvatar_65 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
