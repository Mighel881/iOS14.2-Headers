/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailFoundation/EFObservable.h>

@protocol EFScheduler;
@class EFCancelationToken;

@interface _EFGeneratorObservable : EFObservable {

	id<EFScheduler> _scheduler;
	EFCancelationToken* _cancelable;
	id _state;
	/*^block*/id _condition;
	/*^block*/id _nextStateForState;
	/*^block*/id _resultFromState;
	/*^block*/id _delayForState;

}
-(void)_scheduleNextResultForObserver:(id)arg1 ;
-(id)subscribe:(id)arg1 ;
-(id)initWithInitialState:(id)arg1 condition:(/*^block*/id)arg2 nextState:(/*^block*/id)arg3 resultSelector:(/*^block*/id)arg4 delay:(/*^block*/id)arg5 scheduler:(id)arg6 ;
-(BOOL)_isFinished;
-(void)_updateState;
@end
