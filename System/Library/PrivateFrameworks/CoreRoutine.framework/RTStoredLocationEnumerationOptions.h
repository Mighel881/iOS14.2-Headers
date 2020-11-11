/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <CoreRoutine/RTEnumerationOptions.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateInterval, CLLocation;

@interface RTStoredLocationEnumerationOptions : RTEnumerationOptions <NSCopying> {

	NSDateInterval* _dateInterval;
	double _horizontalAccuracy;
	unsigned long long _batchSize;
	CLLocation* _boundingBoxLocation;

}

@property (nonatomic,copy) NSDateInterval * dateInterval;                 //@synthesize dateInterval=_dateInterval - In the implementation block
@property (assign,nonatomic) double horizontalAccuracy;                   //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy) CLLocation * boundingBoxLocation;              //@synthesize boundingBoxLocation=_boundingBoxLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)batchSize;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(BOOL)isEqualToOptions:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDateInterval *)dateInterval;
-(double)horizontalAccuracy;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(Class)enumeratedType;
-(id)initWithDateInterval:(id)arg1 horizontalAccuracy:(double)arg2 batchSize:(unsigned long long)arg3 boundingBoxLocation:(id)arg4 ;
-(CLLocation *)boundingBoxLocation;
-(id)initWithDateInterval:(id)arg1 horizontalAccuracy:(double)arg2 batchSize:(unsigned long long)arg3 ;
-(/*^block*/id)processingBlock;
-(void)setBoundingBoxLocation:(CLLocation *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
