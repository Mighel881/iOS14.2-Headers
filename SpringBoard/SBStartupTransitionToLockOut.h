//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBBaseStartupTransition.h>

@class SBFUserAuthenticationController, SBLockScreenManager;

@interface SBStartupTransitionToLockOut : SBBaseStartupTransition
{
    SBLockScreenManager *_lockScreenManager;
    SBFUserAuthenticationController *_authController;
}


// Remaining properties
@property(readonly, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@end
