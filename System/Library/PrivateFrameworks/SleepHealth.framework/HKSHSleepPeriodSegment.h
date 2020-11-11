/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepHealth.framework/SleepHealth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SleepHealth/SleepHealth-Structs.h>
#import <libobjc.A.dylib/HKRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDateInterval, NSArray;

@interface HKSHSleepPeriodSegment : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying> {

	NSDateInterval* _dateInterval;
	NSArray* _sampleIntervals;
	long long _category;

}

@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sampleIntervals;                  //@synthesize sampleIntervals=_sampleIntervals - In the implementation block
@property (nonatomic,readonly) long long category;                              //@synthesize category=_category - In the implementation block
@property (copy,readonly) NSString * hk_redactedDescription; 
+(BOOL)supportsSecureCoding;
+(id)sleepPeriodSegmentWithDateInterval:(id)arg1 sampleIntervals:(id)arg2 category:(long long)arg3 ;
+(id)sleepPeriodSegmentWithDateInterval:(id)arg1 category:(long long)arg2 ;
-(long long)category;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDateInterval *)dateInterval;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)hk_redactedDescription;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)sampleIntervals;
@end
