/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CSExternalEventHandling.h>
#import <libobjc.A.dylib/SBLiftToWakeObserver.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class SBLiftToWakeController, SBLockScreenManager, SBBacklightController, SBMainDisplayPolicyAggregator, SBIdleTimerGlobalCoordinator, NSString;

@interface SBLiftToWakeManager : NSObject <CSExternalEventHandling, SBLiftToWakeObserver, BSInvalidatable> {

	SBLiftToWakeController* _liftToWakeController;
	SBLockScreenManager* _accessor_lockScreenManager;
	SBBacklightController* _accessor_backlightController;
	SBMainDisplayPolicyAggregator* _accessor_policyAggregator;
	SBIdleTimerGlobalCoordinator* _accessor_idleTimerCoordinator;
	BOOL _gestureWokeScreen;
	BOOL _observing;
	BOOL _significantUserInteractionOccuredSinceWake;
	BOOL _invalidated;

}

@property (setter=_setLiftToWakeController:,getter=_liftToWakeController,nonatomic,retain) SBLiftToWakeController * liftToWakeController;                    //@synthesize liftToWakeController=_liftToWakeController - In the implementation block
@property (setter=_setPolicyAggregator:,getter=_policyAggregator,nonatomic,retain) SBMainDisplayPolicyAggregator * policyAggregator;                         //@synthesize accessor_policyAggregator=_accessor_policyAggregator - In the implementation block
@property (setter=_setLockScreenManager:,getter=_lockScreenManager,nonatomic,retain) SBLockScreenManager * lockScreenManager;                                //@synthesize accessor_lockScreenManager=_accessor_lockScreenManager - In the implementation block
@property (setter=_setBacklightController:,getter=_backlightController,nonatomic,retain) SBBacklightController * backlightController;                        //@synthesize accessor_backlightController=_accessor_backlightController - In the implementation block
@property (setter=_setIdleTimerCoordinator:,getter=_idleTimerCoordinator,nonatomic,retain) SBIdleTimerGlobalCoordinator * idleTimerCoordinator;              //@synthesize accessor_idleTimerCoordinator=_accessor_idleTimerCoordinator - In the implementation block
@property (assign,setter=_setGestureWokeScreen:,getter=_gestureWokeScreen,nonatomic) BOOL gestureWokeScreen;                                                 //@synthesize gestureWokeScreen=_gestureWokeScreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(NSString *)coverSheetIdentifier;
-(void)_setIdleTimerCoordinator:(id)arg1 ;
-(id)_idleTimerCoordinator;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(void)_setPolicyAggregator:(id)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(id)init;
-(void)conformsToCSEventHandling;
-(void)_setBacklightController:(id)arg1 ;
-(NSString *)description;
-(id)_backlightController;
-(id)_policyAggregator;
-(id)_lockScreenManager;
-(long long)participantState;
-(void)_setLockScreenManager:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(void)_setLiftToWakeController:(id)arg1 ;
-(void)liftToWakeController:(id)arg1 didObserveTransition:(long long)arg2 deviceOrientation:(long long)arg3 ;
-(id)_liftToWakeController;
-(void)_ignoredTransition:(long long)arg1 ;
-(id)_initWithLiftToWakeController:(id)arg1 ;
-(void)_backlightWillTurnOn:(id)arg1 ;
-(void)_setGestureWokeScreen:(BOOL)arg1 ;
-(BOOL)_gestureWokeScreen;
-(BOOL)_isLockScreenMainPageVisible;
@end
