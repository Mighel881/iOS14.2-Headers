/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FMF/FMFXPCInternalClientProtocol.h>

@protocol FMFSessionDelegate, OS_dispatch_queue;
@class NSOperationQueue, NSMutableSet, NSXPCConnection, NSSet, NSMutableDictionary, NSObject, FMFuture, NSString;

@interface FMFSession : NSObject <FMFXPCInternalClientProtocol> {

	BOOL _isModelInitialized;
	id<FMFSessionDelegate> _delegate;
	NSOperationQueue* _delegateQueue;
	NSMutableSet* _internalHandles;
	NSXPCConnection* _connection;
	NSSet* _cachedGetHandlesSharingLocationsWithMe;
	NSSet* _cachedGetHandlesFollowingMyLocation;
	NSMutableDictionary* _cachedLocationForHandleByHandle;
	NSMutableDictionary* _cachedOfferExpirationForHandleByHandle;
	NSMutableDictionary* _cachedCanShareLocationWithHandleByHandle;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _handlesQueue;
	FMFuture* _sessionInvalidationFuture;
	FMFuture* _sessionInterruptionFuture;

}

@property (nonatomic,retain) NSMutableSet * internalHandles;                                              //@synthesize internalHandles=_internalHandles - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSSet * cachedGetHandlesSharingLocationsWithMe;                              //@synthesize cachedGetHandlesSharingLocationsWithMe=_cachedGetHandlesSharingLocationsWithMe - In the implementation block
@property (nonatomic,retain) NSSet * cachedGetHandlesFollowingMyLocation;                                 //@synthesize cachedGetHandlesFollowingMyLocation=_cachedGetHandlesFollowingMyLocation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedLocationForHandleByHandle;                       //@synthesize cachedLocationForHandleByHandle=_cachedLocationForHandleByHandle - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedOfferExpirationForHandleByHandle;                //@synthesize cachedOfferExpirationForHandleByHandle=_cachedOfferExpirationForHandleByHandle - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedCanShareLocationWithHandleByHandle;              //@synthesize cachedCanShareLocationWithHandleByHandle=_cachedCanShareLocationWithHandleByHandle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                                //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlesQueue;                                   //@synthesize handlesQueue=_handlesQueue - In the implementation block
@property (assign,nonatomic) BOOL isModelInitialized;                                                     //@synthesize isModelInitialized=_isModelInitialized - In the implementation block
@property (nonatomic,retain) FMFuture * sessionInvalidationFuture;                                        //@synthesize sessionInvalidationFuture=_sessionInvalidationFuture - In the implementation block
@property (nonatomic,retain) FMFuture * sessionInterruptionFuture;                                        //@synthesize sessionInterruptionFuture=_sessionInterruptionFuture - In the implementation block
@property (nonatomic,copy) NSSet * handles; 
@property (assign,nonatomic,__weak) id<FMFSessionDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * delegateQueue;                                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)isProvisionedForLocationSharing;
+(BOOL)FMFAllowed;
+(BOOL)isAnyAccountManaged;
+(BOOL)FMFRestricted;
-(oneway void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(oneway void)networkReachabilityUpdated:(BOOL)arg1 ;
-(oneway void)didUpdateFollowers:(id)arg1 ;
-(void)applicationDidEnterBackground;
-(oneway void)didUpdateFences:(id)arg1 ;
-(void)setHandles:(NSSet *)arg1 ;
-(oneway void)didUpdatePreferences:(id)arg1 ;
-(oneway void)didUpdatePendingOffersForHandles:(id)arg1 ;
-(oneway void)didUpdateFollowing:(id)arg1 ;
-(oneway void)abPreferencesDidChange;
-(oneway void)abDidChange;
-(NSSet *)handles;
-(oneway void)didAddFollowerHandle:(id)arg1 ;
-(void)receivedMappingPacket:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)didReceiveServerError:(id)arg1 ;
-(oneway void)didRemoveFollowerHandle:(id)arg1 ;
-(oneway void)didUpdateActiveDeviceList:(id)arg1 ;
-(oneway void)didStartFollowingHandle:(id)arg1 ;
-(oneway void)didStopFollowingHandle:(id)arg1 ;
-(oneway void)didUpdateFavorites:(id)arg1 ;
-(BOOL)is5XXError:(id)arg1 ;
-(oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(oneway void)modelDidLoad;
-(void)setHandlesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2 ;
-(oneway void)didUpdateHideFromFollowersStatus:(BOOL)arg1 ;
-(void)didReceiveFriendshipRequest:(id)arg1 ;
-(void)removeFavorite:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)decryptPayload:(id)arg1 withToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)fencesForHandles:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getHandlesSharingLocationsWithMe:(/*^block*/id)arg1 ;
-(id)getFavoritesSharingLocationWithMe;
-(id)__connection;
-(void)setAllowFriendRequestsEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)didUpdateLocations:(id)arg1 ;
-(void)setIsModelInitialized:(BOOL)arg1 ;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(id)init;
-(void)favoritesForMaxCount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)contactForPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id<FMFSessionDelegate>)delegate;
-(void)getRecordIdForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)triggerWithUUID:(id)arg1 forFenceWithID:(id)arg2 withStatus:(id)arg3 forDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sendIDSMessage:(id)arg1 toIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)cachedCanShareLocationWithHandleByHandle;
-(void)getAccountEmailAddress:(/*^block*/id)arg1 ;
-(void)getPrettyNameForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(double)maxLocatingInterval;
-(void)encryptPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setInternalHandles:(NSMutableSet *)arg1 ;
-(void)_checkAndDisplayMeDeviceSwitchAlert;
-(void)locatingInProgressChanged:(id)arg1 ;
-(id)verifyRestrictionsAndShowDialogIfRequired;
-(void)addFavorite:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)showMeDeviceAlert;
-(BOOL)hasModelInitialized;
-(id)getAllDevices;
-(void)addInvalidationHander:(/*^block*/id)arg1 ;
-(void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setCachedLocationForHandleByHandle:(NSMutableDictionary *)arg1 ;
-(void)reloadDataIfNotLoaded;
-(id)getActiveLocationSharingDevice;
-(void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSMutableDictionary *)cachedOfferExpirationForHandleByHandle;
-(NSOperationQueue *)delegateQueue;
-(void)setSessionInvalidationFuture:(FMFuture *)arg1 ;
-(void)setExpiredInitTimestamp;
-(void)crashDaemon;
-(void)_daemonDidLaunch;
-(void)setCachedCanShareLocationWithHandleByHandle:(NSMutableDictionary *)arg1 ;
-(NSSet *)cachedGetHandlesFollowingMyLocation;
-(oneway void)iCloudAccountNameWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(NSSet *)cachedGetHandlesSharingLocationsWithMe;
-(id)cachedLocationForHandle:(id)arg1 ;
-(void)forceRefresh;
-(id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(void)getThisDeviceAndCompanion:(/*^block*/id)arg1 ;
-(void)sendIDSPacket:(id)arg1 toHandle:(id)arg2 ;
-(void)getHandlesFollowingMyLocation:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<FMFSessionDelegate>)arg1 ;
-(id)getHandlesWithPendingOffers;
-(void)deleteFence:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)approveFriendshipRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleIncomingAirDropURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)cachedLocationForHandleByHandle;
-(void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getHandlesWithPendingOffers:(/*^block*/id)arg1 ;
-(void)setCachedGetHandlesSharingLocationsWithMe:(NSSet *)arg1 ;
-(oneway void)setLocations:(id)arg1 ;
-(void)nearbyLocationsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isMyLocationEnabled;
-(void)setSessionInterruptionFuture:(FMFuture *)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlesQueue;
-(void)setActiveDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FMFuture *)sessionInterruptionFuture;
-(void)exit5XXGracePeriod;
-(void)applicationWillEnterForeground;
-(void)showShareMyLocationRestrictedAlert;
-(void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)isAllowFriendRequestsEnabled:(/*^block*/id)arg1 ;
-(void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSMutableSet *)internalHandles;
-(void)locationForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)includeDeviceInAutomations:(/*^block*/id)arg1 ;
-(id)getHandlesSharingLocationsWithMe;
-(void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3 ;
-(void)_sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)handleAndLocationForPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldHandleErrorInFWK:(id)arg1 ;
-(void)getAllLocations:(/*^block*/id)arg1 ;
-(void)sendNotNowToHandle:(id)arg1 callerId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sessionHandleReport:(/*^block*/id)arg1 ;
-(void)_registerForApplicationLifecycleEvents;
-(void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)muteFencesForHandle:(id)arg1 untilDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getFavoritesWithCompletion:(/*^block*/id)arg1 ;
-(void)addHandles:(id)arg1 ;
-(void)restoreClientConnection;
-(void)getAllDevices:(/*^block*/id)arg1 ;
-(void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FMFuture *)sessionInvalidationFuture;
-(void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPendingFriendshipRequestsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isModelInitialized;
-(void)dispatchOnDelegateQueue:(/*^block*/id)arg1 ;
-(NSXPCConnection *)connection;
-(void)getActiveLocationSharingDevice:(/*^block*/id)arg1 ;
-(void)triggerWithUUID:(id)arg1 forFenceWithID:(id)arg2 withStatus:(id)arg3 forDate:(id)arg4 triggerLocation:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)declineFriendshipRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCachedOfferExpirationForHandleByHandle:(NSMutableDictionary *)arg1 ;
-(void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)getDataForPerformanceRequest:(/*^block*/id)arg1 ;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(void)_sendAutoSwitchMeDevice;
-(void)showShareMyLocationiCloudSettingsOffAlert;
-(void)setCachedGetHandlesFollowingMyLocation:(NSSet *)arg1 ;
-(void)addInterruptionHander:(/*^block*/id)arg1 ;
-(void)addFence:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dumpStateWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidate;
-(BOOL)_isNoMappingPacketReturnedError:(id)arg1 ;
-(void)canOfferToHandles:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_registerForFMFDLaunchedNotification;
-(void)removeHandles:(id)arg1 ;
-(void)dealloc;
-(void)getFences:(/*^block*/id)arg1 ;
-(void)isMyLocationEnabled:(/*^block*/id)arg1 ;
-(void)dataForPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setHideMyLocationEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)getHandlesFollowingMyLocation;
-(void)isIn5XXGracePeriodWithCompletion:(/*^block*/id)arg1 ;
-(id)serverProxy;
@end
