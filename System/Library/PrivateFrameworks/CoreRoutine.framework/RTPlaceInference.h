/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTLocation, RTMapItem, NSUUID, NSString;

@interface RTPlaceInference : NSObject <NSSecureCoding> {

	RTLocation* _referenceLocation;
	RTMapItem* _mapItem;
	unsigned long long _userType;
	unsigned long long _userTypeSource;
	unsigned long long _placeType;
	double _confidence;
	NSUUID* _loiIdentifier;

}

@property (nonatomic,readonly) RTLocation * referenceLocation;                 //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (nonatomic,readonly) RTMapItem * mapItem;                            //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) unsigned long long userType;                    //@synthesize userType=_userType - In the implementation block
@property (nonatomic,readonly) unsigned long long userTypeSource;              //@synthesize userTypeSource=_userTypeSource - In the implementation block
@property (nonatomic,readonly) unsigned long long placeType;                   //@synthesize placeType=_placeType - In the implementation block
@property (nonatomic,readonly) double confidence;                              //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSString * preferredName; 
@property (nonatomic,readonly) NSUUID * loiIdentifier;                         //@synthesize loiIdentifier=_loiIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)placeTypeToString:(unsigned long long)arg1 ;
+(id)userSpecificPlaceTypeSourceToString:(unsigned long long)arg1 ;
+(id)userSpecificPlaceTypeToString:(unsigned long long)arg1 ;
-(id)init;
-(NSUUID *)loiIdentifier;
-(RTLocation *)referenceLocation;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)userType;
-(id)description;
-(double)confidence;
-(RTMapItem *)mapItem;
-(id)nameFromUserType:(unsigned long long)arg1 ;
-(unsigned long long)userTypeSource;
-(id)initWithMapItem:(id)arg1 userType:(unsigned long long)arg2 userTypeSource:(unsigned long long)arg3 placeType:(unsigned long long)arg4 referenceLocation:(id)arg5 confidence:(double)arg6 loiIdentifier:(id)arg7 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)placeType;
-(NSString *)preferredName;
@end
