/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCUserInfoObserving.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>
#import <libobjc.A.dylib/FCPurchaseProviderType.h>

@protocol FCEntitlementsOverrideProviderType, OS_dispatch_queue;
@class NSSet, NSMutableDictionary, FCCloudContext, NSURLSession, FCKeyValueStore, FCPurchaseLookUpEntriesManager, NSDictionary, NSDate, NSObject, FCAsyncSerialQueue, NSString;

@interface FCPurchaseController : NSObject <FCUserInfoObserving, NSURLSessionDelegate, FCAppActivityObserving, FCPurchaseProviderType> {

	NSSet* _purchasesDiscoveredTagIDs;
	NSMutableDictionary* _webAccessEntriesByTagID;
	id<FCEntitlementsOverrideProviderType> _entitlementsOverrideProvider;
	FCCloudContext* _cloudContext;
	NSURLSession* _session;
	FCKeyValueStore* _localStore;
	FCPurchaseLookUpEntriesManager* _purchaseLookupEntriesManager;
	NSDictionary* _readOnlyPurchaseLookUpEntriesByTagID;
	NSDate* _lastEntitlementCheckTime;
	NSObject*<OS_dispatch_queue> _accessQueue;
	FCAsyncSerialQueue* _entitlementQueue;

}

@property (nonatomic,retain) FCCloudContext * cloudContext;                                                    //@synthesize cloudContext=_cloudContext - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                                                           //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * localStore;                                                     //@synthesize localStore=_localStore - In the implementation block
@property (nonatomic,retain) FCPurchaseLookUpEntriesManager * purchaseLookupEntriesManager;                    //@synthesize purchaseLookupEntriesManager=_purchaseLookupEntriesManager - In the implementation block
@property (copy) NSDictionary * readOnlyPurchaseLookUpEntriesByTagID;                                          //@synthesize readOnlyPurchaseLookUpEntriesByTagID=_readOnlyPurchaseLookUpEntriesByTagID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * webAccessEntriesByTagID;                                    //@synthesize webAccessEntriesByTagID=_webAccessEntriesByTagID - In the implementation block
@property (nonatomic,retain) NSSet * purchasesDiscoveredTagIDs;                                                //@synthesize purchasesDiscoveredTagIDs=_purchasesDiscoveredTagIDs - In the implementation block
@property (nonatomic,copy) NSDate * lastEntitlementCheckTime;                                                  //@synthesize lastEntitlementCheckTime=_lastEntitlementCheckTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                                         //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * entitlementQueue;                                            //@synthesize entitlementQueue=_entitlementQueue - In the implementation block
@property (nonatomic,readonly) NSString * lastSignedInItunesAccountName; 
@property (nonatomic,readonly) NSDictionary * purchaseLookUpEntriesByTagID; 
@property (nonatomic,readonly) NSSet * allPurchasedTagIDs; 
@property (nonatomic,readonly) NSSet * allPurchaseIDs; 
@property (nonatomic,readonly) NSSet * allTagIDs; 
@property (nonatomic,retain) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;              //@synthesize entitlementsOverrideProvider=_entitlementsOverrideProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * purchasedTagIDs; 
-(FCKeyValueStore *)localStore;
-(void)_applicationDidEnterBackground;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(id)webAccessOptedInTagIDs;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)loadLocalCachesFromStore;
-(BOOL)isPaidSubscriberFromAppStore;
-(id)init;
-(BOOL)isPaidSubscriber;
-(NSSet *)purchasedTagIDs;
-(void)shouldShowSignedInWithDifferentiTunesAccountAlertWithiTunesAccountName:(id)arg1 iTunesAccountDSID:(id)arg2 isUserSignedIntoiTunes:(BOOL)arg3 isBundleSubscriber:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(NSSet *)allTagIDs;
-(BOOL)isTagPurchased:(id)arg1 ;
-(void)setWebAccessEntriesByTagID:(NSMutableDictionary *)arg1 ;
-(id)initWithCloudContext:(id)arg1 keyValueStoreOption:(unsigned long long)arg2 ;
-(void)setPurchasesDiscoveredTagIDs:(NSSet *)arg1 ;
-(void)_initializeAppStorePurchaseDiscoveredList;
-(void)cleanupExpiredPurchaseLookupEntriesIfNeeded;
-(void)setReadOnlyPurchaseLookUpEntriesByTagID:(NSDictionary *)arg1 ;
-(NSSet *)allPurchaseIDs;
-(NSMutableDictionary *)webAccessEntriesByTagID;
-(FCPurchaseLookUpEntriesManager *)purchaseLookupEntriesManager;
-(void)notifyPurchaseListChanged;
-(id)_allPurchasedTagIDs;
-(void)notifyWebAccessOptedInListChanged;
-(NSString *)lastSignedInItunesAccountName;
-(BOOL)atleastOneValidAppStorePurchase;
-(void)notifyPurchaseRemovedWithTagIDs:(id)arg1 ;
-(NSSet *)purchasesDiscoveredTagIDs;
-(void)notifyPurchasesDiscoveredWithTagIDs:(id)arg1 ;
-(void)addToPurchasedChannelsListWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 purchaseValidationState:(unsigned long long)arg4 isNewsAppPurchase:(BOOL)arg5 lastVerificationTime:(id)arg6 ;
-(FCAsyncSerialQueue *)entitlementQueue;
-(id)initWithCloudContext:(id)arg1 ;
-(void)_entitlementCheckWithIgnoreCache:(BOOL)arg1 restorableBundleIAPs:(id)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 serialCompletion:(/*^block*/id)arg5 ;
-(NSSet *)allPurchasedTagIDs;
-(id)allAppStorePurchasedTagIDsByPurchaseID;
-(id)purchaseLookUpEntryForTagID:(id)arg1 ;
-(void)updatePurchaseEntryToValid:(id)arg1 purchaseType:(unsigned long long)arg2 ;
-(void)silentRemoveFromPurchasedChannelsListWithTagIDs:(id)arg1 ;
-(void)addAppStoreDiscoveredChannelsToFavorites:(id)arg1 ;
-(void)fetchChannelIDsForPurchaseIDs:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updatePurchaseEntryToSubcsriptionNotSupported:(id)arg1 ;
-(id)allAppStorePurchasedTagIDs;
-(void)updatePurchaseEntryToExpired:(id)arg1 ;
-(void)removeFromWebAccessOptedInListWithTagID:(id)arg1 ;
-(id)fetchOperationForPurchaseLookupWithPurchaseIDs:(id)arg1 ;
-(BOOL)isTagIDPurchased:(id)arg1 ;
-(NSDictionary *)readOnlyPurchaseLookUpEntriesByTagID;
-(void)_enumerateValidPurchasesUsingBlock:(/*^block*/id)arg1 ;
-(void)notifyPurchaseAddedWithTagIDs:(id)arg1 ;
-(void)updatePurchaseEntryToExpired:(id)arg1 hasShownRenewalNotice:(BOOL)arg2 ;
-(void)_removeFromPurchasedChannelsListWithTagIDs:(id)arg1 ;
-(void)handleAccessTokenChangeWithTagID:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)removeFromPurchasedChannelsListWithTagIDs:(id)arg1 ;
-(void)removeWebPurchaseForTagID:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)handleAccessTokenVerificationFailureWithTagID:(id)arg1 ;
-(void)handleAccessTokenVerificationSuccessWithTagID:(id)arg1 subscribed:(BOOL)arg2 accessToken:(id)arg3 ;
-(void)handleWebAccessSuccessWithTagID:(id)arg1 ;
-(void)performHTTPRequestForVerifyAccessTokenWithURL:(id)arg1 accessToken:(id)arg2 consumedArticleCount:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)webAccessEntryForTagID:(id)arg1 ;
-(id)_webAccessEntryIDForTagID:(id)arg1 ;
-(void)addToWebAccessEntryListWithEntry:(id)arg1 ;
-(void)clearAllAppStorePurchases;
-(void)handleWebAcccessFailureWithTagID:(id)arg1 purchaseID:(id)arg2 email:(id)arg3 purchaseReceipt:(id)arg4 ;
-(void)addToWebAccessOptedInListWithTagID:(id)arg1 ;
-(void)userInfo:(id)arg1 didChangeAccessTokenForTagID:(id)arg2 ;
-(void)userInfo:(id)arg1 didRemoveAccessTokenForTagID:(id)arg2 userInitiated:(BOOL)arg3 ;
-(BOOL)isPaidSubscriberFromWeb;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setEntitlementQueue:(FCAsyncSerialQueue *)arg1 ;
-(BOOL)hasPurchaseTypeAppStore;
-(void)setLastSignedInItunesAccountDSIDWithDSID:(id)arg1 ;
-(void)setLastSignedInItunesAccountNameWithName:(id)arg1 ;
-(void)shouldShowiTunesSignedOutAlertWithiTunesAccountName:(id)arg1 iTunesAccountDSID:(id)arg2 isUserSignedIntoiTunes:(BOOL)arg3 isBundleSubscriber:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)clearAllPurchases;
-(void)addAppStorePurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 ;
-(void)addPurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 isNewsAppPurchase:(BOOL)arg4 ;
-(void)forceExpireAllSubscriptionsIfNeeded;
-(BOOL)isPaidSubscriberFromNews;
-(void)addExpiredPurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3 isNewsAppPurchase:(BOOL)arg4 expirationDate:(id)arg5 ;
-(void)silentExpireInAppSubscriptions;
-(NSDate *)lastEntitlementCheckTime;
-(id)expiredPurchaseChannelIDs;
-(id)subscriptionNotSupportedChannelIDs;
-(void)performEntitlementCheckWithIgnoreCache:(BOOL)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCloudContext:(FCCloudContext *)arg1 ;
-(NSDictionary *)purchaseLookUpEntriesByTagID;
-(void)renewalNoticeShownForPurchasedChannelsListWithTagIDs:(id)arg1 ;
-(void)updatePurchaseEntryToExpiredForTagIDs:(id)arg1 ;
-(void)removeFromPurchasesDiscoveredList:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitWebAccessWithTagID:(id)arg1 purchaseID:(id)arg2 emailAddress:(id)arg3 purchaseReceipt:(id)arg4 serialCompletion:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)verifyAccessTokenWithTagID:(id)arg1 accessToken:(id)arg2 consumedArticleCount:(unsigned long long)arg3 serialCompletion:(/*^block*/id)arg4 callbackQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setPurchaseLookupEntriesManager:(FCPurchaseLookUpEntriesManager *)arg1 ;
-(id)lastSignedInItunesAccountDSID;
-(void)setLastEntitlementCheckTime:(NSDate *)arg1 ;
-(id<FCEntitlementsOverrideProviderType>)entitlementsOverrideProvider;
-(NSURLSession *)session;
-(void)activityObservingApplicationDidEnterBackground;
-(void)saveToDisk;
-(void)setEntitlementsOverrideProvider:(id<FCEntitlementsOverrideProviderType>)arg1 ;
-(void)dealloc;
-(FCCloudContext *)cloudContext;
@end

