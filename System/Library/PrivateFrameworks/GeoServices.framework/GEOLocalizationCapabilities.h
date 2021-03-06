/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOLocalizationCapabilities : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _supportedPhoneticTypes;
	BOOL _supportsLocalizedTrafficControlIcons;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,readonly) unsigned long long supportedPhoneticTypesCount; 
@property (nonatomic,readonly) int* supportedPhoneticTypes; 
@property (assign,nonatomic) BOOL hasSupportsLocalizedTrafficControlIcons; 
@property (assign,nonatomic) BOOL supportsLocalizedTrafficControlIcons; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)StringAsSupportedPhoneticTypes:(id)arg1 ;
-(void)setHasSupportsLocalizedTrafficControlIcons:(BOOL)arg1 ;
-(int)supportedPhoneticTypeAtIndex:(unsigned long long)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)supportedPhoneticTypesCount;
-(void)setSupportsLocalizedTrafficControlIcons:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(void)addSupportedPhoneticType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)supportsLocalizedTrafficControlIcons;
-(id)supportedPhoneticTypesAsString:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSupportedPhoneticTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasSupportsLocalizedTrafficControlIcons;
-(void)clearSupportedPhoneticTypes;
-(id)initWithJSON:(id)arg1 ;
-(int*)supportedPhoneticTypes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)dealloc;
@end

