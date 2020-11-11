/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTraitsPhotoSize : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _height;
	unsigned _width;
	SCD_Struct_GE123 _flags;

}

@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) unsigned width; 
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) unsigned height; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned)height;
-(void)setWidth:(unsigned)arg1 ;
-(unsigned)width;
-(void)setHeight:(unsigned)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasHeight:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setHasWidth:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasHeight;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasWidth;
@end
