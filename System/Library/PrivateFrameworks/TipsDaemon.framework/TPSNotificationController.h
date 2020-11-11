/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TPSNotificationControllerDelegate, OS_dispatch_queue;
@class TPSNotificationCache, NSObject, NSMutableDictionary, NSBundle;

@interface TPSNotificationController : NSObject {

	id<TPSNotificationControllerDelegate> _delegate;
	TPSNotificationCache* _notificationCache;
	long long _notificationCount;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _assetURLSessionMap;
	NSBundle* _frameworkBundle;

}

@property (assign,nonatomic) long long notificationCount;                                        //@synthesize notificationCount=_notificationCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                             //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) TPSNotificationCache * notificationCache;                           //@synthesize notificationCache=_notificationCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetURLSessionMap;                           //@synthesize assetURLSessionMap=_assetURLSessionMap - In the implementation block
@property (nonatomic,retain) NSBundle * frameworkBundle;                                         //@synthesize frameworkBundle=_frameworkBundle - In the implementation block
@property (assign,nonatomic,__weak) id<TPSNotificationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isNotificationSettingDisabled;
+(long long)remainingCountOfNotificationsUntilOptOut;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(id)cacheAssetFileURLForDocument:(id)arg1 ;
-(void)updateNotificationCount;
-(long long)notificationCount;
-(id)copyFileURL:(id)arg1 cachePath:(id)arg2 ;
-(id)documentToNotifyForCollection:(id)arg1 collectionDeliveryInfoMap:(id)arg2 deliveryInfoMap:(id)arg3 overridedOptOutContentOnly:(BOOL)arg4 ;
-(id)cacheDirectoryCreateIfEmpty:(BOOL)arg1 ;
-(void)fetchNotificationAssetIfNeededCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)setAssetURLSessionMap:(NSMutableDictionary *)arg1 ;
-(id<TPSNotificationControllerDelegate>)delegate;
-(void)clearNotificationCache;
-(BOOL)collectionEligibleForNotification:(id)arg1 ;
-(id)notificationDeliveryInfoForIdentifier:(id)arg1 documentDeliveryInfoMap:(id)arg2 deliveryInfoMap:(id)arg3 ;
-(void)clearNotificationCount;
-(id)cacheFilePathForFile:(id)arg1 ;
-(id)updateNotificationCacheWithCollectionIdentifier:(id)arg1 document:(id)arg2 type:(unsigned long long)arg3 extensionPayload:(id)arg4 ;
-(void)increaseUserNotificationCount;
-(TPSNotificationCache *)notificationCache;
-(void)setNotificationCache:(TPSNotificationCache *)arg1 ;
-(void)setDelegate:(id<TPSNotificationControllerDelegate>)arg1 ;
-(void)showNotificationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)preconditionValidForIdentifier:(id)arg1 documentDeliveryInfoMap:(id)arg2 deliveryInfoMap:(id)arg3 overridedOptOutContentOnly:(BOOL)arg4 ignoreSuppressContent:(BOOL)arg5 ;
-(id)assetsConfigurationForDocument:(id)arg1 ;
-(void)clearAssetCaches;
-(void)updateArchiveCache;
-(void)updateDocumentToNotifyWithPreferredIdentifier:(id)arg1 collectionOrder:(id)arg2 collectionMap:(id)arg3 collectionDeliveryInfoMap:(id)arg4 tipMap:(id)arg5 tipsDeliveryInfoMap:(id)arg6 deliveryInfoMap:(id)arg7 documentDictionaryMap:(id)arg8 metadataDictionary:(id)arg9 completionHandler:(/*^block*/id)arg10 ;
-(BOOL)isDocumentHintDisplayedOnOtherDevices:(id)arg1 ;
-(BOOL)canUpdateHintEligibilityForIdentifier:(id)arg1 ;
-(void)setFrameworkBundle:(NSBundle *)arg1 ;
-(NSMutableDictionary *)assetURLSessionMap;
-(void)removeAllNotifications;
-(BOOL)updateHintEligibleForTip:(id)arg1 isValid:(BOOL)arg2 ;
-(id)documentToNotifyForTipsInCollection:(id)arg1 tipMap:(id)arg2 tipDeliveryInfoMap:(id)arg3 deliveryInfoMap:(id)arg4 overridedOptOutContentOnly:(BOOL)arg5 ;
-(void)setNotificationCount:(long long)arg1 ;
-(id)tipDocumentToNotifyWithIdentifier:(id)arg1 tipMap:(id)arg2 tipDeliveryInfoMap:(id)arg3 deliveryInfoMap:(id)arg4 overridedOptOutContentOnly:(BOOL)arg5 ;
-(NSBundle *)frameworkBundle;
-(BOOL)isNotificationDeliveryInfoValid:(id)arg1 identifier:(id)arg2 overridedOptOutContentOnly:(BOOL)arg3 ignoreSuppressContent:(BOOL)arg4 ;
@end
