/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/UNSContentProtectionObserver.h>
#import <libobjc.A.dylib/UNSDefaultDataProviderFactoryObserver.h>
#import <libobjc.A.dylib/UNSNotificationRepositoryDelegate.h>
#import <libobjc.A.dylib/UNSRemoteNotificationServerObserver.h>

@protocol OS_dispatch_queue;
@class UNSApplicationLauncher, UNSApplicationService, UNSAttachmentsRepository, UNSBundleLibrarian, UNSContentProtectionManager, UNSDefaultDataProviderFactory, UNSLocalizationService, UNSUserNotificationServerConnectionListener, UNSUserNotificationServerSettingsConnectionListener, UNSUserNotificationServerRemoteNotificationConnectionListener, UNSNotificationCategoryRepository, UNSNotificationSchedulingService, UNSNotificationAuthorizationService, UNSNotificationSettingsService, UNSNotificationRepository, UNSPendingNotificationRepository, UNSPushRegistrationRepository, UNSRemoteNotificationServer, UNSNotificationScheduleRepository, UNSNotificationTopicRepository, UNSAttachmentsService, UNSLocationMonitor, UNSDaemonLauncher, BKSApplicationStateMonitor, NSSet, NSString, UNSSettingsGateway, NSObject;

@interface UNSUserNotificationServer : NSObject <LSApplicationWorkspaceObserverProtocol, UNSContentProtectionObserver, UNSDefaultDataProviderFactoryObserver, UNSNotificationRepositoryDelegate, UNSRemoteNotificationServerObserver> {

	UNSApplicationLauncher* _applicationLauncher;
	UNSApplicationService* _applicationService;
	UNSAttachmentsRepository* _attachmentsRepository;
	UNSBundleLibrarian* _librarian;
	UNSContentProtectionManager* _contentProtectionManager;
	UNSDefaultDataProviderFactory* _dataProviderFactory;
	UNSLocalizationService* _localizationService;
	UNSUserNotificationServerConnectionListener* _userNotificationServerConnectionListener;
	UNSUserNotificationServerSettingsConnectionListener* _userNotificationServerSettingsConnectionListener;
	UNSUserNotificationServerRemoteNotificationConnectionListener* _userNotificationServerRemoteNotificationConnectionListener;
	UNSNotificationCategoryRepository* _categoryRepository;
	UNSNotificationSchedulingService* _notificationSchedulingService;
	UNSNotificationAuthorizationService* _notificationAuthorizationService;
	UNSNotificationSettingsService* _notificationSettingsService;
	UNSNotificationRepository* _notificationRepository;
	UNSPendingNotificationRepository* _pendingNotificationRepository;
	UNSPushRegistrationRepository* _pushRegistrationRepository;
	UNSRemoteNotificationServer* _remoteNotificationService;
	UNSNotificationScheduleRepository* _notificationScheduleRepository;
	UNSNotificationTopicRepository* _topicRepository;
	UNSAttachmentsService* _attachmentsService;
	UNSLocationMonitor* _locationMonitor;
	UNSDaemonLauncher* _daemonLauncher;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	NSSet* _systemSourceBundleIdentifiers;
	NSString* _libraryDirectory;
	NSString* _directory;
	UNSSettingsGateway* _settingsGateway;
	NSObject*<OS_dispatch_queue> _installedSourceQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)arg1 ;
-(id)_loadAllSystemNotificationSourceDescriptions;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg1 ;
-(void)applicationStateDidChange:(id)arg1 ;
-(void)_migrateUserNotificationsRepositories;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)_migrateNotificationRepository;
-(void)_ensureAttachmentsIntegrity;
-(id)init;
-(void)_addObserverForContentProtectionChanges;
-(void)_localeDidChange;
-(void)_validateNotificationRepository;
-(void)_didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_addObserverForApplicationWorkspaceChanges;
-(void)_removeBundleLibrarianMappingsForSourceDescriptions:(id)arg1 ;
-(id)_sourceDescriptionsForApplications:(id)arg1 ;
-(void)_applicationsDidInstall:(id)arg1 ;
-(void)_addObserverForRemoteNotificationServiceChanges;
-(void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_installedSourceQueue_notificationSourcesDidUninstall:(id)arg1 ;
-(void)_registerLoggers;
-(void)_migrateNotificationSchedule;
-(void)_timeDidChangeSignificantly;
-(void)_backgroundRefreshApplicationsDidChange;
-(void)_addObserverForDataProviderFactoryChanges;
-(void)_migrateNotificationCategories;
-(BOOL)isApplicationForeground:(id)arg1 ;
-(void)_triggerLocationArrowForBundleIdentifier:(id)arg1 ;
-(void)_migratePendingNotificationRequests;
-(void)_addObserverForBackgroundRefreshApplicationChanges;
-(void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_addObserverForSignificantTimeChanges;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)_applicationStateDidRestore;
-(void)_addObserverForApplicationStateMonitor;
-(void)_installedSourceQueue_notificationSourcesDidInstall:(id)arg1 ;
-(void)_addObserverForApplicationStateRestore;
-(void)didChangeNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_removeNotificationSourceDirectories:(id)arg1 ;
-(void)_migrateAttachments;
-(void)_migratePushRegistrations;
-(void)initialSystemNotificationSourcesDidInstall:(id)arg1 applicationsDidInstall:(id)arg2 ;
-(void)_removePushStore;
-(void)_addObserverForLocaleChanges;
@end
