/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HDCodableObjectSourceAuthorization : PBCodable <NSCopying> {

	long long _authorizationStatus;
	double _modificationDate;
	NSData* _sourceUUID;
	SCD_Struct_HD11 _has;

}

@property (nonatomic,readonly) BOOL hasSourceUUID; 
@property (nonatomic,retain) NSData * sourceUUID;                        //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (assign,nonatomic) BOOL hasAuthorizationStatus; 
@property (assign,nonatomic) long long authorizationStatus;              //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (assign,nonatomic) BOOL hasModificationDate; 
@property (assign,nonatomic) double modificationDate;                    //@synthesize modificationDate=_modificationDate - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(long long)authorizationStatus;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(void)setModificationDate:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasModificationDate;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)modificationDate;
-(NSData *)sourceUUID;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSourceUUID:(NSData *)arg1 ;
-(BOOL)hasSourceUUID;
-(void)setHasAuthorizationStatus:(BOOL)arg1 ;
-(BOOL)hasAuthorizationStatus;
-(void)setHasModificationDate:(BOOL)arg1 ;
@end

