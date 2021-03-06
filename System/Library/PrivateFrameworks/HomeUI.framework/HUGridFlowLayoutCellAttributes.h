/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@protocol HUBackgroundEffectViewGrouping;
@class HFWallpaperSlice;

@interface HUGridFlowLayoutCellAttributes : UICollectionViewLayoutAttributes {

	HFWallpaperSlice* _blurredWallpaperSlice;
	HFWallpaperSlice* _darkModeBlurredWallpaperSlice;
	id<HUBackgroundEffectViewGrouping> _backgroundEffectViewGrouper;
	CGRect _normalizedWallpaperRect;

}

@property (assign,nonatomic) CGRect normalizedWallpaperRect;                                                     //@synthesize normalizedWallpaperRect=_normalizedWallpaperRect - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice;                                           //@synthesize blurredWallpaperSlice=_blurredWallpaperSlice - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * darkModeBlurredWallpaperSlice;                                   //@synthesize darkModeBlurredWallpaperSlice=_darkModeBlurredWallpaperSlice - In the implementation block
@property (assign,nonatomic,__weak) id<HUBackgroundEffectViewGrouping> backgroundEffectViewGrouper;              //@synthesize backgroundEffectViewGrouper=_backgroundEffectViewGrouper - In the implementation block
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDarkModeBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(HFWallpaperSlice *)darkModeBlurredWallpaperSlice;
-(id<HUBackgroundEffectViewGrouping>)backgroundEffectViewGrouper;
-(CGRect)normalizedWallpaperRect;
-(void)setBackgroundEffectViewGrouper:(id<HUBackgroundEffectViewGrouping>)arg1 ;
-(void)setNormalizedWallpaperRect:(CGRect)arg1 ;
@end

