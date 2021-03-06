/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EFScheduler.h>

@protocol EFScheduler;
@class EDMessagePersistence, NSString;

@interface _MFMessageContentRequestScheduler : NSObject <EFScheduler> {

	unsigned long long _requestID;
	id<EFScheduler> _scheduler;
	EDMessagePersistence* _messagePersistence;

}

@property (nonatomic,retain) id<EFScheduler> scheduler;                              //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) EDMessagePersistence * messagePersistence;              //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(void)performSyncBlock:(/*^block*/id)arg1 ;
-(void)performSyncBarrierBlock:(/*^block*/id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)setScheduler:(id<EFScheduler>)arg1 ;
-(id<EFScheduler>)scheduler;
-(void)performVoucherPreservingBlock:(/*^block*/id)arg1 ;
-(id)performWithObject:(id)arg1 ;
-(void)setMessagePersistence:(EDMessagePersistence *)arg1 ;
-(id)initWithScheduler:(id)arg1 requestID:(unsigned long long)arg2 messagePersistence:(id)arg3 ;
-(void)performBlockWithActivity:(/*^block*/id)arg1 requestID:(unsigned long long)arg2 ;
-(id)initWithScheduler:(id)arg1 messagePersistence:(id)arg2 ;
-(EDMessagePersistence *)messagePersistence;
@end

