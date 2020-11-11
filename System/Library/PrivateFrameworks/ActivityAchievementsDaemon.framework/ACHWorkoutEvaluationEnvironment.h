/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACHWorkoutEvaluationWorkoutProperties;

@interface ACHWorkoutEvaluationEnvironment : NSObject {

	ACHWorkoutEvaluationWorkoutProperties* _workout;
	unsigned long long _numberOfFirstPartyWorkoutsOver5MinutesWithType;
	unsigned long long _numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
	double _bestKilocaloriesForType;
	unsigned long long _experienceType;

}

@property (nonatomic,readonly) ACHWorkoutEvaluationWorkoutProperties * workout;                                                 //@synthesize workout=_workout - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFirstPartyWorkoutsOver5MinutesWithType;                               //@synthesize numberOfFirstPartyWorkoutsOver5MinutesWithType=_numberOfFirstPartyWorkoutsOver5MinutesWithType - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;              //@synthesize numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek=_numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek - In the implementation block
@property (nonatomic,readonly) double bestKilocaloriesForType;                                                                  //@synthesize bestKilocaloriesForType=_bestKilocaloriesForType - In the implementation block
@property (nonatomic,readonly) unsigned long long experienceType;                                                               //@synthesize experienceType=_experienceType - In the implementation block
-(id)valueForUndefinedKey:(id)arg1 ;
-(ACHWorkoutEvaluationWorkoutProperties *)workout;
-(unsigned long long)experienceType;
-(unsigned long long)numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
-(id)initWithWorkout:(id)arg1 numberOfFirstPartyWorkoutsOver5MinutesWithType:(unsigned long long)arg2 numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek:(unsigned long long)arg3 bestKilocaloriesForType:(double)arg4 experienceType:(unsigned long long)arg5 ;
-(unsigned long long)numberOfFirstPartyWorkoutsOver5MinutesWithType;
-(double)bestKilocaloriesForType;
@end
