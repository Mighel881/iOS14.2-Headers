/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSSessionStarted : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _clientType;
	NSString* _guid;
	NSString* _serviceName;
	unsigned _sessionProtocolVersionNumber;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                                    //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasSessionProtocolVersionNumber; 
@property (assign,nonatomic) unsigned sessionProtocolVersionNumber;              //@synthesize sessionProtocolVersionNumber=_sessionProtocolVersionNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                             //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) BOOL hasClientType; 
@property (assign,nonatomic) int clientType;                                     //@synthesize clientType=_clientType - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(NSString *)guid;
-(BOOL)hasGuid;
-(void)setGuid:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(void)setServiceName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)clientType;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasServiceName;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(NSString *)serviceName;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setClientType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setHasClientType:(BOOL)arg1 ;
-(BOOL)hasClientType;
-(void)setSessionProtocolVersionNumber:(unsigned)arg1 ;
-(void)setHasSessionProtocolVersionNumber:(BOOL)arg1 ;
-(BOOL)hasSessionProtocolVersionNumber;
-(unsigned)sessionProtocolVersionNumber;
@end

