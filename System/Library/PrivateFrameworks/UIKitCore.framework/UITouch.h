/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIResponderForwardable.h>
#import <UIKitCore/_UIEventComponent.h>

@protocol _UITouchPhaseChangeDelegate;
@class UIWindow, UIView, NSMutableArray, _UITouchPredictor, NSArray, NSNumber, UIResponder, NSString;

@interface UITouch : NSObject <_UIResponderForwardable, _UIEventComponent> {

	double _movementMagnitudeSquared;
	long long _phase;
	unsigned long long _tapCount;
	long long _edgeType;
	unsigned long long _edgeAim;
	unsigned long long _precision;
	unsigned _touchIdentifier;
	UIWindow* _window;
	UIView* _view;
	UIView* _warpedIntoView;
	NSMutableArray* _gestureRecognizers;
	NSMutableArray* _forwardingRecord;
	CGPoint _locationInWindow;
	CGPoint _previousLocationInWindow;
	CGPoint _preciseLocationInWindow;
	CGPoint _precisePreviousLocationInWindow;
	double _previousPressure;
	long long _pathIndex;
	unsigned char _pathIdentity;
	double _pathMajorRadius;
	double _majorRadiusTolerance;
	double _pressure;
	double _maxObservedPressure;
	float _zGradient;
	SCD_Struct_UI20 _touchFlags;
	_UITouchPredictor* _touchPredictor;
	BOOL _eaten;
	BOOL _needsForceUpdate;
	BOOL _hasForceUpdate;
	unsigned char _forceStage;
	BOOL __expectedToBecomeDrag;
	double _timestamp;
	long long _forceCorrelationToken;
	double _maximumPossiblePressure;
	unsigned long long _senderID;
	IOHIDEventRef _hidEvent;
	double _altitudeAngle;
	long long _type;
	id<_UITouchPhaseChangeDelegate> __phaseChangeDelegate;
	UIWindow* __windowServerHitTestWindow;
	double _azimuthAngleInCADisplay;
	double _azimuthAngleInWindow;
	double _initialTouchTimestamp;
	CGSize _displacement;

}

