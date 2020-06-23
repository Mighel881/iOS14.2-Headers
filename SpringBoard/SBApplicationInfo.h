//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIApplicationInfo.h>

@class CRCarPlayAppDeclaration, NSArray, NSSet, NSString, NSURL, NSUserDefaults, XBSnapshotContainerIdentity;

@interface SBApplicationInfo : _UIApplicationInfo
{
    NSString *_applicationShortcutWidgetBundleIdentifier;
    NSArray *_staticApplicationShortcutItems;
    NSString *_displayName;
    Class _iconClass;
    CRCarPlayAppDeclaration *_carPlayDeclaration;
    NSArray *_domainsToPreheat;
    NSArray *_launchImageInfo;
    NSString *_launchInterfaceFileName;
    NSSet *_urlSchemes;
    NSSet *_supportedContentTypes;
    NSURL *_restorationArchiveContainerURL;
    NSURL *_dataContainerURLOverride;
    NSUserDefaults *_lazy_userDefaults;
    NSString *_installInstanceID;
    unsigned long long _applicationSizeInBytes;
    unsigned long long _dynamicApplicationShortcutItemsVersion;
    unsigned long long _visibilityOverride;
    long long _defaultStatusBarStyle;
    unsigned long long _uninstallCapability;
    unsigned long long _voipClass;
    long long _whitePointAdaptivityStyle;
    unsigned long long _allowedNKNotificationsPerDay;
    long long _forcedUserInterfaceStyle;
    int _networkUsageTypes;
    unsigned long long _supportedTypes;
    int _ignoredStatusBarStyleOverrides;
    _Bool _isLaunchableDuringSetup;
    _Bool _usesSplashBoard;
    _Bool _disablesClassicMode;
    _Bool _representsWebApplication;
    _Bool _isOkemoLinked;
    _Bool _isMonarchLinked;
    _Bool _isTigrisLinked;
    _Bool _isPeaceLinked;
    _Bool _isPeaceBLinked;
    _Bool _isYukonLinked;
    _Bool _isYukonELinked;
    _Bool _isAzulLinked;
    _Bool _prefersSavedSnapshots;
    _Bool _wantsLaunchWithoutPNG;
    _Bool _wantsFullScreen;
    _Bool _isGameCenterEnabled;
    _Bool _wasGameCenterEverEnabled;
    _Bool _statusBarIsLegacy;
    _Bool _preventsLaunchInterfaceSplitting;
    _Bool _requiresHiDPI;
    _Bool _alwaysLaunchesSuspended;
    _Bool _systemAppSupportsLocalNotifications;
    _Bool _disallowsNotificationCenter;
    _Bool _disallowsControlCenter;
    _Bool _staticApplicationShortcutItemsHaveBeenLocalized;
    _Bool _hasHiddenTag;
    _Bool _usesRLNDataProvider;
    _Bool _shouldSkipCrossfadeToLive;
    _Bool _supports64Bit;
    _Bool _supportsMultiwindow;
    _Bool _isNewsstand;
    _Bool _canChangeBackgroundStyle;
    _Bool _allowNonDefaultBackgroundStyle;
    _Bool _supportsDirectToAirplay;
    _Bool _alwaysReceivesOpenURLSource;
    _Bool _alwaysDeliversOpenURLActionsUsingWorkspace;
    _Bool _arcadeApplication;
    _Bool _appClip;
    _Bool _shouldLaunchWithLiveContentASAP;
    _Bool _cloudDemoted;
    _Bool _wantsExclusiveForeground;
    NSURL *_documentInboxURL;
    NSArray *_iTunesCategoriesOrderedByRelevancy;
    XBSnapshotContainerIdentity *_manifestContainerIdentity;
    NSString *_vendorName;
    NSString *_canonicalDisplayName;
}


