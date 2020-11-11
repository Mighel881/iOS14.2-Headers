/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCPrivateDataController.h>
#import <libobjc.A.dylib/FCTagSettingsDelegate.h>

@class FCTagSettings, NSDictionary, FCMTWriterLock, NSNumber, NSString, NSDate;

@interface FCUserInfo : FCPrivateDataController <FCTagSettingsDelegate> {

	BOOL _useParsecResults;
	FCTagSettings* _tagSettings;
	NSDictionary* _readOnlyUserInfo;
	FCMTWriterLock* _userInfoLock;

}

@property (nonatomic,retain) NSDictionary * readOnlyUserInfo;                                   //@synthesize readOnlyUserInfo=_readOnlyUserInfo - In the implementation block
@property (nonatomic,retain) FCMTWriterLock * userInfoLock;                                     //@synthesize userInfoLock=_userInfoLock - In the implementation block
@property (nonatomic,copy) NSNumber * onboardingVersionNumber; 
@property (nonatomic,copy) NSString * feldsparID; 
@property (nonatomic,copy,readonly) NSString * notificationsUserID; 
@property (nonatomic,copy) NSString * adsUserID; 
@property (nonatomic,copy) NSDate * dateLastOpened; 
@property (nonatomic,retain) FCTagSettings * tagSettings;                                       //@synthesize tagSettings=_tagSettings - In the implementation block
@property (nonatomic,copy) NSDate * userStartDate; 
@property (nonatomic,readonly) BOOL useParsecResults;                                           //@synthesize useParsecResults=_useParsecResults - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowDefaultForYou; 
@property (nonatomic,readonly) unsigned long long progressivePersonalization; 
@property (assign,nonatomic) BOOL hasShownProgressivePersonalizationWelcomeBrick; 
@property (assign,nonatomic) BOOL userHasCompletedFavoritesSetup; 
@property (nonatomic,copy) NSDate * newsletterSignupLastSeenDate; 
@property (nonatomic,copy) NSDate * personalizedNewsletterSignupLastSeenDate; 
@property (nonatomic,copy) NSString * editorialArticleVersion; 
@property (nonatomic,copy) NSString * canonicalLanguage; 
@property (assign,nonatomic) BOOL marketingNotificationsEnabled; 
@property (assign,nonatomic) BOOL newIssueNotificationsEnabled; 
@property (assign,nonatomic) BOOL endOfAudioTrackNotificationsEnabled; 
@property (nonatomic,copy) NSNumber * monthlyALaCarteSubscriptionMeteredCount; 
@property (nonatomic,copy) NSDate * aLaCarteSubscriptionMeteredCountLastResetDate; 
@property (nonatomic,copy) NSNumber * monthlyBundleSubscriptionMeteredCount; 
@property (nonatomic,copy) NSDate * bundleSubscriptionMeteredCountLastResetDate; 
@property (nonatomic,copy) NSNumber * upsellAppLaunchCount; 
@property (nonatomic,copy) NSString * lastAppLaunchUpsellInstanceID; 
@property (nonatomic,copy) NSDate * appLaunchUpsellLastSeenDate; 
@property (nonatomic,readonly) BOOL mightNeedToUpdateOnboardingVersion; 
@property (nonatomic,readonly) NSDate * dateLastViewedSaved; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)desiredKeys;
+(id)overrideFeldsparID;
+(id)userInfoCKRecordFromUserInfoDictionary:(id)arg1 ;
+(long long)commandQueueUrgency;
+(BOOL)requiresPushNotificationSupport;
+(id)backingRecordZoneIDs;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(id)localStoreFilename;
+(unsigned long long)progressivePersonalization;
+(unsigned long long)localStoreVersion;
+(BOOL)requiresBatchedSync;
+(id)commandStoreFileName;
+(BOOL)requiresHighPriorityFirstSync;
+(id)iCloudDataKeys;
+(id)backingRecordIDs;
-(FCTagSettings *)tagSettings;
-(void)syncWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)notificationsUserID;
-(void)removeObserver:(id)arg1 ;
-(void)setNewIssueNotificationsEnabled:(BOOL)arg1 ;
-(void)setEndOfAudioTrackNotificationsEnabled:(BOOL)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2 ;
-(void)prepareForUse;
-(id)asCKRecord;
-(NSString *)adsUserID;
-(void)addObserver:(id)arg1 ;
-(unsigned long long)progressivePersonalization;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(FCMTWriterLock *)userInfoLock;
-(void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(NSNumber *)onboardingVersionNumber;
-(id)_userInfoValueForKey:(id)arg1 ;
-(NSDate *)dateLastOpened;
-(void)setMarketingNotificationsEnabled:(BOOL)arg1 ;
-(void)setOnboardingVersionNumber:(NSNumber *)arg1 ;
-(BOOL)mightNeedToUpdateOnboardingVersion;
-(BOOL)marketingNotificationsEnabled;
-(BOOL)newIssueNotificationsEnabled;
-(NSDictionary *)readOnlyUserInfo;
-(BOOL)endOfAudioTrackNotificationsEnabled;
-(void)setReadOnlyUserInfo:(NSDictionary *)arg1 ;
-(void)handleSyncWithUserInfoRecord:(id)arg1 ;
-(void)handleSyncWithDeletedUserInfoRecord;
-(void)_persistAdsUserID:(id)arg1 ;
-(void)_modifyUserInfoWithBlock:(/*^block*/id)arg1 ;
-(void)syncLocalNotificationsUserID:(id)arg1 withRemoteNotificationsUserID:(id)arg2 ;
-(void)syncLocalAdsUserID:(id)arg1 withRemoteAdsUserID:(id)arg2 ;
-(void)setAdsUserID:(NSString *)arg1 ;
-(void)_persistNotificationsUserID:(id)arg1 ;
-(void)addModifyTagSettingsCommandToCommandQueue:(id)arg1 ;
-(void)accessTokenDidChangeForTagID:(id)arg1 ;
-(void)accessTokenRemovedForTagID:(id)arg1 userInitiated:(BOOL)arg2 ;
-(NSString *)editorialArticleVersion;
-(NSString *)canonicalLanguage;
-(void)setDateLastOpened:(NSDate *)arg1 ;
-(BOOL)shouldShowDefaultForYou;
-(BOOL)hasShownProgressivePersonalizationWelcomeBrick;
-(void)setHasShownProgressivePersonalizationWelcomeBrick:(BOOL)arg1 ;
-(BOOL)userHasCompletedFavoritesSetup;
-(void)setUserHasCompletedFavoritesSetup:(BOOL)arg1 ;
-(NSNumber *)upsellAppLaunchCount;
-(void)setUserStartDate:(NSDate *)arg1 ;
-(NSDate *)newsletterSignupLastSeenDate;
-(void)setNewsletterSignupLastSeenDate:(NSDate *)arg1 ;
-(NSDate *)personalizedNewsletterSignupLastSeenDate;
-(NSNumber *)monthlyALaCarteSubscriptionMeteredCount;
-(void)setPersonalizedNewsletterSignupLastSeenDate:(NSDate *)arg1 ;
-(void)setMonthlyALaCarteSubscriptionMeteredCount:(NSNumber *)arg1 ;
-(NSDate *)aLaCarteSubscriptionMeteredCountLastResetDate;
-(void)setALaCarteSubscriptionMeteredCountLastResetDate:(NSDate *)arg1 ;
-(NSNumber *)monthlyBundleSubscriptionMeteredCount;
-(void)setMonthlyBundleSubscriptionMeteredCount:(NSNumber *)arg1 ;
-(NSDate *)bundleSubscriptionMeteredCountLastResetDate;
-(void)setBundleSubscriptionMeteredCountLastResetDate:(NSDate *)arg1 ;
-(void)setUpsellAppLaunchCount:(NSNumber *)arg1 ;
-(void)refreshOnboardingVersion:(/*^block*/id)arg1 ;
-(NSString *)lastAppLaunchUpsellInstanceID;
-(void)setLastAppLaunchUpsellInstanceID:(NSString *)arg1 ;
-(NSDate *)appLaunchUpsellLastSeenDate;
-(void)setAppLaunchUpsellLastSeenDate:(NSDate *)arg1 ;
-(void)markSavedAsViewed;
-(void)updateOnboardingVersion;
-(void)maybeUpdateOnboardingVersion:(/*^block*/id)arg1 ;
-(NSDate *)dateLastViewedSaved;
-(void)setEditorialArticleVersion:(NSString *)arg1 ;
-(void)setCanonicalLanguage:(NSString *)arg1 ;
-(void)setTagSettings:(FCTagSettings *)arg1 ;
-(BOOL)useParsecResults;
-(void)setUserInfoLock:(FCMTWriterLock *)arg1 ;
-(NSDate *)userStartDate;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1 ;
-(void)setFeldsparID:(NSString *)arg1 ;
-(BOOL)canHelpRestoreZoneName:(id)arg1 ;
-(NSString *)feldsparID;
-(id)recordsForRestoringZoneName:(id)arg1 ;
@end
