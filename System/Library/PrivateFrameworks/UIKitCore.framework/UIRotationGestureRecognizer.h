/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class _UIGestureRecognizerTransformAnalyzer, UITouch;

@interface UIRotationGestureRecognizer : UIGestureRecognizer {

	double _initialTouchDistance;
	double _initialTouchAngle;
	double _currentTouchAngle;
	long long _currentRotationCount;
	double _lastTouchTime;
	double _velocity;
	double _previousVelocity;
	CGPoint _anchorSceneReferencePoint;
	_UIGestureRecognizerTransformAnalyzer* _transformAnalyzer;
	UITouch* _touches[2];
	float _preRecognitionWeight;
	float _postRecognitionWeight;

}

@property (assign,nonatomic) double rotation; 
@property (nonatomic,readonly) double velocity; 
+(BOOL)supportsSecureCoding;
+(BOOL)_shouldDefaultToTouches;
-(void)_cancelOrFail;
-(CGPoint)locationInView:(id)arg1 ;
-(void)_endOrFail;
-(void)_setPreRecognitionWeight:(double)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setRotation:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(double)_postRecognitionWeight;
-(double)rotation;
-(double)_preRecognitionWeight;
-(void)_updateTransformAnalyzerWeights;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_resetGestureRecognizer;
-(void)_setPostRecognitionWeight:(double)arg1 ;
-(CGPoint)anchorPoint;
-(double)velocity;
-(void)_transformChangedWithEvent:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

