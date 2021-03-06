/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HKSPSleepEventTimeline, HKSPSleepSchedule, HKSPMutableSleepSchedule;

@interface HKSPSleepEventTimelineResults : NSObject {

	BOOL _sleepScheduleInvalid;
	BOOL _snoozeFireDateNeedsReset;
	HKSPSleepEventTimeline* _timeline;
	HKSPSleepEventTimeline* _unadjustedTimeline;
	HKSPSleepSchedule* _originalSleepSchedule;
	HKSPMutableSleepSchedule* _mutableValidSleepSchedule;

}

@property (nonatomic,retain) HKSPSleepEventTimeline * timeline;                                 //@synthesize timeline=_timeline - In the implementation block
@property (nonatomic,retain) HKSPSleepEventTimeline * unadjustedTimeline;                       //@synthesize unadjustedTimeline=_unadjustedTimeline - In the implementation block
@property (assign,nonatomic) BOOL sleepScheduleInvalid;                                         //@synthesize sleepScheduleInvalid=_sleepScheduleInvalid - In the implementation block
@property (assign,nonatomic) BOOL snoozeFireDateNeedsReset;                                     //@synthesize snoozeFireDateNeedsReset=_snoozeFireDateNeedsReset - In the implementation block
@property (nonatomic,retain) HKSPSleepSchedule * originalSleepSchedule;                         //@synthesize originalSleepSchedule=_originalSleepSchedule - In the implementation block
@property (nonatomic,retain) HKSPMutableSleepSchedule * mutableValidSleepSchedule;              //@synthesize mutableValidSleepSchedule=_mutableValidSleepSchedule - In the implementation block
@property (nonatomic,readonly) HKSPSleepSchedule * validSleepSchedule; 
-(HKSPSleepSchedule *)validSleepSchedule;
-(HKSPMutableSleepSchedule *)mutableValidSleepSchedule;
-(void)setSleepScheduleInvalid:(BOOL)arg1 ;
-(HKSPSleepEventTimeline *)unadjustedTimeline;
-(HKSPSleepSchedule *)originalSleepSchedule;
-(void)setSnoozeFireDateNeedsReset:(BOOL)arg1 ;
-(void)setUnadjustedTimeline:(HKSPSleepEventTimeline *)arg1 ;
-(BOOL)sleepScheduleInvalid;
-(void)setOriginalSleepSchedule:(HKSPSleepSchedule *)arg1 ;
-(void)setMutableValidSleepSchedule:(HKSPMutableSleepSchedule *)arg1 ;
-(BOOL)snoozeFireDateNeedsReset;
-(void)setTimeline:(HKSPSleepEventTimeline *)arg1 ;
-(HKSPSleepEventTimeline *)timeline;
@end

