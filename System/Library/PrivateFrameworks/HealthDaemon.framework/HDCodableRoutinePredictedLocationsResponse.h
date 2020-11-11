/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HDCodableRoutinePredictedLocationsResponse : PBCodable <NSCopying> {

	NSMutableArray* _predictedLocationsOfInterests;

}

@property (nonatomic,retain) NSMutableArray * predictedLocationsOfInterests;              //@synthesize predictedLocationsOfInterests=_predictedLocationsOfInterests - In the implementation block
+(Class)predictedLocationsOfInterestType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addPredictedLocationsOfInterest:(id)arg1 ;
-(unsigned long long)predictedLocationsOfInterestsCount;
-(void)clearPredictedLocationsOfInterests;
-(id)predictedLocationsOfInterestAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)predictedLocationsOfInterests;
-(void)setPredictedLocationsOfInterests:(NSMutableArray *)arg1 ;
@end
