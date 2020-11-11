/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BSWatchdogDelegate, BSWatchdogProviding, OS_dispatch_queue;
@class BSTimer, NSObject, NSDate;

@interface BSWatchdog : NSObject {

	BSTimer* _timer;
	/*^block*/id _completion;
	BOOL _invalidated;
	BOOL _completed;
	BOOL _hasFired;
	id<BSWatchdogDelegate> _delegate;
	id<BSWatchdogProviding> _provider;
	double _timeout;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _startDate;

}

@property (nonatomic,retain) id<BSWatchdogDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<BSWatchdogProviding> provider;                //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (getter=hasFired,nonatomic,readonly) BOOL fired;                      //@synthesize hasFired=_hasFired - In the implementation block
-(void)start;
-(id)initWithProvider:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithProvider:(id)arg1 queue:(id)arg2 ;
-(id<BSWatchdogDelegate>)delegate;
-(NSDate *)startDate;
-(void)setDelegate:(id<BSWatchdogDelegate>)arg1 ;
-(id)description;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_watchdogInvalidated;
-(void)_watchdogTimerFired;
-(BOOL)hasFired;
-(id<BSWatchdogProviding>)provider;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 ;
-(double)timeout;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)invalidate;
-(void)dealloc;
@end
