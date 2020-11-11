/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CMWorkoutManagerInternal;

@interface CMWorkoutManager : NSObject {

	CMWorkoutManagerInternal* _internal;

}

@property (nonatomic,readonly) CMWorkoutManagerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic) id<CMWorkoutManagerDelegate> delegate; 
+(BOOL)isAvailable;
-(id)init;
-(id<CMWorkoutManagerDelegate>)delegate;
-(void)setSuggestedStopTimeout:(double)arg1 ;
-(void)stopWorkout:(id)arg1 ;
-(void)startWorkout:(id)arg1 ;
-(unsigned long long)supportedMetricsForWorkoutType:(long long)arg1 ;
-(void)getPromptsNeededForWorkoutType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)userDismissedWorkoutAlert;
-(void)triggerWorkoutLocationUpdateForTesting:(long long)arg1 ;
-(void)setDelegate:(id<CMWorkoutManagerDelegate>)arg1 ;
-(void)dealloc;
-(CMWorkoutManagerInternal *)_internal;
@end
