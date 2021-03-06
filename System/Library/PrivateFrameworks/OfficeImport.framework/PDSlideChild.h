/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/PDSlideBase.h>

@class OADThemeOverrides, OADColorMap;

@interface PDSlideChild : PDSlideBase {

	BOOL mShowMasterPlaceholderAnimations;
	BOOL mShowMasterShapes;
	OADThemeOverrides* mThemeOverrides;
	OADColorMap* mColorMapOverride;

}
-(id)init;
-(id)description;
-(id)colorMap;
-(id)colorScheme;
-(id)styleMatrix;
-(id)fontScheme;
-(BOOL)showMasterShapes;
-(id)drawingTheme;
-(id)themeOverrides;
-(void)doneWithContent;
-(void)setColorMapOverride:(id)arg1 ;
-(void)setShowMasterShapes:(BOOL)arg1 ;
-(id)defaultTextListStyle;
-(id)colorMapOverride;
-(BOOL)showMasterPlaceholderAnimations;
-(void)setShowMasterPlaceholderAnimations:(BOOL)arg1 ;
@end

