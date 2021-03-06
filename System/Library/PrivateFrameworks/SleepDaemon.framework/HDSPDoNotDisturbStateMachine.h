/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Sleep/HKSPPersistentStateMachine.h>
#import <libobjc.A.dylib/HDSPDoNotDisturbStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPDoNotDisturbStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPDoNotDisturbStateMachineEventHandler.h>

@class HDSPDoNotDisturbOffState, HDSPDoNotDisturbDuringWindDownState, HDSPDoNotDisturbDuringBedtimeState, HDSPDoNotDisturbManualOffState, NSString, NSDate, HKSPSleepScheduleModel;

@interface HDSPDoNotDisturbStateMachine : HKSPPersistentStateMachine <HDSPDoNotDisturbStateMachineDelegate, HDSPDoNotDisturbStateMachineInfoProvider, HDSPDoNotDisturbStateMachineEventHandler> {

	HDSPDoNotDisturbOffState* _offState;
	HDSPDoNotDisturbDuringWindDownState* _dndDuringWindDownState;
	HDSPDoNotDisturbDuringBedtimeState* _dndDuringBedtimeState;
	HDSPDoNotDisturbManualOffState* _manualOffState;

}

@property (nonatomic,__weak,readonly) id<HDSPDoNotDisturbStateMachineDelegate> delegate; 
@property (nonatomic,__weak,readonly) id<HDSPDoNotDisturbStateMachineInfoProvider> infoProvider; 
@property (nonatomic,readonly) HDSPDoNotDisturbOffState * offState;                                           //@synthesize offState=_offState - In the implementation block
@property (nonatomic,readonly) HDSPDoNotDisturbDuringWindDownState * dndDuringWindDownState;                  //@synthesize dndDuringWindDownState=_dndDuringWindDownState - In the implementation block
@property (nonatomic,readonly) HDSPDoNotDisturbDuringBedtimeState * dndDuringBedtimeState;                    //@synthesize dndDuringBedtimeState=_dndDuringBedtimeState - In the implementation block
@property (nonatomic,readonly) HDSPDoNotDisturbManualOffState * manualOffState;                               //@synthesize manualOffState=_manualOffState - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (nonatomic,readonly) long long sleepMode; 
@property (nonatomic,readonly) unsigned long long sleepScheduleState; 
-(NSDate *)currentDate;
-(long long)sleepMode;
-(HDSPDoNotDisturbOffState *)offState;
-(HDSPDoNotDisturbManualOffState *)manualOffState;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(id)initWithIdentifier:(id)arg1 persistence:(id)arg2 delegate:(id)arg3 infoProvider:(id)arg4 currentDateProvider:(/*^block*/id)arg5 ;
-(HDSPDoNotDisturbDuringBedtimeState *)dndDuringBedtimeState;
-(id)stateMachineLog;
-(unsigned long long)sleepScheduleState;
-(void)engageDoNotDisturbDuringWindDownWithUserVisibleEndDate:(id)arg1 updateOnly:(BOOL)arg2 ;
-(HDSPDoNotDisturbDuringWindDownState *)dndDuringWindDownState;
-(void)disengageDoNotDisturb;
-(void)engageDoNotDisturbDuringBedtimeWithUserVisibleEndDate:(id)arg1 updateOnly:(BOOL)arg2 ;
-(void)userTurnedOffDoNotDisturb;
@end

