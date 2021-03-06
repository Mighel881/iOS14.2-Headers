/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIFont, CAShapeLayer;

@interface CAMModeDialItem : UIView {

	BOOL _selected;
	BOOL _shouldShadowTitleText;
	NSString* _title;
	UIFont* _font;
	CAShapeLayer* __scalableTextLayer;
	CGSize __textFrameSize;

}

@property (nonatomic,readonly) CFAttributedStringRef _attributedTitle; 
@property (nonatomic,readonly) CAShapeLayer * _scalableTextLayer;                          //@synthesize _scalableTextLayer=__scalableTextLayer - In the implementation block
@property (assign,setter=_setTextFrameSize:,nonatomic) CGSize _textFrameSize;              //@synthesize _textFrameSize=__textFrameSize - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) BOOL shouldShadowTitleText;                                   //@synthesize shouldShadowTitleText=_shouldShadowTitleText - In the implementation block
-(CGColorRef)_textColor;
-(void)setFont:(UIFont *)arg1 ;
-(CFAttributedStringRef)_attributedTitle;
-(void)setSelected:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIFont *)font;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)_updateScalableTextPathFromAttributedTitle;
-(void)_commonCAMModeDialItemInitialization;
-(BOOL)shouldShadowTitleText;
-(CGPathRef)_pathForAttributedString:(CFAttributedStringRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setShouldShadowTitleText:(BOOL)arg1 ;
-(void)_setTextFrameSize:(CGSize)arg1 ;
-(CGSize)_textFrameSize;
-(CAShapeLayer *)_scalableTextLayer;
@end

