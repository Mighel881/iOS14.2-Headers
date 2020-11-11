/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIContentView.h>

@class _UIBasicHeaderFooterContentViewConfiguration, UILabel, NSString;

@interface _UIBasicHeaderFooterContentView : UIView <_UIContentView> {

	_UIBasicHeaderFooterContentViewConfiguration* _animatingFromConfiguration;
	_UIBasicHeaderFooterContentViewConfiguration* _animatingToConfiguration;
	double _preferredMaxLayoutWidth;
	_UIBasicHeaderFooterContentViewConfiguration* _configuration;
	UILabel* _textLabel;

}

@property (nonatomic,copy) _UIBasicHeaderFooterContentViewConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                                   //@synthesize textLabel=_textLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_layoutMarginsDidChangeFromOldMargins:(UIEdgeInsets)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)textLabel;
-(id)initWithCoder:(id)arg1 ;
-(id)_encodableSubviews;
-(void)_setMultilineContextWidth:(double)arg1 ;
-(void)setConfiguration:(_UIBasicHeaderFooterContentViewConfiguration *)arg1 ;
-(double)_preferredMaxLayoutWidth;
-(_UIBasicHeaderFooterContentViewConfiguration *)configuration;
-(double)_multilineContextWidth;
@end
