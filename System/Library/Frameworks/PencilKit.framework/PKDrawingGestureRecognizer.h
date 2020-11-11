/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <libobjc.A.dylib/PKDrawingGestureRecognizerProtocol.h>

@protocol PKDrawingGestureTarget;
@class UITouch, NSString;

@interface PKDrawingGestureRecognizer : UIGestureRecognizer <PKDrawingGestureRecognizerProtocol> {

	double _thresholdDistance;
	double _squaredThreshold;
	CGPoint _drawTouchStartPoint;
	BOOL _drawingTargetIsDrawing;
	BOOL _gestureDetected;
	BOOL _ignoreFingerTouchesUntilReset;
	id<PKDrawingGestureTarget> drawingTarget;
	unsigned long long _activeInputProperties;
	UITouch* _drawingTouch;

}

@property (nonatomic,retain) UITouch * drawingTouch;                                              //@synthesize drawingTouch=_drawingTouch - In the implementation block
@property (assign,nonatomic) double thresholdDistance;                                            //@synthesize thresholdDistance=_thresholdDistance - In the implementation block
@property (nonatomic,readonly) BOOL isReplaying; 
@property (assign,nonatomic,__weak) id<PKDrawingGestureRecognizerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<PKDrawingGestureTarget> drawingTarget; 
@property (nonatomic,readonly) unsigned long long activeInputProperties;                          //@synthesize activeInputProperties=_activeInputProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)end;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)cancel;
-(id<PKDrawingGestureTarget>)drawingTarget;
-(void)setDrawingTarget:(id<PKDrawingGestureTarget>)arg1 ;
-(BOOL)isReplaying;
-(unsigned long long)activeInputProperties;
-(void)_endDrawing;
-(UITouch *)drawingTouch;
-(void)setThresholdDistance:(double)arg1 ;
-(void)_cancelDrawing;
-(BOOL)_shouldBeginDrawing:(id)arg1 withEvent:(id)arg2 ;
-(void)_beginDrawingWithTouch:(id)arg1 ;
-(void)_updateDrawingWithEvent:(id)arg1 ;
-(void)_drawingCancelled;
-(void)_drawingBegan;
-(void)_drawingMoved:(id)arg1 ;
-(void)_drawingEnded;
-(double)thresholdDistance;
-(void)setDrawingTouch:(UITouch *)arg1 ;
@end
