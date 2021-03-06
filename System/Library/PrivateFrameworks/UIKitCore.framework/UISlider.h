/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol _UISliderVisualElement;
@class UIView, _UISliderDataModel, NSArray, _UIEdgeFeedbackGenerator, _UIModulationFeedbackGenerator, UIImage, UIColor;

@interface UISlider : UIControl <NSCoding> {

	UIView*<_UISliderVisualElement> _visualElement;
	_UISliderDataModel* _data;
	NSArray* _dummyViews;

}

@property (assign,setter=_setTrackEnabled:,nonatomic) BOOL _trackEnabled; 
@property (setter=_setEdgeFeedbackGenerator:,getter=_edgeFeedbackGenerator,nonatomic,retain) _UIEdgeFeedbackGenerator * edgeFeedbackGenerator; 
@property (setter=_setModulationFeedbackGenerator:,getter=_modulationFeedbackGenerator,nonatomic,retain) _UIModulationFeedbackGenerator * modulationFeedbackGenerator; 
@property (setter=_setEdgeFeedbackBehavior:,getter=_edgeFeedbackBehavior,nonatomic,retain) _UIEdgeFeedbackGenerator * edgeFeedbackBehavior; 
@property (assign,nonatomic) float value; 
@property (assign,nonatomic) float minimumValue; 
@property (assign,nonatomic) float maximumValue; 
@property (nonatomic,retain) UIImage * minimumValueImage; 
@property (nonatomic,retain) UIImage * maximumValueImage; 
@property (assign,getter=isContinuous,nonatomic) BOOL continuous; 
@property (nonatomic,retain) UIColor * minimumTrackTintColor; 
@property (nonatomic,retain) UIColor * maximumTrackTintColor; 
@property (nonatomic,retain) UIColor * thumbTintColor; 
@property (nonatomic,readonly) UIImage * currentThumbImage; 
@property (nonatomic,readonly) UIImage * currentMinimumTrackImage; 
@property (nonatomic,readonly) UIImage * currentMaximumTrackImage; 
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg1 ;
+(BOOL)_allowsUnsupportedMacIdiomBehavior;
+(BOOL)_allowActionsToQueue;
-(void)setMaximumTrackTintColor:(UIColor *)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIColor *)thumbTintColor;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)setContinuous:(BOOL)arg1 ;
-(id)maximumTrackImageForState:(unsigned long long)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setThumbTintColor:(UIColor *)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(id)init;
-(UIImage *)minimumValueImage;
-(UIEdgeInsets)alignmentRectInsets;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(BOOL)isTracking;
-(UIImage *)maximumValueImage;
-(void)setEnabled:(BOOL)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setThumbImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setTracking:(BOOL)arg1 ;
-(void)setMinimumTrackImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)thumbImageForState:(unsigned long long)arg1 ;
-(void)_installVisualElement;
-(void)_installVisualElement:(id)arg1 ;
-(void)_setEdgeFeedbackGenerator:(id)arg1 ;
-(id)_edgeFeedbackGenerator;
-(void)_setTrackEnabled:(BOOL)arg1 ;
-(UIImage *)currentMinimumTrackImage;
-(UIImage *)currentMaximumTrackImage;
-(void)_setModulationFeedbackGenerator:(id)arg1 ;
-(void)_setThumbEnabled:(BOOL)arg1 ;
-(id)_modulationFeedbackGenerator;
-(id)_edgeFeedbackBehavior;
-(void)_setEdgeFeedbackBehavior:(id)arg1 ;
-(CGRect)valueTextRectForBounds:(CGRect)arg1 ;
-(UIEdgeInsets)_thumbHitEdgeInsets;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)_setUseLookNeue:(BOOL)arg1 ;
-(void)_setMinimumTrackVisible:(BOOL)arg1 withDuration:(double)arg2 ;
-(id)_thumbViewNeue;
-(void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_thumbView;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(void)setMaximumValue:(float)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(float)minimumValue;
-(id)description;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(void)layoutSubviews;
-(id)minimumTrackImageForState:(unsigned long long)arg1 ;
-(UIColor *)maximumTrackTintColor;
-(void)setMaximumTrackImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)cancelMouseTracking;
-(void)setShowValue:(BOOL)arg1 ;
-(BOOL)isAccessibilityElementByDefault;
-(float)maximumValue;
-(BOOL)isAnimatingValueChange;
-(BOOL)cancelTouchTracking;
-(float)value;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)minimumTrackTintColor;
-(id)createThumbView;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)setValue:(float)arg1 ;
-(void)setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)_setMaxValue:(float)arg1 ;
-(void)_setMinValue:(float)arg1 ;
-(BOOL)_trackEnabled;
-(id)_minTrackView;
-(id)_maxTrackView;
-(id)_minValueView;
-(id)_maxValueView;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setMinimumTrackTintColor:(UIColor *)arg1 ;
-(void)setMinimumValue:(float)arg1 ;
-(void)setMaximumValueImage:(UIImage *)arg1 ;
-(UIImage *)currentThumbImage;
-(BOOL)_isThumbEnabled;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(BOOL)isContinuous;
-(void)setMinimumValueImage:(UIImage *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

