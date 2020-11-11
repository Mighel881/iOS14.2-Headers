/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBTransaction.h>
#import <libobjc.A.dylib/SBSceneHandleObserver.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>
#import <libobjc.A.dylib/SBViewControllerTransitionContextDelegate.h>
#import <libobjc.A.dylib/SBUIAnimationStepping.h>
#import <libobjc.A.dylib/SBUIAnimationControllerCoordinating.h>

@protocol SBUIAnimationControllerTransitionContextProvider;
@class BSBlockTransaction, NSSet, NSMutableArray, SBAnimationStepper, UIWindow, UIView, SBViewControllerTransitionContext, BSTransaction, SBApplicationSceneEntity, BSAnimationSettings, NSString;

@interface SBUIAnimationController : SBTransaction <SBSceneHandleObserver, UIViewControllerInteractiveTransitioning, SBViewControllerTransitionContextDelegate, SBUIAnimationStepping, SBUIAnimationControllerCoordinating> {

	id<SBUIAnimationControllerTransitionContextProvider> _transitionContextProvider;
	BSBlockTransaction* _animationTransaction;
	BSBlockTransaction* _notifyObserversTransaction;
	BSBlockTransaction* _cleanupTransaction;
	NSSet* _sceneHandlesBeingObserved;
	NSSet* _entitiesToObserve;
	NSSet* _startTransactionDependencies;
	NSMutableArray* _coordinatingChildRelationships;
	NSMutableArray* _steppedCoordinatingChildAnimations;
	SBAnimationStepper* _stepper;
	UIWindow* _transitionWindow;
	UIView* _transitionContainer;
	int _animationState;
	BOOL _didPostBeginAnimationNotification;
	BOOL _didNotifyObserversOfCompletion;
	BOOL _needsCATransactionActivate;
	SBViewControllerTransitionContext* _transition;
	/*^block*/id _animationTransactionCompletion;

}

