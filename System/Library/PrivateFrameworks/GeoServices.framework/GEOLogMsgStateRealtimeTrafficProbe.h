/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLogMsgStateRealtimeTrafficProbe : PBCodable <NSCopying> {

	long long _recvTime;
	NSString* _tripId;
	int _probeCount;
	SCD_Struct_GE123 _flags;

}

@property (nonatomic,readonly) BOOL hasTripId; 
@property (nonatomic,retain) NSString * tripId; 
@property (assign,nonatomic) BOOL hasRecvTime; 
@property (assign,nonatomic) long long recvTime; 
@property (assign,nonatomic) BOOL hasProbeCount; 
@property (assign,nonatomic) int probeCount; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(NSString *)tripId;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)recvTime;
-(BOOL)hasTripId;
-(void)setTripId:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setProbeCount:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)probeCount;
-(id)initWithJSON:(id)arg1 ;
-(void)setRecvTime:(long long)arg1 ;
-(BOOL)hasRecvTime;
-(void)setHasRecvTime:(BOOL)arg1 ;
-(void)setHasProbeCount:(BOOL)arg1 ;
-(BOOL)hasProbeCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

