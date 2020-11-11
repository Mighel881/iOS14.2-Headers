/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, RTLocation, RTPlaceInference;

@interface RTVisit : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _date;
	long long _type;
	RTLocation* _location;
	NSDate* _entry;
	NSDate* _exit;
	double _confidence;
	RTPlaceInference* _placeInference;
	long long _dataPointCount;

}

@property (nonatomic,retain) RTPlaceInference * placeInference;              //@synthesize placeInference=_placeInference - In the implementation block
@property (nonatomic,readonly) long long dataPointCount;                     //@synthesize dataPointCount=_dataPointCount - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                           //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) RTLocation * location;                   //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSDate * entry;                          //@synthesize entry=_entry - In the implementation block
@property (nonatomic,copy,readonly) NSDate * exit;                           //@synthesize exit=_exit - In the implementation block
@property (nonatomic,readonly) double confidence;                            //@synthesize confidence=_confidence - In the implementation block
+(id)stringFromVisitIncidentType:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(long long)visitIncidentTypeFromString:(id)arg1 ;
-(NSDate *)exit;
-(id)init;
-(unsigned long long)hash;
-(RTLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)dataPointCount;
-(NSDate *)date;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(double)confidence;
-(long long)type;
-(id)initWithDate:(id)arg1 type:(long long)arg2 location:(id)arg3 entry:(id)arg4 exit:(id)arg5 dataPointCount:(long long)arg6 confidence:(double)arg7 placeInference:(id)arg8 ;
-(RTPlaceInference *)placeInference;
-(BOOL)isEqualToVisit:(id)arg1 ;
-(void)setPlaceInference:(RTPlaceInference *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)entry;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
