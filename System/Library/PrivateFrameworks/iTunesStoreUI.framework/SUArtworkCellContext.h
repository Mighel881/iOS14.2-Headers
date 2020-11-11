/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/SUCellConfigurationContext.h>

@class SUImageCache, ISURLOperationPool, SUImageDataProvider, UIImage;

@interface SUArtworkCellContext : SUCellConfigurationContext {

	SUImageCache* _imageCache;
	ISURLOperationPool* _imagePool;
	SUImageDataProvider* _imageProvider;
	UIImage* _placeholderImage;

}

@property (nonatomic,retain) SUImageCache * imageCache;                        //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) ISURLOperationPool * imagePool;                   //@synthesize imagePool=_imagePool - In the implementation block
@property (nonatomic,retain) SUImageDataProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                       //@synthesize placeholderImage=_placeholderImage - In the implementation block
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)setImageCache:(SUImageCache *)arg1 ;
-(void)setImageProvider:(SUImageDataProvider *)arg1 ;
-(SUImageDataProvider *)imageProvider;
-(UIImage *)placeholderImage;
-(SUImageCache *)imageCache;
-(void)dealloc;
-(ISURLOperationPool *)imagePool;
-(void)setImagePool:(ISURLOperationPool *)arg1 ;
@end
