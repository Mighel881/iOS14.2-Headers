//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class CCUIModularControlCenterViewController;

@protocol CCUIModularControlCenterViewControllerDelegate <NSObject>

@optional
- (void)didCloseExpandedModuleForControlCenterViewController:(CCUIModularControlCenterViewController *)arg1;
- (void)willOpenExpandedModuleForControlCenterViewController:(CCUIModularControlCenterViewController *)arg1;
- (void)controlCenterViewController:(CCUIModularControlCenterViewController *)arg1 didUpdateHomeGestureDismissalAllowed:(_Bool)arg2;
- (void)controlCenterViewControllerDidFinishUserInteractionWithModule:(CCUIModularControlCenterViewController *)arg1;
- (void)controlCenterViewControllerDidBeginUserInteractionWithModule:(CCUIModularControlCenterViewController *)arg1;
@end

