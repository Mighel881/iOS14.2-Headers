/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageProtection/MessageProtection-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NGMPBInnerMessage : PBCodable <NSCopying> {

	unsigned _counter;
	NSData* _debugInfo;
	NSData* _ktGossipData;
	NSData* _message;
	SCD_Struct_NG3 _has;

}

@property (nonatomic,retain) NSData * message;                    //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL hasCounter; 
@property (assign,nonatomic) unsigned counter;                    //@synthesize counter=_counter - In the implementation block
@property (nonatomic,readonly) BOOL hasKtGossipData; 
@property (nonatomic,retain) NSData * ktGossipData;               //@synthesize ktGossipData=_ktGossipData - In the implementation block
@property (nonatomic,readonly) BOOL hasDebugInfo; 
@property (nonatomic,retain) NSData * debugInfo;                  //@synthesize debugInfo=_debugInfo - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setMessage:(NSData *)arg1 ;
-(unsigned)counter;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)message;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCounter:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributes;
-(void)setDebugInfo:(NSData *)arg1 ;
-(NSData *)debugInfo;
-(void)setKtGossipData:(NSData *)arg1 ;
-(BOOL)hasKtGossipData;
-(NSData *)ktGossipData;
-(BOOL)hasCounter;
-(void)setHasCounter:(BOOL)arg1 ;
-(BOOL)hasDebugInfo;
@end

