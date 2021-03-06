/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PXPhotosDataSourceChangeObserver.h>

@class NSMutableArray, PXPhotosDataSource, PUZoomableGridViewControllerSpec, PUSessionInfo, PUCollectionViewIntermediateDataSource, NSString;

@interface PUMomentsZoomLevelManager : NSObject <PXPhotosDataSourceChangeObserver> {

	NSMutableArray* _allLevelInfos;
	PXPhotosDataSource* _momentsDataSource;
	BOOL _isInvalidatingLayoutOfZoomLevels;
	PUZoomableGridViewControllerSpec* _zoomableGridSpec;
	PUSessionInfo* _sessionInfo;
	PUCollectionViewIntermediateDataSource* _sharedIntermediateDataSource;

}

@property (nonatomic,readonly) PUZoomableGridViewControllerSpec * zoomableGridSpec;                                //@synthesize zoomableGridSpec=_zoomableGridSpec - In the implementation block
@property (nonatomic,retain) PUSessionInfo * sessionInfo;                                                          //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long lowestZoomLevel; 
@property (nonatomic,readonly) unsigned long long highestZoomLevel; 
@property (nonatomic,readonly) unsigned long long preferredDefaultZoomLevel; 
@property (nonatomic,readonly) PUCollectionViewIntermediateDataSource * sharedIntermediateDataSource;              //@synthesize sharedIntermediateDataSource=_sharedIntermediateDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)highestZoomLevel;
-(id)zoomLevelInfoForZoomLevel:(unsigned long long)arg1 ;
-(id)existingViewControllerForZoomLevel:(unsigned long long)arg1 inNavigationController:(id)arg2 ;
-(id)initWithSpec:(id)arg1 ;
-(PUSessionInfo *)sessionInfo;
-(PUZoomableGridViewControllerSpec *)zoomableGridSpec;
-(id)newViewControllerForZoomLevel:(unsigned long long)arg1 ;
-(id)momentsDataSource;
-(void)photosDataSource:(id)arg1 didReceivePhotoLibraryChange:(id)arg2 ;
-(unsigned long long)zoomLevelBelowZoomLevel:(unsigned long long)arg1 ;
-(void)_defaultsDidChange:(id)arg1 ;
-(unsigned long long)zoomLevelAboveZoomLevel:(unsigned long long)arg1 ;
-(unsigned long long)lowestZoomLevel;
-(unsigned long long)preferredDefaultZoomLevel;
-(BOOL)zoomLevel:(unsigned long long)arg1 isHigherThanZoomLevel:(unsigned long long)arg2 ;
-(void)zoomLevelInfo:(id)arg1 didInvalidateLayoutWithContext:(id)arg2 ;
-(id)jumpToZoomLevel:(unsigned long long)arg1 inNavigationController:(id)arg2 usingTopControllerConfigurationBlock:(/*^block*/id)arg3 ;
-(PUCollectionViewIntermediateDataSource *)sharedIntermediateDataSource;
-(void)updateZoomableGridSpecForTraitCollection:(id)arg1 referenceSize:(CGSize)arg2 ;
-(void)setSessionInfo:(PUSessionInfo *)arg1 ;
-(void)_updateSummarizeSectionsOnZoomLevelInfos;
-(void)markZoomInfosInvalidWithWidth:(double)arg1 ;
-(void)dealloc;
@end

