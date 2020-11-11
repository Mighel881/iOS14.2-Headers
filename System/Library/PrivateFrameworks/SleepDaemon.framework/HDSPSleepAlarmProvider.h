/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NAFuture;


@protocol HDSPSleepAlarmProvider <NSObject>
@property (nonatomic,readonly) NSArray * sleepAlarms; 
@property (nonatomic,readonly) NAFuture * sleepAlarmsFuture; 
@required
-(void)resetSleepAlarmSnoozeState;
-(NSArray *)sleepAlarms;
-(void)updateSleepAlarms;
-(NAFuture *)sleepAlarmsFuture;
-(id)sleepAlarmsIgnoringCache:(BOOL)arg1;

@end
