/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDFaceTimeCallDeclineSent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _declineCode;
	int _errorCode;
	NSString* _guid;
	unsigned _isVideo;
	unsigned _onLockScreen;
	unsigned _sendDuration;
	SCD_Struct_AW10 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasDeclineCode; 
@property (assign,nonatomic) unsigned declineCode;                      //@synthesize declineCode=_declineCode - In the implementation block
@property (assign,nonatomic) BOOL hasSendDuration; 
@property (assign,nonatomic) unsigned sendDuration;                     //@synthesize sendDuration=_sendDuration - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideo; 
@property (assign,nonatomic) unsigned isVideo;                          //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) BOOL hasOnLockScreen; 
@property (assign,nonatomic) unsigned onLockScreen;                     //@synthesize onLockScreen=_onLockScreen - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(NSString *)guid;
-(BOOL)hasGuid;
-(void)setGuid:(NSString *)arg1 ;
-(unsigned)isVideo;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setOnLockScreen:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIsVideo:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)errorCode;
-(void)setErrorCode:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasErrorCode;
-(unsigned)onLockScreen;
-(void)dealloc;
-(void)setSendDuration:(unsigned)arg1 ;
-(unsigned)sendDuration;
-(void)setDeclineCode:(unsigned)arg1 ;
-(unsigned)declineCode;
-(void)setHasIsVideo:(BOOL)arg1 ;
-(BOOL)hasIsVideo;
-(void)setHasOnLockScreen:(BOOL)arg1 ;
-(BOOL)hasOnLockScreen;
-(void)setHasSendDuration:(BOOL)arg1 ;
-(BOOL)hasSendDuration;
-(void)setHasDeclineCode:(BOOL)arg1 ;
-(BOOL)hasDeclineCode;
@end
