//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBDeviceApplicationSceneViewControlling-Protocol.h>
#import <SpringBoard/SBLayoutStateTransitionObserver-Protocol.h>
#import <SpringBoard/SBSceneLayoutMedusaStatusBarAssertionProviding-Protocol.h>

@class BSUIAnimationFactory, SBInlineAppExposeContainerViewController, SBMainWorkspaceTransitionRequest, SBUIAnimationController;

@protocol SBMedusaDecoratedDeviceApplicationSceneViewControlling <SBDeviceApplicationSceneViewControlling, SBLayoutStateTransitionObserver, SBSceneLayoutMedusaStatusBarAssertionProviding>
@property(nonatomic, getter=isNubViewHighlighted) _Bool nubViewHighlighted;
@property(nonatomic, getter=isNubViewHidden) _Bool nubViewHidden;
@property(readonly, nonatomic, getter=isBlurred) _Bool blurred;
- (SBUIAnimationController *)animationControllerForTransitionRequest:(SBMainWorkspaceTransitionRequest *)arg1;
- (void)setInlineAppExposeContainerViewController:(SBInlineAppExposeContainerViewController *)arg1;
- (void)blurApplicationContent:(_Bool)arg1 withAnimationFactory:(BSUIAnimationFactory *)arg2 completion:(void (^)(void))arg3;
@end

