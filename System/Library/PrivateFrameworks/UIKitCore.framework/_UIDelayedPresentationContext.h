/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class NSInvocation, NSObject;

@interface _UIDelayedPresentationContext : NSObject {

	BOOL _enableUserInteraction;
	long long _reqcnt;
	NSInvocation* _presentInvocation;
	/*^block*/id _cancellationHandler;
	double _timeout;
	NSObject*<OS_dispatch_source> _timerSource;

}

@property (nonatomic,copy) id cancellationHandler;                          //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
@property (nonatomic,retain) NSInvocation * presentInvocation;              //@synthesize presentInvocation=_presentInvocation - In the implementation block
-(id)cancellationHandler;
-(long long)requestCount;
-(void)setCancellationHandler:(id)arg1 ;
-(id)delayingController;
-(id)invocationTarget;
-(long long)incrementRequestCount;
-(void)setPresentInvocation:(NSInvocation *)arg1 ;
-(long long)decrementRequestCount;
-(id)initWithTimeout:(double)arg1 cancellationHandler:(/*^block*/id)arg2 ;
-(NSInvocation *)presentInvocation;
@end

