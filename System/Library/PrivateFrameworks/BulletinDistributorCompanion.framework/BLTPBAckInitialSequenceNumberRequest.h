/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface BLTPBAckInitialSequenceNumberRequest : PBRequest <NSCopying> {

	NSData* _sessionIdentifier;
	unsigned _sessionState;
	BOOL _assert;
	SCD_Struct_BL3 _has;

}

@property (assign,nonatomic) BOOL hasAssert; 
@property (assign,nonatomic) BOOL assert;                              //@synthesize assert=_assert - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionIdentifier; 
@property (nonatomic,retain) NSData * sessionIdentifier;               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSessionState; 
@property (assign,nonatomic) unsigned sessionState;                    //@synthesize sessionState=_sessionState - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSessionState;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)sessionIdentifier;
-(void)setSessionIdentifier:(NSData *)arg1 ;
-(BOOL)assert;
-(id)description;
-(BOOL)hasSessionIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)sessionState;
-(void)setSessionState:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasSessionState:(BOOL)arg1 ;
-(void)setAssert:(BOOL)arg1 ;
-(void)setHasAssert:(BOOL)arg1 ;
-(BOOL)hasAssert;
@end

