/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOTransitClusterArtworkSet : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _artworkIndexs;
	NSMutableArray* _artworkItems;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_artworkIndexs : 1;
		unsigned read_artworkItems : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long artworkIndexsCount; 
@property (nonatomic,readonly) unsigned* artworkIndexs; 
@property (nonatomic,retain) NSMutableArray * artworkItems; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)artworkItemType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addArtworkIndex:(unsigned)arg1 ;
-(void)addArtworkItem:(id)arg1 ;
-(unsigned long long)artworkIndexsCount;
-(void)clearArtworkIndexs;
-(unsigned)artworkIndexAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)artworkItems;
-(unsigned long long)artworkItemsCount;
-(void)clearArtworkItems;
-(id)artworkItemAtIndex:(unsigned long long)arg1 ;
-(unsigned*)artworkIndexs;
-(void)setArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setArtworkItems:(NSMutableArray *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)dealloc;
-(id)_maps_artworkIndicesAsString;
@end
