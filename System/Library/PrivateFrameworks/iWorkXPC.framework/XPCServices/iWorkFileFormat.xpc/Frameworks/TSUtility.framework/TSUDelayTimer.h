/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface TSUDelayTimer : NSObject {

	AB _cancelled;
	BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_source> _dispatchTimer;

}

@property (setter=_setDispatchQueue:,nonatomic,retain) NSObject*<OS_dispatch_queue> _dispatchQueue;               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (setter=_setDispatchTimer:,nonatomic,retain) NSObject*<OS_dispatch_source> _dispatchTimer;              //@synthesize dispatchTimer=_dispatchTimer - In the implementation block
@property (assign,nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;                          //@synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock - In the implementation block
-(NSObject*<OS_dispatch_queue>)_dispatchQueue;
-(id)init;
-(void)_reallyCancel;
-(void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)_dispatchTimer;
-(id)initWithTargetSerialQueue:(id)arg1 ;
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2 ;
-(void)cancel;
-(BOOL)automaticallyCancelPendingBlockUponSchedulingNewBlock;
-(void)dealloc;
-(void)_setDispatchQueue:(id)arg1 ;
-(void)_setDispatchTimer:(id)arg1 ;
@end
