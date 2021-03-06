/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface _UISwipeDismissalGestureRecognizer : UIGestureRecognizer {

	double _allowableMovement;
	CGPoint _originalTouchPoint;

}

@property (assign,nonatomic) CGPoint originalTouchPoint;              //@synthesize originalTouchPoint=_originalTouchPoint - In the implementation block
@property (assign,nonatomic) double allowableMovement;                //@synthesize allowableMovement=_allowableMovement - In the implementation block
+(BOOL)_shouldDefaultToTouches;
-(double)allowableMovement;
-(void)setAllowableMovement:(double)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setOriginalTouchPoint:(CGPoint)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(CGPoint)originalTouchPoint;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
@end

