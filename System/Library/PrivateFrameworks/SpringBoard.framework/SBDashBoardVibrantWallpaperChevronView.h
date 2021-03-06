/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardUI/SBUIChevronView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@protocol CSWallpaperColorProvider;
@class _UILegibilitySettings, SBWallpaperEffectView, NSString;

@interface SBDashBoardVibrantWallpaperChevronView : SBUIChevronView <SBUILegibility> {

	double _legibilityStrength;
	_UILegibilitySettings* _legibilitySettings;
	SBWallpaperEffectView* _effectView;
	id<CSWallpaperColorProvider> _wallpaperColorProvider;

}

@property (assign,nonatomic,__weak) id<CSWallpaperColorProvider> wallpaperColorProvider;              //@synthesize wallpaperColorProvider=_wallpaperColorProvider - In the implementation block
@property (assign,nonatomic) double strength;                                                         //@synthesize legibilityStrength=_legibilityStrength - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CSWallpaperColorProvider>)wallpaperColorProvider;
-(void)setWallpaperColorProvider:(id<CSWallpaperColorProvider>)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id)init;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)_updateVibrancy;
@end

