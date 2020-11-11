/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WallpaperKit/WKAbstractWallpaper.h>
#import <libobjc.A.dylib/WKValueBasedWallpaper.h>

@class NSURL, UIColor, UIImage, NSString;

@interface WKStripeWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper> {

	NSURL* __thumbnailImageURL;
	UIColor* __backgroundColor;
	UIImage* __thumbnailImage;

}

@property (nonatomic,retain) NSURL * _thumbnailImageURL;                    //@synthesize _thumbnailImageURL=__thumbnailImageURL - In the implementation block
@property (nonatomic,retain) UIColor * _backgroundColor;                    //@synthesize _backgroundColor=__backgroundColor - In the implementation block
@property (nonatomic,retain) UIImage * _thumbnailImage;                     //@synthesize _thumbnailImage=__thumbnailImage - In the implementation block
@property (nonatomic,readonly) long long identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long backingType; 
+(id)na_identity;
-(UIColor *)_backgroundColor;
-(unsigned long long)hash;
-(UIImage *)_thumbnailImage;
-(NSURL *)_thumbnailImageURL;
-(void)set_backgroundColor:(UIColor *)arg1 ;
-(id)thumbnailImage;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(long long)arg1 name:(id)arg2 ;
-(unsigned long long)type;
-(unsigned long long)backingType;
-(id)wallpaperValue;
-(id)initWithIdentifier:(long long)arg1 name:(id)arg2 backgroundColor:(id)arg3 ;
-(/*^block*/id)descriptionBuilderBlock;
-(void)set_thumbnailImage:(UIImage *)arg1 ;
-(void)set_thumbnailImageURL:(NSURL *)arg1 ;
@end
