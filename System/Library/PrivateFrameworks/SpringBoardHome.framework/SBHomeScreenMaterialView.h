/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView;

@interface SBHomeScreenMaterialView : UIView {

	UIView* _backgroundView;
	UIView* _whiteTintView;
	UIImageView* _xColorBurnView;
	UIImageView* _xPlusDView;
	UIView* _highlightView;
	CGPoint _wallpaperRelativeCenter;
	BOOL _highlighted;
	UIEdgeInsets _backgroundInsets;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) double brightness; 
@property (nonatomic,readonly) UIView * backgroundView;                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets backgroundInsets;                      //@synthesize backgroundInsets=_backgroundInsets - In the implementation block
+(id)colorBurnContentImageForImage:(id)arg1 ;
-(void)setLegibilityStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(UIEdgeInsets)backgroundInsets;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(double)brightness;
-(id)initWithFrame:(CGRect)arg1 backgroundView:(id)arg2 foregroundImage:(id)arg3 ;
-(void)_addHighlightViewIfNecessary;
-(void)setBackgroundInsets:(UIEdgeInsets)arg1 ;
-(void)setBrightness:(double)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end
