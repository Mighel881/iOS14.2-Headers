/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOResource;

@interface GEOStaleResource : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOResource* _desiredResource;
	GEOResource* _fallbackResource;
	double _originalTimestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_originalTimestamp : 1;
		unsigned read_unknownFields : 1;
		unsigned read_desiredResource : 1;
		unsigned read_fallbackResource : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDesiredResource; 
@property (nonatomic,retain) GEOResource * desiredResource; 
@property (nonatomic,readonly) BOOL hasFallbackResource; 
@property (nonatomic,retain) GEOResource * fallbackResource; 
@property (assign,nonatomic) BOOL hasOriginalTimestamp; 
@property (assign,nonatomic) double originalTimestamp; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(double)originalTimestamp;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(GEOResource *)desiredResource;
-(GEOResource *)fallbackResource;
-(void)setDesiredResource:(GEOResource *)arg1 ;
-(void)setFallbackResource:(GEOResource *)arg1 ;
-(void)setOriginalTimestamp:(double)arg1 ;
-(BOOL)hasDesiredResource;
-(BOOL)hasFallbackResource;
-(void)setHasOriginalTimestamp:(BOOL)arg1 ;
-(BOOL)hasOriginalTimestamp;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

