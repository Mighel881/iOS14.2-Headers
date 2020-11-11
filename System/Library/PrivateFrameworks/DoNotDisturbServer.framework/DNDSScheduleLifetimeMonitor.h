/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DNDSBaseLifetimeMonitor.h>

@class PCPersistentTimer;

@interface DNDSScheduleLifetimeMonitor : DNDSBaseLifetimeMonitor {

	PCPersistentTimer* _lifetimeTimer;

}

@property (assign,nonatomic,__weak) id<DNDSScheduleLifetimeMonitorDataSource> dataSource; 
+(Class)lifetimeClass;
-(void)_timerFired:(id)arg1 ;
-(id)updateForModeAssertions:(id)arg1 date:(id)arg2 ;
-(id)_activeDateIntervalForScheduleLifetime:(id)arg1 assertionStartDate:(id)arg2 date:(id)arg3 scheduleSettings:(id)arg4 calendar:(id)arg5 ignoreMatchScheduleStartDate:(BOOL)arg6 ;
-(id)activeDateIntervalForScheduleLifetime:(id)arg1 assertionStartDate:(id)arg2 date:(id)arg3 ;
-(id)nextActiveDateIntervalForScheduleLifetime:(id)arg1 assertionStartDate:(id)arg2 date:(id)arg3 ;
@end
