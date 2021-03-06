/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@protocol CSUserSessionControlling, CSWallpaperViewProviding, CSWallpaperColorProvider;
@class CSVibrantWallpaperButton;

@interface CSLogoutButtonViewController : CSCoverSheetViewControllerBase {

	id<CSUserSessionControlling> _userSessionController;
	id<CSWallpaperViewProviding> _wallpaperViewProvider;
	id<CSWallpaperColorProvider> _wallpaperColorProvider;

}

@property (nonatomic,readonly) CSVibrantWallpaperButton * button; 
@property (assign,nonatomic,__weak) id<CSUserSessionControlling> userSessionController;               //@synthesize userSessionController=_userSessionController - In the implementation block
@property (assign,nonatomic,__weak) id<CSWallpaperColorProvider> wallpaperColorProvider;              //@synthesize wallpaperColorProvider=_wallpaperColorProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CSWallpaperViewProviding> wallpaperViewProvider;               //@synthesize wallpaperViewProvider=_wallpaperViewProvider - In the implementation block
-(id<CSWallpaperColorProvider>)wallpaperColorProvider;
-(void)setWallpaperColorProvider:(id<CSWallpaperColorProvider>)arg1 ;
-(id<CSUserSessionControlling>)userSessionController;
-(CSVibrantWallpaperButton *)button;
-(void)_buttonPressed:(id)arg1 ;
-(void)setUserSessionController:(id<CSUserSessionControlling>)arg1 ;
-(void)setWallpaperViewProvider:(id<CSWallpaperViewProviding>)arg1 ;
-(id<CSWallpaperViewProviding>)wallpaperViewProvider;
-(void)loadView;
@end

