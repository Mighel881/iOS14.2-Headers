/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSSet, NSLock, NSDate, NSDateComponents;

@interface HKStatisticsCollection : NSObject {

	/*^block*/id _emptyStatisticsConstructor;
	double _approximateStatisticsInterval;
	NSMutableDictionary* _statisticsByIndex;
	NSSet* _cachedSources;
	NSLock* _statisticsLock;
	NSDate* _anchorDate;
	NSDateComponents* _statisticsInterval;

}

@property (nonatomic,copy,readonly) NSDate * anchorDate;                                //@synthesize anchorDate=_anchorDate - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * statisticsInterval;              //@synthesize statisticsInterval=_statisticsInterval - In the implementation block
-(id)statistics;
-(id)init;
-(id)sources;
-(NSDate *)anchorDate;
-(id)_mostRecentQuantityDateInterval;
-(void)_resetStatistics:(id)arg1 ;
-(id)_initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2 emptyStatisticsConstructor:(/*^block*/id)arg3 ;
-(BOOL)_insertStatistics:(id)arg1 ;
-(id)_statisticsDateIntervalAndIndex:(long long*)arg1 forDate:(id)arg2 ;
-(id)_statisticsForIndex:(long long)arg1 ;
-(id)_statisticsForLastIndex;
-(void)_enumerateStatisticsIndexesFromDate:(id)arg1 toDate:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_clearSourcesCache;
-(id)_statisticsDateIntervalAtIndex:(long long)arg1 ;
-(void)_timePeriodForStatisticsAtIndex:(long long)arg1 startDate:(id*)arg2 endDate:(id*)arg3 ;
-(id)_initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2 ;
-(id)statisticsForDate:(id)arg1 ;
-(void)enumerateStatisticsFromDate:(id)arg1 toDate:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)_maxSumQuantityStatistics;
-(id)_minSumQuantityStatistics;
-(id)_mostRecentQuantityStatistics;
-(void)_enumerateTimePeriodsFromDate:(id)arg1 toDate:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSDateComponents *)statisticsInterval;
@end
