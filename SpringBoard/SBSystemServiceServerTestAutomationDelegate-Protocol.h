//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSystemServiceServerDelegate-Protocol.h>

@class BSMachPortSendRight, NSString, SBSystemServiceServer;
@protocol FBSServiceFacilityClientHandle;

@protocol SBSystemServiceServerTestAutomationDelegate <SBSystemServiceServerDelegate>
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 addWidgetWithIdentifier:(NSString *)arg3 toPage:(unsigned long long)arg4 withSmallSizing:(_Bool)arg5;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 addWidgetsToEachPageForClient:(id <FBSServiceFacilityClientHandle>)arg2;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 loadStashedSwitcherModelFromPath:(NSString *)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 stashSwitcherModelToPath:(NSString *)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 countScenesForBundleIdentifier:(NSString *)arg3 withCompletion:(void (^)(int))arg4;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setTestRunnerRecoveryApplicationBundleIdentifier:(NSString *)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setApplicationBundleIdentifier:(NSString *)arg3 blockedForScreenTime:(_Bool)arg4;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 port:(BSMachPortSendRight *)arg3 acquireHUDHiddenAssertionForIdentifier:(NSString *)arg4;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 resetToHomeScreenAnimated:(_Bool)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setHiddenFeaturesEnabled:(_Bool)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setMallocStackLoggingEnabled:(_Bool)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setOrientationLockEnabled:(_Bool)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setIdleTimerEnabled:(_Bool)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setAlertsEnabled:(_Bool)arg3;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 suspendAllDisplaysForClient:(id <FBSServiceFacilityClientHandle>)arg2;
@end