// Remaining properties
@property(readonly, nonatomic) unsigned long long allowedNKNotificationsPerDay; // @synthesize allowedNKNotificationsPerDay=_allowedNKNotificationsPerDay;
@property(readonly, nonatomic) _Bool alwaysDeliversOpenURLActionsUsingWorkspace; // @synthesize alwaysDeliversOpenURLActionsUsingWorkspace=_alwaysDeliversOpenURLActionsUsingWorkspace;
@property(readonly, nonatomic) _Bool alwaysReceivesOpenURLSource; // @synthesize alwaysReceivesOpenURLSource=_alwaysReceivesOpenURLSource;
@property(readonly, nonatomic, getter=isAppClip) _Bool appClip; // @synthesize appClip=_appClip;
@property(readonly, nonatomic, getter=isAppleApplication) _Bool appleApplication;
@property(readonly, copy, nonatomic) NSString *applicationShortcutWidgetBundleIdentifier; // @synthesize applicationShortcutWidgetBundleIdentifier=_applicationShortcutWidgetBundleIdentifier;
@property(readonly, nonatomic) unsigned long long applicationSizeInBytes; // @synthesize applicationSizeInBytes=_applicationSizeInBytes;
@property(readonly, nonatomic, getter=isArcadeApplication) _Bool arcadeApplication; // @synthesize arcadeApplication=_arcadeApplication;
@property(readonly, nonatomic, getter=isAzulLinked) _Bool azulLinked; // @synthesize azulLinked=_isAzulLinked;
@property(readonly, copy, nonatomic) NSString *canonicalDisplayName; // @synthesize canonicalDisplayName=_canonicalDisplayName;
@property(readonly, nonatomic) CRCarPlayAppDeclaration *carPlayDeclaration; // @synthesize carPlayDeclaration=_carPlayDeclaration;
@property(readonly, nonatomic, getter=isCloudDemoted) _Bool cloudDemoted; // @synthesize cloudDemoted=_cloudDemoted;
@property(readonly, nonatomic) long long defaultStatusBarStyle; // @synthesize defaultStatusBarStyle=_defaultStatusBarStyle;
@property(readonly, nonatomic) _Bool disablesClassicMode; // @synthesize disablesClassicMode=_disablesClassicMode;
@property(readonly, nonatomic) _Bool disallowsControlCenter; // @synthesize disallowsControlCenter=_disallowsControlCenter;
@property(readonly, nonatomic) _Bool disallowsNotificationCenter; // @synthesize disallowsNotificationCenter=_disallowsNotificationCenter;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSURL *documentInboxURL; // @synthesize documentInboxURL=_documentInboxURL;
@property(readonly, nonatomic) NSArray *domainsToPreheat; // @synthesize domainsToPreheat=_domainsToPreheat;
@property(readonly, nonatomic) unsigned long long dynamicApplicationShortcutItemsVersion; // @synthesize dynamicApplicationShortcutItemsVersion=_dynamicApplicationShortcutItemsVersion;
@property(readonly, nonatomic, getter=isGameCenterEnabled) _Bool gameCenterEnabled; // @synthesize gameCenterEnabled=_isGameCenterEnabled;
@property(readonly, nonatomic) _Bool hasHiddenTag; // @synthesize hasHiddenTag=_hasHiddenTag;
@property(readonly, copy, nonatomic) NSArray *iTunesCategoriesOrderedByRelevancy; // @synthesize iTunesCategoriesOrderedByRelevancy=_iTunesCategoriesOrderedByRelevancy;
@property(readonly, nonatomic) Class iconClass; // @synthesize iconClass=_iconClass;
@property(readonly, nonatomic) int ignoredStatusBarStyleOverrides; // @synthesize ignoredStatusBarStyleOverrides=_ignoredStatusBarStyleOverrides;
@property(readonly, nonatomic) NSString *installInstanceID; // @synthesize installInstanceID=_installInstanceID;
@property(readonly, nonatomic, getter=isInternalApplication) _Bool internalApplication;
@property(readonly, nonatomic) NSArray *launchImageInfo; // @synthesize launchImageInfo=_launchImageInfo;
@property(readonly, nonatomic) NSString *launchInterfaceFileName; // @synthesize launchInterfaceFileName=_launchInterfaceFileName;
@property(readonly, nonatomic, getter=isLaunchableDuringSetup) _Bool launchableDuringSetup; // @synthesize launchableDuringSetup=_isLaunchableDuringSetup;
@property(readonly, nonatomic) XBSnapshotContainerIdentity *manifestContainerIdentity; // @synthesize manifestContainerIdentity=_manifestContainerIdentity;
@property(readonly, nonatomic, getter=isMonarchLinked) _Bool monarchLinked; // @synthesize monarchLinked=_isMonarchLinked;
@property(readonly, nonatomic) int networkUsageTypes; // @synthesize networkUsageTypes=_networkUsageTypes;
@property(readonly, nonatomic, getter=isNewsstand) _Bool newsstand; // @synthesize newsstand=_isNewsstand;
@property(readonly, nonatomic, getter=isPeaceBLinked) _Bool peaceBLinked; // @synthesize peaceBLinked=_isPeaceBLinked;
@property(readonly, nonatomic, getter=isPeaceLinked) _Bool peaceLinked; // @synthesize peaceLinked=_isPeaceLinked;
@property(readonly, nonatomic) _Bool prefersSavedSnapshots; // @synthesize prefersSavedSnapshots=_prefersSavedSnapshots;
@property(readonly, nonatomic) _Bool preventsLaunchInterfaceSplitting; // @synthesize preventsLaunchInterfaceSplitting=_preventsLaunchInterfaceSplitting;
@property(readonly, nonatomic) _Bool representsWebApplication; // @synthesize representsWebApplication=_representsWebApplication;
@property(readonly, nonatomic) _Bool requiresHiDPI; // @synthesize requiresHiDPI=_requiresHiDPI;
@property(readonly, nonatomic) NSURL *restorationArchiveContainerURL; // @synthesize restorationArchiveContainerURL=_restorationArchiveContainerURL;
@property(readonly, nonatomic) _Bool shouldLaunchSuspendedAlways; // @synthesize shouldLaunchSuspendedAlways=_alwaysLaunchesSuspended;
@property(readonly, nonatomic) _Bool shouldLaunchWithLiveContentASAP; // @synthesize shouldLaunchWithLiveContentASAP=_shouldLaunchWithLiveContentASAP;
@property(readonly, nonatomic) _Bool shouldSkipCrossfadeToLive; // @synthesize shouldSkipCrossfadeToLive=_shouldSkipCrossfadeToLive;
@property(readonly, nonatomic) NSArray *staticApplicationShortcutItems;
@property(readonly, nonatomic, getter=isStatusBarLegacy) _Bool statusBarIsLegacy; // @synthesize statusBarIsLegacy=_statusBarIsLegacy;
@property(readonly, nonatomic) unsigned long long supportedTypes; // @synthesize supportedTypes=_supportedTypes;
@property(readonly, nonatomic) _Bool supports64Bit; // @synthesize supports64Bit=_supports64Bit;
@property(readonly, nonatomic) _Bool supportsAudioBackgroundMode;
@property(readonly, nonatomic) _Bool supportsDirectToAirplay; // @synthesize supportsDirectToAirplay=_supportsDirectToAirplay;
@property(readonly, nonatomic) _Bool supportsDirectToAirplayOrIsWhitelisted;
@property(readonly, nonatomic) _Bool supportsFetchBackgroundMode;
@property(readonly, nonatomic) _Bool supportsLegacyVOIPBackgroundMode;
@property(readonly, nonatomic) _Bool supportsMultiwindow; // @synthesize supportsMultiwindow=_supportsMultiwindow;
@property(readonly, nonatomic) _Bool supportsNewsstandContentBackgroundMode;
@property(readonly, nonatomic) _Bool supportsRemoteNotificationBackgroundMode;
@property(readonly, nonatomic) _Bool suppressUserNotificationPermissionAlert;
@property(readonly, nonatomic) _Bool systemAppSupportsLocalNotifications; // @synthesize systemAppSupportsLocalNotifications=_systemAppSupportsLocalNotifications;
@property(readonly, nonatomic, getter=isSystemApplication) _Bool systemApplication;
@property(readonly, nonatomic, getter=isTigrisLinked) _Bool tigrisLinked; // @synthesize tigrisLinked=_isTigrisLinked;
@property(readonly, nonatomic) unsigned long long uninstallCapability; // @synthesize uninstallCapability=_uninstallCapability;
@property(readonly, nonatomic) NSSet *urlSchemes; // @synthesize urlSchemes=_urlSchemes;
@property(readonly, nonatomic) NSUserDefaults *userDefaults;
@property(readonly, nonatomic) _Bool usesRLNDataProvider; // @synthesize usesRLNDataProvider=_usesRLNDataProvider;
@property(readonly, nonatomic) _Bool usesSplashBoard; // @synthesize usesSplashBoard=_usesSplashBoard;
@property(readonly, copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(readonly, nonatomic) unsigned long long visibilityOverride; // @synthesize visibilityOverride=_visibilityOverride;
@property(readonly, nonatomic) unsigned long long voipClass; // @synthesize voipClass=_voipClass;
@property(readonly, nonatomic) _Bool wantsExclusiveForeground; // @synthesize wantsExclusiveForeground=_wantsExclusiveForeground;
@property(readonly, nonatomic) _Bool wantsFullScreen; // @synthesize wantsFullScreen=_wantsFullScreen;
@property(readonly, nonatomic) _Bool wantsLaunchWithoutPNG; // @synthesize wantsLaunchWithoutPNG=_wantsLaunchWithoutPNG;
@property(readonly, nonatomic) _Bool wasGameCenterEverEnabled; // @synthesize wasGameCenterEverEnabled=_wasGameCenterEverEnabled;
@property(readonly, nonatomic) long long whitePointAdaptivityStyle; // @synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle;
@property(readonly, nonatomic, getter=isYukonELinked) _Bool yukonELinked; // @synthesize yukonELinked=_isYukonELinked;
@property(readonly, nonatomic, getter=isYukonLinked) _Bool yukonLinked; // @synthesize yukonLinked=_isYukonLinked;
@end

