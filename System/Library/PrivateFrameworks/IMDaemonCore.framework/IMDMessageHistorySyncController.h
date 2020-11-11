/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IMDMessageHistorySyncTask, IMDMessageHistorySyncTaskFactory;
@interface IMDMessageHistorySyncController : NSObject {

	BOOL _replayControllerNeedsSync;
	BOOL _ckChatSyncControllerNeedsSync;
	BOOL _idsTransportLogNeedsSync;
	id<IMDMessageHistorySyncTask> _currentlyExecutingSyncTask;
	id<IMDMessageHistorySyncTaskFactory> _syncTaskFactory;

}

@property (assign,nonatomic) BOOL replayControllerNeedsSync;                                        //@synthesize replayControllerNeedsSync=_replayControllerNeedsSync - In the implementation block
@property (assign,nonatomic) BOOL ckChatSyncControllerNeedsSync;                                    //@synthesize ckChatSyncControllerNeedsSync=_ckChatSyncControllerNeedsSync - In the implementation block
@property (assign,nonatomic) BOOL idsTransportLogNeedsSync;                                         //@synthesize idsTransportLogNeedsSync=_idsTransportLogNeedsSync - In the implementation block
@property (nonatomic,retain) id<IMDMessageHistorySyncTask> currentlyExecutingSyncTask;              //@synthesize currentlyExecutingSyncTask=_currentlyExecutingSyncTask - In the implementation block
@property (nonatomic,retain) id<IMDMessageHistorySyncTaskFactory> syncTaskFactory;                  //@synthesize syncTaskFactory=_syncTaskFactory - In the implementation block
-(void)dealloc;
-(id)initWithMessageHistorySyncTaskFactory:(id)arg1 ;
-(void)ckChatSyncControllerWantsToSync;
-(void)replayControllerWantsToSync;
-(void)IDSTransportLogWantsToSync;
-(BOOL)replayControllerNeedsSync;
-(void)setReplayControllerNeedsSync:(BOOL)arg1 ;
-(void)_evaluateStateAndActIfNeeded;
-(BOOL)idsTransportLogNeedsSync;
-(void)setIdsTransportLogNeedsSync:(BOOL)arg1 ;
-(BOOL)ckChatSyncControllerNeedsSync;
-(void)setCkChatSyncControllerNeedsSync:(BOOL)arg1 ;
-(void)_scheduleNextEvaluation;
-(id<IMDMessageHistorySyncTask>)currentlyExecutingSyncTask;
-(void)setCurrentlyExecutingSyncTask:(id<IMDMessageHistorySyncTask>)arg1 ;
-(id<IMDMessageHistorySyncTaskFactory>)syncTaskFactory;
-(void)setSyncTaskFactory:(id<IMDMessageHistorySyncTaskFactory>)arg1 ;
@end
