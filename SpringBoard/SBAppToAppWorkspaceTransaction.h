//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@class NSObject, SBAutoPiPWorkspaceTransaction, SBUIAnimationController;
@protocol OS_dispatch_group;

@interface SBAppToAppWorkspaceTransaction : SBToAppsWorkspaceTransaction
{
    SBAutoPiPWorkspaceTransaction *_autoPiPTransaction;
    SBUIAnimationController *_animation;
    unsigned long long _autoPIPTransitionOrder;
    NSObject<OS_dispatch_group> *_pipDuringSwitchTransitionTasksGroup;
    _Bool _preventWhitePointAdaptationStrengthUpdateOnComplete;
}


// Remaining properties
@property(nonatomic) _Bool preventWhitePointAdaptationStrengthUpdateOnComplete; // @synthesize preventWhitePointAdaptationStrengthUpdateOnComplete=_preventWhitePointAdaptationStrengthUpdateOnComplete;
@end

