//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFAnalyticsBackendEventHandling-Protocol.h>

@class NSString, PETScalarEventTracker;

@interface SBApplicationLayoutGestureMetric : NSObject <SBFAnalyticsBackendEventHandling>
{
    PETScalarEventTracker *_pinGestureCompletionTracker;
    PETScalarEventTracker *_unpinGestureCompletionTracker;
    PETScalarEventTracker *_movePIPGestureCompletionTracker;
    PETScalarEventTracker *_moveSideGestureCompletionTracker;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

