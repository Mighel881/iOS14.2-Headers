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

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEORegionalResourceSet : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _regions;
	unsigned long long _regionsCount;
	unsigned long long _regionsSpace;
	NSMutableArray* _resources;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_regions : 1;
		unsigned read_resources : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long regionsCount; 
@property (nonatomic,readonly) GEOTileSetRegion* regions; 
@property (nonatomic,retain) NSMutableArray * resources; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)resourceType;
+(BOOL)isValid:(id)arg1 ;
-(NSMutableArray *)resources;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setResources:(NSMutableArray *)arg1 ;
-(id)init;
-(void)clearResources;
-(void)addResource:(id)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(void)clearRegions;
-(id)resourceAtIndex:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setRegions:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)regionsCount;
-(unsigned long long)resourcesCount;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addRegion:(GEOTileSetRegion)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)dealloc;
-(GEOTileSetRegion*)regions;
@end

