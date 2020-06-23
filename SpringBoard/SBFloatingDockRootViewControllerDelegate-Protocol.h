//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBFloatingDockRootViewController, SBFolderController;
@protocol SBViewControllerTransitionCoordinator;

@protocol SBFloatingDockRootViewControllerDelegate <NSObject>
- (void)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 floatingDockWantsToBePresented:(_Bool)arg2;
- (void)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 didChangeToFrame:(struct CGRect)arg2;
- (void)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 willChangeToHeight:(double)arg2;

@optional
- (double)minimumHomeScreenScaleForFloatingDockRootViewController:(SBFloatingDockRootViewController *)arg1;
- (void)floatingDockRootViewControllerDidEndPresentationTransition:(SBFloatingDockRootViewController *)arg1;
- (void)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 willPerformTransitionWithFolder:(SBFolderController *)arg2 presenting:(_Bool)arg3 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg4;
- (void)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 modifyProgress:(double)arg2 interactive:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (_Bool)floatingDockRootViewControllerShouldHandlePanGestureRecognizer:(SBFloatingDockRootViewController *)arg1;
@end

