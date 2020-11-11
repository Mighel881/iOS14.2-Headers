/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIStepperVisualElement <NSObject>
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) double value; 
@property (assign,nonatomic) double minimumValue; 
@property (assign,nonatomic) double maximumValue; 
@property (assign,nonatomic) double stepValue; 
@property (assign,getter=isContinuous,nonatomic) BOOL continuous; 
@property (assign,nonatomic) BOOL wraps; 
@property (assign,nonatomic) BOOL autorepeat; 
@property (assign,nonatomic,__weak) id<UIStepperControl> stepperControl; 
@required
+(CGSize*)initialIntrinsicSize;
+(UIEdgeInsets*)initialAlignmentRectInsets;
+(CGSize*)initialSize;
+(id)new;
-(double)stepValue;
-(BOOL)wraps;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(void)setContinuous:(BOOL)arg1;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3;
-(void)setEnabled:(BOOL)arg1;
-(id)backgroundImageForState:(unsigned long long)arg1;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(void)setWraps:(BOOL)arg1;
-(BOOL)autorepeat;
-(void)cancelTrackingWithEvent:(id)arg1;
-(id<UIStepperControl>)stepperControl;
-(CGSize*)sizeThatFits:(CGSize)arg1 forControl:(id)arg2;
-(CGSize*)intrinsicSizeWithinSize:(CGSize)arg1 forControl:(id)arg2;
-(UIEdgeInsets*)alignmentRectInsetsForControl:(id)arg1;
-(void)setStepperControl:(id)arg1;
-(void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2;
-(id)incrementImageForState:(unsigned long long)arg1;
-(void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2;
-(id)decrementImageForState:(unsigned long long)arg1;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2;
-(void)setMaximumValue:(double)arg1;
-(double)minimumValue;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
-(double)maximumValue;
-(double)value;
-(BOOL)isEnabled;
-(void)setValue:(double)arg1;
-(void)setStepValue:(double)arg1;
-(void)setMinimumValue:(double)arg1;
-(void)setAutorepeat:(BOOL)arg1;
-(BOOL)isContinuous;

@end
