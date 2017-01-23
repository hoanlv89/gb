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

// GameCenterManager
struct GameCenterManager_t1487113918;
// System.Action`1<ISN_Result>
struct Action_1_t2577430992;
// System.Action`1<GK_PlayerScoreLoadedResult>
struct Action_1_t2058747862;
// System.Action`1<GK_AchievementProgressResult>
struct Action_1_t3341373734;
// System.Action
struct Action_t3226471752;
// System.Action`1<GK_UserInfoLoadResult>
struct Action_1_t979640615;
// System.Action`1<GK_PlayerSignatureResult>
struct Action_1_t4110536157;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// GK_Leaderboard
struct GK_Leaderboard_t156446466;
// GK_Player
struct GK_Player_t2782008294;
// System.Collections.Generic.List`1<GK_AchievementTemplate>
struct List_1_t1665273372;
// System.Collections.Generic.Dictionary`2<System.String,GK_Player>
struct Dictionary_2_t401820260;
// System.Collections.Generic.List`1<GK_LeaderboardSet>
struct List_1_t3669402526;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// GK_AchievementTemplate
struct GK_AchievementTemplate_t2296152240;
// System.Collections.Generic.List`1<GK_TBM_Participant>
struct List_1_t3173076222;
// GK_TBM_Participant
struct GK_TBM_Participant_t3803955090;
// ISN_Result
struct ISN_Result_t2775631610;
// GK_PlayerScoreLoadedResult
struct GK_PlayerScoreLoadedResult_t2256948480;
// GK_AchievementProgressResult
struct GK_AchievementProgressResult_t3539574352;
// GK_UserInfoLoadResult
struct GK_UserInfoLoadResult_t1177841233;
// GK_PlayerSignatureResult
struct GK_PlayerSignatureResult_t13769479;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3226471752.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GK_TimeSpan1050271570.h"
#include "AssemblyU2DCSharp_GK_PhotoSize3124681388.h"
#include "AssemblyU2DCSharp_GK_CollectionType3353981271.h"
#include "AssemblyU2DCSharp_GK_AchievementTemplate2296152240.h"
#include "AssemblyU2DCSharp_ISN_Result2775631610.h"
#include "AssemblyU2DCSharp_GK_PlayerScoreLoadedResult2256948480.h"
#include "AssemblyU2DCSharp_GK_AchievementProgressResult3539574352.h"
#include "AssemblyU2DCSharp_GK_UserInfoLoadResult1177841233.h"
#include "AssemblyU2DCSharp_GK_PlayerSignatureResult13769479.h"

