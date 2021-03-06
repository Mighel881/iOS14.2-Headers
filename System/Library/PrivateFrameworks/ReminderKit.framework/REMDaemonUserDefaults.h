/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/REMUserDefaults.h>

@class NSString, NSNumber, NSDate, NSData, REMObjectID, NSURL, NSDateComponents, NSDictionary;

@interface REMDaemonUserDefaults : REMUserDefaults

@property (nonatomic,readonly) BOOL newAppShouldTakeoverEKReminderNotifications; 
@property (nonatomic,readonly) BOOL dataaccessDaemonStopSyncingReminders; 
@property (nonatomic,readonly) BOOL siriShouldRouteIntentsToNewRemindersApp; 
@property (assign,nonatomic) BOOL databaseMigrationTestModeEnabled; 
@property (assign,nonatomic) BOOL isDatabaseMigrated; 
@property (assign,nonatomic) BOOL databaseMigrationTimedOut; 
@property (nonatomic,copy) NSString * lastDatabaseMigrationSystemBuildVersion; 
@property (nonatomic,retain) NSNumber * cloudKitMigrationMaxNumInvocations; 
@property (nonatomic,retain) NSNumber * cloudKitMigrationMaxNumFailures; 
@property (nonatomic,retain) NSNumber * cloudKitMigrationDelayAfterError; 
@property (nonatomic,retain) NSNumber * cloudKitMigrationObserverPollingInterval; 
@property (nonatomic,retain) NSNumber * cloudKitMigrationSimulatedError; 
@property (nonatomic,retain) NSNumber * cloudKitResultsLimitPerSyncOperation; 
@property (assign,nonatomic) BOOL cloudKitMigrationDisableCleanUp; 
@property (nonatomic,retain) NSString * acAccountIdentifierToMergeLocalDataIntoSyncData; 
@property (nonatomic,retain) NSString * acAccountIdentifierToMigrateInactivatedCalDavData; 
@property (nonatomic,retain) NSDate * cloudKitMergeLocalLastDateMaxRetryReached; 
@property (nonatomic,retain) NSString * cloudKitMergeLocalLastBuildVersionMaxRetryReached; 
@property (nonatomic,copy) NSNumber * spotlightIndexVersion; 
@property (nonatomic,copy) NSDate * nextScheduledAlarmDate; 
@property (nonatomic,copy) NSDate * lastPresentAlarmDate; 
@property (nonatomic,copy) NSData * lastSuggestedAttributesAutoTrainingToken; 
@property (nonatomic,copy) NSDate * lastSyncPoll; 
@property (nonatomic,copy) NSData * userInteractionsData; 
@property (assign,nonatomic) BOOL simulateMAIDAccount; 
@property (assign,nonatomic) BOOL showRemindersAsOverdue; 
@property (assign,nonatomic) BOOL enableWelcomeScreen; 
@property (assign,nonatomic) BOOL forceShowWelcomeScreen; 
@property (assign,nonatomic) BOOL enableInAppDebugMenu; 
@property (nonatomic,retain) REMObjectID * preferredDefaultListID; 
@property (nonatomic,retain) NSURL * preferredDefaultListObjectIDUrl; 
@property (nonatomic,retain) NSDateComponents * todayNotificationFireTime; 
@property (assign,nonatomic) BOOL disableAlarmEngineDataSourcePrefetching; 
@property (assign,nonatomic) BOOL enableAssignmentNotifications; 
@property (nonatomic,copy) NSDictionary * suggestedAttributesTrainingOverrides; 
@property (nonatomic,copy) NSDictionary * suggestedAttributesHarvestingOverrides; 
@property (nonatomic,copy) NSDictionary * suggestedAttributesAccepted; 
@property (nonatomic,copy) NSData * accountsListCategorizedCountsCache; 
@property (assign,nonatomic) BOOL debugSimulateSqliteFull; 
+(id)defaultValues;
+(id)todayNotificationFireTimeFromStorageNumber:(id)arg1 ;
+(id)storageNumberForTodayNotificationTime:(id)arg1 ;
-(BOOL)isDatabaseMigrated;
-(void)setCloudKitMigrationMaxNumInvocations:(NSNumber *)arg1 ;
-(void)setSpotlightIndexVersion:(NSNumber *)arg1 ;
-(NSNumber *)cloudKitMigrationObserverPollingInterval;
-(NSURL *)preferredDefaultListObjectIDUrl;
-(NSNumber *)cloudKitMigrationMaxNumFailures;
-(void)setLastSuggestedAttributesAutoTrainingToken:(NSData *)arg1 ;
-(id)initWithSuiteName:(id)arg1 containerURL:(id)arg2 ;
-(NSNumber *)spotlightIndexVersion;
-(BOOL)forceShowWelcomeScreen;
-(void)setCloudKitMigrationMaxNumFailures:(NSNumber *)arg1 ;
-(void)setAcAccountIdentifierToMergeLocalDataIntoSyncData:(NSString *)arg1 ;
-(void)setCloudKitMigrationSimulatedError:(NSNumber *)arg1 ;
-(id)observePreferredDefaultListIDWithBlock:(/*^block*/id)arg1 ;
-(void)setIsDatabaseMigrated:(BOOL)arg1 ;
-(NSDictionary *)suggestedAttributesAccepted;
-(void)setCloudKitMigrationObserverPollingInterval:(NSNumber *)arg1 ;
-(BOOL)showRemindersAsOverdue;
-(void)setTodayNotificationFireTime:(NSDateComponents *)arg1 ;
-(BOOL)enableAssignmentNotifications;
-(BOOL)cloudKitMigrationDisableCleanUp;
-(void)ppt_handleInstall;
-(BOOL)enableInAppDebugMenu;
-(void)ppt_handleRestore;
-(void)setLastDatabaseMigrationSystemBuildVersion:(NSString *)arg1 ;
-(NSData *)userInteractionsData;
-(void)deletePreferredDefaultListID;
-(NSDate *)nextScheduledAlarmDate;
-(void)updateAcceptedAttributesForReminderWithID:(id)arg1 attributeType:(id)arg2 ;
-(void)setLastPresentAlarmDate:(NSDate *)arg1 ;
-(void)setCloudKitMergeLocalLastDateMaxRetryReached:(NSDate *)arg1 ;
-(void)setSuggestedAttributesAccepted:(NSDictionary *)arg1 ;
-(void)_deletePreferredDefaultListObjectIDUrl;
-(void)setSimulateMAIDAccount:(BOOL)arg1 ;
-(void)setUserInteractionsData:(NSData *)arg1 ;
-(void)setPreferredDefaultListID:(REMObjectID *)arg1 ;
-(void)setNextScheduledAlarmDate:(NSDate *)arg1 ;
-(NSString *)acAccountIdentifierToMergeLocalDataIntoSyncData;
-(void)setPreferredDefaultListObjectIDUrl:(NSURL *)arg1 ;
-(void)setDatabaseMigrationTestModeEnabled:(BOOL)arg1 ;
-(void)setBestKForKNN:(id)arg1 ;
-(NSDate *)lastSyncPoll;
-(NSNumber *)cloudKitMigrationMaxNumInvocations;
-(BOOL)simulateMAIDAccount;
-(void)setEnableWelcomeScreen:(BOOL)arg1 ;
-(void)setDatabaseMigrationTimedOut:(BOOL)arg1 ;
-(void)setAcAccountIdentifierToMigrateInactivatedCalDavData:(NSString *)arg1 ;
-(id)observeShowRemindersAsOverdueWithBlock:(/*^block*/id)arg1 ;
-(void)setShowRemindersAsOverdue:(BOOL)arg1 ;
-(void)setAccountsListCategorizedCountsCache:(NSData *)arg1 ;
-(BOOL)hasSuggestedRecentlyForReminderWithID:(id)arg1 attributeType:(id)arg2 ;
-(NSNumber *)cloudKitMigrationDelayAfterError;
-(void)setSuggestedAttributesTrainingOverrides:(NSDictionary *)arg1 ;
-(NSDate *)lastPresentAlarmDate;
-(NSString *)cloudKitMergeLocalLastBuildVersionMaxRetryReached;
-(NSDictionary *)suggestedAttributesHarvestingOverrides;
-(id)_pptPreferredDefaultListIDKey;
-(void)setDisableAlarmEngineDataSourcePrefetching:(BOOL)arg1 ;
-(NSDate *)cloudKitMergeLocalLastDateMaxRetryReached;
-(void)setCloudKitResultsLimitPerSyncOperation:(NSNumber *)arg1 ;
-(BOOL)debugSimulateSqliteFull;
-(REMObjectID *)preferredDefaultListID;
-(id)_reminderIDAttributeKey:(id)arg1 attributeType:(id)arg2 ;
-(void)setSuggestedAttributesHarvestingOverrides:(NSDictionary *)arg1 ;
-(BOOL)enableWelcomeScreen;
-(NSNumber *)cloudKitResultsLimitPerSyncOperation;
-(id)streamTodayNotificationFireTime:(/*^block*/id)arg1 ;
-(void)setForceShowWelcomeScreen:(BOOL)arg1 ;
-(NSString *)lastDatabaseMigrationSystemBuildVersion;
-(NSData *)accountsListCategorizedCountsCache;
-(NSDictionary *)suggestedAttributesTrainingOverrides;
-(BOOL)siriShouldRouteIntentsToNewRemindersApp;
-(NSDateComponents *)todayNotificationFireTime;
-(void)setLastSyncPoll:(NSDate *)arg1 ;
-(void)setDebugSimulateSqliteFull:(BOOL)arg1 ;
-(NSString *)acAccountIdentifierToMigrateInactivatedCalDavData;
-(NSNumber *)cloudKitMigrationSimulatedError;
-(void)setCloudKitMigrationDisableCleanUp:(BOOL)arg1 ;
-(void)setCloudKitMergeLocalLastBuildVersionMaxRetryReached:(NSString *)arg1 ;
-(BOOL)databaseMigrationTimedOut;
-(BOOL)dataaccessDaemonStopSyncingReminders;
-(BOOL)newAppShouldTakeoverEKReminderNotifications;
-(NSData *)lastSuggestedAttributesAutoTrainingToken;
-(void)setEnableInAppDebugMenu:(BOOL)arg1 ;
-(void)setCloudKitMigrationDelayAfterError:(NSNumber *)arg1 ;
-(BOOL)databaseMigrationTestModeEnabled;
-(void)setEnableAssignmentNotifications:(BOOL)arg1 ;
-(BOOL)disableAlarmEngineDataSourcePrefetching;
-(void)setCoreBehaviorTrainingParameters:(id)arg1 ;
@end

