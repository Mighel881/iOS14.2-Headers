/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UILabelContent, NSMutableDictionary, UIColor, _UIVectorTextLayout, NSString, UIFont, NSAttributedString;

@interface UIVectorLabel : UIView {

	_UILabelContent* _content;
	NSMutableDictionary* _defaultAttributes;
	UIColor* _textColor;
	_UIVectorTextLayout* _sizingLayout;
	_UIVectorTextLayout* _visualLayout;
	SCD_Struct_UI34 _labelFlags;
	double _multilineContextWidth;
	unsigned long long _numberOfLines;
	double _preferredMaxLayoutWidth;

}

@property (setter=_setContent:,getter=_content,nonatomic,retain) _UILabelContent * _content; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) unsigned long long numberOfLines;                                            //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (assign,nonatomic) double preferredMaxLayoutWidth;                                              //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
@property (setter=_setAttributedText:,nonatomic,copy) NSAttributedString * _attributedText; 
+(id)_defaultFont;
+(Class)layerClass;
+(id)_defaultAttributes;
-(void)setFont:(UIFont *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)_setTextColor:(id)arg1 ;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setNumberOfLines:(unsigned long long)arg1 ;
-(_UILabelContent *)_content;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(unsigned long long)numberOfLines;
-(void)_setContent:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_setAttributedText:(id)arg1 ;
-(UIFont *)font;
-(NSString *)text;
-(void)_setNeedsUpdateLayerIfNeeded;
-(id)_materializedAttributedText;
-(void)_ensureSizingLayout;
-(id)_layoutParametersWithinSize:(CGSize)arg1 forSizing:(BOOL)arg2 ;
-(void)_ensureVisualLayout;
-(id)_attributedTextCompatibleForSizing;
-(void)_mergeDefaultAttributesForDowngradingContent:(id)arg1 ;
-(double)_baselineOffsetFromBottom;
-(UIColor *)textColor;
-(void)setBounds:(CGRect)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_labelLayer;
-(id)_defaultAttributes;
-(void)_generateDeferredAnimations:(id)arg1 ;
-(void)_setMultilineContextWidth:(double)arg1 ;
-(NSAttributedString *)_attributedText;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(double)preferredMaxLayoutWidth;
-(double)_preferredMaxLayoutWidth;
-(double)_lastLineBaseline;
-(double)_firstLineBaseline;
-(double)_multilineContextWidth;
-(double)_firstBaselineOffsetFromTop;
@end