// System.Void GameCenterManager::.ctor()
extern "C"  void GameCenterManager__ctor_m2946227213 (GameCenterManager_t1487113918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnAuthFinished(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_add_OnAuthFinished_m527961674 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnAuthFinished(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_remove_OnAuthFinished_m1421355811 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnScoreSubmitted(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_add_OnScoreSubmitted_m680478127 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnScoreSubmitted(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_remove_OnScoreSubmitted_m2744908480 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnPlayerScoreLoaded(System.Action`1<GK_PlayerScoreLoadedResult>)
extern "C"  void GameCenterManager_add_OnPlayerScoreLoaded_m354325542 (Il2CppObject * __this /* static, unused */, Action_1_t2058747862 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnPlayerScoreLoaded(System.Action`1<GK_PlayerScoreLoadedResult>)
extern "C"  void GameCenterManager_remove_OnPlayerScoreLoaded_m812992889 (Il2CppObject * __this /* static, unused */, Action_1_t2058747862 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnScoresListLoaded(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_add_OnScoresListLoaded_m785985488 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnScoresListLoaded(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_remove_OnScoresListLoaded_m2697959883 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnAchievementsReset(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_add_OnAchievementsReset_m1672894183 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnAchievementsReset(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_remove_OnAchievementsReset_m2668323176 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnAchievementsLoaded(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_add_OnAchievementsLoaded_m1444945401 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnAchievementsLoaded(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_remove_OnAchievementsLoaded_m559191970 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnAchievementsProgress(System.Action`1<GK_AchievementProgressResult>)
extern "C"  void GameCenterManager_add_OnAchievementsProgress_m4125460149 (Il2CppObject * __this /* static, unused */, Action_1_t3341373734 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnAchievementsProgress(System.Action`1<GK_AchievementProgressResult>)
extern "C"  void GameCenterManager_remove_OnAchievementsProgress_m253146482 (Il2CppObject * __this /* static, unused */, Action_1_t3341373734 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnLeaderboardSetsInfoLoaded(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_add_OnLeaderboardSetsInfoLoaded_m3466716791 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnLeaderboardSetsInfoLoaded(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_remove_OnLeaderboardSetsInfoLoaded_m3723106236 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnGameCenterViewDismissed(System.Action)
extern "C"  void GameCenterManager_add_OnGameCenterViewDismissed_m1280273832 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnGameCenterViewDismissed(System.Action)
extern "C"  void GameCenterManager_remove_OnGameCenterViewDismissed_m1615914455 (Il2CppObject * __this /* static, unused */, Action_t3226471752 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnFriendsListLoaded(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_add_OnFriendsListLoaded_m3993887864 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnFriendsListLoaded(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_remove_OnFriendsListLoaded_m2344423149 (Il2CppObject * __this /* static, unused */, Action_1_t2577430992 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnUserInfoLoaded(System.Action`1<GK_UserInfoLoadResult>)
extern "C"  void GameCenterManager_add_OnUserInfoLoaded_m1974057087 (Il2CppObject * __this /* static, unused */, Action_1_t979640615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnUserInfoLoaded(System.Action`1<GK_UserInfoLoadResult>)
extern "C"  void GameCenterManager_remove_OnUserInfoLoaded_m3283617144 (Il2CppObject * __this /* static, unused */, Action_1_t979640615 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnPlayerSignatureRetrieveResult(System.Action`1<GK_PlayerSignatureResult>)
extern "C"  void GameCenterManager_add_OnPlayerSignatureRetrieveResult_m3329344817 (Il2CppObject * __this /* static, unused */, Action_1_t4110536157 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnPlayerSignatureRetrieveResult(System.Action`1<GK_PlayerSignatureResult>)
extern "C"  void GameCenterManager_remove_OnPlayerSignatureRetrieveResult_m2326181062 (Il2CppObject * __this /* static, unused */, Action_1_t4110536157 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_initGameCenter()
extern "C"  void GameCenterManager__initGameCenter_m1247060885 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_showLeaderboard(System.String,System.Int32)
extern "C"  void GameCenterManager__showLeaderboard_m2979150087 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId0, int32_t ___timeSpan1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_reportScore(System.String,System.String)
extern "C"  void GameCenterManager__reportScore_m1196813156 (Il2CppObject * __this /* static, unused */, String_t* ___score0, String_t* ___leaderboardId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_showLeaderboards()
extern "C"  void GameCenterManager__showLeaderboards_m2111138015 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_getLeaderboardScore(System.String,System.Int32,System.Int32)
extern "C"  void GameCenterManager__getLeaderboardScore_m4221719907 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId0, int32_t ___timeSpan1, int32_t ___collection2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_loadLeaderboardScore(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void GameCenterManager__loadLeaderboardScore_m463235615 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId0, int32_t ___timeSpan1, int32_t ___collection2, int32_t ___from3, int32_t ___to4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_showAchievements()
extern "C"  void GameCenterManager__showAchievements_m875741209 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_resetAchievements()
extern "C"  void GameCenterManager__resetAchievements_m4087587971 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_submitAchievement(System.Single,System.String,System.Boolean)
extern "C"  void GameCenterManager__submitAchievement_m482953281 (Il2CppObject * __this /* static, unused */, float ___percent0, String_t* ___achievementId1, bool ___isCompleteNotification2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_issueLeaderboardChallenge(System.String,System.String,System.String)
extern "C"  void GameCenterManager__ISN_issueLeaderboardChallenge_m2138407674 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId0, String_t* ___message1, String_t* ___playerIds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_issueLeaderboardChallengeWithFriendsPicker(System.String,System.String)
extern "C"  void GameCenterManager__ISN_issueLeaderboardChallengeWithFriendsPicker_m2276114451 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_issueAchievementChallenge(System.String,System.String,System.String)
extern "C"  void GameCenterManager__ISN_issueAchievementChallenge_m3982419538 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId0, String_t* ___message1, String_t* ___playerIds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_issueAchievementChallengeWithFriendsPicker(System.String,System.String)
extern "C"  void GameCenterManager__ISN_issueAchievementChallengeWithFriendsPicker_m786170617 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_RetrieveFriends()
extern "C"  void GameCenterManager__ISN_RetrieveFriends_m1447658910 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_loadGKPlayerData(System.String)
extern "C"  void GameCenterManager__ISN_loadGKPlayerData_m3179534206 (Il2CppObject * __this /* static, unused */, String_t* ___playerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_loadGKPlayerPhoto(System.String,System.Int32)
extern "C"  void GameCenterManager__ISN_loadGKPlayerPhoto_m1267506555 (Il2CppObject * __this /* static, unused */, String_t* ___playerId0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_getSignature()
extern "C"  void GameCenterManager__ISN_getSignature_m245777591 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_loadLeaderboardSetInfo()
extern "C"  void GameCenterManager__ISN_loadLeaderboardSetInfo_m1827442258 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_loadLeaderboardsForSet(System.String)
extern "C"  void GameCenterManager__ISN_loadLeaderboardsForSet_m251291800 (Il2CppObject * __this /* static, unused */, String_t* ___setId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::Awake()
extern "C"  void GameCenterManager_Awake_m47060334 (GameCenterManager_t1487113918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::init()
extern "C"  void GameCenterManager_init_m86412027 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::Init()
extern "C"  void GameCenterManager_Init_m3232256219 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::RetrievePlayerSignature()
extern "C"  void GameCenterManager_RetrievePlayerSignature_m281574584 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::RegisterAchievement(System.String)
extern "C"  void GameCenterManager_RegisterAchievement_m570659241 (Il2CppObject * __this /* static, unused */, String_t* ___achievementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ShowLeaderboard(System.String)
extern "C"  void GameCenterManager_ShowLeaderboard_m3433119949 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ShowLeaderboard(System.String,GK_TimeSpan)
extern "C"  void GameCenterManager_ShowLeaderboard_m2750607483 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId0, int32_t ___timeSpan1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ShowLeaderboards()
extern "C"  void GameCenterManager_ShowLeaderboards_m1850697572 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ReportScore(System.Int64,System.String)
extern "C"  void GameCenterManager_ReportScore_m3008089191 (Il2CppObject * __this /* static, unused */, int64_t ___score0, String_t* ___leaderboardId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ReportScore(System.Double,System.String)
extern "C"  void GameCenterManager_ReportScore_m2115373823 (Il2CppObject * __this /* static, unused */, double ___score0, String_t* ___leaderboardId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::RetrieveFriends()
extern "C"  void GameCenterManager_RetrieveFriends_m3860154304 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::LoadUsersData(System.String[])
extern "C"  void GameCenterManager_LoadUsersData_m1506588925 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___UIDs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::LoadGKPlayerInfo(System.String)
extern "C"  void GameCenterManager_LoadGKPlayerInfo_m3379080524 (Il2CppObject * __this /* static, unused */, String_t* ___playerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::LoadGKPlayerPhoto(System.String,GK_PhotoSize)
extern "C"  void GameCenterManager_LoadGKPlayerPhoto_m1842588232 (Il2CppObject * __this /* static, unused */, String_t* ___playerId0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::LoadCurrentPlayerScore(System.String,GK_TimeSpan,GK_CollectionType)
extern "C"  void GameCenterManager_LoadCurrentPlayerScore_m364109288 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId0, int32_t ___timeSpan1, int32_t ___collection2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameCenterManager::LoadCurrentPlayerScoreLocal(System.String,GK_TimeSpan,GK_CollectionType)
extern "C"  Il2CppObject * GameCenterManager_LoadCurrentPlayerScoreLocal_m2904685659 (GameCenterManager_t1487113918 * __this, String_t* ___leaderboardId0, int32_t ___timeSpan1, int32_t ___collection2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::LoadScore(System.String,System.Int32,System.Int32,GK_TimeSpan,GK_CollectionType)
extern "C"  void GameCenterManager_LoadScore_m2911074458 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId0, int32_t ___from1, int32_t ___to2, int32_t ___timeSpan3, int32_t ___collection4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::IssueLeaderboardChallenge(System.String,System.String,System.String)
extern "C"  void GameCenterManager_IssueLeaderboardChallenge_m1418302308 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId0, String_t* ___message1, String_t* ___playerId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::IssueLeaderboardChallenge(System.String,System.String,System.String[])
extern "C"  void GameCenterManager_IssueLeaderboardChallenge_m1649662212 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId0, String_t* ___message1, StringU5BU5D_t1642385972* ___playerIds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::IssueLeaderboardChallenge(System.String,System.String)
extern "C"  void GameCenterManager_IssueLeaderboardChallenge_m1089656728 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::IssueAchievementChallenge(System.String,System.String,System.String)
extern "C"  void GameCenterManager_IssueAchievementChallenge_m4037176388 (Il2CppObject * __this /* static, unused */, String_t* ___achievementId0, String_t* ___message1, String_t* ___playerId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::LoadLeaderboardSetInfo()
extern "C"  void GameCenterManager_LoadLeaderboardSetInfo_m3146970508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::LoadLeaderboardsForSet(System.String)
extern "C"  void GameCenterManager_LoadLeaderboardsForSet_m2910313566 (Il2CppObject * __this /* static, unused */, String_t* ___setId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::IssueAchievementChallenge(System.String,System.String,System.String[])
extern "C"  void GameCenterManager_IssueAchievementChallenge_m465917788 (Il2CppObject * __this /* static, unused */, String_t* ___achievementId0, String_t* ___message1, StringU5BU5D_t1642385972* ___playerIds2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::IssueAchievementChallenge(System.String,System.String)
extern "C"  void GameCenterManager_IssueAchievementChallenge_m3325546576 (Il2CppObject * __this /* static, unused */, String_t* ___achievementId0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ShowAchievements()
extern "C"  void GameCenterManager_ShowAchievements_m746424808 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ResetAchievements()
extern "C"  void GameCenterManager_ResetAchievements_m630773494 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::SubmitAchievement(System.Single,System.String)
extern "C"  void GameCenterManager_SubmitAchievement_m2686801025 (Il2CppObject * __this /* static, unused */, float ___percent0, String_t* ___achievementId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::SubmitAchievementNoCache(System.Single,System.String)
extern "C"  void GameCenterManager_SubmitAchievementNoCache_m2989792364 (Il2CppObject * __this /* static, unused */, float ___percent0, String_t* ___achievementId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::SubmitAchievement(System.Single,System.String,System.Boolean)
extern "C"  void GameCenterManager_SubmitAchievement_m2210034110 (Il2CppObject * __this /* static, unused */, float ___percent0, String_t* ___achievementId1, bool ___isCompleteNotification2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameCenterManager::GetAchievementProgress(System.String)
extern "C"  float GameCenterManager_GetAchievementProgress_m2945545741 (Il2CppObject * __this /* static, unused */, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_Leaderboard GameCenterManager::GetLeaderboard(System.String)
extern "C"  GK_Leaderboard_t156446466 * GameCenterManager_GetLeaderboard_m1008371901 (Il2CppObject * __this /* static, unused */, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_Player GameCenterManager::GetPlayerById(System.String)
extern "C"  GK_Player_t2782008294 * GameCenterManager_GetPlayerById_m3190959603 (Il2CppObject * __this /* static, unused */, String_t* ___playerID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GK_AchievementTemplate> GameCenterManager::get_Achievements()
extern "C"  List_1_t1665273372 * GameCenterManager_get_Achievements_m2381781581 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,GK_Player> GameCenterManager::get_Players()
extern "C"  Dictionary_2_t401820260 * GameCenterManager_get_Players_m3023241036 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_Player GameCenterManager::get_Player()
extern "C"  GK_Player_t2782008294 * GameCenterManager_get_Player_m3253772392 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameCenterManager::get_IsInitialized()
extern "C"  bool GameCenterManager_get_IsInitialized_m3640652066 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GK_LeaderboardSet> GameCenterManager::get_LeaderboardSets()
extern "C"  List_1_t3669402526 * GameCenterManager_get_LeaderboardSets_m556726861 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameCenterManager::get_IsPlayerAuthenticated()
extern "C"  bool GameCenterManager_get_IsPlayerAuthenticated_m68979484 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameCenterManager::get_IsAchievementsInfoLoaded()
extern "C"  bool GameCenterManager_get_IsAchievementsInfoLoaded_m1144036811 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> GameCenterManager::get_FriendsList()
extern "C"  List_1_t1398341365 * GameCenterManager_get_FriendsList_m1681753576 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onLeaderboardScoreFailed(System.String)
extern "C"  void GameCenterManager_onLeaderboardScoreFailed_m2883831316 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onLeaderboardScore(System.String)
extern "C"  void GameCenterManager_onLeaderboardScore_m153616251 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onScoreSubmittedEvent(System.String)
extern "C"  void GameCenterManager_onScoreSubmittedEvent_m4205300723 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onScoreSubmittedFailed(System.String)
extern "C"  void GameCenterManager_onScoreSubmittedFailed_m2376551680 (GameCenterManager_t1487113918 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onLeaderboardScoreListLoaded(System.String)
extern "C"  void GameCenterManager_onLeaderboardScoreListLoaded_m2685090164 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onLeaderboardScoreListLoadFailed(System.String)
extern "C"  void GameCenterManager_onLeaderboardScoreListLoadFailed_m1893240484 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onAchievementsReset(System.String)
extern "C"  void GameCenterManager_onAchievementsReset_m2191156907 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onAchievementsResetFailed(System.String)
extern "C"  void GameCenterManager_onAchievementsResetFailed_m2972356110 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onAchievementProgressChanged(System.String)
extern "C"  void GameCenterManager_onAchievementProgressChanged_m2943766714 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onAchievementsLoaded(System.String)
extern "C"  void GameCenterManager_onAchievementsLoaded_m3708075045 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onAchievementsLoadedFailed()
extern "C"  void GameCenterManager_onAchievementsLoadedFailed_m813559040 (GameCenterManager_t1487113918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onAuthenticateLocalPlayer(System.String)
extern "C"  void GameCenterManager_onAuthenticateLocalPlayer_m3362057093 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onAuthenticationFailed(System.String)
extern "C"  void GameCenterManager_onAuthenticationFailed_m3561575137 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnUserInfoLoadedEvent(System.String)
extern "C"  void GameCenterManager_OnUserInfoLoadedEvent_m680639734 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnUserInfoLoadFailedEvent(System.String)
extern "C"  void GameCenterManager_OnUserInfoLoadFailedEvent_m1338020386 (GameCenterManager_t1487113918 * __this, String_t* ___playerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnUserPhotoLoadedEvent(System.String)
extern "C"  void GameCenterManager_OnUserPhotoLoadedEvent_m3756925842 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnUserPhotoLoadFailedEvent(System.String)
extern "C"  void GameCenterManager_OnUserPhotoLoadFailedEvent_m3463482174 (GameCenterManager_t1487113918 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnFriendListLoadedEvent(System.String)
extern "C"  void GameCenterManager_OnFriendListLoadedEvent_m1484716057 (GameCenterManager_t1487113918 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnFriendListLoadFailEvent(System.String)
extern "C"  void GameCenterManager_OnFriendListLoadFailEvent_m1086561760 (GameCenterManager_t1487113918 * __this, String_t* ___errorData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnGameCenterViewDismissedEvent(System.String)
extern "C"  void GameCenterManager_OnGameCenterViewDismissedEvent_m3972048049 (GameCenterManager_t1487113918 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::VerificationSignatureRetrieveFailed(System.String)
extern "C"  void GameCenterManager_VerificationSignatureRetrieveFailed_m1783410407 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::VerificationSignatureRetrieved(System.String)
extern "C"  void GameCenterManager_VerificationSignatureRetrieved_m119669170 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::submitAchievement(GK_AchievementTemplate)
extern "C"  void GameCenterManager_submitAchievement_m3347955962 (GameCenterManager_t1487113918 * __this, GK_AchievementTemplate_t2296152240 * ___tpl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ResetStoredProgress()
extern "C"  void GameCenterManager_ResetStoredProgress_m1048458878 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::SaveAchievementProgress(System.String,System.Single)
extern "C"  void GameCenterManager_SaveAchievementProgress_m4104730749 (Il2CppObject * __this /* static, unused */, String_t* ___achievementId0, float ___progress1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameCenterManager::GetStoredAchievementProgress(System.String)
extern "C"  float GameCenterManager_GetStoredAchievementProgress_m1329550832 (Il2CppObject * __this /* static, unused */, String_t* ___achievementId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ISN_OnLBSetsLoaded(System.String)
extern "C"  void GameCenterManager_ISN_OnLBSetsLoaded_m1574162813 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ISN_OnLBSetsLoadFailed(System.String)
extern "C"  void GameCenterManager_ISN_OnLBSetsLoadFailed_m2505729983 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ISN_OnLBSetsBoardsLoadFailed(System.String)
extern "C"  void GameCenterManager_ISN_OnLBSetsBoardsLoadFailed_m3089482994 (GameCenterManager_t1487113918 * __this, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ISN_OnLBSetsBoardsLoaded(System.String)
extern "C"  void GameCenterManager_ISN_OnLBSetsBoardsLoaded_m2522552838 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnLeaderboardMaxRangeUpdate(System.String)
extern "C"  void GameCenterManager_OnLeaderboardMaxRangeUpdate_m887374421 (GameCenterManager_t1487113918 * __this, String_t* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GK_TBM_Participant> GameCenterManager::ParseParticipantsData(System.String[],System.Int32)
extern "C"  List_1_t3173076222 * GameCenterManager_ParseParticipantsData_m3758129298 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___data0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_TBM_Participant GameCenterManager::ParseParticipanData(System.String[],System.Int32)
extern "C"  GK_TBM_Participant_t3803955090 * GameCenterManager_ParseParticipanData_m3901552693 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1642385972* ___data0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::.cctor()
extern "C"  void GameCenterManager__cctor_m3976700248 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnAuthFinished>m__0(ISN_Result)
extern "C"  void GameCenterManager_U3COnAuthFinishedU3Em__0_m261342859 (Il2CppObject * __this /* static, unused */, ISN_Result_t2775631610 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnScoreSubmitted>m__1(ISN_Result)
extern "C"  void GameCenterManager_U3COnScoreSubmittedU3Em__1_m806263341 (Il2CppObject * __this /* static, unused */, ISN_Result_t2775631610 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnPlayerScoreLoaded>m__2(GK_PlayerScoreLoadedResult)
extern "C"  void GameCenterManager_U3COnPlayerScoreLoadedU3Em__2_m2269745491 (Il2CppObject * __this /* static, unused */, GK_PlayerScoreLoadedResult_t2256948480 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnScoresListLoaded>m__3(ISN_Result)
extern "C"  void GameCenterManager_U3COnScoresListLoadedU3Em__3_m4021208886 (Il2CppObject * __this /* static, unused */, ISN_Result_t2775631610 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnAchievementsReset>m__4(ISN_Result)
extern "C"  void GameCenterManager_U3COnAchievementsResetU3Em__4_m3522841950 (Il2CppObject * __this /* static, unused */, ISN_Result_t2775631610 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnAchievementsLoaded>m__5(ISN_Result)
extern "C"  void GameCenterManager_U3COnAchievementsLoadedU3Em__5_m1581972127 (Il2CppObject * __this /* static, unused */, ISN_Result_t2775631610 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnAchievementsProgress>m__6(GK_AchievementProgressResult)
extern "C"  void GameCenterManager_U3COnAchievementsProgressU3Em__6_m4256855284 (Il2CppObject * __this /* static, unused */, GK_AchievementProgressResult_t3539574352 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnLeaderboardSetsInfoLoaded>m__7(ISN_Result)
extern "C"  void GameCenterManager_U3COnLeaderboardSetsInfoLoadedU3Em__7_m286018655 (Il2CppObject * __this /* static, unused */, ISN_Result_t2775631610 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnGameCenterViewDismissed>m__8()
extern "C"  void GameCenterManager_U3COnGameCenterViewDismissedU3Em__8_m367996444 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnFriendsListLoaded>m__9(ISN_Result)
extern "C"  void GameCenterManager_U3COnFriendsListLoadedU3Em__9_m2674374240 (Il2CppObject * __this /* static, unused */, ISN_Result_t2775631610 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnUserInfoLoaded>m__A(GK_UserInfoLoadResult)
extern "C"  void GameCenterManager_U3COnUserInfoLoadedU3Em__A_m656695621 (Il2CppObject * __this /* static, unused */, GK_UserInfoLoadResult_t1177841233 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnPlayerSignatureRetrieveResult>m__B(GK_PlayerSignatureResult)
extern "C"  void GameCenterManager_U3COnPlayerSignatureRetrieveResultU3Em__B_m1374193648 (Il2CppObject * __this /* static, unused */, GK_PlayerSignatureResult_t13769479 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
