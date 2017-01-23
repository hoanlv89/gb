#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_IOSNativeAppEvents694411788.h"
#include "AssemblyU2DCSharp_IOSNativeSettings547170227.h"
#include "AssemblyU2DCSharp_IOSNativeUtility933355194.h"
#include "AssemblyU2DCSharp_ISN_CacheManager1215851066.h"
#include "AssemblyU2DCSharp_ISN_Error553253557.h"
#include "AssemblyU2DCSharp_IOSDateTimePickerMode3227591715.h"
#include "AssemblyU2DCSharp_IOSDialogResult3739241316.h"
#include "AssemblyU2DCSharp_IOSGravity1757344581.h"
#include "AssemblyU2DCSharp_IOSStoreResultCode365779630.h"
#include "AssemblyU2DCSharp_IOSTransactionErrorCode1822631322.h"
#include "AssemblyU2DCSharp_IOSUIUserNotificationType1946295863.h"
#include "AssemblyU2DCSharp_InAppPurchaseState3414001346.h"
#include "AssemblyU2DCSharp_iAdGravity3870427452.h"
#include "AssemblyU2DCSharp_GK_CollectionType3353981271.h"
#include "AssemblyU2DCSharp_GK_InviteRecipientResponse3438857802.h"
#include "AssemblyU2DCSharp_GK_MatchType1493351924.h"
#include "AssemblyU2DCSharp_GK_PhotoSize3124681388.h"
#include "AssemblyU2DCSharp_GK_TimeSpan1050271570.h"
#include "AssemblyU2DCSharp_GK_AchievementProgressResult3539574352.h"
#include "AssemblyU2DCSharp_GK_PlayerScoreLoadedResult2256948480.h"
#include "AssemblyU2DCSharp_GK_PlayerSignatureResult13769479.h"
#include "AssemblyU2DCSharp_GK_UserInfoLoadResult1177841233.h"
#include "AssemblyU2DCSharp_GK_UserPhotoLoadResult1614198031.h"
#include "AssemblyU2DCSharp_GK_AchievementTemplate2296152240.h"
#include "AssemblyU2DCSharp_GK_Invite22070530.h"
#include "AssemblyU2DCSharp_GK_LeaderBoardInfo3670215494.h"
#include "AssemblyU2DCSharp_GK_Leaderboard156446466.h"
#include "AssemblyU2DCSharp_GK_LeaderboardSet5314098.h"
#include "AssemblyU2DCSharp_GK_Player2782008294.h"
#include "AssemblyU2DCSharp_GK_Score1529008873.h"
#include "AssemblyU2DCSharp_GK_ScoreCollection4092547735.h"
#include "AssemblyU2DCSharp_GameCenterInvitations2643374653.h"
#include "AssemblyU2DCSharp_GameCenterManager1487113918.h"
#include "AssemblyU2DCSharp_GameCenterManager_U3CLoadCurrentP779388005.h"
#include "AssemblyU2DCSharp_GameCenter_RTM849630631.h"
#include "AssemblyU2DCSharp_GameCenter_TBM3457554475.h"
#include "AssemblyU2DCSharp_GK_MatchSendDataMode3659269993.h"
#include "AssemblyU2DCSharp_GK_PlayerConnectionState2434478783.h"
#include "AssemblyU2DCSharp_GK_RTM_MatchStartedResult833698690.h"
#include "AssemblyU2DCSharp_GK_RTM_QueryActivityResult2276098399.h"
#include "AssemblyU2DCSharp_GK_RTM_Match873568990.h"
#include "AssemblyU2DCSharp_GK_TurnBasedMatchOutcome2242380984.h"
#include "AssemblyU2DCSharp_GK_TurnBasedMatchStatus2382635170.h"
#include "AssemblyU2DCSharp_GK_TurnBasedParticipantStatus2126479626.h"
#include "AssemblyU2DCSharp_GK_TBM_EndTrunResult1517380690.h"
#include "AssemblyU2DCSharp_GK_TBM_LoadMatchResult1639249273.h"
#include "AssemblyU2DCSharp_GK_TBM_LoadMatchesResult370491735.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchDataUpdateResult1356006034.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchEndResult3461768810.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchInitResult3847830897.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchQuitResult1233820656.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchRemovedResult909126313.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchTurnResult3583658160.h"
#include "AssemblyU2DCSharp_GK_TBM_RematchResult3159773700.h"
#include "AssemblyU2DCSharp_GK_TBM_Match132033130.h"
#include "AssemblyU2DCSharp_GK_TBM_Participant3803955090.h"
#include "AssemblyU2DCSharp_IOSBillingInitChecker4166635083.h"
#include "AssemblyU2DCSharp_IOSBillingInitChecker_BillingIni4162012659.h"
#include "AssemblyU2DCSharp_IOSInAppPurchaseManager644626385.h"
#include "AssemblyU2DCSharp_IOSNativeMarketBridge1553898649.h"
#include "AssemblyU2DCSharp_IOSStoreProductView607200268.h"
#include "AssemblyU2DCSharp_IOSProductTemplate1036598382.h"
#include "AssemblyU2DCSharp_IOSStoreKitRestoreResult3305276155.h"
#include "AssemblyU2DCSharp_IOSStoreKitResult2359407583.h"
#include "AssemblyU2DCSharp_IOSStoreKitVerificationResponse4263658582.h"
#include "AssemblyU2DCSharp_DeviceTokenListener3000307467.h"
#include "AssemblyU2DCSharp_ISN_NotificationType2960395864.h"
#include "AssemblyU2DCSharp_IOSNotificationController796362558.h"
#include "AssemblyU2DCSharp_IOSNotificationDeviceToken2562424645.h"
#include "AssemblyU2DCSharp_ISN_LocalNotification273186689.h"
#include "AssemblyU2DCSharp_IOSCamera2845108690.h"
#include "AssemblyU2DCSharp_IOSCamera_U3CSaveScreenshotU3Ec__106016999.h"
#include "AssemblyU2DCSharp_IOSGalleryLoadImageFormat518894765.h"
#include "AssemblyU2DCSharp_IOSImagePickResult1671334394.h"
#include "AssemblyU2DCSharp_ISN_MediaController1853840745.h"
#include "AssemblyU2DCSharp_MP_MusicPlaybackState2364713801.h"
#include "AssemblyU2DCSharp_MP_MusicRepeatMode445284825.h"
#include "AssemblyU2DCSharp_MP_MusicShuffleMode2068355741.h"
#include "AssemblyU2DCSharp_MP_MediaItem4025623029.h"
#include "AssemblyU2DCSharp_MP_MediaPickerResult2204006871.h"
#include "AssemblyU2DCSharp_IOSDateTimePicker849222074.h"
#include "AssemblyU2DCSharp_IOSSharedApplication4065685598.h"
#include "AssemblyU2DCSharp_ISN_CheckUrlResult1645724501.h"
#include "AssemblyU2DCSharp_ISN_Security2700938347.h"
#include "AssemblyU2DCSharp_IOSVideoManager3003649481.h"
#include "AssemblyU2DCSharp_IOSDialog3518705031.h"
#include "AssemblyU2DCSharp_IOSMessage2569463336.h"
#include "AssemblyU2DCSharp_IOSRateUsPopUp2222998473.h"
#include "AssemblyU2DCSharp_BaseIOSPopup3320937364.h"
#include "AssemblyU2DCSharp_IOSNativePopUpManager3689761895.h"
#include "AssemblyU2DCSharp_IOSSocialManager2957403963.h"
#include "AssemblyU2DCSharp_ISN_Result2775631610.h"
#include "AssemblyU2DCSharp_ISN_DeviceGUID1787531836.h"
#include "AssemblyU2DCSharp_ISN_LoadSetLeaderboardsInfoResul3997789804.h"
#include "AssemblyU2DCSharp_ISN_LocalReceiptResult3746327569.h"
#include "AssemblyU2DCSharp_iAdBanner2205758560.h"
#include "AssemblyU2DCSharp_iAdBannerController2502498128.h"
#include "AssemblyU2DCSharp_iAdEvent3810634698.h"
#include "AssemblyU2DCSharp_iAdIOSBanner1295524391.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3400 = { sizeof (IOSNativeAppEvents_t694411788), -1, sizeof(IOSNativeAppEvents_t694411788_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3400[5] = 
{
	IOSNativeAppEvents_t694411788_StaticFields::get_offset_of_OnApplicationDidEnterBackground_4(),
	IOSNativeAppEvents_t694411788_StaticFields::get_offset_of_OnApplicationDidBecomeActive_5(),
	IOSNativeAppEvents_t694411788_StaticFields::get_offset_of_OnApplicationDidReceiveMemoryWarning_6(),
	IOSNativeAppEvents_t694411788_StaticFields::get_offset_of_OnApplicationWillResignActive_7(),
	IOSNativeAppEvents_t694411788_StaticFields::get_offset_of_OnApplicationWillTerminate_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3401 = { sizeof (IOSNativeSettings_t547170227), -1, sizeof(IOSNativeSettings_t547170227_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3401[27] = 
{
	0,
	IOSNativeSettings_t547170227::get_offset_of_AppleId_3(),
	IOSNativeSettings_t547170227::get_offset_of_InAppProducts_4(),
	IOSNativeSettings_t547170227::get_offset_of_SendFakeEventsInEditor_5(),
	IOSNativeSettings_t547170227::get_offset_of_RegisteredAchievementsIds_6(),
	IOSNativeSettings_t547170227::get_offset_of_DefaultStoreProductsView_7(),
	IOSNativeSettings_t547170227::get_offset_of_checkInternetBeforeLoadRequest_8(),
	IOSNativeSettings_t547170227::get_offset_of_ShowStoreKitParams_9(),
	IOSNativeSettings_t547170227::get_offset_of_ShowGCParams_10(),
	IOSNativeSettings_t547170227::get_offset_of_ShowAchievementsParams_11(),
	IOSNativeSettings_t547170227::get_offset_of_ShowUsersParams_12(),
	IOSNativeSettings_t547170227::get_offset_of_ShowOtherParams_13(),
	IOSNativeSettings_t547170227::get_offset_of_ShowCameraAndGalleryParams_14(),
	IOSNativeSettings_t547170227::get_offset_of_UseOneSignal_15(),
	IOSNativeSettings_t547170227::get_offset_of_DisablePluginLogs_16(),
	IOSNativeSettings_t547170227::get_offset_of_UseGCRequestCaching_17(),
	IOSNativeSettings_t547170227::get_offset_of_UsePPForAchievements_18(),
	IOSNativeSettings_t547170227::get_offset_of_EnablePushNotificationsAPI_19(),
	IOSNativeSettings_t547170227::get_offset_of_AutoLoadUsersSmallImages_20(),
	IOSNativeSettings_t547170227::get_offset_of_AutoLoadUsersBigImages_21(),
	IOSNativeSettings_t547170227::get_offset_of_MaxImageLoadSize_22(),
	IOSNativeSettings_t547170227::get_offset_of_JPegCompressionRate_23(),
	IOSNativeSettings_t547170227::get_offset_of_GalleryImageFormat_24(),
	0,
	0,
	0,
	IOSNativeSettings_t547170227_StaticFields::get_offset_of_instance_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3402 = { sizeof (IOSNativeUtility_t933355194), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3403 = { sizeof (ISN_CacheManager_t1215851066), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3403[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3404 = { sizeof (ISN_Error_t553253557), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3404[2] = 
{
	ISN_Error_t553253557::get_offset_of__Code_0(),
	ISN_Error_t553253557::get_offset_of__Description_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3405 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3405[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3406 = { sizeof (IOSDateTimePickerMode_t3227591715)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3406[5] = 
{
	IOSDateTimePickerMode_t3227591715::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3407 = { sizeof (IOSDialogResult_t3739241316)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3407[6] = 
{
	IOSDialogResult_t3739241316::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3408 = { sizeof (IOSGravity_t1757344581), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3408[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3409 = { sizeof (IOSStoreResultCode_t365779630), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3409[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3410 = { sizeof (IOSTransactionErrorCode_t1822631322)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3410[10] = 
{
	IOSTransactionErrorCode_t1822631322::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3411 = { sizeof (IOSUIUserNotificationType_t1946295863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3411[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3412 = { sizeof (InAppPurchaseState_t3414001346)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3412[5] = 
{
	InAppPurchaseState_t3414001346::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3413 = { sizeof (iAdGravity_t3870427452)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3413[3] = 
{
	iAdGravity_t3870427452::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3414 = { sizeof (GK_CollectionType_t3353981271)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3414[3] = 
{
	GK_CollectionType_t3353981271::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3415 = { sizeof (GK_InviteRecipientResponse_t3438857802)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3415[7] = 
{
	GK_InviteRecipientResponse_t3438857802::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3416 = { sizeof (GK_MatchType_t1493351924)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3416[3] = 
{
	GK_MatchType_t1493351924::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3417 = { sizeof (GK_PhotoSize_t3124681388)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3417[3] = 
{
	GK_PhotoSize_t3124681388::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3418 = { sizeof (GK_TimeSpan_t1050271570)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3418[4] = 
{
	GK_TimeSpan_t1050271570::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3419 = { sizeof (GK_AchievementProgressResult_t3539574352), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3419[1] = 
{
	GK_AchievementProgressResult_t3539574352::get_offset_of__tpl_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3420 = { sizeof (GK_PlayerScoreLoadedResult_t2256948480), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3420[1] = 
{
	GK_PlayerScoreLoadedResult_t2256948480::get_offset_of__score_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3421 = { sizeof (GK_PlayerSignatureResult_t13769479), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3421[4] = 
{
	GK_PlayerSignatureResult_t13769479::get_offset_of__PublicKeyUrl_2(),
	GK_PlayerSignatureResult_t13769479::get_offset_of__Signature_3(),
	GK_PlayerSignatureResult_t13769479::get_offset_of__Salt_4(),
	GK_PlayerSignatureResult_t13769479::get_offset_of__Timestamp_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3422 = { sizeof (GK_UserInfoLoadResult_t1177841233), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3422[2] = 
{
	GK_UserInfoLoadResult_t1177841233::get_offset_of__playerId_2(),
	GK_UserInfoLoadResult_t1177841233::get_offset_of__tpl_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3423 = { sizeof (GK_UserPhotoLoadResult_t1614198031), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3423[2] = 
{
	GK_UserPhotoLoadResult_t1614198031::get_offset_of__Photo_2(),
	GK_UserPhotoLoadResult_t1614198031::get_offset_of__Size_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3424 = { sizeof (GK_AchievementTemplate_t2296152240), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3424[3] = 
{
	GK_AchievementTemplate_t2296152240::get_offset_of_Id_0(),
	GK_AchievementTemplate_t2296152240::get_offset_of_Description_1(),
	GK_AchievementTemplate_t2296152240::get_offset_of__progress_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3425 = { sizeof (GK_Invite_t22070530), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3425[4] = 
{
	GK_Invite_t22070530::get_offset_of__Id_0(),
	GK_Invite_t22070530::get_offset_of__Sender_1(),
	GK_Invite_t22070530::get_offset_of__PlayerGroup_2(),
	GK_Invite_t22070530::get_offset_of__PlayerAttributes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3426 = { sizeof (GK_LeaderBoardInfo_t3670215494), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3426[4] = 
{
	GK_LeaderBoardInfo_t3670215494::get_offset_of_Title_0(),
	GK_LeaderBoardInfo_t3670215494::get_offset_of_Description_1(),
	GK_LeaderBoardInfo_t3670215494::get_offset_of_Identifier_2(),
	GK_LeaderBoardInfo_t3670215494::get_offset_of_MaxRange_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3427 = { sizeof (GK_Leaderboard_t156446466), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3427[4] = 
{
	GK_Leaderboard_t156446466::get_offset_of_SocsialCollection_0(),
	GK_Leaderboard_t156446466::get_offset_of_GlobalCollection_1(),
	GK_Leaderboard_t156446466::get_offset_of_currentPlayerRank_2(),
	GK_Leaderboard_t156446466::get_offset_of__info_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3428 = { sizeof (GK_LeaderboardSet_t5314098), -1, sizeof(GK_LeaderboardSet_t5314098_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3428[6] = 
{
	GK_LeaderboardSet_t5314098::get_offset_of_Title_0(),
	GK_LeaderboardSet_t5314098::get_offset_of_Identifier_1(),
	GK_LeaderboardSet_t5314098::get_offset_of_GroupIdentifier_2(),
	GK_LeaderboardSet_t5314098::get_offset_of__BoardsInfo_3(),
	GK_LeaderboardSet_t5314098::get_offset_of_OnLoaderboardsInfoLoaded_4(),
	GK_LeaderboardSet_t5314098_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3429 = { sizeof (GK_Player_t2782008294), -1, sizeof(GK_Player_t2782008294_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3429[7] = 
{
	GK_Player_t2782008294::get_offset_of__PlayerId_0(),
	GK_Player_t2782008294::get_offset_of__DisplayName_1(),
	GK_Player_t2782008294::get_offset_of__Alias_2(),
	GK_Player_t2782008294::get_offset_of__SmallPhoto_3(),
	GK_Player_t2782008294::get_offset_of__BigPhoto_4(),
	GK_Player_t2782008294::get_offset_of_OnPlayerPhotoLoaded_5(),
	GK_Player_t2782008294_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3430 = { sizeof (GK_Score_t1529008873), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3430[6] = 
{
	GK_Score_t1529008873::get_offset_of__rank_0(),
	GK_Score_t1529008873::get_offset_of__score_1(),
	GK_Score_t1529008873::get_offset_of__playerId_2(),
	GK_Score_t1529008873::get_offset_of__leaderboardId_3(),
	GK_Score_t1529008873::get_offset_of__collection_4(),
	GK_Score_t1529008873::get_offset_of__timeSpan_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3431 = { sizeof (GK_ScoreCollection_t4092547735), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3431[3] = 
{
	GK_ScoreCollection_t4092547735::get_offset_of_AllTimeScores_0(),
	GK_ScoreCollection_t4092547735::get_offset_of_WeekScores_1(),
	GK_ScoreCollection_t4092547735::get_offset_of_TodayScores_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3432 = { sizeof (GameCenterInvitations_t2643374653), -1, sizeof(GameCenterInvitations_t2643374653_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3432[3] = 
{
	GameCenterInvitations_t2643374653_StaticFields::get_offset_of_ActionInviteeResponse_4(),
	GameCenterInvitations_t2643374653_StaticFields::get_offset_of_ActionPlayerAcceptedInvitation_5(),
	GameCenterInvitations_t2643374653_StaticFields::get_offset_of_ActionPlayerRequestedMatchWithRecipients_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3433 = { sizeof (GameCenterManager_t1487113918), -1, sizeof(GameCenterManager_t1487113918_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3433[22] = 
{
	GameCenterManager_t1487113918_StaticFields::get_offset_of_OnAuthFinished_2(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of_OnScoreSubmitted_3(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of_OnPlayerScoreLoaded_4(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of_OnScoresListLoaded_5(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of_OnAchievementsReset_6(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of_OnAchievementsLoaded_7(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of_OnAchievementsProgress_8(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of_OnLeaderboardSetsInfoLoaded_9(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of_OnGameCenterViewDismissed_10(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of_OnFriendsListLoaded_11(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of_OnUserInfoLoaded_12(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of_OnPlayerSignatureRetrieveResult_13(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of__IsInitialized_14(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of__IsPlayerAuthenticated_15(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of__IsAchievementsInfoLoaded_16(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of__achievements_17(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of__leaderboards_18(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of__players_19(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of__friendsList_20(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of__LeaderboardSets_21(),
	GameCenterManager_t1487113918_StaticFields::get_offset_of__player_22(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3434 = { sizeof (U3CLoadCurrentPlayerScoreLocalU3Ec__Iterator0_t779388005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3434[6] = 
{
	U3CLoadCurrentPlayerScoreLocalU3Ec__Iterator0_t779388005::get_offset_of_leaderboardId_0(),
	U3CLoadCurrentPlayerScoreLocalU3Ec__Iterator0_t779388005::get_offset_of_timeSpan_1(),
	U3CLoadCurrentPlayerScoreLocalU3Ec__Iterator0_t779388005::get_offset_of_collection_2(),
	U3CLoadCurrentPlayerScoreLocalU3Ec__Iterator0_t779388005::get_offset_of_U24current_3(),
	U3CLoadCurrentPlayerScoreLocalU3Ec__Iterator0_t779388005::get_offset_of_U24disposing_4(),
	U3CLoadCurrentPlayerScoreLocalU3Ec__Iterator0_t779388005::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3435 = { sizeof (GameCenter_RTM_t849630631), -1, sizeof(GameCenter_RTM_t849630631_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3435[10] = 
{
	GameCenter_RTM_t849630631::get_offset_of__CurrentMatch_4(),
	GameCenter_RTM_t849630631::get_offset_of__NearbyPlayers_5(),
	GameCenter_RTM_t849630631_StaticFields::get_offset_of_ActionMatchStarted_6(),
	GameCenter_RTM_t849630631_StaticFields::get_offset_of_ActionMatchFailed_7(),
	GameCenter_RTM_t849630631_StaticFields::get_offset_of_ActionNearbyPlayerStateUpdated_8(),
	GameCenter_RTM_t849630631_StaticFields::get_offset_of_ActionActivityResultReceived_9(),
	GameCenter_RTM_t849630631_StaticFields::get_offset_of_ActionDataSendError_10(),
	GameCenter_RTM_t849630631_StaticFields::get_offset_of_ActionDataReceived_11(),
	GameCenter_RTM_t849630631_StaticFields::get_offset_of_ActionPlayerStateChanged_12(),
	GameCenter_RTM_t849630631_StaticFields::get_offset_of_ActionDiconnectedPlayerReinvited_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3436 = { sizeof (GameCenter_TBM_t3457554475), -1, sizeof(GameCenter_TBM_t3457554475_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3436[12] = 
{
	GameCenter_TBM_t3457554475_StaticFields::get_offset_of_ActionMatchInfoLoaded_4(),
	GameCenter_TBM_t3457554475_StaticFields::get_offset_of_ActionMatchesInfoLoaded_5(),
	GameCenter_TBM_t3457554475_StaticFields::get_offset_of_ActionMatchDataUpdated_6(),
	GameCenter_TBM_t3457554475_StaticFields::get_offset_of_ActionMatchFound_7(),
	GameCenter_TBM_t3457554475_StaticFields::get_offset_of_ActionMatchQuit_8(),
	GameCenter_TBM_t3457554475_StaticFields::get_offset_of_ActionTrunEnded_9(),
	GameCenter_TBM_t3457554475_StaticFields::get_offset_of_ActionMacthEnded_10(),
	GameCenter_TBM_t3457554475_StaticFields::get_offset_of_ActionRematched_11(),
	GameCenter_TBM_t3457554475_StaticFields::get_offset_of_ActionMacthRemoved_12(),
	GameCenter_TBM_t3457554475_StaticFields::get_offset_of_ActionPlayerQuitForMatch_13(),
	GameCenter_TBM_t3457554475_StaticFields::get_offset_of_ActionTrunReceived_14(),
	GameCenter_TBM_t3457554475::get_offset_of__Matches_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3437 = { sizeof (GK_MatchSendDataMode_t3659269993)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3437[3] = 
{
	GK_MatchSendDataMode_t3659269993::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3438 = { sizeof (GK_PlayerConnectionState_t2434478783)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3438[4] = 
{
	GK_PlayerConnectionState_t2434478783::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3439 = { sizeof (GK_RTM_MatchStartedResult_t833698690), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3439[1] = 
{
	GK_RTM_MatchStartedResult_t833698690::get_offset_of__Match_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3440 = { sizeof (GK_RTM_QueryActivityResult_t2276098399), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3440[1] = 
{
	GK_RTM_QueryActivityResult_t2276098399::get_offset_of__Activity_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3441 = { sizeof (GK_RTM_Match_t873568990), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3441[2] = 
{
	GK_RTM_Match_t873568990::get_offset_of__ExpectedPlayerCount_0(),
	GK_RTM_Match_t873568990::get_offset_of__Players_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3442 = { sizeof (GK_TurnBasedMatchOutcome_t2242380984)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3442[11] = 
{
	GK_TurnBasedMatchOutcome_t2242380984::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3443 = { sizeof (GK_TurnBasedMatchStatus_t2382635170)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3443[5] = 
{
	GK_TurnBasedMatchStatus_t2382635170::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3444 = { sizeof (GK_TurnBasedParticipantStatus_t2126479626)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3444[7] = 
{
	GK_TurnBasedParticipantStatus_t2126479626::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3445 = { sizeof (GK_TBM_EndTrunResult_t1517380690), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3445[1] = 
{
	GK_TBM_EndTrunResult_t1517380690::get_offset_of__Match_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3446 = { sizeof (GK_TBM_LoadMatchResult_t1639249273), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3446[1] = 
{
	GK_TBM_LoadMatchResult_t1639249273::get_offset_of__Match_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3447 = { sizeof (GK_TBM_LoadMatchesResult_t370491735), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3447[1] = 
{
	GK_TBM_LoadMatchesResult_t370491735::get_offset_of_LoadedMatches_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3448 = { sizeof (GK_TBM_MatchDataUpdateResult_t1356006034), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3448[1] = 
{
	GK_TBM_MatchDataUpdateResult_t1356006034::get_offset_of__Match_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3449 = { sizeof (GK_TBM_MatchEndResult_t3461768810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3449[1] = 
{
	GK_TBM_MatchEndResult_t3461768810::get_offset_of__Match_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3450 = { sizeof (GK_TBM_MatchInitResult_t3847830897), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3450[1] = 
{
	GK_TBM_MatchInitResult_t3847830897::get_offset_of__Match_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3451 = { sizeof (GK_TBM_MatchQuitResult_t1233820656), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3451[1] = 
{
	GK_TBM_MatchQuitResult_t1233820656::get_offset_of__MatchId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3452 = { sizeof (GK_TBM_MatchRemovedResult_t909126313), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3452[1] = 
{
	GK_TBM_MatchRemovedResult_t909126313::get_offset_of__MatchId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3453 = { sizeof (GK_TBM_MatchTurnResult_t3583658160), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3453[1] = 
{
	GK_TBM_MatchTurnResult_t3583658160::get_offset_of__Match_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3454 = { sizeof (GK_TBM_RematchResult_t3159773700), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3454[1] = 
{
	GK_TBM_RematchResult_t3159773700::get_offset_of__Match_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3455 = { sizeof (GK_TBM_Match_t132033130), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3455[7] = 
{
	GK_TBM_Match_t132033130::get_offset_of_Id_0(),
	GK_TBM_Match_t132033130::get_offset_of_Message_1(),
	GK_TBM_Match_t132033130::get_offset_of_CurrentParticipant_2(),
	GK_TBM_Match_t132033130::get_offset_of_CreationTimestamp_3(),
	GK_TBM_Match_t132033130::get_offset_of_Data_4(),
	GK_TBM_Match_t132033130::get_offset_of_Status_5(),
	GK_TBM_Match_t132033130::get_offset_of_Participants_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3456 = { sizeof (GK_TBM_Participant_t3803955090), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3456[6] = 
{
	GK_TBM_Participant_t3803955090::get_offset_of__PlayerId_0(),
	GK_TBM_Participant_t3803955090::get_offset_of__MatchId_1(),
	GK_TBM_Participant_t3803955090::get_offset_of__TimeoutDate_2(),
	GK_TBM_Participant_t3803955090::get_offset_of__LastTurnDate_3(),
	GK_TBM_Participant_t3803955090::get_offset_of__Status_4(),
	GK_TBM_Participant_t3803955090::get_offset_of__MatchOutcome_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3457 = { sizeof (IOSBillingInitChecker_t4166635083), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3457[1] = 
{
	IOSBillingInitChecker_t4166635083::get_offset_of__listener_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3458 = { sizeof (BillingInitListener_t4162012659), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3459 = { sizeof (IOSInAppPurchaseManager_t644626385), -1, sizeof(IOSInAppPurchaseManager_t644626385_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3459[15] = 
{
	0,
	0,
	IOSInAppPurchaseManager_t644626385_StaticFields::get_offset_of_OnTransactionComplete_6(),
	IOSInAppPurchaseManager_t644626385_StaticFields::get_offset_of_OnRestoreComplete_7(),
	IOSInAppPurchaseManager_t644626385_StaticFields::get_offset_of_OnStoreKitInitComplete_8(),
	IOSInAppPurchaseManager_t644626385_StaticFields::get_offset_of_OnPurchasesStateSettingsLoaded_9(),
	IOSInAppPurchaseManager_t644626385_StaticFields::get_offset_of_OnVerificationComplete_10(),
	IOSInAppPurchaseManager_t644626385::get_offset_of__IsStoreLoaded_11(),
	IOSInAppPurchaseManager_t644626385::get_offset_of__IsWaitingLoadResult_12(),
	IOSInAppPurchaseManager_t644626385::get_offset_of__IsInAppPurchasesEnabled_13(),
	IOSInAppPurchaseManager_t644626385_StaticFields::get_offset_of__nextId_14(),
	IOSInAppPurchaseManager_t644626385::get_offset_of__productsIds_15(),
	IOSInAppPurchaseManager_t644626385::get_offset_of__products_16(),
	IOSInAppPurchaseManager_t644626385::get_offset_of__productsView_17(),
	IOSInAppPurchaseManager_t644626385_StaticFields::get_offset_of_lastPurchasedProduct_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3460 = { sizeof (IOSNativeMarketBridge_t1553898649), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3461 = { sizeof (IOSStoreProductView_t607200268), -1, sizeof(IOSStoreProductView_t607200268_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3461[10] = 
{
	IOSStoreProductView_t607200268::get_offset_of_Loaded_0(),
	IOSStoreProductView_t607200268::get_offset_of_LoadFailed_1(),
	IOSStoreProductView_t607200268::get_offset_of_Appeared_2(),
	IOSStoreProductView_t607200268::get_offset_of_Dismissed_3(),
	IOSStoreProductView_t607200268::get_offset_of__ids_4(),
	IOSStoreProductView_t607200268::get_offset_of__id_5(),
	IOSStoreProductView_t607200268_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_6(),
	IOSStoreProductView_t607200268_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_7(),
	IOSStoreProductView_t607200268_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_8(),
	IOSStoreProductView_t607200268_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3462 = { sizeof (IOSProductTemplate_t1036598382), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3462[7] = 
{
	IOSProductTemplate_t1036598382::get_offset_of_id_0(),
	IOSProductTemplate_t1036598382::get_offset_of_title_1(),
	IOSProductTemplate_t1036598382::get_offset_of_description_2(),
	IOSProductTemplate_t1036598382::get_offset_of_price_3(),
	IOSProductTemplate_t1036598382::get_offset_of_localizedPrice_4(),
	IOSProductTemplate_t1036598382::get_offset_of_currencySymbol_5(),
	IOSProductTemplate_t1036598382::get_offset_of_currencyCode_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3463 = { sizeof (IOSStoreKitRestoreResult_t3305276155), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3464 = { sizeof (IOSStoreKitResult_t2359407583), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3464[5] = 
{
	IOSStoreKitResult_t2359407583::get_offset_of__ProductIdentifier_2(),
	IOSStoreKitResult_t2359407583::get_offset_of__State_3(),
	IOSStoreKitResult_t2359407583::get_offset_of__Receipt_4(),
	IOSStoreKitResult_t2359407583::get_offset_of__TransactionIdentifier_5(),
	IOSStoreKitResult_t2359407583::get_offset_of__ApplicationUsername_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3465 = { sizeof (IOSStoreKitVerificationResponse_t4263658582), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3465[4] = 
{
	IOSStoreKitVerificationResponse_t4263658582::get_offset_of_status_0(),
	IOSStoreKitVerificationResponse_t4263658582::get_offset_of_receipt_1(),
	IOSStoreKitVerificationResponse_t4263658582::get_offset_of_productIdentifier_2(),
	IOSStoreKitVerificationResponse_t4263658582::get_offset_of_originalJSON_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3466 = { sizeof (DeviceTokenListener_t3000307467), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3466[1] = 
{
	DeviceTokenListener_t3000307467::get_offset_of_tokenSent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3467 = { sizeof (ISN_NotificationType_t2960395864), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3467[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3468 = { sizeof (IOSNotificationController_t796362558), -1, sizeof(IOSNotificationController_t796362558_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3468[10] = 
{
	IOSNotificationController_t796362558_StaticFields::get_offset_of__instance_4(),
	IOSNotificationController_t796362558_StaticFields::get_offset_of__AllowedNotificationsType_5(),
	IOSNotificationController_t796362558::get_offset_of__LaunchNotification_6(),
	IOSNotificationController_t796362558_StaticFields::get_offset_of_OnDeviceTokenReceived_7(),
	IOSNotificationController_t796362558_StaticFields::get_offset_of_OnNotificationScheduleResult_8(),
	IOSNotificationController_t796362558_StaticFields::get_offset_of_OnNotificationSettingsInfoResult_9(),
	IOSNotificationController_t796362558_StaticFields::get_offset_of_OnLocalNotificationReceived_10(),
	IOSNotificationController_t796362558::get_offset_of_OnRemoteNotificationReceived_11(),
	0,
	IOSNotificationController_t796362558_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3469 = { sizeof (IOSNotificationDeviceToken_t2562424645), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3469[2] = 
{
	IOSNotificationDeviceToken_t2562424645::get_offset_of__tokenString_0(),
	IOSNotificationDeviceToken_t2562424645::get_offset_of__tokenBytes_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3470 = { sizeof (ISN_LocalNotification_t273186689), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3470[6] = 
{
	ISN_LocalNotification_t273186689::get_offset_of__Id_0(),
	ISN_LocalNotification_t273186689::get_offset_of__Date_1(),
	ISN_LocalNotification_t273186689::get_offset_of__Message_2(),
	ISN_LocalNotification_t273186689::get_offset_of__UseSound_3(),
	ISN_LocalNotification_t273186689::get_offset_of__Badges_4(),
	ISN_LocalNotification_t273186689::get_offset_of__Data_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3471 = { sizeof (IOSCamera_t2845108690), -1, sizeof(IOSCamera_t2845108690_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3471[4] = 
{
	IOSCamera_t2845108690_StaticFields::get_offset_of_OnImagePicked_4(),
	IOSCamera_t2845108690_StaticFields::get_offset_of_OnImageSaved_5(),
	IOSCamera_t2845108690_StaticFields::get_offset_of_OnVideoPathPicked_6(),
	IOSCamera_t2845108690::get_offset_of_IsWaitngForResponce_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3472 = { sizeof (U3CSaveScreenshotU3Ec__Iterator0_t106016999), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3472[7] = 
{
	U3CSaveScreenshotU3Ec__Iterator0_t106016999::get_offset_of_U3CwidthU3E__0_0(),
	U3CSaveScreenshotU3Ec__Iterator0_t106016999::get_offset_of_U3CheightU3E__1_1(),
	U3CSaveScreenshotU3Ec__Iterator0_t106016999::get_offset_of_U3CtexU3E__2_2(),
	U3CSaveScreenshotU3Ec__Iterator0_t106016999::get_offset_of_U24this_3(),
	U3CSaveScreenshotU3Ec__Iterator0_t106016999::get_offset_of_U24current_4(),
	U3CSaveScreenshotU3Ec__Iterator0_t106016999::get_offset_of_U24disposing_5(),
	U3CSaveScreenshotU3Ec__Iterator0_t106016999::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3473 = { sizeof (IOSGalleryLoadImageFormat_t518894765)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3473[3] = 
{
	IOSGalleryLoadImageFormat_t518894765::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3474 = { sizeof (IOSImagePickResult_t1671334394), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3474[1] = 
{
	IOSImagePickResult_t1671334394::get_offset_of__image_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3475 = { sizeof (ISN_MediaController_t1853840745), -1, sizeof(ISN_MediaController_t1853840745_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3475[7] = 
{
	ISN_MediaController_t1853840745::get_offset_of__NowPlayingItem_4(),
	ISN_MediaController_t1853840745::get_offset_of__State_5(),
	ISN_MediaController_t1853840745::get_offset_of__CurrentQueue_6(),
	ISN_MediaController_t1853840745_StaticFields::get_offset_of_ActionMediaPickerResult_7(),
	ISN_MediaController_t1853840745_StaticFields::get_offset_of_ActionQueueUpdated_8(),
	ISN_MediaController_t1853840745_StaticFields::get_offset_of_ActionNowPlayingItemChanged_9(),
	ISN_MediaController_t1853840745_StaticFields::get_offset_of_ActionPlaybackStateChanged_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3476 = { sizeof (MP_MusicPlaybackState_t2364713801)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3476[7] = 
{
	MP_MusicPlaybackState_t2364713801::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3477 = { sizeof (MP_MusicRepeatMode_t445284825)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3477[5] = 
{
	MP_MusicRepeatMode_t445284825::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3478 = { sizeof (MP_MusicShuffleMode_t2068355741)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3478[5] = 
{
	MP_MusicShuffleMode_t2068355741::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3479 = { sizeof (MP_MediaItem_t4025623029), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3479[7] = 
{
	MP_MediaItem_t4025623029::get_offset_of__Id_0(),
	MP_MediaItem_t4025623029::get_offset_of__Title_1(),
	MP_MediaItem_t4025623029::get_offset_of__Artist_2(),
	MP_MediaItem_t4025623029::get_offset_of__AlbumTitle_3(),
	MP_MediaItem_t4025623029::get_offset_of__AlbumArtist_4(),
	MP_MediaItem_t4025623029::get_offset_of__Genre_5(),
	MP_MediaItem_t4025623029::get_offset_of__Composer_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3480 = { sizeof (MP_MediaPickerResult_t2204006871), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3480[1] = 
{
	MP_MediaPickerResult_t2204006871::get_offset_of__SelectedmediaItems_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3481 = { sizeof (IOSDateTimePicker_t849222074), -1, sizeof(IOSDateTimePicker_t849222074_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3481[4] = 
{
	IOSDateTimePicker_t849222074::get_offset_of_OnDateChanged_4(),
	IOSDateTimePicker_t849222074::get_offset_of_OnPickerClosed_5(),
	IOSDateTimePicker_t849222074_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_6(),
	IOSDateTimePicker_t849222074_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3482 = { sizeof (IOSSharedApplication_t4065685598), -1, sizeof(IOSSharedApplication_t4065685598_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3482[4] = 
{
	0,
	0,
	IOSSharedApplication_t4065685598_StaticFields::get_offset_of_OnUrlCheckResultAction_6(),
	IOSSharedApplication_t4065685598_StaticFields::get_offset_of_OnAdvertisingIdentifierLoadedAction_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3483 = { sizeof (ISN_CheckUrlResult_t1645724501), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3483[1] = 
{
	ISN_CheckUrlResult_t1645724501::get_offset_of__url_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3484 = { sizeof (ISN_Security_t2700938347), -1, sizeof(ISN_Security_t2700938347_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3484[3] = 
{
	ISN_Security_t2700938347_StaticFields::get_offset_of_OnReceiptLoaded_4(),
	ISN_Security_t2700938347_StaticFields::get_offset_of_OnGUIDLoaded_5(),
	ISN_Security_t2700938347_StaticFields::get_offset_of_OnReceiptRefreshComplete_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3485 = { sizeof (IOSVideoManager_t3003649481), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3486 = { sizeof (IOSDialog_t3518705031), -1, sizeof(IOSDialog_t3518705031_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3486[4] = 
{
	IOSDialog_t3518705031::get_offset_of_yes_4(),
	IOSDialog_t3518705031::get_offset_of_no_5(),
	IOSDialog_t3518705031::get_offset_of_OnComplete_6(),
	IOSDialog_t3518705031_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3487 = { sizeof (IOSMessage_t2569463336), -1, sizeof(IOSMessage_t2569463336_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3487[3] = 
{
	IOSMessage_t2569463336::get_offset_of_ok_4(),
	IOSMessage_t2569463336::get_offset_of_OnComplete_5(),
	IOSMessage_t2569463336_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3488 = { sizeof (IOSRateUsPopUp_t2222998473), -1, sizeof(IOSRateUsPopUp_t2222998473_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3488[5] = 
{
	IOSRateUsPopUp_t2222998473::get_offset_of_rate_4(),
	IOSRateUsPopUp_t2222998473::get_offset_of_remind_5(),
	IOSRateUsPopUp_t2222998473::get_offset_of_declined_6(),
	IOSRateUsPopUp_t2222998473::get_offset_of_OnComplete_7(),
	IOSRateUsPopUp_t2222998473_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3489 = { sizeof (BaseIOSPopup_t3320937364), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3489[2] = 
{
	BaseIOSPopup_t3320937364::get_offset_of_title_2(),
	BaseIOSPopup_t3320937364::get_offset_of_message_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3490 = { sizeof (IOSNativePopUpManager_t3689761895), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3491 = { sizeof (IOSSocialManager_t2957403963), -1, sizeof(IOSSocialManager_t2957403963_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3491[3] = 
{
	IOSSocialManager_t2957403963_StaticFields::get_offset_of_OnFacebookPostResult_4(),
	IOSSocialManager_t2957403963_StaticFields::get_offset_of_OnTwitterPostResult_5(),
	IOSSocialManager_t2957403963_StaticFields::get_offset_of_OnMailResult_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3492 = { sizeof (ISN_Result_t2775631610), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3492[2] = 
{
	ISN_Result_t2775631610::get_offset_of__Error_0(),
	ISN_Result_t2775631610::get_offset_of__IsSucceeded_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3493 = { sizeof (ISN_DeviceGUID_t1787531836), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3493[2] = 
{
	ISN_DeviceGUID_t1787531836::get_offset_of__Bytes_0(),
	ISN_DeviceGUID_t1787531836::get_offset_of__Base64_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3494 = { sizeof (ISN_LoadSetLeaderboardsInfoResult_t3997789804), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3494[1] = 
{
	ISN_LoadSetLeaderboardsInfoResult_t3997789804::get_offset_of__LeaderBoardsSet_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3495 = { sizeof (ISN_LocalReceiptResult_t3746327569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3495[1] = 
{
	ISN_LocalReceiptResult_t3746327569::get_offset_of__Receipt_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3496 = { sizeof (iAdBanner_t2205758560), -1, sizeof(iAdBanner_t2205758560_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3496[16] = 
{
	iAdBanner_t2205758560::get_offset_of__IsLoaded_0(),
	iAdBanner_t2205758560::get_offset_of__IsOnScreen_1(),
	iAdBanner_t2205758560::get_offset_of_firstLoad_2(),
	iAdBanner_t2205758560::get_offset_of__ShowOnLoad_3(),
	iAdBanner_t2205758560::get_offset_of__id_4(),
	iAdBanner_t2205758560::get_offset_of__anchor_5(),
	iAdBanner_t2205758560::get_offset_of_AdLoadedAction_6(),
	iAdBanner_t2205758560::get_offset_of_FailToReceiveAdAction_7(),
	iAdBanner_t2205758560::get_offset_of_AdWiewLoadedAction_8(),
	iAdBanner_t2205758560::get_offset_of_AdViewActionBeginAction_9(),
	iAdBanner_t2205758560::get_offset_of_AdViewFinishedAction_10(),
	iAdBanner_t2205758560_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_11(),
	iAdBanner_t2205758560_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_12(),
	iAdBanner_t2205758560_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_13(),
	iAdBanner_t2205758560_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_14(),
	iAdBanner_t2205758560_StaticFields::get_offset_of_U3CU3Ef__amU24cache4_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3497 = { sizeof (iAdBannerController_t2502498128), -1, sizeof(iAdBannerController_t2502498128_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3497[7] = 
{
	iAdBannerController_t2502498128_StaticFields::get_offset_of__nextId_4(),
	iAdBannerController_t2502498128_StaticFields::get_offset_of__instance_5(),
	iAdBannerController_t2502498128::get_offset_of__banners_6(),
	iAdBannerController_t2502498128_StaticFields::get_offset_of_InterstitialDidFailWithErrorAction_7(),
	iAdBannerController_t2502498128_StaticFields::get_offset_of_InterstitialAdWillLoadAction_8(),
	iAdBannerController_t2502498128_StaticFields::get_offset_of_InterstitialAdDidLoadAction_9(),
	iAdBannerController_t2502498128_StaticFields::get_offset_of_InterstitialAdDidFinishAction_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3498 = { sizeof (iAdEvent_t3810634698), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3498[9] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3499 = { sizeof (iAdIOSBanner_t1295524391), -1, sizeof(iAdIOSBanner_t1295524391_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3499[2] = 
{
	iAdIOSBanner_t1295524391::get_offset_of_anchor_2(),
	iAdIOSBanner_t1295524391_StaticFields::get_offset_of__registeredBanners_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
