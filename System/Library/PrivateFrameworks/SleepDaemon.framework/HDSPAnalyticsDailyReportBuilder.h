/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SleepDaemon/SleepDaemon-Structs.h>
@class HDSPEnvironment, NSArray;

@interface HDSPAnalyticsDailyReportBuilder : NSObject {

	HDSPEnvironment* _environment;
	NSArray* _daySummaries;
	SCD_Struct_HD2 _morningIndexRange;

}

@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSArray * daySummaries;                            //@synthesize daySummaries=_daySummaries - In the implementation block
@property (nonatomic,readonly) SCD_Struct_HD2 morningIndexRange;                  //@synthesize morningIndexRange=_morningIndexRange - In the implementation block
-(id)sleepSchedule;
-(id)currentDate;
-(id)sleepSettings;
-(id)analyticsStore;
-(HDSPEnvironment *)environment;
-(id)_biologicalSex;
-(id)healthStore;
-(NSArray *)daySummaries;
-(SCD_Struct_HD2)morningIndexRange;
-(id)initWithEnvironment:(id)arg1 daySummaries:(id)arg2 morningIndexRange:(SCD_Struct_HD2)arg3 ;
-(id)buildReports;
-(id)_dailyReportEvent;
-(id)_windDownEvents;
-(id)_userAgeForCurrentDate:(id)arg1 ;
-(id)_weeksSinceOnboardDate:(id)arg1 currentDate:(id)arg2 calendar:(id)arg3 ;
-(BOOL)_didInteractWithWindDownActionsWithinLastTwoDays;
-(BOOL)_changedSchedule:(id)arg1 withinNumberOfDays:(unsigned long long)arg2 currentDate:(id)arg3 calendar:(id)arg4 ;
@end

