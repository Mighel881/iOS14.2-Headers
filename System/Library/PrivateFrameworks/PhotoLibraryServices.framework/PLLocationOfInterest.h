/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID, PLLocationOfInterestLocation, NSMutableArray;

@interface PLLocationOfInterest : NSObject {

	NSUUID* _identifier;
	long long _type;
	double _typeRadius;
	PLLocationOfInterestLocation* _routineLocation;
	PLLocationOfInterestLocation* _mapItemLocation;
	NSMutableArray* _visits;

}

@property (nonatomic,retain) NSMutableArray * visits;                                       //@synthesize visits=_visits - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double typeRadius;                                           //@synthesize typeRadius=_typeRadius - In the implementation block
@property (nonatomic,readonly) PLLocationOfInterestLocation * routineLocation;              //@synthesize routineLocation=_routineLocation - In the implementation block
@property (nonatomic,readonly) PLLocationOfInterestLocation * mapItemLocation;              //@synthesize mapItemLocation=_mapItemLocation - In the implementation block
-(unsigned long long)hash;
-(double)centerDistanceFromLocation:(id)arg1 ;
-(NSUUID *)identifier;
-(id)description;
-(void)addVisit:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)type;
-(id)initWithIdentifier:(id)arg1 locationOfInterestType:(long long)arg2 typeRadius:(double)arg3 routineLocation:(id)arg4 mapItemLocation:(id)arg5 ;
-(void)setVisits:(NSMutableArray *)arg1 ;
-(double)typeRadius;
-(PLLocationOfInterestLocation *)routineLocation;
-(PLLocationOfInterestLocation *)mapItemLocation;
-(NSMutableArray *)visits;
-(double)distanceFromLocation:(id)arg1 ;
-(void)removeVisit:(id)arg1 ;
@end

