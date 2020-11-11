/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaAnyEvent : PBCodable {

	int _anyEventType;
	NSData* _payload;
	SCD_Struct_SI1 _has;
	BOOL _hasPayload;

}

@property (assign,nonatomic) int anyEventType;                  //@synthesize anyEventType=_anyEventType - In the implementation block
@property (assign,nonatomic) BOOL hasAnyEventType; 
@property (nonatomic,copy) NSData * payload;                    //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) BOOL hasPayload;                   //@synthesize hasPayload=_hasPayload - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(NSData *)payload;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)jsonData;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)anyEventType;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPayload;
-(id)initWithJSON:(id)arg1 ;
-(void)setAnyEventType:(int)arg1 ;
-(BOOL)hasAnyEventType;
-(void)setHasAnyEventType:(BOOL)arg1 ;
-(void)setHasPayload:(BOOL)arg1 ;
@end
