/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <libobjc.A.dylib/OSLogCoding.h>
#import <libobjc.A.dylib/TAEventProtocol.h>

@class NSDateInterval, NSDictionary, NSDate, NSString;

@interface TAPeopleDensityResult : NSObject <OSLogCoding, TAEventProtocol> {

	long long _peopleDensityState;
	double _confidence;
	NSDateInterval* _observationInterval;
	NSDictionary* _additionalInfo;
	NSDate* _date;

}

@property (nonatomic,readonly) long long peopleDensityState;                           //@synthesize peopleDensityState=_peopleDensityState - In the implementation block
@property (nonatomic,readonly) double confidence;                                      //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * observationInterval;              //@synthesize observationInterval=_observationInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * additionalInfo;                     //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                     //@synthesize date=_date - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)getDate;
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(unsigned long long)hash;
-(id)descriptionDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSString *)description;
-(NSDictionary *)additionalInfo;
-(BOOL)isEqual:(id)arg1 ;
-(double)confidence;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDateInterval *)observationInterval;
-(long long)peopleDensityState;
-(id)initWithState:(long long)arg1 confidence:(double)arg2 observationInterval:(id)arg3 additionalInfo:(id)arg4 date:(id)arg5 ;
@end
