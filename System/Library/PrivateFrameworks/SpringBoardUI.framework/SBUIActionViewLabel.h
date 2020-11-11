/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIColor, UILabel, UIFont;

@interface SBUIActionViewLabel : UIView {

	NSString* _text;
	UIColor* _textColor;
	UILabel* _label;
	UILabel* _emojiLabel;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) long long numberOfLines; 
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)lineBreakMode;
-(void)setText:(NSString *)arg1 ;
-(id)viewForLastBaselineLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)setNumberOfLines:(long long)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(long long)numberOfLines;
-(long long)textAlignment;
-(UIFont *)font;
-(NSString *)text;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)mt_removeAllVisualStyling;
-(void)_mt_applyVisualStyling:(id)arg1 ;
@end
