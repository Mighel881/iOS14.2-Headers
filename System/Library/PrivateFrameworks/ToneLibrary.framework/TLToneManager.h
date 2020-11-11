/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSCopying;
@class TLAccessQueue, NSDictionary, NPSDomainAccessor, NSString;

@interface TLToneManager : NSObject {

	TLAccessQueue* _accessQueue;
	NSDictionary* _tonesByIdentifier;
	NSDictionary* _toneIdentifiersBySyncIdentifier;
	NSDictionary* _alertTonesByIdentifier;
	NSDictionary* _toneIdentifierAliasMap;
	id<NSCopying> _contentProtectionStateObserverToken;
	BOOL _cachedWatchPrefersSalientNotifications;
	BOOL _hasValidCachedWatchPrefersSalientNotifications;
	BOOL _shouldSkipNextWatchPrefersSalientNotificationsDidChangeNotification;
	NPSDomainAccessor* _transientNanoPreferencesDomainAccessor;
	BOOL _shouldUseServiceToAccessTonePreferences;
	NSDictionary* _cachedTonePreferences;
	BOOL _shouldIgnoreNextToneDidChangeNotification;

}

@property (nonatomic,readonly) NSString * _rootDirectory; 
@property (nonatomic,readonly) NSString * _deviceITunesRingtoneDirectory; 
@property (nonatomic,readonly) NSString * _deviceITunesRingtoneInformationPlist; 
@property (nonatomic,readonly) NSString * _iTunesRingtoneDirectory; 
@property (nonatomic,readonly) NSString * _iTunesRingtoneInformationPlist; 
@property (nonatomic,readonly) NSString * _systemRingtoneDirectory; 
+(id)sharedToneManager;
+(id)_defaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
+(id)_currentOverridePolicyPreferenceKeyForAlertType:(long long)arg1 ;
+(BOOL)_ensureTCCAccessPreflightAndCheckForFileExistenceAtPath:(id)arg1 ;
+(id)_abbreviatedDescriptionOfMediaPlaybackArchive:(id)arg1 ;
+(id)_systemWideTonePreferenceKeyForAlertType:(long long)arg1 ;
+(BOOL)_migrateLegacyToneSettings;
+(id)_abbreviatedDescriptionOfToneIdentifierWithUnderlyingMediaPlaybackArchiveForLogging:(id)arg1 ;
-(BOOL)bb_isToneEnabledForSectionInfo:(id)arg1 ;
-(BOOL)bb_isToneEnabledForAlertType:(long long)arg1 topic:(id)arg2 ;
-(id)bb_toneIdentifierForAlertConfiguration:(id)arg1 ;
-(BOOL)bb_isToneEnabledForAlertConfiguration:(id)arg1 ;
-(void)_setWatchPrefersSalientNotifications:(BOOL)arg1 ;
-(id)currentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(void)_handleTonePreferencesChangedNotificationForPreferencesKinds:(unsigned long long)arg1 ;
-(id)currentToneIdentifierForAlertType:(long long)arg1 accountIdentifier:(id)arg2 ;
-(BOOL)_toneWithIdentifierIsITunesRingtone:(id)arg1 ;
-(void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 topic:(id)arg3 ;
-(void)_handleProtectionContentUnlockedEvent;
-(id)_tonePreferencesFromService;
-(id)_addToneEntries:(id)arg1 toManifestAtPath:(id)arg2 mediaDirectory:(id)arg3 shouldSkipReload:(BOOL)arg4 ;
-(void)_handleDeviceRingtonesChangedNotification;
-(id)init;
-(long long)_currentOverridePolicyForAlertType:(long long)arg1 didFindAlertOverridePolicy:(BOOL*)arg2 ;
-(id)_systemEmbeddedSoundDirectory;
-(id)defaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(id)_toneIdentifierForFileAtPath:(id)arg1 isValid:(BOOL*)arg2 ;
-(void)_loadToneIdentifierAliasMap;
-(id)_installedTones;
-(NSString *)_deviceITunesRingtoneInformationPlist;
-(NSString *)_iTunesRingtoneInformationPlist;
-(BOOL)_removeAllTones;
-(id)_toneWithIdentifier:(id)arg1 ;
-(BOOL)_toneWithIdentifierIsDefaultRingtone:(id)arg1 ;
-(id)subtitleForToneIdentifier:(id)arg1 ;
-(long long)_evaluateOrphanEntriesCleanupStatusForcingReevaluationIfPreviouslyDone:(BOOL)arg1 returningFilePathsForFoundOrphans:(id*)arg2 wasAffectedByAccidentalToneDeletion:(BOOL*)arg3 ;
-(BOOL)_removeTonesFromManifestAtPath:(id)arg1 fileNames:(id)arg2 shouldSkipReload:(BOOL)arg3 alreadyLockedManifest:(BOOL)arg4 removedEntries:(id*)arg5 ;
-(id)_soundForToneIdentifier:(id)arg1 ;
-(id)_localizedNameOfToneWithIdentifier:(id)arg1 ;
-(id)_importPurchasedToneWithMetadata:(id)arg1 fileName:(id)arg2 ;
-(BOOL)_importSyncedToneWithMetadata:(id)arg1 fileName:(id)arg2 ;
-(BOOL)_removeToneWithIdentifier:(id)arg1 orSyncIdentifier:(id)arg2 ;
-(BOOL)_removeToneFromManifestAtPath:(id)arg1 fileName:(id)arg2 ;
-(BOOL)_loadITunesRingtoneInfoPlistAtPath:(id)arg1 ;
-(BOOL)_toneWithIdentifierIsSystemAlertTone:(id)arg1 ;
-(id)_systemWatchSoundDirectory;
-(BOOL)_wasAffectedByAccidentalToneDeletion;
-(id)_allSyncedTones;
-(BOOL)_transferPurchasedToITunes:(id)arg1 ;
-(id)_baseDirectoryForAlertToneSoundFiles;
-(void)_registerDidRequestResetSyncPostAccidentalToneDeletion;
-(id)currentToneNameForAlertType:(long long)arg1 ;
-(BOOL)_removeToneWithIdentifier:(id)arg1 ;
-(BOOL)_hasUnderlyingPlaybackArchiveForToneIdentifier:(id)arg1 ;
-(id)_defaultRingtonePath;
-(void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3 ;
-(id)_currentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(id)_systemSoundDirectory;
-(void)removeImportedToneWithIdentifier:(id)arg1 ;
-(id)_addToneToManifestAtPath:(id)arg1 metadata:(id)arg2 fileName:(id)arg3 mediaDirectory:(id)arg4 ;
-(id)nameForToneIdentifier:(id)arg1 ;
-(unsigned)currentToneSoundIDForAlertType:(long long)arg1 ;
-(BOOL)_toneWithIdentifierIsAlarmWakeUp:(id)arg1 ;
-(void)importTone:(id)arg1 metadata:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)filePathForToneIdentifier:(id)arg1 ;
-(int)_lockManifestAtPath:(id)arg1 ;
-(id)_underlyingPlaybackArchiveForToneIdentifier:(id)arg1 ;
-(void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 ;
-(NSString *)_systemRingtoneDirectory;
-(NSString *)_rootDirectory;
-(BOOL)_ensureDirectoryExistsAtPath:(id)arg1 ;
-(NSString *)_deviceITunesRingtoneDirectory;
-(id)_tonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2 ;
-(id)_toneForSyncIdentifier:(id)arg1 ;
-(void)_removeAllSyncedData;
-(id)initWithITunesRingtonePlistAtPath:(id)arg1 ;
-(id)_currentToneWatchAlertPolicyPreferenceKeyForAlertType:(long long)arg1 topic:(id)arg2 ;
-(unsigned)currentToneSoundIDForAlertType:(long long)arg1 topic:(id)arg2 ;
-(id)_systemNewSoundDirectory;
-(long long)_currentOverridePolicyForAlertType:(long long)arg1 ;
-(NSString *)_iTunesRingtoneDirectory;
-(void)_performBlockInAccessQueue:(/*^block*/id)arg1 ;
-(id)defaultRingtoneIdentifier;
-(BOOL)_toneWithIdentifierIsValid:(id)arg1 ;
-(id)_aliasForToneIdentifier:(id)arg1 ;
-(id)_removeOrphanedPlistEntriesInManifestAtPath:(id)arg1 mediaDirectory:(id)arg2 ;
-(void)_didSetTonePreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned long long)arg3 ;
-(id)_fileNameFromToneIdentifier:(id)arg1 withPrefix:(id)arg2 ;
-(long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2 ;
-(id)currentToneIdentifierForAlertType:(long long)arg1 ;
-(BOOL)_watchPrefersSalientNotifications;
-(BOOL)toneWithIdentifierIsValid:(id)arg1 ;
-(BOOL)_removeToneWithSyncIdentifier:(id)arg1 ;
-(void)_handleWatchPrefersSalientNotificationDidChange;
-(id)_defaultPreferablyNonSilentToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(id)_systemEmbeddedModernSoundDirectory;
-(id)_nameForToneIdentifier:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)_previewSoundForToneIdentifier:(id)arg1 ;
-(id)_filePathForToneIdentifier:(id)arg1 isValid:(BOOL*)arg2 ;
-(BOOL)hasSpecificDefaultToneIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(void)_setCurrentOverridePolicy:(long long)arg1 forAlertType:(long long)arg2 ;
-(BOOL)_setToneIdentifierUsingService:(id)arg1 keyedByTopic:(id)arg2 forPreferenceKey:(id)arg3 ;
-(long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 ;
-(void)_reloadTones;
-(id)_alarmWakeUpRingtoneDirectory;
-(unsigned long long)_installedTonesSize;
-(void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3 ;
-(void)_loadAlertToneInfo;
-(long long)_removeOrphanedManifestEntriesReturningFilePathsForFoundOrphans:(id*)arg1 ;
-(BOOL)_toneWithIdentifierIsMediaPlaybackArchive:(id)arg1 ;
-(BOOL)_toneWithIdentifierIsNonDefaultSystemRingtone:(id)arg1 ;
-(id)_toneIdentifierWithUnderlyingPlaybackArchive:(id)arg1 ;
-(void)setCurrentToneIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3 ;
-(void)_reloadTonesAfterExternalChange;
-(long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 accountIdentifier:(id)arg2 ;
-(id)defaultToneIdentifierForAlertType:(long long)arg1 ;
-(long long)_currentToneWatchAlertPolicyForAlertType:(long long)arg1 topic:(id)arg2 didFindPersistedWatchAlertPolicy:(BOOL*)arg3 ;
-(void)dealloc;
-(id)_newServiceConnection;
-(void)_setCurrentToneWatchAlertPolicy:(long long)arg1 forAlertType:(long long)arg2 ;
-(id)_defaultRingtoneName;
@end
