//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class CSBehavior, CSCoverSheetViewController;

@protocol CSCoverSheetViewControllerObserver <NSObject>

@optional
- (void)coverSheetViewControllerDidDismissPasscodeLockView:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerDidPresentModalView:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewControllerExternalLockProviderStateDidChange:(CSCoverSheetViewController *)arg1;
- (void)coverSheetViewController:(CSCoverSheetViewController *)arg1 didChangeActiveBehavior:(CSBehavior *)arg2;
@end