@property (nonatomic,retain) SBViewControllerTransitionContext * transition;                                              //@synthesize transition=_transition - In the implementation block
@property (nonatomic,retain) id<SBUIAnimationControllerTransitionContextProvider> transitionContextProvider;              //@synthesize transitionContextProvider=_transitionContextProvider - In the implementation block
@property (nonatomic,copy) id animationTransactionCompletion;                                                             //@synthesize animationTransactionCompletion=_animationTransactionCompletion - In the implementation block
@property (nonatomic,readonly) BSTransaction * animationTransaction;                                                      //@synthesize animationTransaction=_animationTransaction - In the implementation block
@property (nonatomic,readonly) BSTransaction * notifyObserversTransaction;                                                //@synthesize notifyObserversTransaction=_notifyObserversTransaction - In the implementation block
@property (nonatomic,readonly) BSTransaction * cleanupTransaction;                                                        //@synthesize cleanupTransaction=_cleanupTransaction - In the implementation block
@property (assign,nonatomic) BOOL needsCATransactionActivate;                                                             //@synthesize needsCATransactionActivate=_needsCATransactionActivate - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                                                                    //@synthesize transitionContainer=_transitionContainer - In the implementation block
@property (nonatomic,copy,readonly) NSSet * toApplicationSceneEntities; 
@property (nonatomic,readonly) SBApplicationSceneEntity * toApplicationSceneEntity; 
@property (nonatomic,copy,readonly) NSSet * fromApplicationSceneEntities; 
@property (nonatomic,readonly) SBApplicationSceneEntity * fromApplicationSceneEntity; 
@property (nonatomic,readonly) BOOL transitionSupportsCancelling; 
@property (nonatomic,readonly) BOOL transitionSupportsRestarting; 
@property (nonatomic,readonly) BOOL transitionWasCancelled; 
@property (nonatomic,readonly) BOOL transitionWasRestarted; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (nonatomic,readonly) id<SBViewControllerTransitionCoordinator> transitionCoordinator; 
@property (nonatomic,readonly) BSAnimationSettings * animationSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
@property (getter=isStepped,nonatomic,readonly) BOOL stepped; 
@property (assign,nonatomic) double stepPercentage; 
-(int)_animationState;
-(NSSet *)fromApplicationSceneEntities;
-(void)cancelTransition;
-(BOOL)transitionWasCancelled;
-(void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(id)_transitionAnimator;
-(void)_cleanupAnimation;
-(id)init;
-(void)_setAnimationState:(int)arg1 ;
-(BOOL)isInteractive;
-(BOOL)_canBeInterrupted;
-(SBViewControllerTransitionContext *)transition;
-(BOOL)shouldResignActiveForAnimation;
-(void)_begin;
-(BOOL)isFluidSwitcherAnimationController;
-(BSAnimationSettings *)animationSettings;
-(id)_animationIdentifier;
-(void)startInteractiveTransition:(id)arg1 ;
-(BOOL)isReasonableMomentToInterrupt;
-(UIView *)containerView;
-(id<SBViewControllerTransitionCoordinator>)transitionCoordinator;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(BOOL)animating;
-(BOOL)_shouldDismissBanner;
-(void)transitionDidFinish:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)restartTransition;
-(BOOL)transitionWasRestarted;
-(void)setTransition:(SBViewControllerTransitionContext *)arg1 ;
-(void)_didInterruptWithReason:(id)arg1 ;
-(void)_addDebugLogCategory:(id)arg1 ;
-(void)_willComplete;
-(void)_setHidden:(BOOL)arg1 ;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(NSSet *)toApplicationSceneEntities;
-(void)dealloc;
-(BOOL)_willAnimate;
-(void)_enumerateCoordinatingAnimationsWithBlock:(/*^block*/id)arg1 ;
-(id)_getTransitionWindow;
-(void)_noteAnimationDidFinish;
-(BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
-(void)addCoordinatingChildTransaction:(id)arg1 withSchedulingPolicy:(unsigned long long)arg2 ;
-(id<SBUIAnimationControllerTransitionContextProvider>)transitionContextProvider;
-(void)_noteAnimationDidFail;
-(BOOL)__animationShouldStart;
-(void)setAnimationTransactionCompletion:(id)arg1 ;
-(void)__startAnimation;
-(void)__reportAnimationCompletion;
-(void)__cleanupAnimation;
-(void)_cleanupEntityObservers;
-(BOOL)transitionSupportsCancelling;
-(void)_enumerateCoordinatingAnimationsWithSchedulingPolicy:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)transitionSupportsRestarting;
-(BOOL)isStepped;
-(void)_abortAnimation;
-(id)coordinatingAnimationControllers;
-(void)_enumerateCoordinatingChildRelationshipsWithBlock:(/*^block*/id)arg1 ;
-(id)__alertItemsController;
-(id)_viewsForAnimationStepping;
-(void)_willSetupStartDependencies;
-(id)_progressDependencies;
-(id)__startTransactionDependencyForEntity:(id)arg1 ;
-(BOOL)__wantsInitialProgressStateChange;
-(void)_application:(id)arg1 processStateDidChange:(id)arg2 ;
-(void)_sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2 ;
-(void)_willBeginWaitingForStartDependencies;
-(BSTransaction *)animationTransaction;
-(BSTransaction *)notifyObserversTransaction;
-(BSTransaction *)cleanupTransaction;
-(void)_registerEntityObserversIfNecessary;
-(void)__abortAnimation;
-(void)_notifyObserversOfAnimationCompletion;
-(BOOL)_isNullAnimation;
-(void)_entityObserverProgressDidChange:(/*^block*/id)arg1 waitForSceneContentAvailableTransactionBlock:(/*^block*/id)arg2 ;
-(void)__noteAnimationDidTerminate;
-(id)animationTransactionCompletion;
-(void)_processStateDidChange:(id)arg1 ;
-(double)stepPercentage;
-(void)setStepPercentage:(double)arg1 ;
-(void)finishSteppingForwardToEnd;
-(void)finishSteppingBackwardToStart;
-(SBApplicationSceneEntity *)toApplicationSceneEntity;
-(SBApplicationSceneEntity *)fromApplicationSceneEntity;
-(void)addSteppedCoordinatingChildAnimation:(id)arg1 ;
-(void)delayCleanupUntilTransactionFinishes:(id)arg1 ;
-(void)stopDelayingCleanupForTransaction:(id)arg1 ;
-(void)delayAnimationUntilTransactionFinishes:(id)arg1 ;
-(void)stopDelayingAnimationForTransaction:(id)arg1 ;
-(BOOL)waitingToStart;
-(BOOL)isFinishedAnimating;
-(void)enableSteppingWithAnimationSettings:(id)arg1 ;
-(id)_displayIdentity;
-(void)_noteAnimationDidRevealApplication;
-(void)setTransitionContextProvider:(id<SBUIAnimationControllerTransitionContextProvider>)arg1 ;
-(BOOL)needsCATransactionActivate;
-(void)setNeedsCATransactionActivate:(BOOL)arg1 ;
@end
