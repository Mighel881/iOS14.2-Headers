/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_transaction, OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface MTOSTransaction : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                   //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
+(id)transactionWithDescription:(id)arg1 timeout:(double)arg2 ;
+(id)transactionWithDescription:(id)arg1 timeout:(double)arg2 timeoutBlock:(/*^block*/id)arg3 ;
+(id)transactionWithDescription:(id)arg1 ;
-(void)end;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)_cancel;
-(NSObject*<OS_dispatch_source>)timer;
-(id)initWithDescription:(id)arg1 timeout:(double)arg2 timeoutBlock:(/*^block*/id)arg3 ;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)dealloc;
@end

