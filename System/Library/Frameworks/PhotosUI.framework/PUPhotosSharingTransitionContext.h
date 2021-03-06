/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PHAssetCollectionDataSource;
@class NSIndexPath;

@interface PUPhotosSharingTransitionContext : NSObject {

	id<PHAssetCollectionDataSource> _assetCollectionsDataSource;
	NSIndexPath* _keyAssetIndexPath;

}

@property (nonatomic,retain) id<PHAssetCollectionDataSource> assetCollectionsDataSource;              //@synthesize assetCollectionsDataSource=_assetCollectionsDataSource - In the implementation block
@property (nonatomic,retain) NSIndexPath * keyAssetIndexPath;                                         //@synthesize keyAssetIndexPath=_keyAssetIndexPath - In the implementation block
-(id<PHAssetCollectionDataSource>)assetCollectionsDataSource;
-(void)setKeyAssetIndexPath:(NSIndexPath *)arg1 ;
-(void)setAssetCollectionsDataSource:(id<PHAssetCollectionDataSource>)arg1 ;
-(NSIndexPath *)keyAssetIndexPath;
@end

