/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, AWDCoreRoutineLocationAwarenessStatistics, AWDCoreRoutineLocationAwarenessLocationTimeHistograms, AWDCoreRoutineLocationAwarenessIntervalHistogram;

@interface RTLocationAwarenessMetrics : NSObject <NSCopying> {

	NSDate* _startTimestamp;
	AWDCoreRoutineLocationAwarenessStatistics* _heartbeatStats;
	AWDCoreRoutineLocationAwarenessLocationTimeHistograms* _timeHistograms;
	AWDCoreRoutineLocationAwarenessIntervalHistogram* _intervalHistogram;

}

@property (nonatomic,readonly) NSDate * startTimestamp;                                                           //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessStatistics * heartbeatStats;                          //@synthesize heartbeatStats=_heartbeatStats - In the implementation block
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessLocationTimeHistograms * timeHistograms;              //@synthesize timeHistograms=_timeHistograms - In the implementation block
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessIntervalHistogram * intervalHistogram;                //@synthesize intervalHistogram=_intervalHistogram - In the implementation block
-(void)setTimeHistograms:(AWDCoreRoutineLocationAwarenessLocationTimeHistograms *)arg1 ;
-(id)init;
-(void)setIntervalHistogram:(AWDCoreRoutineLocationAwarenessIntervalHistogram *)arg1 ;
-(NSDate *)startTimestamp;
-(id)initWithStartTimestamp:(id)arg1 heartbeatStats:(id)arg2 timeHistograms:(id)arg3 intervalHistogram:(id)arg4 ;
-(AWDCoreRoutineLocationAwarenessLocationTimeHistograms *)timeHistograms;
-(AWDCoreRoutineLocationAwarenessIntervalHistogram *)intervalHistogram;
-(id)copyWithZone:(NSZone*)arg1 ;
-(AWDCoreRoutineLocationAwarenessStatistics *)heartbeatStats;
-(void)setHeartbeatStats:(AWDCoreRoutineLocationAwarenessStatistics *)arg1 ;
@end

