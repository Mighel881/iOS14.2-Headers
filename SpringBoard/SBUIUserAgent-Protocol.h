//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL, SBAlertItem;
@protocol SBUIActiveOrientationObserver, SBUIIdleTimerHandler;

@protocol SBUIUserAgent <NSObject>
@property(nonatomic) long long softwareUpdatePasscodePolicyType;
- (NSString *)topSuspendedEventsOnlyDisplayID;
- (_Bool)isInternalInstall;
- (struct __CFRunLoop *)wifiRunLoopRef;
- (NSString *)folderNameForDisplayID:(NSString *)arg1;
- (void)disableLockScreenBundleNamed:(NSString *)arg1 deactivationContext:(NSDictionary *)arg2;
- (void)enableLockScreenBundleNamed:(NSString *)arg1 activationContext:(NSDictionary *)arg2;
- (_Bool)isNamedRemoteAlertServiceActive:(NSString *)arg1 controllerClassName:(NSString *)arg2;
- (void)activateRemoteAlertService:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)setMinimumBacklightLevel:(float)arg1 animated:(_Bool)arg2;
- (void)notifyOnNextUserEvent;
- (void)removeActiveInterfaceOrientationObserver:(id <SBUIActiveOrientationObserver>)arg1;
- (void)addActiveInterfaceOrientationObserver:(id <SBUIActiveOrientationObserver>)arg1;
- (void)activateModalBulletinAlert:(SBAlertItem *)arg1;
- (void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(NSString *)arg2;
- (void)setIdleText:(NSString *)arg1;
- (_Bool)isScreenOn;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(_Bool)arg1 andDimScreen:(_Bool)arg2;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(_Bool)arg1;
- (void)lockAndDimDevice;
- (void)removeIdleTimerHandler:(id <SBUIIdleTimerHandler>)arg1;
- (void)addIdleTimerHandler:(id <SBUIIdleTimerHandler>)arg1;
- (_Bool)isIdleTimerDisabledForReason:(NSString *)arg1;
- (void)setIdleTimerDisabled:(_Bool)arg1 forReason:(NSString *)arg2;
- (void)undimScreen;
- (_Bool)isApplicationRestrictedOrHidden:(NSString *)arg1;
- (_Bool)launchApplicationFromSource:(int)arg1 withURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (_Bool)launchApplicationFromSource:(int)arg1 withDisplayID:(NSString *)arg2 options:(NSDictionary *)arg3;
- (_Bool)canLaunchFromSource:(int)arg1 withURL:(NSURL *)arg2 bundleID:(NSString *)arg3;
- (_Bool)openURL:(NSURL *)arg1 allowUnlock:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)springBoardIsActive;
- (int)networkUsageTypeForAppWithDisplayID:(NSString *)arg1;
- (_Bool)lockScreenIsShowing;
- (_Bool)deviceIsTethered;
- (_Bool)deviceIsBlocked;
- (_Bool)deviceIsPasscodeLockedRemotely;
- (_Bool)deviceIsPasscodeLocked;
- (_Bool)deviceIsLocked;
- (_Bool)applicationInstalledForDisplayID:(NSString *)arg1;
- (_Bool)isApplicationForegroundObscured:(NSString *)arg1;
- (NSString *)localizedDisplayNameForDisplayID:(NSString *)arg1;
- (NSString *)foregroundApplicationDisplayID;
- (long long)activeInterfaceOrientation;
- (void)updateInterfaceOrientationIfNecessary;
@end

