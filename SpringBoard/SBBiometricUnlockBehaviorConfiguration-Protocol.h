//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBBiometricUnlockBehavior, SBBiometricUnlockBehaviorConfigurationDelegate;

@protocol SBBiometricUnlockBehaviorConfiguration <NSObject>
@property(nonatomic) __weak id <SBBiometricUnlockBehaviorConfigurationDelegate> delegate;
- (id <SBBiometricUnlockBehavior>)newBehaviorForCurrentConfiguration;
@end

