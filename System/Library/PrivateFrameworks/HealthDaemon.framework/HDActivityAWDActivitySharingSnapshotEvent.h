/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDActivityAWDActivitySharingSnapshotEvent : PBCodable <NSCopying> {

	long long _count;
	unsigned long long _timestamp;
	int _kind;
	BOOL _success;
	SCD_Struct_HD10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                              //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) long long count;                           //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasKind; 
@property (assign,nonatomic) int kind;                                  //@synthesize kind=_kind - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setCount:(long long)arg1 ;
-(int)kind;
-(BOOL)hasCount;
-(void)setKind:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setSuccess:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(long long)count;
-(void)setHasKind:(BOOL)arg1 ;
-(id)kindAsString:(int)arg1 ;
-(int)StringAsKind:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)success;
-(BOOL)hasKind;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setHasCount:(BOOL)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasSuccess;
-(void)setHasSuccess:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
