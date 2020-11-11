/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHBatchFetchingArrayDataSource.h>
#import <libobjc.A.dylib/PHPerformChangesRequest.h>

@protocol OS_dispatch_queue;
@class PLLazyObject, PLFileSystemVolume, NSError, NSObject, PLPhotoLibrary, PHPerformChangesRequest, NSHashTable, NSMutableDictionary, NSURL, PLPhotoLibraryBundle, NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient, NSString, NSManagedObjectID, CPLStatus, PLPhotoKitVariationCache, PHPhotoLibraryAppPrivateData, PLPhotoAnalysisServiceClient, PLAssetsdClient, PLCacheMetricsCollectorClient, PHPersistentChangeToken;

@interface PHPhotoLibrary : NSObject <PHBatchFetchingArrayDataSource, PHPerformChangesRequest> {

	PLLazyObject* _lazyPhotoLibrary;
	PLLazyObject* _lazyMainQueueConcurrencyPhotoLibrary;
	PLLazyObject* _lazyMainQueuePhotoLibrary;
	PLLazyObject* _lazyBackgroundQueuePhotoLibrary;
	PLLazyObject* _lazyUserInitiatedQueuePhotoLibrary;
	PLLazyObject* _lazyBackgroundQueueObjectFetchingPhotoLibrary;
	PLLazyObject* _lazyChangeHandlingPhotoLibrary;
	PLLazyObject* _lazyAlbumRootFolderObjectID;
	PLLazyObject* _lazyProjectAlbumRootFolderObjectID;
	PLLazyObject* _lazyAppPrivateData;
	PLLazyObject* _lazyCacheMetricsCollectorClient;
	PLFileSystemVolume* _libraryFileSystemVolume;
	AB _isCompletedPostOpenInitialization;
	BOOL _unknownMergeEvent;
	BOOL _isChangeProcessingPending;
	BOOL _clearsOIDCacheAfterFetchResultDealloc;
	unsigned short _type;
	NSError* _unavailabilityReason;
	NSObject*<OS_dispatch_queue> _queue;
	PLPhotoLibrary* _transactionPhotoLibrary;
	NSObject*<OS_dispatch_queue> _transactionQueue;
	PHPerformChangesRequest* _performChangesRequest;
	NSHashTable* _fetchResults;
	NSHashTable* _internalObservers;
	NSHashTable* _externalObservers;
	NSMutableDictionary* _changeNotificationInfo;
	double _lastChangeProcessingStarted;
	NSHashTable* _availabilityObservers;
	NSURL* _photoLibraryURL;
	PLPhotoLibraryBundle* _photoLibraryBundle;
	NSProgress* _postOpenProgress;
	PAImageConversionServiceClient* _imageConversionServiceClient;
	PAVideoConversionServiceClient* _videoConversionServiceClient;

}

