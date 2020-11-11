/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPMerchantLookupCorrections : PBCodable <NSCopying> {

	BOOL _isCategoryIncorrect;
	BOOL _isMerchantIncorrect;
	BOOL _isOtherIssue;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasIsCategoryIncorrect; 
@property (assign,nonatomic) BOOL isCategoryIncorrect; 
@property (assign,nonatomic) BOOL hasIsMerchantIncorrect; 
@property (assign,nonatomic) BOOL isMerchantIncorrect; 
@property (assign,nonatomic) BOOL hasIsOtherIssue; 
@property (assign,nonatomic) BOOL isOtherIssue; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIsCategoryIncorrect:(BOOL)arg1 ;
-(void)setIsMerchantIncorrect:(BOOL)arg1 ;
-(void)setIsOtherIssue:(BOOL)arg1 ;
-(BOOL)isCategoryIncorrect;
-(void)setHasIsCategoryIncorrect:(BOOL)arg1 ;
-(BOOL)hasIsCategoryIncorrect;
-(BOOL)isMerchantIncorrect;
-(BOOL)isOtherIssue;
-(void)setHasIsMerchantIncorrect:(BOOL)arg1 ;
-(BOOL)hasIsMerchantIncorrect;
-(void)setHasIsOtherIssue:(BOOL)arg1 ;
-(BOOL)hasIsOtherIssue;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
