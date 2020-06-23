//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBHIconAnimationSettings, SBHomeScreenIconTransitionAnimator, SBNestingViewController;

@protocol SBHomeScreenIconTransitionAnimatorDelegate <NSObject>
- (SBHIconAnimationSettings *)animator:(SBHomeScreenIconTransitionAnimator *)arg1 animationSettingsForOperation:(unsigned long long)arg2 childViewController:(SBNestingViewController *)arg3;

@optional
- (_Bool)animator:(SBHomeScreenIconTransitionAnimator *)arg1 canAlterViewHierarchyDuringCleanupUsingBlock:(void (^)(void))arg2;
@end

