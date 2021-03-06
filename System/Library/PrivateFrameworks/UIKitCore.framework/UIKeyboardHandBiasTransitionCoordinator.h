/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIKeyboardHandBiasTransitionCoordinatorDelegate;
@class UIPanGestureRecognizer, UIKeyboardSquishTransition, UIKeyboardHandBiasTransitionContext, NSString;

@interface UIKeyboardHandBiasTransitionCoordinator : NSObject <UIGestureRecognizerDelegate> {

	BOOL _edgeSwipeDetected;
	BOOL _transitionDidBegin;
	unsigned long long _transitionStartEdge;
	long long _initialBias;
	long long _transitionTargetBias;
	double _initialEdgeTranslation;
	double _edgeSwipeProgress;
	double _edgeSwipeVelocity;
	BOOL _interactive;
	id<UIKeyboardHandBiasTransitionCoordinatorDelegate> _delegate;
	UIPanGestureRecognizer* _gestureRecognizer;
	UIKeyboardSquishTransition* _currentTransition;
	double _swipeWidthRatio;
	UIKeyboardHandBiasTransitionContext* _currentContext;

}

@property (nonatomic,retain) UIPanGestureRecognizer * gestureRecognizer;                                       //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) UIKeyboardSquishTransition * currentTransition;                                   //@synthesize currentTransition=_currentTransition - In the implementation block
@property (nonatomic,retain) UIKeyboardHandBiasTransitionContext * currentContext;                             //@synthesize currentContext=_currentContext - In the implementation block
@property (assign,nonatomic,__weak) id<UIKeyboardHandBiasTransitionCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double swipeWidthRatio;                                                           //@synthesize swipeWidthRatio=_swipeWidthRatio - In the implementation block
@property (assign,getter=isInteractive,nonatomic) BOOL interactive;                                            //@synthesize interactive=_interactive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIPanGestureRecognizer *)gestureRecognizer;
-(BOOL)isInteractive;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(id<UIKeyboardHandBiasTransitionCoordinatorDelegate>)delegate;
-(void)setInteractive:(BOOL)arg1 ;
-(UIKeyboardSquishTransition *)currentTransition;
-(void)installGestureRecognizers;
-(UIKeyboardHandBiasTransitionContext *)currentContext;
-(void)setDelegate:(id<UIKeyboardHandBiasTransitionCoordinatorDelegate>)arg1 ;
-(void)setSwipeWidthRatio:(double)arg1 ;
-(void)_handBiasPanGestureRecognizerStateDidChange:(id)arg1 ;
-(void)_didRecognizeSpacebarGestureOnStartEdge:(unsigned long long)arg1 withDistance:(double)arg2 ;
-(void)finishHandBiasTransition;
-(void)beginHandBiasTransitionWithContext:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(double)swipeWidthRatio;
-(void)setCurrentTransition:(UIKeyboardSquishTransition *)arg1 ;
-(void)setCurrentContext:(UIKeyboardHandBiasTransitionContext *)arg1 ;
-(void)uninstallGestureRecognizers;
@end

