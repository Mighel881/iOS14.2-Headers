/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBSystemServiceServerTestAutomationDelegate <SBSystemServiceServerDelegate>
@required
-(void)systemServiceServer:(id)arg1 suspendAllDisplaysForClient:(id)arg2;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setAlertsEnabled:(BOOL)arg3;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setIdleTimerEnabled:(BOOL)arg3;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setOrientationLockEnabled:(BOOL)arg3;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setMallocStackLoggingEnabled:(BOOL)arg3;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setHiddenFeaturesEnabled:(BOOL)arg3;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 resetToHomeScreenAnimated:(BOOL)arg3;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 port:(id)arg3 acquireHUDHiddenAssertionForIdentifier:(id)arg4;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setApplicationBundleIdentifier:(id)arg3 blockedForScreenTime:(BOOL)arg4;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg3;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 countScenesForBundleIdentifier:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 stashSwitcherModelToPath:(id)arg3;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 loadStashedSwitcherModelFromPath:(id)arg3;
-(void)systemServiceServer:(id)arg1 addWidgetsToEachPageForClient:(id)arg2;
-(void)systemServiceServer:(id)arg1 client:(id)arg2 addWidgetWithIdentifier:(id)arg3 toPage:(long long)arg4 withSizing:(long long)arg5;

@end

