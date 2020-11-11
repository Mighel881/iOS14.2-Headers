/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NTKTimelineEntryModelCacheDataSource;
@class NSMutableArray, NSDate;

@interface NTKTimelineEntryModelCache : NSObject {

	NSMutableArray* _cachedEntryModels;
	NSDate* _cacheStartDate;
	NSDate* _cacheEndDate;
	id<NTKTimelineEntryModelCacheDataSource> _dataSource;

}

@property (nonatomic,readonly) NSDate * cacheStartDate;                                               //@synthesize cacheStartDate=_cacheStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * cacheEndDate;                                                 //@synthesize cacheEndDate=_cacheEndDate - In the implementation block
@property (assign,nonatomic,__weak) id<NTKTimelineEntryModelCacheDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(id)_startOfDayBeforeDate:(id)arg1 ;
+(id)_startOfDayAfterDate:(id)arg1 ;
+(id)_startOfDayForDate:(id)arg1 ;
+(id)_endOfDayForDate:(id)arg1 ;
-(id)init;
-(void)setDataSource:(id<NTKTimelineEntryModelCacheDataSource>)arg1 ;
-(id)calendar;
-(id<NTKTimelineEntryModelCacheDataSource>)dataSource;
-(void)invalidate;
-(id)_cachedEntryModelForDate:(id)arg1 ;
-(void)_extendCacheTowardDate:(id)arg1 ;
-(id)_cachedEntryModelBeforeDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)_cachedEntryModelAfterDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(BOOL)hasEntryModelForDate:(id)arg1 ;
-(id)entryModelForDate:(id)arg1 ;
-(id)entryModelsBeforeDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)entryModelsAfterDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(NSDate *)cacheStartDate;
-(NSDate *)cacheEndDate;
@end
