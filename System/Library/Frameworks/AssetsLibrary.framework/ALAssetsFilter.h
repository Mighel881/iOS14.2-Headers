/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ALAssetsFilterInternal;

@interface ALAssetsFilter : NSObject {

	id _internal;

}

@property (nonatomic,retain) ALAssetsFilterInternal * internal;              //@synthesize internal=_internal - In the implementation block
+(id)allAssets;
+(id)allPhotos;
+(id)allVideos;
-(void)setInternal:(ALAssetsFilterInternal *)arg1 ;
-(ALAssetsFilterInternal *)internal;
-(id)init;
-(int)_filter;
-(void)dealloc;
-(void)_setFilter:(int)arg1 ;
@end

