/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>
#import <UIKitCore/_UIClickInteractionDriving.h>

@protocol _UIClickInteractionDriverDelegate;
@class UIView, UITouchForceGestureRecognizer, NSString, UIGestureRecognizer;

@interface _UIForceClickInteractionDriver : NSObject <UIGestureRecognizerDelegatePrivate, _UIClickInteractionDriving> {

	unsigned long long _currentState;
	BOOL _cancelsTouchesInView;
	id<_UIClickInteractionDriverDelegate> _delegate;
	UIView* _view;
	UITouchForceGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,retain) UITouchForceGestureRecognizer * gestureRecognizer;                  //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,readonly) double touchForce; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<_UIClickInteractionDriverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * view;                                               //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) double allowableMovement; 
@property (assign,nonatomic) BOOL cancelsTouchesInView;                                          //@synthesize cancelsTouchesInView=_cancelsTouchesInView - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * primaryGestureRecognizer; 
@property (nonatomic,readonly) double touchDuration; 
@property (nonatomic,readonly) BOOL hasExceededAllowableMovement; 
@property (nonatomic,readonly) BOOL isCurrentlyAcceleratedByForce; 
@property (nonatomic,readonly) BOOL clicksUpAutomaticallyAfterTimeout; 
@property (nonatomic,readonly) double maximumEffectProgress; 
@property (nonatomic,readonly) unsigned long long inputPrecision; 
@property (assign,nonatomic) unsigned long long behavior; 
+(BOOL)requiresForceCapability;
+(BOOL)prefersCancelsTouchesInView;
-(BOOL)cancelsTouchesInView;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(UIGestureRecognizer *)primaryGestureRecognizer;
-(unsigned long long)inputPrecision;
-(BOOL)clicksUpAutomaticallyAfterTimeout;
-(void)_handleGestureRecognizer:(id)arg1 ;
-(BOOL)isCurrentlyAcceleratedByForce;
-(void)cancelInteraction;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(double)allowableMovement;
-(UITouchForceGestureRecognizer *)gestureRecognizer;
-(id)init;
-(void)setAllowableMovement:(double)arg1 ;
-(void)setGestureRecognizer:(UITouchForceGestureRecognizer *)arg1 ;
-(id<_UIClickInteractionDriverDelegate>)delegate;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(double)touchForce;
-(double)maximumEffectProgress;
-(void)setDelegate:(id<_UIClickInteractionDriverDelegate>)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)setCancelsTouchesInView:(BOOL)arg1 ;
-(BOOL)hasExceededAllowableMovement;
-(BOOL)allowsRepeatedClicks;
-(double)touchDuration;
@end

