/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLogMsgEventGenericAppError : PBCodable <NSCopying> {

	long long _appErrorCode;
	NSString* _appErrorDomain;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,readonly) BOOL hasAppErrorDomain; 
@property (nonatomic,retain) NSString * appErrorDomain; 
@property (assign,nonatomic) BOOL hasAppErrorCode; 
@property (assign,nonatomic) long long appErrorCode; 
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
-(NSString *)appErrorDomain;
-(void)setAppErrorDomain:(NSString *)arg1 ;
-(void)setAppErrorCode:(long long)arg1 ;
-(long long)appErrorCode;
-(BOOL)hasAppErrorDomain;
-(void)setHasAppErrorCode:(BOOL)arg1 ;
-(BOOL)hasAppErrorCode;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
