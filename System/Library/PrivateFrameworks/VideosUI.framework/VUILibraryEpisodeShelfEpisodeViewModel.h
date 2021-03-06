/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VUIMediaEntityAssetController;
@class VUIMediaItem, NSObject;

@interface VUILibraryEpisodeShelfEpisodeViewModel : NSObject {

	VUIMediaItem* _episode;
	NSObject*<VUIMediaEntityAssetController> _assetController;

}

@property (nonatomic,retain) VUIMediaItem * episode;                                                //@synthesize episode=_episode - In the implementation block
@property (nonatomic,retain) NSObject*<VUIMediaEntityAssetController> assetController;              //@synthesize assetController=_assetController - In the implementation block
-(VUIMediaItem *)episode;
-(void)setEpisode:(VUIMediaItem *)arg1 ;
-(NSObject*<VUIMediaEntityAssetController>)assetController;
-(void)setAssetController:(NSObject*<VUIMediaEntityAssetController>)arg1 ;
@end

