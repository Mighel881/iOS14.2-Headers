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

@class PBUnknownFields, NSMutableArray;

@interface GEORoadComplexity : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _attributes;
	unsigned _offset;
	unsigned _zilchPathIndex;
	struct {
		unsigned has_offset : 1;
		unsigned has_zilchPathIndex : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * attributes; 
@property (assign,nonatomic) BOOL hasOffset; 
@property (assign,nonatomic) unsigned offset; 
@property (assign,nonatomic) BOOL hasZilchPathIndex; 
@property (assign,nonatomic) unsigned zilchPathIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)attributeType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearAttributes;
-(void)addAttribute:(id)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(unsigned)offset;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)attributesCount;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOffset:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasOffset;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setZilchPathIndex:(unsigned)arg1 ;
-(unsigned)zilchPathIndex;
-(void)setHasZilchPathIndex:(BOOL)arg1 ;
-(BOOL)hasZilchPathIndex;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)attributes;
-(void)setHasOffset:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)attributeAtIndex:(unsigned long long)arg1 ;
@end

