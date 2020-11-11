/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKitCore/_UIGestureStudyParticipating.h>

@class UITouch, NSString;

@interface _UIGestureStudyMetricsGestureRecognizer : UIGestureRecognizer <_UIGestureStudyParticipating> {

	long long _observedTouchCount;
	double _startTimestamp;
	double _allowableMovement;
	UITouch* _primaryTouch;
	CGPoint _originalPosition;

}

@property (assign,nonatomic) double startTimestamp;                       //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) CGPoint originalPosition;                    //@synthesize originalPosition=_originalPosition - In the implementation block
@property (assign,nonatomic) double allowableMovement;                    //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (nonatomic,retain) UITouch * primaryTouch;                      //@synthesize primaryTouch=_primaryTouch - In the implementation block
@property (nonatomic,readonly) long long observedTouchCount;              //@synthesize observedTouchCount=_observedTouchCount - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double movement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_affectedByGesture:(id)arg1 ;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(double)allowableMovement;
-(NSString *)eventName;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setAllowableMovement:(double)arg1 ;
-(double)movement;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(UITouch *)primaryTouch;
-(void)setPrimaryTouch:(UITouch *)arg1 ;
-(void)setOriginalPosition:(CGPoint)arg1 ;
-(CGPoint)originalPosition;
-(long long)observedTouchCount;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(double)startTimestamp;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setStartTimestamp:(double)arg1 ;
-(double)duration;
@end
