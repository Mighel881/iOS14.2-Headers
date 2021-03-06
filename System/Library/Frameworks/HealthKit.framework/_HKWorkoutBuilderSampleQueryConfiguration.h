/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSUUID;

@interface _HKWorkoutBuilderSampleQueryConfiguration : HKQueryServerConfiguration {

	BOOL _needsHistoricalData;
	NSUUID* _workoutBuilderIdentifier;

}

@property (assign,nonatomic) BOOL needsHistoricalData;                     //@synthesize needsHistoricalData=_needsHistoricalData - In the implementation block
@property (nonatomic,copy) NSUUID * workoutBuilderIdentifier;              //@synthesize workoutBuilderIdentifier=_workoutBuilderIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setNeedsHistoricalData:(BOOL)arg1 ;
-(void)setWorkoutBuilderIdentifier:(NSUUID *)arg1 ;
-(BOOL)needsHistoricalData;
-(NSUUID *)workoutBuilderIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

