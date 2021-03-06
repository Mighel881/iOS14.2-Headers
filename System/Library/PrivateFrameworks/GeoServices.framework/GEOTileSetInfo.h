/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTileSetInfo : PBCodable <NSCopying> {

	unsigned _count;
	int _style;
	unsigned _uncertainty;
	unsigned _zoom;
	struct {
		unsigned has_count : 1;
		unsigned has_style : 1;
		unsigned has_uncertainty : 1;
		unsigned has_zoom : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStyle; 
@property (assign,nonatomic) int style; 
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count; 
@property (assign,nonatomic) BOOL hasZoom; 
@property (assign,nonatomic) unsigned zoom; 
@property (assign,nonatomic) BOOL hasUncertainty; 
@property (assign,nonatomic) unsigned uncertainty; 
+(BOOL)isValid:(id)arg1 ;
-(void)setZoom:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(id)styleAsString:(int)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(unsigned)zoom;
-(BOOL)hasCount;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(void)setHasStyle:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)count;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(unsigned)uncertainty;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasUncertainty:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)style;
-(void)setHasZoom:(BOOL)arg1 ;
-(BOOL)hasZoom;
-(BOOL)hasStyle;
-(void)writeTo:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setStyle:(int)arg1 ;
-(BOOL)hasUncertainty;
-(void)setUncertainty:(unsigned)arg1 ;
@end

