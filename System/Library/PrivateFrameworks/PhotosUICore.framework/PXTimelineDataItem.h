/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXTimelineCrop, PHAssetCollection;

@interface PXTimelineDataItem : NSObject {

	PXTimelineCrop* _suggestedCrop;
	PHAssetCollection* _assetCollection;

}

@property (nonatomic,retain) PXTimelineCrop * suggestedCrop;                   //@synthesize suggestedCrop=_suggestedCrop - In the implementation block
@property (nonatomic,retain) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
-(void)setAssetCollection:(PHAssetCollection *)arg1 ;
-(PHAssetCollection *)assetCollection;
-(id)initWithAssetCollection:(id)arg1 suggestedCrop:(id)arg2 ;
-(PXTimelineCrop *)suggestedCrop;
-(void)setSuggestedCrop:(PXTimelineCrop *)arg1 ;
@end
