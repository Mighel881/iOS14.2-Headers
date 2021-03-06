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

@class PBUnknownFields;

@interface GEODestinationInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _hasDisplayAddress;
	BOOL _hasDisplayName;
	BOOL _hasSpokenAddress;
	BOOL _hasSpokenName;
	struct {
		unsigned has_hasDisplayAddress : 1;
		unsigned has_hasDisplayName : 1;
		unsigned has_hasSpokenAddress : 1;
		unsigned has_hasSpokenName : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasHasDisplayName; 
@property (assign,nonatomic) BOOL hasDisplayName; 
@property (assign,nonatomic) BOOL hasHasSpokenName; 
@property (assign,nonatomic) BOOL hasSpokenName; 
@property (assign,nonatomic) BOOL hasHasDisplayAddress; 
@property (assign,nonatomic) BOOL hasDisplayAddress; 
@property (assign,nonatomic) BOOL hasHasSpokenAddress; 
@property (assign,nonatomic) BOOL hasSpokenAddress; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasDisplayName;
-(void)writeTo:(id)arg1 ;
-(void)setHasDisplayName:(BOOL)arg1 ;
-(void)setHasSpokenName:(BOOL)arg1 ;
-(BOOL)hasHasDisplayName;
-(void)setHasDisplayAddress:(BOOL)arg1 ;
-(void)setHasSpokenAddress:(BOOL)arg1 ;
-(void)setHasHasDisplayName:(BOOL)arg1 ;
-(BOOL)hasSpokenName;
-(void)setHasHasSpokenName:(BOOL)arg1 ;
-(BOOL)hasHasSpokenName;
-(BOOL)hasDisplayAddress;
-(void)setHasHasDisplayAddress:(BOOL)arg1 ;
-(BOOL)hasHasDisplayAddress;
-(BOOL)hasSpokenAddress;
-(void)setHasHasSpokenAddress:(BOOL)arg1 ;
-(BOOL)hasHasSpokenAddress;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

