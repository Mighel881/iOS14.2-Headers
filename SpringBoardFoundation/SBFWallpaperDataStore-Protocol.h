//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, SBFGradient, SBFWallpaperOptions, SBWallpaperImage, UIColor, UIImage;

@protocol SBFWallpaperDataStore <NSObject>
- (void)removeWallpaperGradientForVariants:(long long)arg1;
- (_Bool)setWallpaperGradient:(SBFGradient *)arg1 forVariants:(long long)arg2;
- (SBFGradient *)wallpaperGradientForVariant:(long long)arg1;
- (void)removeWallpaperColorForVariants:(long long)arg1;
- (_Bool)setWallpaperColorName:(NSString *)arg1 forVariants:(long long)arg2;
- (_Bool)setWallpaperColor:(UIColor *)arg1 forVariants:(long long)arg2;
- (NSString *)wallpaperColorNameForVariant:(long long)arg1;
- (UIColor *)wallpaperColorForVariant:(long long)arg1;
- (void)removeWallpaperOptionsForVariants:(long long)arg1;
- (_Bool)setWallpaperOptions:(SBFWallpaperOptions *)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (SBFWallpaperOptions *)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)removeProceduralWallpaperForVariants:(long long)arg1;
- (_Bool)setProceduralWallpaperInfo:(NSDictionary *)arg1 forVariants:(long long)arg2;
- (NSDictionary *)proceduralWallpaperInfoForVariant:(long long)arg1;
- (void)removeVideoForVariant:(long long)arg1;
- (_Bool)setOriginalVideoURL:(NSURL *)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (_Bool)setVideoURL:(NSURL *)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (NSURL *)verifiedOriginalVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (NSURL *)verifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (NSURL *)unverifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)removeWallpaperImageHashDataForVariants:(long long)arg1;
- (NSData *)wallpaperImageHashDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (_Bool)setWallpaperImageHashData:(NSData *)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2;
- (void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3;
- (_Bool)setWallpaperThumbnailData:(NSData *)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (_Bool)setWallpaperOriginalImage:(UIImage *)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (_Bool)setWallpaperImage:(UIImage *)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (NSData *)wallpaperThumbnailDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (UIImage *)wallpaperOriginalImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (_Bool)hasWallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (SBWallpaperImage *)wallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
@end

