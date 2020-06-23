//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBFMobileKeyBag, SBFMobileKeyBagState;

@protocol SBFMobileKeyBagObserver <NSObject>

@optional
- (void)keybagDidFinishProcessingStateChange:(SBFMobileKeyBag *)arg1;
- (void)keybag:(SBFMobileKeyBag *)arg1 extendedStateDidChange:(SBFMobileKeyBagState *)arg2;
- (void)keybagWillBeginProcessingStateChange:(SBFMobileKeyBag *)arg1;
- (void)keybagDidUnlockForTheFirstTime:(SBFMobileKeyBag *)arg1;
@end

