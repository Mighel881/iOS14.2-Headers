//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/_SBIconProgressTransition.h>

@class CAMediaTimingFunction;

@interface _SBIconProgressStateTransition : _SBIconProgressTransition
{
    double _totalElapsedTime;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    long long _fromState;
    long long _toState;
    double _fraction;
}

@end
