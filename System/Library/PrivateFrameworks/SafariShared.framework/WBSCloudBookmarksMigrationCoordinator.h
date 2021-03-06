/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WBSSafariBookmarksSyncAgentProtocol, OS_dispatch_queue, WBSCloudBookmarksMigrationCoordinatorLocalDataProvider, WBSLogger;
@class NSObject;

@interface WBSCloudBookmarksMigrationCoordinator : NSObject {

	id<WBSSafariBookmarksSyncAgentProtocol> _syncAgent;
	NSObject*<OS_dispatch_queue> _processingQueue;
	BOOL _didDetermineReadyToMigrate;
	long long _skipReason;
	BOOL _migrationEnabled;
	id<WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> _localDataProvider;
	id<WBSLogger> _keyActionsLogger;

}

@property (nonatomic,__weak,readonly) id<WBSCloudBookmarksMigrationCoordinatorLocalDataProvider> localDataProvider;              //@synthesize localDataProvider=_localDataProvider - In the implementation block
@property (nonatomic,readonly) id<WBSSafariBookmarksSyncAgentProtocol> syncAgent; 
@property (nonatomic,retain) id<WBSLogger> keyActionsLogger;                                                                     //@synthesize keyActionsLogger=_keyActionsLogger - In the implementation block
@property (assign,getter=isMigrationEnabled,nonatomic) BOOL migrationEnabled;                                                    //@synthesize migrationEnabled=_migrationEnabled - In the implementation block
-(id)init;
-(void)_logKeyAction:(id)arg1 ;
-(id)initWithSyncAgent:(id)arg1 localDataProvider:(id)arg2 ;
-(void)_considerOverridingOtherMigratingDevice;
-(void)setKeyActionsLogger:(id<WBSLogger>)arg1 ;
-(id<WBSSafariBookmarksSyncAgentProtocol>)syncAgent;
-(void)setMigrationEnabled:(BOOL)arg1 ;
-(BOOL)isMigrationEnabled;
-(void)_determineCourseOfActionFromRemoteMigrationState;
-(id<WBSCloudBookmarksMigrationCoordinatorLocalDataProvider>)localDataProvider;
-(void)_determineCourseOfActionFromSyncAgentMigrationState;
-(void)_beginMigrationIfPossible;
-(void)startCoordinatingMigration;
-(void)_logErrorAsKeyAction:(id)arg1 ;
-(id<WBSLogger>)keyActionsLogger;
@end

