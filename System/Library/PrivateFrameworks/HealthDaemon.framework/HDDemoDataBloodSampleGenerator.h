/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataBloodSampleGenerator : HDDemoDataBaseSampleGenerator {

	double _nextBloodAlcoholContentSampleTime;

}

@property (assign,nonatomic) double nextBloodAlcoholContentSampleTime;              //@synthesize nextBloodAlcoholContentSampleTime=_nextBloodAlcoholContentSampleTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(id)bloodAlcoholContentForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(double)_computeNumDrinksTodayForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(double)nextBloodAlcoholContentSampleTime;
-(void)setNextBloodAlcoholContentSampleTime:(double)arg1 ;
@end

