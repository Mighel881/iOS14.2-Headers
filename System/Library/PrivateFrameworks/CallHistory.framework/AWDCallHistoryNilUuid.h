/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CallHistory/CallHistory-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCallHistoryNilUuid : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _callStatus;
	unsigned _callType;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCallType; 
@property (assign,nonatomic) unsigned callType;                         //@synthesize callType=_callType - In the implementation block
@property (assign,nonatomic) BOOL hasCallStatus; 
@property (assign,nonatomic) unsigned callStatus;                       //@synthesize callStatus=_callStatus - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned)callType;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(void)setHasCallStatus:(BOOL)arg1 ;
-(BOOL)hasCallStatus;
-(id)dictionaryRepresentation;
-(void)setCallStatus:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasCallType;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)callStatus;
-(void)setCallType:(unsigned)arg1 ;
-(void)setHasCallType:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

