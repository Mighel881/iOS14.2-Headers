//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFObservable.h>

@protocol SBFCancelable, SBFObservable, SBFScheduler;

@interface _SBFThrottledObservable : SBFObservable
{
    double _interval;
    id <SBFCancelable> _delayToken;
    id <SBFObservable> _observable;
    id <SBFScheduler> _scheduler;
    id _result;
    _Bool _hasResult;
    unsigned long long _resultCounter;
}

@end