@property (assign,setter=_setPathIndex:,nonatomic) long long _pathIndex;                            //@synthesize pathIndex=_pathIndex - In the implementation block
@property (assign,setter=_setPathIdentity:,nonatomic) unsigned char _pathIdentity;                  //@synthesize pathIdentity=_pathIdentity - In the implementation block
@property (nonatomic,readonly) double _pressure;                                                    //@synthesize pressure=_pressure - In the implementation block
@property (assign,setter=_setZGradient:,nonatomic) float _zGradient;                                //@synthesize zGradient=_zGradient - In the implementation block
@property (assign,setter=_setEdgeType:,nonatomic) long long _edgeType;                              //@synthesize edgeType=_edgeType - In the implementation block
@property (assign,setter=_setEdgeAim:,nonatomic) unsigned long long _edgeAim;                       //@synthesize edgeAim=_edgeAim - In the implementation block
@property (assign,setter=_setType:,nonatomic) long long type;                                       //@synthesize type=_type - In the implementation block
@property (assign,setter=_setSenderID:,nonatomic) unsigned long long _senderID;                     //@synthesize senderID=_senderID - In the implementation block
@property (assign,setter=_setHidEvent:,nonatomic) IOHIDEventRef _hidEvent;                          //@synthesize hidEvent=_hidEvent - In the implementation block
@property (assign,nonatomic) double initialTouchTimestamp;                                          //@synthesize initialTouchTimestamp=_initialTouchTimestamp - In the implementation block
@property (assign,nonatomic) double timestamp;                                                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long phase; 
@property (assign,nonatomic) unsigned long long tapCount; 
@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,retain) UIView * view; 
@property (assign,setter=_setForceStage:,nonatomic) unsigned char _forceStage;                      //@synthesize forceStage=_forceStage - In the implementation block
@property (assign,setter=_setIsPointerTouch:,nonatomic) BOOL _isPointerTouch; 
@property (assign,setter=_setIsRestingTouch:,nonatomic) BOOL _isRestingTouch; 
@property (assign,setter=_setIsTapToClick:,nonatomic) BOOL _isTapToClick; 
@property (nonatomic,readonly) double majorRadius; 
@property (nonatomic,readonly) double majorRadiusTolerance; 
@property (nonatomic,copy,readonly) NSArray * gestureRecognizers; 
@property (nonatomic,readonly) double force; 
@property (nonatomic,readonly) double maximumPossibleForce; 
@property (nonatomic,readonly) double altitudeAngle; 
@property (nonatomic,readonly) NSNumber * estimationUpdateIndex; 
@property (nonatomic,readonly) long long estimatedProperties; 
@property (nonatomic,readonly) long long estimatedPropertiesExpectingUpdates; 
@property (assign,setter=_setForwardablePhase:,nonatomic) long long _forwardablePhase; 
@property (setter=_setResponder:,nonatomic,retain) UIResponder * _responder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_createTouchesWithGSEvent:(GSEventRef)arg1 phase:(long long)arg2 view:(id)arg3 ;
-(void)_setEdgeAim:(unsigned long long)arg1 ;
-(void)_clonePropertiesToTouch:(id)arg1 ;
-(CGVector)azimuthUnitVectorInView:(id)arg1 ;
-(double)azimuthAngleInView:(id)arg1 ;
-(CGPoint)preciseLocationInView:(id)arg1 ;
-(CGPoint)precisePreviousLocationInView:(id)arg1 ;
-(double)altitudeAngle;
-(NSNumber *)estimationUpdateIndex;
-(long long)estimatedProperties;
-(void)_clearGestureRecognizers;
-(long long)estimatedPropertiesExpectingUpdates;
-(void)_setIsPointerTouch:(BOOL)arg1 ;
-(BOOL)_isTapToClick;
-(CGPoint)locationInView:(id)arg1 ;
-(BOOL)_isRestingTouch;
-(void)_setIsRestingTouch:(BOOL)arg1 ;
-(void)_setIsTapToClick:(BOOL)arg1 ;
-(void)_setPathIndex:(long long)arg1 ;
-(void)_setPathIdentity:(unsigned char)arg1 ;
-(void)_setEdgeType:(long long)arg1 ;
-(double)majorRadiusTolerance;
-(void)_setZGradient:(float)arg1 ;
-(void)_setSenderID:(unsigned long long)arg1 ;
-(void)_setForceStage:(unsigned char)arg1 ;
-(UIView *)view;
-(long long)_pathIndex;
-(void)_setLocationInWindow:(CGPoint)arg1 resetPrevious:(BOOL)arg2 ;
-(unsigned char)_pathIdentity;
-(float)_pathMajorRadius;
-(IOHIDEventRef)_hidEvent;
-(void)_abandonForwardingRecord;
-(long long)_forwardablePhase;
-(unsigned long long)_edgeAim;
-(void)setView:(UIView *)arg1 ;
-(double)maximumPossibleForce;
-(unsigned long long)_senderID;
-(long long)info;
-(id)_forwardingRecord;
-(unsigned)_touchIdentifier;
-(unsigned char)_forceStage;
-(id)_mutableForwardingRecord;
-(double)force;
-(id)_phaseDescription;
-(long long)_compareIndex:(id)arg1 ;
-(void)_loadStateFromTouch:(id)arg1 ;
-(NSString *)description;
-(UIResponder *)_responder;
-(double)majorRadius;
-(long long)_edgeType;
-(void)setPhase:(long long)arg1 ;
-(void)_setForwardablePhase:(long long)arg1 ;
-(void)_setResponder:(id)arg1 ;
-(BOOL)isDelayed;
-(double)_pressure;
-(id)_clone;
-(long long)phase;
-(long long)type;
-(SEL)_responderSelectorForPhase:(long long)arg1 ;
-(BOOL)_edgeForceActive;
-(BOOL)_edgeForcePending;
-(float)_zGradient;
-(void)_setType:(long long)arg1 ;
-(CGPoint)previousLocationInView:(id)arg1 ;
-(UIWindow *)window;
-(CGPoint)_previousLocationInSceneReferenceSpace;
-(long long)_responderForwardableType;
-(double)initialTouchTimestamp;
-(double)timestamp;
-(id)_gestureRecognizers;
-(void)setTimestamp:(double)arg1 ;
-(void)setTapCount:(unsigned long long)arg1 ;
-(BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3 ;
-(CGPoint)_locationInSceneReferenceSpace;
-(unsigned long long)tapCount;
-(void)setInitialTouchTimestamp:(double)arg1 ;
-(BOOL)_isPointerTouch;
-(void)setWindow:(UIWindow *)arg1 ;
-(BOOL)_isAbandoningForwardingRecord;
-(NSArray *)gestureRecognizers;
-(void)setIsDelayed:(BOOL)arg1 ;
-(void)dealloc;
-(void)_setPreviousTouch:(id)arg1 ;
-(void)_clearForReenteringHoverInWindow:(id)arg1 ;
-(void)_setHidEvent:(IOHIDEventRef)arg1 ;
@end

