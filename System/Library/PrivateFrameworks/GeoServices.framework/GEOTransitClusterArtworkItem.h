/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitArtworkDataSource.h>
#import <libobjc.A.dylib/GEOTransitTextDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PBUnknownFields, GEOFormattedString;

@interface GEOTransitClusterArtworkItem : PBCodable <GEOTransitArtworkDataSource, GEOTransitTextDataSource, NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOFormattedString* _text;
	unsigned _artworkIndex;
	struct {
		unsigned has_artworkIndex : 1;
	}  _flags;

}

@property (nonatomic,readonly) int artworkSourceType; 
@property (nonatomic,readonly) int artworkUseType; 
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> shieldDataSource; 
@property (nonatomic,readonly) id<GEOTransitIconDataSource> iconDataSource; 
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource; 
@property (nonatomic,readonly) id<GEOTransitTextDataSource> textDataSource; 
@property (nonatomic,readonly) BOOL hasRoutingIncidentBadge; 
@property (nonatomic,readonly) NSString * accessibilityText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<GEOServerFormattedString> text; 
@property (assign,nonatomic) BOOL hasArtworkIndex; 
@property (assign,nonatomic) unsigned artworkIndex; 
@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,retain) GEOFormattedString * text; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasText;
-(void)setText:(id<GEOServerFormattedString>)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id<GEOServerFormattedString>)text;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setArtworkIndex:(unsigned)arg1 ;
-(unsigned)artworkIndex;
-(void)setHasArtworkIndex:(BOOL)arg1 ;
-(BOOL)hasArtworkIndex;
-(PBUnknownFields *)unknownFields;
-(int)artworkSourceType;
-(int)artworkUseType;
-(id<GEOTransitShieldDataSource>)shieldDataSource;
-(id<GEOTransitIconDataSource>)iconDataSource;
-(id<GEOTransitShieldDataSource>)iconFallbackShieldDataSource;
-(id<GEOTransitTextDataSource>)textDataSource;
-(BOOL)hasRoutingIncidentBadge;
-(NSString *)accessibilityText;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
