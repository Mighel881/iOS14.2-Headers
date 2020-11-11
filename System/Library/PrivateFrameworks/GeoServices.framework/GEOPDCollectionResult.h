/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDMapsIdentifier, NSMutableArray;

@interface GEOPDCollectionResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDMapsIdentifier* _collectionId;
	NSMutableArray* _components;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _status;
	struct {
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_collectionId : 1;
		unsigned read_components : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCollectionId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * collectionId; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * components; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)componentType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(id)init;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(void)setHasStatus:(BOOL)arg1 ;
-(int)status;
-(id)componentAtIndex:(unsigned long long)arg1 ;
-(void)addComponent:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStatus:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setComponents:(NSMutableArray *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)componentsCount;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)components;
-(id)initWithJSON:(id)arg1 ;
-(void)clearComponents;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCollectionId:(GEOPDMapsIdentifier *)arg1 ;
-(GEOPDMapsIdentifier *)collectionId;
-(BOOL)hasCollectionId;
-(void)readAll:(BOOL)arg1 ;
-(id)statusAsString:(int)arg1 ;
@end
