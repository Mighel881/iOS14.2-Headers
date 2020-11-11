/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@interface WFPredictedLocationTransitionTrigger : WFTrigger {

	unsigned long long _destinationType;
	unsigned long long _minutesBefore;

}

@property (assign,nonatomic) unsigned long long destinationType;              //@synthesize destinationType=_destinationType - In the implementation block
@property (assign,nonatomic) unsigned long long minutesBefore;                //@synthesize minutesBefore=_minutesBefore - In the implementation block
+(id)triggerTypeIcon;
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(id)localizedDisplayExplanation;
-(double)timeIntervalUpperBound;
-(double)timeIntervalLowerBound;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(void)setDestinationType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)destinationType;
-(id)localizedDescriptionWithConfigurationSummary;
-(unsigned long long)minutesBefore;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)setMinutesBefore:(unsigned long long)arg1 ;
@end
