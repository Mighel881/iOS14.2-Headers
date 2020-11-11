/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FCBundleSubscriptionLookUpEntry, FCKeyValueStore;

@interface FCBundleSubscriptionLookUpEntryManager : NSObject {

	FCBundleSubscriptionLookUpEntry* _bundleSubscriptionLookUpEntry;
	FCKeyValueStore* _localStore;

}

@property (nonatomic,retain) FCBundleSubscriptionLookUpEntry * bundleSubscriptionLookUpEntry;              //@synthesize bundleSubscriptionLookUpEntry=_bundleSubscriptionLookUpEntry - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * localStore;                                                 //@synthesize localStore=_localStore - In the implementation block
-(FCKeyValueStore *)localStore;
-(void)setLocalStore:(FCKeyValueStore *)arg1 ;
-(void)loadLocalCachesFromStore;
-(FCBundleSubscriptionLookUpEntry *)bundleSubscriptionLookUpEntry;
-(void)setBundleSubscriptionLookUpEntry:(FCBundleSubscriptionLookUpEntry *)arg1 ;
-(void)addBundleChannelIDs:(id)arg1 purchaseID:(id)arg2 inTrialPeriod:(BOOL)arg3 isPurchaser:(BOOL)arg4 servicesBundlePurchaseID:(id)arg5 isAmplifyUser:(BOOL)arg6 ;
-(void)updateEntry:(id)arg1 ;
-(id)_bundleSubscriptionLookupEntryForPurchaseID:(id)arg1 ;
-(id)initWithLocalStore:(id)arg1 ;
-(void)cleanupStaleExpiredEntry;
@end
