#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GameApplication
struct GameApplication_t4152476660;
// System.String
struct String_t;
// User
struct User_t719925459;
// Resource
struct Resource_t1323496244;
// Game
struct Game_t1600141214;
// CubeiaClient
struct CubeiaClient_t2232589536;
// GameScene
struct GameScene_t1466645730;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_User719925459.h"
#include "AssemblyU2DCSharp_Game1600141214.h"
#include "AssemblyU2DCSharp_CubeiaClient2232589536.h"
#include "AssemblyU2DCSharp_GameScene1466645730.h"

// System.Void GameApplication::.ctor()
extern "C"  void GameApplication__ctor_m1947792067 (GameApplication_t4152476660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_appleAppID()
extern "C"  String_t* GameApplication_get_appleAppID_m2383147647 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_versionname()
extern "C"  String_t* GameApplication_get_versionname_m2206270554 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_versioncode()
extern "C"  String_t* GameApplication_get_versioncode_m3043769236 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_LOGINSCENE()
extern "C"  String_t* GameApplication_get_LOGINSCENE_m3283051322 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_STABSSCENE()
extern "C"  String_t* GameApplication_get_STABSSCENE_m2831927550 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_HOMESCENE()
extern "C"  String_t* GameApplication_get_HOMESCENE_m1474225252 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_LOBBYSCENE()
extern "C"  String_t* GameApplication_get_LOBBYSCENE_m2848367515 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_GAMESCENE()
extern "C"  String_t* GameApplication_get_GAMESCENE_m3386758135 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_COIN()
extern "C"  String_t* GameApplication_get_COIN_m436103748 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_admin_account()
extern "C"  String_t* GameApplication_get_admin_account_m1586423414 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_referrer()
extern "C"  String_t* GameApplication_get_referrer_m971586722 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameApplication::get_operatorID()
extern "C"  int32_t GameApplication_get_operatorID_m4104244737 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_gameName()
extern "C"  String_t* GameApplication_get_gameName_m429985844 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// User GameApplication::get_user()
extern "C"  User_t719925459 * GameApplication_get_user_m2176602021 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameApplication::set_user(User)
extern "C"  void GameApplication_set_user_m1441494480 (Il2CppObject * __this /* static, unused */, User_t719925459 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Resource GameApplication::get_resource()
extern "C"  Resource_t1323496244 * GameApplication_get_resource_m2091763589 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Game GameApplication::get_game()
extern "C"  Game_t1600141214 * GameApplication_get_game_m310160389 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameApplication::set_game(Game)
extern "C"  void GameApplication_set_game_m2252470058 (Il2CppObject * __this /* static, unused */, Game_t1600141214 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CubeiaClient GameApplication::get_cubeia()
extern "C"  CubeiaClient_t2232589536 * GameApplication_get_cubeia_m1520786160 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameApplication::set_cubeia(CubeiaClient)
extern "C"  void GameApplication_set_cubeia_m2283012059 (Il2CppObject * __this /* static, unused */, CubeiaClient_t2232589536 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameScene GameApplication::get_gameScene()
extern "C"  GameScene_t1466645730 * GameApplication_get_gameScene_m715808777 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameApplication::set_gameScene(GameScene)
extern "C"  void GameApplication_set_gameScene_m3062465642 (Il2CppObject * __this /* static, unused */, GameScene_t1466645730 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameApplication::get_IsInitialized()
extern "C"  bool GameApplication_get_IsInitialized_m1802258980 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameApplication::OnApplicationQuit()
extern "C"  void GameApplication_OnApplicationQuit_m765586933 (GameApplication_t4152476660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::getUniqueIdentifier()
extern "C"  String_t* GameApplication_getUniqueIdentifier_m223905462 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameApplication::get_iOSVersion()
extern "C"  float GameApplication_get_iOSVersion_m356432027 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_getOSDevice()
extern "C"  String_t* GameApplication_get_getOSDevice_m3282514457 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_url_xoso()
extern "C"  String_t* GameApplication_get_url_xoso_m1270900480 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_url_ketqua_xoso()
extern "C"  String_t* GameApplication_get_url_ketqua_xoso_m1871555354 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_url_topcaothu_xoso()
extern "C"  String_t* GameApplication_get_url_topcaothu_xoso_m26067784 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_url_payment_card()
extern "C"  String_t* GameApplication_get_url_payment_card_m3777523394 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_url_config()
extern "C"  String_t* GameApplication_get_url_config_m1446367417 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_url_news()
extern "C"  String_t* GameApplication_get_url_news_m4183755888 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_url_exp()
extern "C"  String_t* GameApplication_get_url_exp_m3481371156 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::url_caothu(System.Int32)
extern "C"  String_t* GameApplication_url_caothu_m1871294827 (Il2CppObject * __this /* static, unused */, int32_t ___gameid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_url_cashout_thecao()
extern "C"  String_t* GameApplication_get_url_cashout_thecao_m1438828631 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_url_cashout_vatpham()
extern "C"  String_t* GameApplication_get_url_cashout_vatpham_m4067291696 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_url_link_bongda()
extern "C"  String_t* GameApplication_get_url_link_bongda_m1747482881 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_url_link_bongda_history()
extern "C"  String_t* GameApplication_get_url_link_bongda_history_m2705347418 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_url_caothu_ngay(System.Int32)
extern "C"  String_t* GameApplication_get_url_caothu_ngay_m3407803166 (Il2CppObject * __this /* static, unused */, int32_t ___gameid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_url_caothu_tuan(System.Int32)
extern "C"  String_t* GameApplication_get_url_caothu_tuan_m3029231911 (Il2CppObject * __this /* static, unused */, int32_t ___gameid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_url_caothu_thang(System.Int32)
extern "C"  String_t* GameApplication_get_url_caothu_thang_m3258824577 (Il2CppObject * __this /* static, unused */, int32_t ___gameid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_url_caothu_homqua(System.Int32)
extern "C"  String_t* GameApplication_get_url_caothu_homqua_m2744726902 (Il2CppObject * __this /* static, unused */, int32_t ___gameid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameApplication::get_url_caothu_giaithuong(System.Int32)
extern "C"  String_t* GameApplication_get_url_caothu_giaithuong_m3036232938 (Il2CppObject * __this /* static, unused */, int32_t ___gameid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameApplication::.cctor()
extern "C"  void GameApplication__cctor_m3994506658 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
