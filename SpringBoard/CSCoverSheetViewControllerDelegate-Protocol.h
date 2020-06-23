//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class CSCoverSheetViewController, NSString, SBLockScreenUnlockRequest;

@protocol CSCoverSheetViewControllerDelegate <NSObject>
- (void)coverSheetViewControllerShouldDismissContextMenu:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 unlockWithRequest:(SBLockScreenUnlockRequest *)arg2 completion:(void (^)(_Bool))arg3;
- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 requestsTouchIDDisabled:(_Bool)arg2 forReason:(NSString *)arg3;
- (void)coverSheetViewControllerIrisPlayingDidFinish:(CSCoverSheetViewController *)arg1;
@end
