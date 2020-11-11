/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOLatLng;

@interface GEOSnapScorePoint : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _candidates;
	GEOLatLng* _point;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_candidates : 1;
		unsigned read_point : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPoint; 
@property (nonatomic,retain) GEOLatLng * point; 
@property (nonatomic,retain) NSMutableArray * candidates; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)candidateType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(NSMutableArray *)candidates;
-(unsigned long long)candidatesCount;
-(void)clearCandidates;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPoint;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(GEOLatLng *)point;
-(void)copyTo:(id)arg1 ;
-(id)candidateAtIndex:(unsigned long long)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setPoint:(GEOLatLng *)arg1 ;
-(void)addCandidate:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCandidates:(NSMutableArray *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
