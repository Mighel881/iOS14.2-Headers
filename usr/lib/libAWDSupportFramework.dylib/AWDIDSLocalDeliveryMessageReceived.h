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

@interface AWDIDSLocalDeliveryMessageReceived : PBCodable <NSCopying> {

	unsigned long long _isFromDefaultPairedDevice;
	unsigned long long _linkType;
	unsigned long long _messageSize;
	unsigned long long _priority;
	unsigned long long _timestamp;
	NSString* _service;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                                        //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromDefaultPairedDevice; 
@property (assign,nonatomic) unsigned long long isFromDefaultPairedDevice;              //@synthesize isFromDefaultPairedDevice=_isFromDefaultPairedDevice - In the implementation block
@property (assign,nonatomic) BOOL hasMessageSize; 
@property (assign,nonatomic) unsigned long long messageSize;                            //@synthesize messageSize=_messageSize - In the implementation block
@property (assign,nonatomic) BOOL hasLinkType; 
@property (assign,nonatomic) unsigned long long linkType;                               //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) BOOL hasPriority; 
@property (assign,nonatomic) unsigned long long priority;                               //@synthesize priority=_priority - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(unsigned long long)linkType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(BOOL)hasService;
-(void)setHasMessageSize:(BOOL)arg1 ;
-(BOOL)hasMessageSize;
-(void)setLinkType:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPriority;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)messageSize;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(unsigned long long)isFromDefaultPairedDevice;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(NSString *)service;
-(void)setHasPriority:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasLinkType;
-(void)setHasLinkType:(BOOL)arg1 ;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setIsFromDefaultPairedDevice:(unsigned long long)arg1 ;
-(void)setHasIsFromDefaultPairedDevice:(BOOL)arg1 ;
-(BOOL)hasIsFromDefaultPairedDevice;
@end

