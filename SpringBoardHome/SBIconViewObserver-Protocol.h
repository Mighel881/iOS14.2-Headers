//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBIconView, UIViewController;

@protocol SBIconViewObserver <NSObject>

@optional
- (void)iconViewDidEndDrag:(SBIconView *)arg1;
- (void)iconViewWillBeginDrag:(SBIconView *)arg1;
- (void)iconViewDidHandleTap:(SBIconView *)arg1;
- (void)iconView:(SBIconView *)arg1 didChangeCustomImageViewController:(UIViewController *)arg2;
- (void)iconViewSizeDidChange:(SBIconView *)arg1;
- (void)iconViewWasRecycled:(SBIconView *)arg1;
@end
