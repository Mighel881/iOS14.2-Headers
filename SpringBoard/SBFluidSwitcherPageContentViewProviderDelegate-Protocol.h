//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBAppLayout, SBFluidSwitcherPageContentViewProvider, SBTransientOverlayViewController, UIViewController;
@protocol SBAppSwitcherReusableSnapshotViewDelegate;

@protocol SBFluidSwitcherPageContentViewProviderDelegate <NSObject>
- (id <SBAppSwitcherReusableSnapshotViewDelegate>)delegateForForSnapshotPageViewFromProvider:(SBFluidSwitcherPageContentViewProvider *)arg1;
- (SBTransientOverlayViewController *)viewControllerForTransientOverlayAppLayout:(SBAppLayout *)arg1 fromProvider:(SBFluidSwitcherPageContentViewProvider *)arg2;
- (UIViewController *)containerViewControllerForPageViewFromProvider:(SBFluidSwitcherPageContentViewProvider *)arg1;
- (struct CGSize)sizeForAppLayout:(SBAppLayout *)arg1 fromProvider:(SBFluidSwitcherPageContentViewProvider *)arg2;
- (long long)orientationForPageViewFromProvider:(SBFluidSwitcherPageContentViewProvider *)arg1;
@end

