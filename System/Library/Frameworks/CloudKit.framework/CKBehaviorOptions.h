/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString, NSUserDefaults;

@interface CKBehaviorOptions : NSObject {

	BOOL _didReadAutomatedDeviceGroup;
	int _mcToken;
	int _ckToken;
	NSMutableDictionary* _cachedPrefs;
	NSObject*<OS_dispatch_queue> _cachedPrefsQueue;
	NSString* _automatedDeviceGroup;
	NSUserDefaults* _automatedDeviceGroupDefaults;

}

@property (nonatomic,retain) NSMutableDictionary * cachedPrefs;                          //@synthesize cachedPrefs=_cachedPrefs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cachedPrefsQueue;              //@synthesize cachedPrefsQueue=_cachedPrefsQueue - In the implementation block
@property (assign,nonatomic) int mcToken;                                                //@synthesize mcToken=_mcToken - In the implementation block
@property (assign,nonatomic) int ckToken;                                                //@synthesize ckToken=_ckToken - In the implementation block
@property (assign) BOOL didReadAutomatedDeviceGroup;                                     //@synthesize didReadAutomatedDeviceGroup=_didReadAutomatedDeviceGroup - In the implementation block
@property (nonatomic,retain) NSString * automatedDeviceGroup;                            //@synthesize automatedDeviceGroup=_automatedDeviceGroup - In the implementation block
@property (nonatomic,retain) NSUserDefaults * automatedDeviceGroupDefaults;              //@synthesize automatedDeviceGroupDefaults=_automatedDeviceGroupDefaults - In the implementation block
+(id)sharedOptions;
-(int)mcToken;
-(void)setSendDebugHeader:(BOOL)arg1 ;
-(void)setTestRunIDHeader:(id)arg1 ;
-(unsigned long long)maxBatchSize;
-(id)deviceCountOverride;
-(id)productName;
-(void)setTranscoderServiceName:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCFNetworkLogging:(BOOL)arg1 ;
-(void)setProductName:(id)arg1 ;
-(NSString *)automatedDeviceGroup;
-(id)customShareServiceBaseURL;
-(void)setCkToken:(int)arg1 ;
-(void)setTranscoderPermittedRemoteMeasurement:(id)arg1 ;
-(id)_urlForKey:(id)arg1 defaultURLString:(id)arg2 ;
-(int)PCSRetryCount;
-(id)_behaviorContainerOptionForKey:(id)arg1 ;
-(id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)setCustomShareServiceBaseURL:(id)arg1 ;
-(BOOL)rollRecordPCSMasterKeys;
-(double)operationTimeout;
-(double)shareAcceptorRetrievingDialogMinPeriod;
-(BOOL)useStingray;
-(void)setDisableCaching:(BOOL)arg1 ;
-(id)_getDataOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(id)customCodeServiceBaseURL;
-(void)setCachedPrefsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)pipelineFetchAllChangesRequests;
-(unsigned long long)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(unsigned long long)arg1 ;
-(int)longlivedOperationThrottlingRetryCount;
-(void)setCKCtlPrompt:(char*)arg1 ;
-(BOOL)forceUploadRequestActivitiesToRunImmediately;
-(id)buildVersion;
-(id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2 ;
-(long long)sqlBatchCount;
-(BOOL)rollRecordMasterKeysOnUnshare;
-(void)setUseEncryption:(BOOL)arg1 ;
-(id)configBaseURL;
-(double)packageGCPeriod;
-(void)setTranscoderFunctionName:(id)arg1 ;
-(BOOL)highPriorityURLDelegates;
-(double)shareAcceptorRetrievingDialogDelay;
-(void)setOperationTimeout:(double)arg1 ;
-(void)setConfigBaseURL:(id)arg1 ;
-(void)setRollRecordPCSMasterKeys:(BOOL)arg1 ;
-(BOOL)optimisticPCS;
-(BOOL)rollZoneSharingKeys;
-(double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2 ;
-(unsigned long long)PCSCacheSize;
-(void)setOptimisticPCS:(BOOL)arg1 ;
-(BOOL)isAppleInternalInstall;
-(id)customCloudDBBaseURL;
-(unsigned long long)maxPackageDownloadsPerBatchWithDefaultValue:(unsigned long long)arg1 ;
-(NSUserDefaults *)automatedDeviceGroupDefaults;
-(id)customDeviceServiceBaseURL;
-(int)longlivedOperationMaxRetryCount;
-(int)cachedRecordExpiryTime;
-(BOOL)useEncryption;
-(void)setIgnoreUploadRequestPushNotifications:(BOOL)arg1 ;
-(void)setDidReadAutomatedDeviceGroup:(BOOL)arg1 ;
-(void)setContainerIdentifierToForceFatalManateeZoneDecryptionFailure:(id)arg1 ;
-(long long)flowControlBudget;
-(double)packageGCGracePeriod;
-(id)testRunIDHeader;
-(id)transcoderFunctionName;
-(double)maximumQueuedFetchWaitTime;
-(void)setAutomatedDeviceGroupDefaults:(NSUserDefaults *)arg1 ;
-(void)_setPref:(id)arg1 forKey:(id)arg2 ;
-(BOOL)logTraffic;
-(const char*)CKCtlPrompt;
-(void)setUseStingray:(BOOL)arg1 ;
-(double)flowControlRegeneration;
-(id)transcoderPermittedRemoteMeasurement;
-(int)defaultRetryAfter;
-(id)containerIdentifierToForceFatalManateeZoneDecryptionFailure;
-(double)maximumThrottleSeconds;
-(void)setShouldProfileSQL:(BOOL)arg1 ;
-(BOOL)CFNetworkLogging;
-(void)setSetupBaseURL:(id)arg1 ;
-(double)flowControlRegenerationOverride;
-(id)productVersion;
-(BOOL)sendDebugHeader;
-(int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2 ;
-(NSMutableDictionary *)cachedPrefs;
-(void)setLogTraffic:(BOOL)arg1 ;
-(int)trafficLogQueueWidth;
-(id)recordNamesForFakingDecryptionFailure;
-(id)setupBaseURL;
-(BOOL)shouldProfileSQL;
-(BOOL)shouldDecryptRecordsBeforeSave;
-(void)setAutomatedDeviceGroup:(NSString *)arg1 ;
-(void)setMcToken:(int)arg1 ;
-(BOOL)sandboxCloudD;
-(double)maxRecentProxyAge;
-(BOOL)compressRequests;
-(void)setDeviceCountOverride:(id)arg1 ;
-(unsigned long long)recordCacheSizeLimit;
-(void)setCustomDeviceServiceBaseURL:(id)arg1 ;
-(BOOL)ignoreUploadRequestPushNotifications;
-(void)setSqlBatchTime:(double)arg1 ;
-(id)customMetricsServiceBaseURL;
-(void)setProductVersion:(id)arg1 ;
-(double)publicIdentitiesExpirationTimeout;
-(void)setCompressRequests:(BOOL)arg1 ;
-(BOOL)enableMMCSMetricsWithDefaultValue:(BOOL)arg1 ;
-(void)_startListeningForNotifications;
-(id)_init;
-(double)maximumWaitAfterFetchRequest;
-(id)containerIdentifierPrefixesUsingDebugBinaries;
-(void)setRollZonePCSIdentities:(BOOL)arg1 ;
-(void)setUsePreauth:(BOOL)arg1 ;
-(BOOL)didReadAutomatedDeviceGroup;
-(BOOL)rollZonePCSIdentities;
-(BOOL)_getBoolOptionForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(void)setTrafficLogMaximumDataSize:(int)arg1 ;
-(int)clientThrottleQueueWidth;
-(void)setSqlBatchCount:(long long)arg1 ;
-(void)setModTimeInAssetCacheEviction:(BOOL)arg1 ;
-(double)minTTRPromptInterval;
-(double)sqlBatchTime;
-(void)setCachedPrefs:(NSMutableDictionary *)arg1 ;
-(id)_behaviorOptionForKey:(id)arg1 ;
-(unsigned long long)savedErrorCount;
-(unsigned long long)maxPackageUploadsPerBatchWithDefaultValue:(unsigned long long)arg1 ;
-(BOOL)useEnhancedPCSEncryptionContext;
-(unsigned long long)recentProxiesToSave;
-(void)setRollRecordMasterKeysOnUnshare:(BOOL)arg1 ;
-(BOOL)evictRecentAssets;
-(int)backgroundSessionConnectionPoolLimitWithDefaultValue:(int)arg1 ;
-(void)setUseEnhancedPCSEncryptionContext:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)cachedPrefsQueue;
-(void)setRollZoneSharingKeys:(BOOL)arg1 ;
-(void)setCustomMetricsServiceBaseURL:(id)arg1 ;
-(void)setCachedRecordExpiryTime:(int)arg1 ;
-(long long)flowControlBudgetOverride;
-(void)setCustomCodeServiceBaseURL:(id)arg1 ;
-(int)ckToken;
-(double)PCSCacheMinTime;
-(BOOL)_buildIsOverridden;
-(id)transcoderServiceName;
-(void)setForceUploadRequestActivitiesToRunImmediately:(BOOL)arg1 ;
-(void)setBuildVersion:(id)arg1 ;
-(BOOL)disableCaching;
-(void)setCustomCloudDBBaseURL:(id)arg1 ;
-(unsigned long long)assetEvictionGracePeriodWithDefaultValue:(unsigned long long)arg1 ;
-(long long)maxRecordPCSMasterKeyRolls;
-(void)dealloc;
-(BOOL)useModTimeInAssetCacheEviction;
-(id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2 ;
-(int)trafficLogMaximumDataSize;
-(BOOL)allowExpiredDNSBehavior;
-(BOOL)usePreauth;
-(id)vettedEmailsTestFormat;
@end
