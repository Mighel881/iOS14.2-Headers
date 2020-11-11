/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PUAssetsDataSourceManagerDelegate.h>
#import <libobjc.A.dylib/PUAssetActionManagerDelegate.h>
#import <libobjc.A.dylib/PULoadingStatusManagerDelegate.h>
#import <libobjc.A.dylib/PXAssetEditOperationManagerObserver.h>

@protocol PXAssetImportStatusManager;
@class PUAssetsDataSourceManager, PUMediaProvider, PUAssetActionManager, PUBrowsingViewModel, PUContentTileProvider, PULoadingStatusManager, PXPhotosDetailsContext, PXGestureProvider, PUOneUpMergedVideoProvider, PXAssetEditOperationManager, PUTileAnimator, NSString;

@interface PUBrowsingSession : NSObject <PUAssetsDataSourceManagerDelegate, PUAssetActionManagerDelegate, PULoadingStatusManagerDelegate, PXAssetEditOperationManagerObserver> {

	PUAssetsDataSourceManager* _dataSourceManager;
	PUMediaProvider* _mediaProvider;
	PUAssetActionManager* _actionManager;
	PUBrowsingViewModel* _viewModel;
	PUContentTileProvider* _contentTileProvider;
	PULoadingStatusManager* _loadingStatusManager;
	id<PXAssetImportStatusManager> _importStatusManager;
	PXPhotosDetailsContext* _photosDetailsContext;
	PXGestureProvider* _gestureProvider;
	PUOneUpMergedVideoProvider* _mergedVideoProvider;
	PXAssetEditOperationManager* _editOperationManager;
	PUTileAnimator* _tileAnimator;

}

@property (nonatomic,readonly) PXAssetEditOperationManager * editOperationManager;              //@synthesize editOperationManager=_editOperationManager - In the implementation block
@property (nonatomic,retain) PUMediaProvider * mediaProvider;                                   //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) PUBrowsingViewModel * viewModel;                                   //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) PUTileAnimator * tileAnimator;                                     //@synthesize tileAnimator=_tileAnimator - In the implementation block
@property (nonatomic,retain) PUContentTileProvider * contentTileProvider;                       //@synthesize contentTileProvider=_contentTileProvider - In the implementation block
@property (nonatomic,readonly) PUAssetsDataSourceManager * dataSourceManager;                   //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) PUAssetActionManager * actionManager;                            //@synthesize actionManager=_actionManager - In the implementation block
@property (nonatomic,readonly) PULoadingStatusManager * loadingStatusManager;                   //@synthesize loadingStatusManager=_loadingStatusManager - In the implementation block
@property (nonatomic,readonly) id<PXAssetImportStatusManager> importStatusManager;              //@synthesize importStatusManager=_importStatusManager - In the implementation block
@property (nonatomic,readonly) PXPhotosDetailsContext * photosDetailsContext;                   //@synthesize photosDetailsContext=_photosDetailsContext - In the implementation block
@property (nonatomic,readonly) PXGestureProvider * gestureProvider;                             //@synthesize gestureProvider=_gestureProvider - In the implementation block
@property (nonatomic,readonly) PUOneUpMergedVideoProvider * mergedVideoProvider;                //@synthesize mergedVideoProvider=_mergedVideoProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)uiKeyCommandAvailableActions;
+(id)uiKeyCommandAdditionalActions;
-(PUAssetsDataSourceManager *)dataSourceManager;
-(void)setMediaProvider:(PUMediaProvider *)arg1 ;
-(PULoadingStatusManager *)loadingStatusManager;
-(PUAssetActionManager *)actionManager;
-(PUMediaProvider *)mediaProvider;
-(PUBrowsingViewModel *)viewModel;
-(id)init;
-(void)setViewModel:(PUBrowsingViewModel *)arg1 ;
-(void)_performActionForActionType:(unsigned long long)arg1 withDelegate:(id)arg2 ;
-(void)_performAdditionalKeyCommand:(long long)arg1 withDelegate:(id)arg2 ;
-(void)_setVideoToDesiredPlayState:(long long)arg1 ;
-(void)_toggleDetails;
-(void)addKeyCommandsIntoArray:(id)arg1 withDelegate:(id)arg2 ;
-(void)performKeyCommand:(id)arg1 withDelegate:(id)arg2 ;
-(PUTileAnimator *)tileAnimator;
-(void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2 ;
-(id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1 ;
-(id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3 photosDetailsContext:(id)arg4 lowMemoryMode:(BOOL)arg5 ;
-(void)loadingStatusManager:(id)arg1 didUpdateLoadingStatus:(id)arg2 forItem:(id)arg3 ;
-(void)setTileAnimator:(PUTileAnimator *)arg1 ;
-(PUOneUpMergedVideoProvider *)mergedVideoProvider;
-(void)assetEditOperationManager:(id)arg1 didChangeEditOperationsPerformedOnAsset:(id)arg2 context:(void*)arg3 ;
-(void)assetEditOperationManager:(id)arg1 didChangeEditOperationStatusForAsset:(id)arg2 context:(void*)arg3 ;
-(id)assetActionManagerCurrentAssetsDataSource:(id)arg1 ;
-(id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3 ;
-(void)configureTilingView:(id)arg1 ;
-(id)initWithDataSourceManager:(id)arg1 actionManager:(id)arg2 mediaProvider:(id)arg3 photosDetailsContext:(id)arg4 lowMemoryMode:(BOOL)arg5 gestureProvider:(id)arg6 importStatusManager:(id)arg7 ;
-(PUContentTileProvider *)contentTileProvider;
-(void)setContentTileProvider:(PUContentTileProvider *)arg1 ;
-(PXPhotosDetailsContext *)photosDetailsContext;
-(PXGestureProvider *)gestureProvider;
-(PXAssetEditOperationManager *)editOperationManager;
-(id<PXAssetImportStatusManager>)importStatusManager;
@end
