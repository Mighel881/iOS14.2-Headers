/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTSleepModeStateMachineDelegate <MTStateMachineDelegate>
@required
-(BOOL)stateMachine:(id)arg1 disengageSleepModeUserRequested:(BOOL)arg2;
-(void)stateMachine:(id)arg1 keepSleepModeOffUntilDate:(id)arg2;
-(BOOL)stateMachine:(id)arg1 engageSleepModeUntilDate:(id)arg2 userEngaged:(BOOL)arg3;
-(void)stateMachineClearKeepSleepModeOff:(id)arg1;
-(void)stateMachine:(id)arg1 scheduleUpdateForSecondsFromNow:(double)arg2;

@end

