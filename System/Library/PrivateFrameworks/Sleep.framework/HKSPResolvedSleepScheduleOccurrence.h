/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKSPSleepScheduleOccurrence, HKSPSleepEvent, NSDateInterval, NSString;

@interface HKSPResolvedSleepScheduleOccurrence : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {

	HKSPSleepScheduleOccurrence* _occurrence;
	HKSPSleepEvent* _wakeUpEvent;
	HKSPSleepEvent* _bedtimeEvent;
	HKSPSleepEvent* _windDownEvent;

}

@property (nonatomic,readonly) NSDateInterval * scheduledInterval; 
@property (nonatomic,readonly) NSDateInterval * bedtimeInterval; 
@property (nonatomic,readonly) NSDateInterval * windDownInterval; 
@property (nonatomic,readonly) HKSPSleepScheduleOccurrence * occurrence;              //@synthesize occurrence=_occurrence - In the implementation block
@property (nonatomic,readonly) HKSPSleepEvent * wakeUpEvent;                          //@synthesize wakeUpEvent=_wakeUpEvent - In the implementation block
@property (nonatomic,readonly) HKSPSleepEvent * bedtimeEvent;                         //@synthesize bedtimeEvent=_bedtimeEvent - In the implementation block
@property (nonatomic,readonly) HKSPSleepEvent * windDownEvent;                        //@synthesize windDownEvent=_windDownEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)succinctDescription;
-(unsigned long long)hash;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)generateOverrideOccurrenceForCurrentDate:(id)arg1 gregorianCalendar:(id)arg2 ;
-(HKSPSleepEvent *)wakeUpEvent;
-(HKSPSleepEvent *)bedtimeEvent;
-(HKSPSleepEvent *)windDownEvent;
-(id)initWithOccurrence:(id)arg1 wakeUpEvent:(id)arg2 bedtimeEvent:(id)arg3 windDownEvent:(id)arg4 ;
-(NSDateInterval *)scheduledInterval;
-(id)occurrenceByAdjustingEvent:(id)arg1 ;
-(id)occurrenceByRemovingEventWithIdentifier:(id)arg1 ;
-(NSDateInterval *)bedtimeInterval;
-(NSDateInterval *)windDownInterval;
-(id)initWithCoder:(id)arg1 ;
-(HKSPSleepScheduleOccurrence *)occurrence;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

