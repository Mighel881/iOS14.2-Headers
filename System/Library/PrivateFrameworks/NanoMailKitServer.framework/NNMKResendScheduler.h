/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NNMKResendSchedulerDelegate;
@class NNMKSyncController;

@interface NNMKResendScheduler : NSObject {

	unsigned long long _initialSyncResendInterval;
	id<NNMKResendSchedulerDelegate> _delegate;
	NNMKSyncController* _syncController;

}

@property (assign,nonatomic) unsigned long long initialSyncResendInterval;                 //@synthesize initialSyncResendInterval=_initialSyncResendInterval - In the implementation block
@property (assign,nonatomic,__weak) id<NNMKResendSchedulerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NNMKSyncController * syncController;                          //@synthesize syncController=_syncController - In the implementation block
-(id)messageTypeForIDSIdentifier:(id)arg1 ;
-(void)setInitialSyncResendInterval:(unsigned long long)arg1 ;
-(void)_resendObjectIds:(id)arg1 type:(id)arg2 resendInterval:(unsigned long long)arg3 idsIdentifier:(id)arg4 ;
-(void)handleIDSMessageSentSuccessfullyWithId:(id)arg1 ;
-(id<NNMKResendSchedulerDelegate>)delegate;
-(void)_executePendingResendsAndContentRequests;
-(void)_resendPendingAccountWithIds:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned long long)arg3 ;
-(void)forceRetryingAllPendingIDSMessages;
-(void)_failPendingComposedMessages;
-(void)resendObjectsForIDSIdentifier:(id)arg1 ;
-(void)deletePendingIDSMessagesForMailboxId:(id)arg1 ;
-(NNMKSyncController *)syncController;
-(void)setSyncController:(NNMKSyncController *)arg1 ;
-(id)objectIdsForPendingIDSIdentifier:(id)arg1 ;
-(void)setDelegate:(id<NNMKResendSchedulerDelegate>)arg1 ;
-(void)_scheduleIdsIdentifierForResend:(id)arg1 currentResendInterval:(unsigned long long)arg2 newResendInterval:(unsigned long long)arg3 errorCode:(long long)arg4 ;
-(void)resetInitialSyncResendInterval;
-(void)_resendInitialSyncWithIDSIdentifier:(id)arg1 newResendInterval:(unsigned long long)arg2 mailboxIds:(id)arg3 ;
-(void)registerIDSIdentifier:(id)arg1 objectIds:(id)arg2 type:(id)arg3 resendInterval:(unsigned long long)arg4 ;
-(unsigned long long)initialSyncResendInterval;
-(void)_resendPendingMessagesWithIds:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned long long)arg3 ;
-(void)handleIDSMessageFailedWithId:(id)arg1 errorCode:(long long)arg2 ;
-(void)_resendSendingProgressForComposedMessageWithId:(id)arg1 forIDSIdentifier:(id)arg2 newResendInterval:(unsigned long long)arg3 ;
-(void)_resendPendingMessageContentWithId:(id)arg1 sentBecauseUserRequested:(BOOL)arg2 idsIdentifier:(id)arg3 newResendInterval:(unsigned long long)arg4 ;
-(id)deviceRegistry;
@end