@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,retain) id<PLPhotoAnalysisServiceTaxonomyResolver> taxonomyResolver; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                             //@synthesize queue=_queue - In the implementation block
@property (readonly) PLPhotoLibrary * photoLibrary; 
@property (readonly) PLPhotoLibrary * changeHandlingPhotoLibrary; 
@property (readonly) PLPhotoLibrary * mainQueuePhotoLibrary; 
@property (readonly) PLPhotoLibrary * userInitiatedQueuePhotoLibrary; 
@property (readonly) PLPhotoLibrary * backgroundQueuePhotoLibrary; 
@property (readonly) PLPhotoLibrary * backgroundQueueObjectFetchingPhotoLibrary; 
@property (readonly) PLPhotoLibrary * transactionPhotoLibrary;                                               //@synthesize transactionPhotoLibrary=_transactionPhotoLibrary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> transactionQueue;                                  //@synthesize transactionQueue=_transactionQueue - In the implementation block
@property (nonatomic,retain) PHPerformChangesRequest * performChangesRequest;                                //@synthesize performChangesRequest=_performChangesRequest - In the implementation block
@property (nonatomic,retain) NSHashTable * fetchResults;                                                     //@synthesize fetchResults=_fetchResults - In the implementation block
@property (nonatomic,retain) NSHashTable * internalObservers;                                                //@synthesize internalObservers=_internalObservers - In the implementation block
@property (nonatomic,retain) NSHashTable * externalObservers;                                                //@synthesize externalObservers=_externalObservers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * changeNotificationInfo;                                   //@synthesize changeNotificationInfo=_changeNotificationInfo - In the implementation block
@property (assign,nonatomic) BOOL unknownMergeEvent;                                                         //@synthesize unknownMergeEvent=_unknownMergeEvent - In the implementation block
@property (assign,nonatomic) BOOL isChangeProcessingPending;                                                 //@synthesize isChangeProcessingPending=_isChangeProcessingPending - In the implementation block
@property (assign,nonatomic) double lastChangeProcessingStarted;                                             //@synthesize lastChangeProcessingStarted=_lastChangeProcessingStarted - In the implementation block
@property (nonatomic,retain) NSHashTable * availabilityObservers;                                            //@synthesize availabilityObservers=_availabilityObservers - In the implementation block
@property (retain) NSError * unavailabilityReason;                                                           //@synthesize unavailabilityReason=_unavailabilityReason - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * albumRootFolderObjectID; 
@property (nonatomic,readonly) NSManagedObjectID * projectAlbumRootFolderObjectID; 
@property (nonatomic,readonly) unsigned short type;                                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isSystemPhotoLibrary; 
@property (nonatomic,readonly) BOOL isCloudPhotoLibrary; 
@property (getter=isCloudPhotoLibraryEnabled,nonatomic,readonly) BOOL cloudPhotoLibraryEnabled; 
@property (nonatomic,readonly) BOOL isReadOnlyCloudPhotoLibrary; 
@property (nonatomic,readonly) CPLStatus * cplStatus; 
@property (nonatomic,readonly) NSURL * photoLibraryURL;                                                      //@synthesize photoLibraryURL=_photoLibraryURL - In the implementation block
@property (readonly) PLPhotoLibraryBundle * photoLibraryBundle;                                              //@synthesize photoLibraryBundle=_photoLibraryBundle - In the implementation block
@property (readonly) PLPhotoKitVariationCache * variationCache; 
@property (nonatomic,readonly) PLPhotoLibrary * mainQueueConcurrencyPhotoLibrary; 
@property (nonatomic,readonly) NSProgress * postOpenProgress;                                                //@synthesize postOpenProgress=_postOpenProgress - In the implementation block
@property (nonatomic,readonly) PHPhotoLibraryAppPrivateData * appPrivateData; 
@property (assign,nonatomic) BOOL clearsOIDCacheAfterFetchResultDealloc;                                     //@synthesize clearsOIDCacheAfterFetchResultDealloc=_clearsOIDCacheAfterFetchResultDealloc - In the implementation block
@property (nonatomic,readonly) PLPhotoAnalysisServiceClient * photoAnalysisClient; 
@property (nonatomic,readonly) PLAssetsdClient * assetsdClient; 
@property (nonatomic,readonly) PLCacheMetricsCollectorClient * cacheMetricsCollector; 
@property (nonatomic,retain) PAImageConversionServiceClient * imageConversionServiceClient;                  //@synthesize imageConversionServiceClient=_imageConversionServiceClient - In the implementation block
@property (nonatomic,retain) PAVideoConversionServiceClient * videoConversionServiceClient;                  //@synthesize videoConversionServiceClient=_videoConversionServiceClient - In the implementation block
@property (nonatomic,readonly) PHPersistentChangeToken * currentToken; 
@property (nonatomic,readonly) BOOL isReadyForAnalysis; 
+(Class)PHObjectClassForEntityName:(id)arg1 ;
+(id)photoLibraryForCurrentTransaction;
+(id)stringFromPHPhotoLibraryType:(unsigned short)arg1 ;
+(void)requestAuthorizationForAccessLevel:(long long)arg1 handler:(/*^block*/id)arg2 ;
+(BOOL)_isInternalObserver:(id)arg1 ;
+(void)removeAllUniquedOIDs;
+(id)sharedLazyPhotoLibraryForCMM;
+(id)PHObjectClasses;
+(void)initialize;
+(id)sharedContactStore;
+(id)_sharedPhotoLibrary;
+(id)imagePickerPhotoLibrary;
+(BOOL)setImagePickerPhotoLibrary:(id)arg1 error:(id*)arg2 ;
+(id)sharedMomentSharePhotoLibrary;
+(long long)_photosAccessAllowedForAccessLevel:(long long)arg1 ;
+(BOOL)checkAuthorizationStatusForAPIAccessLevel:(long long)arg1 ;
+(void)_requestAuthorizationForAccessLevel:(long long)arg1 supportsLimited:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
+(void)_forceUserInterfaceReload;
+(id)systemPhotoLibraryURL;
+(BOOL)setSystemPhotoLibraryURL:(id)arg1 error:(id*)arg2 ;
+(const char*)systemPhotoLibraryURLChangeNotificationName;
+(const char*)systemPhotoLibraryAvailableNotificationName;
+(long long)collectionListTypeForIdentifierCode:(id)arg1 ;
+(id)fetchTypeForLocalIdentifierCode:(id)arg1 ;
+(Class)classForFetchType:(id)arg1 ;
+(id)PHObjectClassesByEntityName;
+(Class)PHObjectClassForOID:(id)arg1 ;
+(id)_effectiveRootEntity:(id)arg1 ;
+(id)uniqueObjectIDCache;
+(id)uniquedOIDsFromObjects:(id)arg1 ;
+(void)setNeedsToRepairKeyCuratedAssetForMemories:(id)arg1 ;
+(long long)authorizationStatus;
+(void)assertRunningInExtension;
+(BOOL)hasSharedPhotoLibrary;
+(void)setSharedPhotoLibrary:(id)arg1 ;
+(id)sharedPhotoLibrary;
+(void)requestAuthorization:(/*^block*/id)arg1 ;
+(void)enableMultiLibraryMode;
+(BOOL)isSystemPhotoLibraryURL:(id)arg1 ;
+(unsigned long long)_countOfAssetsAllowedForProcessingInLibrary:(id)arg1 error:(id*)arg2 ;
+(id)predicateForAssetsAnalyzedForFacesWithAssetObjectIDs:(id)arg1 ;
+(long long)authorizationStatusForAccessLevel:(long long)arg1 ;
+(BOOL)shouldDisplayMergeCandidates:(id)arg1 forPerson:(id)arg2 ;
+(id)uniquedOID:(id)arg1 ;
+(id)uniquedOIDs:(id)arg1 ;
+(void)assertTransaction;
+(BOOL)isMultiLibraryModeEnabled;
-(BOOL)isSystemPhotoLibrary;
-(void)registerChangeObserver:(id)arg1 ;
-(PLAssetsdClient *)assetsdClient;
-(void)close;
-(void)_addObserver:(id)arg1 ;
-(id)managedObjectContext;
-(void)unregisterChangeObserver:(id)arg1 ;
-(PAImageConversionServiceClient *)imageConversionServiceClient;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setClearsOIDCacheAfterFetchResultDealloc:(BOOL)arg1 ;
-(void)setVideoConversionServiceClient:(PAVideoConversionServiceClient *)arg1 ;
-(id)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(BOOL)arg3 withOptions:(id)arg4 error:(id*)arg5 ;
-(id)migrationDate;
-(void)_removeObserver:(id)arg1 ;
-(BOOL)requestAssetRevGeocodingWithError:(id*)arg1 ;
-(id<PLPhotoAnalysisServiceTaxonomyResolver>)taxonomyResolver;
-(void)setTaxonomyResolver:(id<PLPhotoAnalysisServiceTaxonomyResolver>)arg1 ;
-(id)sceneInformationFromStartDate:(id)arg1 toEndDate:(id)arg2 ;
-(id)sceneTaxonomyDetectorNodeSceneIDsFromSceneID:(unsigned)arg1 ;
-(id)init;
-(void)setUnknownMergeEvent:(BOOL)arg1 ;
-(id)pl_syncProgressAlbums;
-(PLPhotoLibrary *)photoLibrary;
-(void)setChangeRequest:(id)arg1 forUUID:(id)arg2 ;
-(id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id*)arg4 ;
-(void)recordUpdateRequest:(id)arg1 ;
-(unsigned long long)countOfClusteringEligibleFaces;
-(NSString *)debugDescription;
-(BOOL)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)requestTextFeaturesForMomentLocalIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)recordInsertRequest:(id)arg1 ;
-(NSURL *)photoLibraryURL;
-(void)generateMemoriesRelatedDiagnosticsLogsWithReply:(/*^block*/id)arg1 ;
-(PLPhotoKitVariationCache *)variationCache;
-(void)requestGenerateQuestionsWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)isReadyForAnalysis;
-(void)setFetchResults:(NSHashTable *)arg1 ;
-(PLPhotoAnalysisServiceClient *)photoAnalysisClient;
-(void)cancelOperationsWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 withError:(id*)arg2 ;
-(void)unloadGraph;
-(id)requestGraphSearchMetadataWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)isCloudPhotoLibraryEnabled;
-(NSHashTable *)fetchResults;
-(BOOL)requestHighlightEnrichmentWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)initWithPhotoLibraryURL:(id)arg1 ;
-(void)_processPendingChanges;
-(void)resetLimitedLibraryAccessForApplication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)uuid;
-(PHPersistentChangeToken *)currentToken;
-(BOOL)requestEnrichmentWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)countOfReferencedMediaWithCompletionHandler:(/*^block*/id)arg1 ;
-(PAVideoConversionServiceClient *)videoConversionServiceClient;
-(unsigned short)type;
-(void)setTransactionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)allowedEntities;
-(id)libraryID;
-(CPLStatus *)cplStatus;
-(void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)bfa_photoLibrary;
-(id)bfa_tombstoneObjectForOID:(id)arg1 uuid:(id)arg2 propertyHint:(unsigned long long)arg3 ;
-(id)bfa_fetchObjectsForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 ;
-(id)bfa_fetchedObjectsForOIDs:(id)arg1 propertySetClass:(Class)arg2 ;
-(void)loadGraph;
-(id)_assetOIDsForHighlight:(id)arg1 withContext:(id)arg2 ;
-(double)_analysisProgressForHighlight:(id)arg1 fetchCountBlock:(/*^block*/id)arg2 ;
-(void)_beginTransaction;
-(void)requestGraphRebuildWithOptions:(id)arg1 progress:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)countOfUnprocessedFaceCrops;
-(unsigned long long)countOfDirtyFaceGroups;
-(unsigned long long)countOfUnclusteredFaces;
-(unsigned long long)countOfFaceCropsToBeGenerated;
-(id)newFaceCropsToBeGeneratedFetchOptions;
-(id)newClusteringEligibleFacesFetchOptions;
-(id)newUnclusteredFacesFetchOptions;
-(void)requestTotalProgressCountsWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestAnalysisProgressWithCompletion:(/*^block*/id)arg1 ;
-(void)requestAnalysisProgressCountsWithCompletion:(/*^block*/id)arg1 ;
-(double)faceAnalysisProgressForHighlight:(id)arg1 error:(id*)arg2 ;
-(id)assetUUIDsAllowedForCurationFromAssets:(id)arg1 ;
-(id)faceAnalysisProgressCounts;
-(NSObject*<OS_dispatch_queue>)transactionQueue;
-(id)analysisProgressCountsForWorkerType:(short)arg1 ;
-(double)ratioOfAssetsAtOrAboveSceneAnalysisVersion:(unsigned long long)arg1 ;
-(double)ratioOfAssetsWithScenesProcessed;
-(double)ratioOfAssetsWithFacesProcessed;
-(void)requestHighlightEstimatesWithCompletion:(/*^block*/id)arg1 ;
-(double)sceneAnalysisProgressForHighlight:(id)arg1 usingSceneVersion:(unsigned long long)arg2 ;
-(id)workInfoForAnalysisWithWorkerType:(short)arg1 additionalStatesToExclude:(id)arg2 fetchLimit:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)memoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)changeRequestForUUID:(id)arg1 ;
-(id)highlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)curationDebugInformationForAssetLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)invalidateTransientGraphCachesAndReturnError:(id*)arg1 ;
-(BOOL)isFaceProcessingFinished;
-(id)curationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)sharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)graphStatisticsDescription:(id*)arg1 ;
-(id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 error:(id*)arg4 ;
-(id)relatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)exportGraphForPurpose:(id)arg1 error:(id*)arg2 ;
-(id)relatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)graphStatusDescription:(id*)arg1 ;
-(id)sharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)invalidatePersistentGraphCachesAndReturnError:(id*)arg1 ;
-(void)requestGraphRebuildWithProgress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestGraphRebuildProgressWithCompletion:(/*^block*/id)arg1 ;
-(void)requestGraphReadyNotificationWithCoalescingIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runPFLWithAttachments:(id)arg1 recipeUserInfo:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(id)_faceAnalysisProcessingCounts;
-(void)requestSearchIndexUpdates:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestSearchIndexGraphUpdates:(id)arg1 supportingData:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)sortedArrayOfPersonIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)allSocialGroupsForPersonIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)socialGroupsForPersonIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)assetIdentifiersForPersonIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)suggestedMePersonIdentifierWithError:(id*)arg1 ;
-(void)personPromotionProcessingStatusForUserInterface:(/*^block*/id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)inferredContactByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 ;
-(id)inferredContactForPersonLocalIdentifier:(id)arg1 ;
-(id)suggestedContactsForPersonLocalIdentifier:(id)arg1 ;
-(id)suggestionsForPersonLocalIdentifier:(id)arg1 clusterSequenceNumbers:(id)arg2 excludePersonLocalIdentifiers:(id)arg3 minimumSuggestionFaceCount:(unsigned long long)arg4 ;
-(id)faceClusterSequenceNumbersOfFacesWithClusterSequenceNumbers:(id)arg1 error:(id*)arg2 ;
-(id)faceClusterSequenceNumbersOfKeyFacesInAlgorithmicFaceGroupsForPerson:(id)arg1 verifiedClusterSequenceNumbers:(id)arg2 ;
-(void)requestTotalProgressCountsForWorkerType:(short)arg1 states:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_photoLibraryForAnalysisState;
-(void)recordDeleteRequest:(id)arg1 ;
-(id)requestSynonymsDictionariesWithError:(id*)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setWidgetTimelineGeneratedForDisplaySize:(CGSize)arg1 ;
-(id)_lazyPhotoLibrary;
-(id)requestZeroKeywordsWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)initSharedLibrary;
-(id)initMomentShareLibrary;
-(BOOL)isCloudPhotoLibrary;
-(BOOL)isReadOnlyCloudPhotoLibrary;
-(PHPhotoLibraryAppPrivateData *)appPrivateData;
-(PLCacheMetricsCollectorClient *)cacheMetricsCollector;
-(id)_initializeAppPrivateData;
-(BOOL)_postOpenInitializationWithError:(id*)arg1 ;
-(BOOL)createPhotoLibraryWithError:(id*)arg1 ;
-(BOOL)createPhotoLibraryWithOptions:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)createPhotoLibraryUsingOptions:(id)arg1 error:(id*)arg2 ;
-(id)plLibraryOptionsFromPHOptions:(id)arg1 createOptions:(unsigned long long*)arg2 ;
-(BOOL)openAndWaitWithUpgrade:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)openAndWaitWithUpgrade:(BOOL)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)upgradePhotoLibraryUsingOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)closeWithReason:(id)arg1 ;
-(BOOL)isPHPhotoLibraryForCMM;
-(id)initWithPLPhotoLibrary:(id)arg1 ;
-(id)initWithPLPhotoLibrary:(id)arg1 type:(unsigned short)arg2 ;
-(id)initWithPhotoLibraryURL:(id)arg1 type:(unsigned short)arg2 ;
-(id)initWithPhotoLibraryBundle:(id)arg1 type:(unsigned short)arg2 ;
-(void)_invalidateEverythingWithReason:(id)arg1 ;
-(id)pl_photoLibraryForCMM;
-(PLPhotoLibrary *)mainQueueConcurrencyPhotoLibrary;
-(PLPhotoLibrary *)mainQueuePhotoLibrary;
-(id)mainQueueManagedObjectContext;
-(PLPhotoLibrary *)backgroundQueuePhotoLibrary;
-(PLPhotoLibrary *)userInitiatedQueuePhotoLibrary;
-(PLPhotoLibrary *)backgroundQueueObjectFetchingPhotoLibrary;
-(id)photoLibraryForCurrentQueueQoS;
-(id)managedObjectContextForCurrentQueueQoS;
-(id)objectFetchingContextForCurrentQueueQoS;
-(id)objectFetchingManagedObjectContextForObject:(id)arg1 propertySet:(id)arg2 ;
-(PLPhotoLibrary *)changeHandlingPhotoLibrary;
-(void)registerFetchResult:(id)arg1 ;
-(void)unregisterFetchResult:(id)arg1 ;
-(void)registerAvailabilityObserver:(id)arg1 ;
-(void)unregisterAvailabilityObserver:(id)arg1 ;
-(void)_startWatchingForLibraryAvailability;
-(void)_handleLibraryBecameUnavailable:(id)arg1 reason:(id)arg2 ;
-(BOOL)_setUnavailabilityReason:(id)arg1 ;
-(void)_stopWatchingForLibraryAvailability;
-(void)_startWatchingFileSystemVolumeForLibraryAvailability;
-(void)_stopWatchingFileSystemVolumeForLibraryAvailability;
-(void)_startObservingServiceConnectionInvalidated;
-(void)_stopObservingServiceConnectionInvalidated;
-(void)_handleServiceConnectionClosed:(id)arg1 ;
-(void)_notifyAvailabilityObserversWithReason:(id)arg1 ;
-(void)_onQueueNotifyAvailabilityObserversWithReason:(id)arg1 ;
-(id)_popChangesRequest;
-(void)appPrivateDataWriteFailedWithError:(id)arg1 ;
-(void)_commitTransactionOnExecutionContext:(id)arg1 withInstrumentation:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)_initialRetryCountForChangesRequest:(id)arg1 ;
-(void)_endTransaction;
-(void)assertTransaction;
-(void)performChanges:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_sendChangesRequest:(id)arg1 onExecutionContext:(id)arg2 withInstrumentation:(id)arg3 retryCount:(long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)_sendChangesRequest:(id)arg1 onExecutionContext:(id)arg2 withInstrumentation:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)_errorForAuthorizationStatus:(long long)arg1 accessLevel:(long long)arg2 ;
-(id)_getPhotoKitClient;
-(id)_cloudIdentifierKeysByFetchType;
-(id)localIdentifiersForCloudIdentifiers:(id)arg1 ;
-(id)cloudIdentifiersForLocalIdentifiers:(id)arg1 ;
-(void)_cancelTransactionOnExecutionContext:(id)arg1 withInstrumentation:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_denyTransactionOnExecutionContext:(id)arg1 withInstrumentation:(id)arg2 authorizationStatus:(long long)arg3 accessLevel:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)_preflightRequest:(id)arg1 withError:(id*)arg2 ;
-(void)performCancellableChanges:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)performCancellableChangesAndWait:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)performChangesAndWait:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)urlForApplicationDataFolderIdentifier:(long long)arg1 ;
-(id)queryForType:(id)arg1 withIdentifiers:(id)arg2 local:(BOOL)arg3 ;
-(id)fetchPHObjectsForOIDs:(id)arg1 ;
-(id)fetchDictionariesByPHClassForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 includeTrash:(BOOL)arg3 ;
-(id)fetchPHObjectsForOIDs:(id)arg1 propertyHint:(unsigned long long)arg2 includeTrash:(BOOL)arg3 ;
-(id)fetchUpdatedObject:(id)arg1 ;
-(void)dealloc;
-(id)fetchedObjectsForOIDs:(id)arg1 propertySetClass:(Class)arg2 ;
-(id)fetchPHObjectsForUUIDs:(id)arg1 entityName:(id)arg2 ;
-(id)librarySpecificFetchOptions;
-(NSManagedObjectID *)albumRootFolderObjectID;
-(NSManagedObjectID *)projectAlbumRootFolderObjectID;
-(void)handleMergeNotification:(id)arg1 ;
-(id)fetchPersistentChangesSinceToken:(id)arg1 error:(id*)arg2 ;
-(id)fetchPersistentChangesWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)_fetchPersistentChangesSinceToken:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_notifiyPersistentChangeObservers;
-(NSError *)unavailabilityReason;
-(void)setUnavailabilityReason:(NSError *)arg1 ;
-(PLPhotoLibrary *)transactionPhotoLibrary;
-(PHPerformChangesRequest *)performChangesRequest;
-(void)setPerformChangesRequest:(PHPerformChangesRequest *)arg1 ;
-(NSHashTable *)internalObservers;
-(void)setInternalObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)externalObservers;
-(void)setExternalObservers:(NSHashTable *)arg1 ;
-(NSMutableDictionary *)changeNotificationInfo;
-(void)setChangeNotificationInfo:(NSMutableDictionary *)arg1 ;
-(BOOL)unknownMergeEvent;
-(BOOL)isChangeProcessingPending;
-(void)setIsChangeProcessingPending:(BOOL)arg1 ;
-(double)lastChangeProcessingStarted;
-(void)setLastChangeProcessingStarted:(double)arg1 ;
-(NSHashTable *)availabilityObservers;
-(void)setAvailabilityObservers:(NSHashTable *)arg1 ;
-(PLPhotoLibraryBundle *)photoLibraryBundle;
-(NSProgress *)postOpenProgress;
-(BOOL)clearsOIDCacheAfterFetchResultDealloc;
-(void)setImageConversionServiceClient:(PAImageConversionServiceClient *)arg1 ;
-(id)sharingSuggestionWithRandomPick:(BOOL)arg1 fallbackToRecentMoments:(BOOL)arg2 needsNotification:(BOOL)arg3 ;
@end
