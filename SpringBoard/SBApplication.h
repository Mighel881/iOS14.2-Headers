//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/SBLeafIconDataSource-Protocol.h>
#import <SpringBoard/UISApplicationStateServiceDataSource-Protocol.h>
#import <SpringBoard/XBApplicationSnapshotManifestDelegate-Protocol.h>

@class FBApplicationProcess, FBProcessExitContext, FBSApplicationDataStore, NSArray, NSDate, NSHashTable, NSMapTable, NSMutableDictionary, NSString, NSUserDefaults, SBApplicationInfo, SBApplicationProcessState, SBApplicationSupportServiceRequestContext, SBApplicationWakeScheduler, XBApplicationSnapshotManifest;

@interface SBApplication : NSObject <XBApplicationSnapshotManifestDelegate, SBLeafIconDataSource, UISApplicationStateServiceDataSource, BSDescriptionProviding>
{
    FBApplicationProcess *_process;
    FBSApplicationDataStore *_dataStore;
    XBApplicationSnapshotManifest *_snapshotManifest;
    NSUserDefaults *_lazy_defaults;
    SBApplicationProcessState *_threadUnsafe_processState;
    FBProcessExitContext *_lastExitContext;
    unsigned long long _displayedLaunchAlerts;
    SBApplicationSupportServiceRequestContext *_initializationContext;
    unsigned int _isRecentlyUpdated:3;
    unsigned int _isNewlyInstalled:3;
    _Bool _uninstalled;
    unsigned int _hasBadgeValue:3;
    unsigned int _dataFlags:8;
    _Bool _dataFlagsIsSet;
    unsigned int _doingBackgroundNetworking:16;
    _Bool _hasShownDataPlanAlertSinceLock;
    NSHashTable *_statusBarStyleOverridesAssertions;
    NSMapTable *_statusBarStyleOverridesAssertionsByStyleOverride;
    NSMutableDictionary *_suppressVolumeHUDCategoriesBySceneIdentifier;
    int _showsProgressCount;
    _Bool _isRestoringApplicationFromHiding;
    int _applicationRestorationCheckState;
    SBApplicationWakeScheduler *_legacyVOIPPeriodicWakeScheduler;
    _Bool _isPlayingAudio;
    _Bool _isNowRecordingApplication;
    _Bool _isRecordingAudio;
    _Bool _isConnectedToExternalAccessory;
    unsigned long long _failedAutoLaunchCountForVOIP;
    unsigned long long _failedLaunchCount;
    NSString *_bundleIdentifier;
    SBApplicationInfo *_appInfo;
    long long _appSnapshotSequenceID;
    _Bool _calculatedSupportedTypes;
    unsigned long long _supportedTypes;
    long long _defaultClassicModeOverride;
    long long _currentClassicMode;
}


// Remaining properties
@property(copy, nonatomic) id badgeValue;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic, getter=isCacheCleaningTerminationAssertionHeld) _Bool cacheCleaningTerminationAssertionHeld;
@property(readonly, nonatomic) _Bool classicAppFullScreen;
@property(readonly, nonatomic) _Bool classicAppInsetForHomeAffordance;
@property(readonly, nonatomic) _Bool classicAppPhoneAppRunningOnPad;
@property(readonly, nonatomic) _Bool classicAppRequiresHiDPI;
@property(readonly, nonatomic) _Bool classicAppScaled;
@property(nonatomic, setter=_setClassicAppZoomedIn:) _Bool classicAppZoomedIn;
@property(readonly, nonatomic) _Bool classicAppZoomedInOrRequiresHiDPI;
@property(readonly, nonatomic, getter=_classicMode) long long classicMode;
@property(readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property(nonatomic, getter=isConnectedToExternalAccessory) _Bool connectedToExternalAccessory; // @synthesize connectedToExternalAccessory=_isConnectedToExternalAccessory;
@property(readonly, nonatomic) int dataUsage;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=_defaultClassicMode) long long defaultClassicMode;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *displayName;
@property(copy, nonatomic) NSArray *dynamicApplicationShortcutItems;
@property(nonatomic) unsigned long long failedAutoLaunchCountForVOIP; // @synthesize failedAutoLaunchCountForVOIP=_failedAutoLaunchCountForVOIP;
@property(readonly, nonatomic) unsigned long long failedLaunchCount; // @synthesize failedLaunchCount=_failedLaunchCount;
@property(nonatomic) _Bool hasShownDataPlanAlertSinceLock; // @synthesize hasShownDataPlanAlertSinceLock=_hasShownDataPlanAlertSinceLock;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *iconIdentifier;
@property(readonly, nonatomic) _Bool ignoreScalingOfJailedStatusBar;
@property(readonly, nonatomic) _Bool includesStatusBarInClassicJail;
@property(retain, nonatomic) SBApplicationInfo *info; // @synthesize info=_appInfo;
@property(readonly, nonatomic, getter=isInternalApplication) _Bool internalApplication;
@property(retain, getter=_internalProcessState, setter=_setInternalProcessState:) SBApplicationProcessState *internalProcessState; // @synthesize internalProcessState=_threadUnsafe_processState;
@property(readonly, nonatomic) _Bool isClassic;
@property(readonly, nonatomic) _Bool isFaceTime;
@property(readonly, nonatomic) _Bool isInsetForHomeAffordance;
@property(readonly, nonatomic) _Bool isMedusaCapable;
@property(readonly, nonatomic) _Bool isMobilePhone;
@property(readonly, nonatomic) _Bool isSetup;
@property(readonly, nonatomic) _Bool isSpringBoard;
@property(readonly, nonatomic) FBProcessExitContext *lastExitContext; // @synthesize lastExitContext=_lastExitContext;
@property(readonly, nonatomic) SBApplicationWakeScheduler *legacyVOIPPeriodicWakeScheduler;
@property(retain, nonatomic) NSDate *nextWakeDate;
@property(nonatomic, getter=isNowRecordingApplication) _Bool nowRecordingApplication; // @synthesize nowRecordingApplication=_isNowRecordingApplication;
@property(nonatomic, getter=isPlayingAudio) _Bool playingAudio; // @synthesize playingAudio=_isPlayingAudio;
@property(readonly, nonatomic) SBApplicationProcessState *processState;
@property(nonatomic, getter=isRestoringIcon) _Bool restoringIcon; // @synthesize restoringIcon=_isRestoringApplicationFromHiding;
@property(nonatomic) _Bool showsProgress;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool suppressesControlCenter;
@property(readonly, nonatomic) _Bool suppressesCoverSheetGesture;
@property(readonly, nonatomic, getter=isSystemApplication) _Bool systemApplication;
@property(readonly, nonatomic, getter=isAnyTerminationAssertionHeld) _Bool terminationAssertionHeld;
@property(readonly, nonatomic, getter=isUninstallSupported) _Bool uninstallSupported;
@property(nonatomic, getter=isUninstalled) _Bool uninstalled; // @synthesize uninstalled=_uninstalled;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property(nonatomic) _Bool usesBackgroundNetwork;
@property(nonatomic) _Bool usesEdgeNetwork;
@property(nonatomic) _Bool usesWiFiNetwork;
@property(nonatomic) _Bool wantsAutoLaunchForVOIP;
@property(readonly, nonatomic) _Bool wantsLegacyFullscreenInterfaceOrientationBehaviors;
@end

