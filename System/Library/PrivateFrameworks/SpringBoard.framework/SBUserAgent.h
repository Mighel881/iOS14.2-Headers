/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBUIUserAgent_Internal.h>

@protocol BSInvalidatable;
@class SBIdleTimerPolicyAggregator, NSMutableDictionary, NSString;

@interface SBUserAgent : NSObject <SBUIUserAgent_Internal> {

	NSMutableDictionary* _idleTimerDisableAssertions;
	SBIdleTimerPolicyAggregator* _idleTimerPolicyAggregator;
	id<BSInvalidatable> _bannerSuppressionAssertion;

}

@property (setter=_setIdleTimerPolicyAggregator:,nonatomic,retain) SBIdleTimerPolicyAggregator * _idleTimerPolicyAggregator;              //@synthesize idleTimerPolicyAggregator=_idleTimerPolicyAggregator - In the implementation block
@property (assign,nonatomic) long long softwareUpdatePasscodePolicyType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInternalInstall;
-(BOOL)lockScreenIsShowing;
-(id)topSuspendedEventsOnlyDisplayID;
-(BOOL)canLaunchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 ;
-(BOOL)launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(BOOL)arg4 ;
-(BOOL)deviceIsBlocked;
-(BOOL)_openApplication:(id)arg1 withURL:(id)arg2 fromSource:(int)arg3 animated:(BOOL)arg4 options:(id)arg5 ;
-(BOOL)launchApplicationFromSource:(int)arg1 withDisplayID:(id)arg2 options:(id)arg3 ;
-(SBIdleTimerPolicyAggregator *)_idleTimerPolicyAggregator;
-(void)lockAndDimDevice;
-(long long)activeInterfaceOrientation;
-(id)init;
-(void)setIdleText:(id)arg1 ;
-(void)addIdleTimerHandler:(id)arg1 ;
-(void)disableLockScreenBundleNamed:(id)arg1 deactivationContext:(id)arg2 ;
-(BOOL)applicationInstalledForDisplayID:(id)arg1 ;
-(void)_setIdleTimerPolicyAggregator:(id)arg1 ;
-(void)setIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(int)networkUsageTypeForAppWithDisplayID:(id)arg1 ;
-(void)removeIdleTimerHandler:(id)arg1 ;
-(BOOL)isIdleTimerDisabledForReason:(id)arg1 ;
-(BOOL)isScreenOn;
-(BOOL)isApplicationForegroundObscured:(id)arg1 ;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)arg1 ;
-(void)setSoftwareUpdatePasscodePolicyType:(long long)arg1 ;
-(BOOL)deviceIsLocked;
-(BOOL)launchApplicationFromSource:(int)arg1 withURL:(id)arg2 options:(id)arg3 ;
-(BOOL)deviceIsTethered;
-(void)notifyOnNextUserEvent;
-(BOOL)deviceIsPasscodeLocked;
-(BOOL)isApplicationRestrictedOrHidden:(id)arg1 ;
-(id)foregroundApplicationDisplayID;
-(BOOL)_launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(BOOL)arg4 animate:(BOOL)arg5 ;
-(void)undimScreen;
-(void)removeActiveInterfaceOrientationObserver:(id)arg1 ;
-(BOOL)openURL:(id)arg1 allowUnlock:(BOOL)arg2 animated:(BOOL)arg3 ;
-(CFRunLoopRef)wifiRunLoopRef;
-(long long)softwareUpdatePasscodePolicyType;
-(id)_safeValue:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3 ;
-(BOOL)deviceIsPasscodeLockedRemotely;
-(void)enableLockScreenBundleNamed:(id)arg1 activationContext:(id)arg2 ;
-(BOOL)springBoardIsActive;
-(id)folderNameForDisplayID:(id)arg1 ;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)arg1 andDimScreen:(BOOL)arg2 ;
-(id)localizedDisplayNameForDisplayID:(id)arg1 ;
-(void)activateModalBulletinAlert:(id)arg1 ;
-(void)addActiveInterfaceOrientationObserver:(id)arg1 ;
-(void)_cleanupFromBannerLaunch;
-(void)updateInterfaceOrientationIfNecessary;
-(BOOL)isNamedRemoteAlertServiceActive:(id)arg1 controllerClassName:(id)arg2 ;
-(void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(id)arg2 ;
-(void)activateRemoteAlertService:(id)arg1 options:(id)arg2 ;
-(void)setMinimumBacklightLevel:(float)arg1 animated:(BOOL)arg2 ;
@end

