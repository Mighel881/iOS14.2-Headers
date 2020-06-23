//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBHIDButtonStateDelegate-Protocol.h>
#import <SpringBoard/SBSceneManagerObserver-Protocol.h>

@class BKSHIDEventDeliveryManager, BSMutableIntegerMap, BSTimer, CMPocketStateManager, NSMutableIndexSet, NSString, RBSProcessMonitor, SBApplicationController, SBBacklightController, SBCameraHardwareButtonDefaults, SBCameraHardwareButtonSettings, SBCoverSheetPresentationManager, SBHIDButtonStateArbiter, SBLockScreenManager, SBProximitySensorManager, SBSceneManager, _SBCameraLaunchCondition;
@protocol BSInvalidatable;

@interface SBCameraHardwareButton : NSObject <SBHIDButtonStateDelegate, PTSettingsKeyObserver, SBSceneManagerObserver>
{
    _Bool _disableDeferringToApplications;
    _Bool _shouldUsePocketStateDetection;
    int _lastCameraApplicationPID;
    id <BSInvalidatable> _dispatchingRuleAssertion;
    id <BSInvalidatable> _deferringRuleAssertion;
    NSMutableIndexSet *_allCameraShutterButtonPIDs;
    NSMutableIndexSet *_foregroundCameraShutterButtonPIDs;
    NSMutableIndexSet *_foregroundPendingRemovalCameraShutterButtonPIDs;
    BSMutableIntegerMap *_deferringTokensPerPID;
    SBHIDButtonStateArbiter *_buttonArbiter;
    RBSProcessMonitor *_processMonitor;
    CMPocketStateManager *_pocketStateManager;
    _SBCameraLaunchCondition *_shouldLaunchCameraCondition;
    _SBCameraLaunchCondition *_longPressCondition;
    _SBCameraLaunchCondition *_outOfPocketCondition;
    BSTimer *_longPressCancellationTimer;
    double _longPressCancellationTimeout;
    BKSHIDEventDeliveryManager *_deliveryManager;
    SBApplicationController *_applicationController;
    SBLockScreenManager *_lockScreenManager;
    SBCoverSheetPresentationManager *_coverSheetPresentationManager;
    SBBacklightController *_backlightController;
    SBProximitySensorManager *_proximitySensorManager;
    SBSceneManager *_mainDisplaySceneManager;
    SBCameraHardwareButtonSettings *_settings;
    SBCameraHardwareButtonDefaults *_defaults;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disableDeferringToApplications; // @synthesize disableDeferringToApplications=_disableDeferringToApplications;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

