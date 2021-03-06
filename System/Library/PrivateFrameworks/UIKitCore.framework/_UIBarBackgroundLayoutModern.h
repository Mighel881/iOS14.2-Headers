/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIBarBackgroundLayout.h>

@class _UIBarBackgroundAppearanceData;

@interface _UIBarBackgroundLayoutModern : _UIBarBackgroundLayout {

	BOOL _backgroundsAreSame;
	_UIBarBackgroundAppearanceData* _backgroundData1;
	_UIBarBackgroundAppearanceData* _backgroundData2;

}

@property (nonatomic,retain) _UIBarBackgroundAppearanceData * backgroundData1;              //@synthesize backgroundData1=_backgroundData1 - In the implementation block
@property (nonatomic,retain) _UIBarBackgroundAppearanceData * backgroundData2;              //@synthesize backgroundData2=_backgroundData2 - In the implementation block
-(id)bg2Effects;
-(double)bg2Alpha;
-(id)bg1ShadowImage;
-(id)bg1Image;
-(double)bg1Alpha;
-(id)bg1ShadowColor;
-(id)bg2ShadowTint;
-(id)bg1Effects;
-(id)bg2ShadowColor;
-(id)bg2ShadowEffect;
-(long long)bg1ImageMode;
-(BOOL)bg2HasShadow;
-(BOOL)bg2Enabled;
-(id)bg1Color;
-(double)bg2ShadowAlpha;
-(BOOL)bg1HasShadow;
-(id)bg1ShadowEffect;
-(id)bg1ShadowTint;
-(BOOL)shouldUseExplicitGeometry;
-(long long)bg2ImageMode;
-(void)describeInto:(id)arg1 ;
-(void)setBackgroundData2:(_UIBarBackgroundAppearanceData *)arg1 ;
-(double)bg1ShadowAlpha;
-(id)initWithLayout:(id)arg1 ;
-(id)bg2Image;
-(id)bg2Color;
-(_UIBarBackgroundAppearanceData *)backgroundData1;
-(id)bg2ShadowImage;
-(_UIBarBackgroundAppearanceData *)backgroundData2;
-(void)setBackgroundData1:(_UIBarBackgroundAppearanceData *)arg1 ;
@end

