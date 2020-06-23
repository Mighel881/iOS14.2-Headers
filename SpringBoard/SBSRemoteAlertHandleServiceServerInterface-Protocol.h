//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSNumber, NSString, SBSRemoteAlertActivationContext, SBSRemoteAlertConfigurationContext, SBSRemoteAlertDefinition, SBSRemoteAlertHandleContext;
@protocol __SBSRemoteAlertHandleContext__;

@protocol SBSRemoteAlertHandleServiceServerInterface
- (oneway void)invalidateRemoteAlertHandleWithID:(NSString *)arg1;
- (oneway void)activateRemoteAlertHandleWithID:(NSString *)arg1 activationContext:(SBSRemoteAlertActivationContext *)arg2;
- (SBSRemoteAlertHandleContext *)createRemoteAlertHandleContextWithDefinition:(SBSRemoteAlertDefinition *)arg1 configurationContext:(SBSRemoteAlertConfigurationContext *)arg2;
- (NSArray<__SBSRemoteAlertHandleContext__> *)remoteAlertHandleContextsForDefinition:(SBSRemoteAlertDefinition *)arg1 allowsCreationValue:(NSNumber *)arg2 configurationContext:(SBSRemoteAlertConfigurationContext *)arg3;
@end

