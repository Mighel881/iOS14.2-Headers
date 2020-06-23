//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSSet, NSUUID, SBSRemoteAlertActivationContext, SBSRemoteAlertConfigurationContext;

@protocol SBUIRemoteAlertServiceInterface
- (void)configureWithContext:(SBSRemoteAlertConfigurationContext *)arg1 completion:(void (^)(void))arg2;

@optional
- (void)didInvalidateForRemoteAlert;
- (void)setUserInfo:(NSDictionary *)arg1;
- (void)prepareForActivationWithContext:(SBSRemoteAlertActivationContext *)arg1 completion:(void (^)(void))arg2;
- (void)noteActivatedForActivityContinuationWithIdentifier:(NSUUID *)arg1;
- (void)handleDoubleHeightStatusBarTap;
- (void)handleButtonActions:(NSSet *)arg1;
- (void)handleHeadsetButtonPressed:(_Bool)arg1;
- (void)handleVolumeDownButtonPressed;
- (void)handleVolumeUpButtonPressed;
- (void)handleLockButtonPressed;
- (void)handleHomeButtonPressed;
@end
