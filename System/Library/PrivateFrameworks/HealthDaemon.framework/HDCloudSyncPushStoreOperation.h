/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCloudSyncOperation.h>

@class HDCloudSyncTarget, _HDCloudSyncStorePersistableState;

@interface HDCloudSyncPushStoreOperation : HDCloudSyncOperation {

	HDCloudSyncTarget* _target;
	os_unfair_lock_s _lock;
	_HDCloudSyncStorePersistableState* _storeState;

}

@property (copy) HDCloudSyncTarget * target; 
-(HDCloudSyncTarget *)target;
-(void)main;
-(void)setTarget:(HDCloudSyncTarget *)arg1 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3 ;
-(id)_validatedSequenceRecordOperationsForPush;
-(void)_sequencePushesDidFinishSuccessfully;
-(id)_currentOwnedStoreIdentifiersForPush;
-(id)_operationForNewSequenceRecord:(id)arg1 replacingSequence:(id)arg2 isRebaseline:(BOOL)arg3 ;
-(id)_operationForExistingSequenceRecord:(id)arg1 ;
-(id)_pendingSequenceRecordOperationForPushWithIncludedStoreIdentifiers:(id)arg1 ;
-(id)_replacePendingSequenceRecordWithIncludedStoreIdentifiers:(id)arg1 ;
@end
