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

@class PBUnknownFields;

@interface GEOTransitTransferInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _transferMuid;
	unsigned _transferTime;
	struct {
		unsigned has_transferMuid : 1;
		unsigned has_transferTime : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTransferMuid; 
@property (assign,nonatomic) unsigned long long transferMuid; 
@property (assign,nonatomic) BOOL hasTransferTime; 
@property (assign,nonatomic) unsigned transferTime; 
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
-(void)setTransferTime:(unsigned)arg1 ;
-(unsigned)transferTime;
-(void)setHasTransferTime:(BOOL)arg1 ;
-(BOOL)hasTransferTime;
-(PBUnknownFields *)unknownFields;
-(void)setTransferMuid:(unsigned long long)arg1 ;
-(unsigned long long)transferMuid;
-(void)setHasTransferMuid:(BOOL)arg1 ;
-(BOOL)hasTransferMuid;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
