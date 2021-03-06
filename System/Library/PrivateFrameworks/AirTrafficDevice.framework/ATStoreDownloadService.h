/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSMutableDictionary, NSMutableSet, NSObject;

@interface ATStoreDownloadService : NSObject {

	NSOperationQueue* _downloadQueue;
	NSOperationQueue* _restoreQueue;
	NSMutableDictionary* _downloadOperations;
	NSMutableDictionary* _restoreOperations;
	NSMutableSet* _observers;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}
+(id)downloadDirectoryPath;
+(id)sharedService;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)removeDownloadObserver:(id)arg1 ;
-(void)_finishAsset:(id)arg1 withError:(id)arg2 cancelPendingDownloads:(BOOL)arg3 ;
-(void)_prioritizeAssetRestore:(id)arg1 ;
-(void)addDownloadObserver:(id)arg1 ;
-(id)_newDownloadOperationForAsset:(id)arg1 ;
-(void)_updateProgressForAsset:(id)arg1 progress:(float)arg2 ;
-(BOOL)_isSourcePurchasesForAsset:(id)arg1 ;
-(void)_enqueueAssetDownload:(id)arg1 ;
-(void)cancelAsset:(id)arg1 ;
-(void)enqueueAsset:(id)arg1 ;
-(void)_enqueueAssetRestore:(id)arg1 ;
-(void)_cancelAssetDownload:(id)arg1 ;
-(void)prioritizeAsset:(id)arg1 ;
-(void)_updateStateForAsset:(id)arg1 oldState:(long long)arg2 newState:(long long)arg3 ;
-(void)_prioritizeAssetDownload:(id)arg1 ;
-(void)_cancelAssetRestore:(id)arg1 ;
@end

