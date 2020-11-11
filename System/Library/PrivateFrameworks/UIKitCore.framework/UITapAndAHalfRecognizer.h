/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableSet, UITouch, UIDelayedAction;

@interface UITapAndAHalfRecognizer : UIGestureRecognizer {

	CGPoint _startPoint;
	double _allowableMovement;
	int _numberOfFullTaps;
	double _minimumFinalPressDuration;
	NSMutableSet* _activeTouches;
	int _currentNumberOfTaps;
	UITouch* _touch;
	UIDelayedAction* _tapTimer;

}

@property (nonatomic,retain) UITouch * touch;                               //@synthesize touch=_touch - In the implementation block
@property (assign,nonatomic) int numberOfFullTaps;                          //@synthesize numberOfFullTaps=_numberOfFullTaps - In the implementation block
@property (assign,nonatomic) double allowableMovement;                      //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (assign,nonatomic) double minimumFinalPressDuration;              //@synthesize minimumFinalPressDuration=_minimumFinalPressDuration - In the implementation block
@property (nonatomic,readonly) CGPoint locationOfFirstTap; 
-(void)tooSlow:(id)arg1 ;
-(double)allowableMovement;
-(void)clearTapTimer;
-(void)setTouch:(UITouch *)arg1 ;
-(void)setAllowableMovement:(double)arg1 ;
-(void)setNumberOfFullTaps:(int)arg1 ;
-(void)_verifyMovementInAllowableRange;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setMinimumFinalPressDuration:(double)arg1 ;
-(void)startTapTimer:(double)arg1 ;
-(int)numberOfFullTaps;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_resetGestureRecognizer;
-(CGPoint)locationOfFirstTap;
-(void)recognized:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(UITouch *)touch;
-(double)minimumFinalPressDuration;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)translationInWindowCoordinates;
-(void)startRecognitionTimer:(double)arg1 ;
-(void)dealloc;
@end
