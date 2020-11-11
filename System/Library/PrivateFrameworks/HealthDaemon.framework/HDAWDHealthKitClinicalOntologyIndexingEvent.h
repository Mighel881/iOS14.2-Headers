/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDAWDHealthKitClinicalOntologyIndexingEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _failingAction;
	NSString* _failingKeyPath;
	SCD_Struct_HD7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasFailingKeyPath; 
@property (nonatomic,retain) NSString * failingKeyPath;                 //@synthesize failingKeyPath=_failingKeyPath - In the implementation block
@property (nonatomic,readonly) BOOL hasFailingAction; 
@property (nonatomic,retain) NSString * failingAction;                  //@synthesize failingAction=_failingAction - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFailingKeyPath:(NSString *)arg1 ;
-(void)setFailingAction:(NSString *)arg1 ;
-(BOOL)hasFailingKeyPath;
-(BOOL)hasFailingAction;
-(NSString *)failingKeyPath;
-(NSString *)failingAction;
@end
