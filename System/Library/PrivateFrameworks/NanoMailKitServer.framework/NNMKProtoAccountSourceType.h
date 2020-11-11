/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoAccountSourceType : PBCodable <NSCopying> {

	NSString* _accountId;
	unsigned _fullSyncVersion;
	unsigned _sourceType;
	SCD_Struct_NN2 _has;

}

@property (nonatomic,readonly) BOOL hasAccountId; 
@property (nonatomic,retain) NSString * accountId;                  //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;              //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSourceType; 
@property (assign,nonatomic) unsigned sourceType;                   //@synthesize sourceType=_sourceType - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setSourceType:(unsigned)arg1 ;
-(unsigned long long)hash;
-(unsigned)sourceType;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)accountId;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAccountId:(NSString *)arg1 ;
-(BOOL)hasSourceType;
-(void)setHasSourceType:(BOOL)arg1 ;
-(BOOL)hasAccountId;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
@end
