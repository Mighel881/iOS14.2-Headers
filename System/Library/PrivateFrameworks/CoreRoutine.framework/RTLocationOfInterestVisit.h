/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTLocation, NSUUID, NSDate;

@interface RTLocationOfInterestVisit : NSObject <NSCopying, NSSecureCoding> {

	RTLocation* _location;
	NSUUID* _identifier;
	NSDate* _entryDate;
	NSDate* _exitDate;
	double _locationOfInterestConfidence;
	unsigned long long _locationOfInterestSource;

}

@property (nonatomic,readonly) unsigned long long locationOfInterestSource;              //@synthesize locationOfInterestSource=_locationOfInterestSource - In the implementation block
@property (nonatomic,readonly) RTLocation * location;                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * entryDate;                                       //@synthesize entryDate=_entryDate - In the implementation block
@property (nonatomic,readonly) NSDate * exitDate;                                        //@synthesize exitDate=_exitDate - In the implementation block
@property (nonatomic,readonly) double locationOfInterestConfidence;                      //@synthesize locationOfInterestConfidence=_locationOfInterestConfidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)exit;
-(id)init;
-(unsigned long long)hash;
-(RTLocation *)location;
-(NSDate *)exitDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)exitTime;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)entryTime;
-(double)locationOfInterestConfidence;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 entry:(id)arg2 exit:(id)arg3 location:(id)arg4 locationOfInterestConfidence:(double)arg5 locationOfInterestSource:(unsigned long long)arg6 ;
-(unsigned long long)locationOfInterestSource;
-(id)entry;
-(NSDate *)entryDate;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

