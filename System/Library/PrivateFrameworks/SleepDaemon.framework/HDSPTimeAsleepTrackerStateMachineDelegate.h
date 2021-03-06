/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HDSPTimeAsleepTrackerStateMachineDelegate <HKSPStateMachineDelegate>
@required
-(void)scheduleSleepTracking;
-(void)unscheduleSleepTracking;
-(void)startSleepTrackingSessionWithReason:(unsigned long long)arg1;
-(void)endSleepTrackingSessionWithReason:(unsigned long long)arg1;
-(void)startActivityDetection;
-(void)stopActivityDetection;
-(void)startAppLaunchDetection;
-(void)stopAppLaunchDetection;
-(void)notifyForActivityDetectedOnDate:(id)arg1;

@end

