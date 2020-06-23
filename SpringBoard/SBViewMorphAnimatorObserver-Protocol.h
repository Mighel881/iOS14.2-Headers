//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBViewMorphAnimator;

@protocol SBViewMorphAnimatorObserver <NSObject>

@optional
- (void)animatorWasInterrupted:(SBViewMorphAnimator *)arg1;
- (void)animatorWasCanceled:(SBViewMorphAnimator *)arg1;
- (void)didEndAllAnimations;
- (void)didEndTargetAnimations:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(void (^)(void))arg3;
- (void)didEndSourceAnimations:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(void (^)(void))arg3;
- (void)willStartTargetAnimations:(unsigned long long)arg1;
- (void)willStartSourceAnimations:(unsigned long long)arg1;
@end

