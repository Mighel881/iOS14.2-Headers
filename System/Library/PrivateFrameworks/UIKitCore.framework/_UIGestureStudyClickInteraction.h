/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIClickInteractionDriverDelegate.h>
#import <UIKit/UIInteraction.h>
#import <UIKitCore/_UIGestureStudyParticipating.h>

@protocol _UIClickInteractionDriving;
@class NSString, UIView;

@interface _UIGestureStudyClickInteraction : NSObject <_UIClickInteractionDriverDelegate, UIInteraction, _UIGestureStudyParticipating> {

	BOOL _usesForce;
	UIView* _view;
	id<_UIClickInteractionDriving> _driver;
	id _target;
	SEL _action;
	double _startTimestamp;
	CGPoint _originalCentroid;

}

@property (nonatomic,retain) id<_UIClickInteractionDriving> driver;              //@synthesize driver=_driver - In the implementation block
@property (assign,nonatomic,__weak) id target;                                   //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                         //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL usesForce;                                     //@synthesize usesForce=_usesForce - In the implementation block
@property (assign,nonatomic) double startTimestamp;                              //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) CGPoint originalCentroid;                           //@synthesize originalCentroid=_originalCentroid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                             //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double movement; 
-(id)target;
-(void)clickDriver:(id)arg1 shouldBegin:(/*^block*/id)arg2 ;
-(void)clickDriver:(id)arg1 didPerformEvent:(unsigned long long)arg2 ;
-(void)willMoveToView:(id)arg1 ;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(NSString *)eventName;
-(void)didMoveToView:(id)arg1 ;
-(UIView *)view;
-(double)movement;
-(id<_UIClickInteractionDriving>)driver;
-(BOOL)usesForce;
-(double)startTimestamp;
-(void)setDriver:(id<_UIClickInteractionDriving>)arg1 ;
-(void)setTarget:(id)arg1 ;
-(NSString *)description;
-(void)setOriginalCentroid:(CGPoint)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setStartTimestamp:(double)arg1 ;
-(void)setUsesForce:(BOOL)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 useForce:(BOOL)arg3 ;
-(double)duration;
-(CGPoint)originalCentroid;
-(SEL)action;
@end

