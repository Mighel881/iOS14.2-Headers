/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface TeaUI.ImageView : UIView {

	 imageView;
	 loadingIdentifier;
	 _backgroundColor;

}

@property (assign,nonatomic) BOOL clipsToBounds; 
@property (assign,nonatomic) long long contentMode; 
@property (assign,nonatomic) BOOL accessibilityIgnoresInvertColors; 
@property (retain,nonatomic) UIColor * backgroundColor; 
+(Class)layerClass;
-(void)setContentMode:(long long)arg1 ;
-(void)setAccessibilityIgnoresInvertColors:(BOOL)arg1 ;
-(BOOL)accessibilityIgnoresInvertColors;
-(void)layoutSubviews;
-(long long)contentMode;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(BOOL)clipsToBounds;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)initWithCoder:(id)arg1 ;
@end
