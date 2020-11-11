/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NWAWDNWDurationAccumulationState : PBCodable <NSCopying> {

	unsigned long long _duration;
	NSString* _state;
	SCD_Struct_NW21 _has;

}

@property (nonatomic,readonly) BOOL hasState; 
@property (nonatomic,retain) NSString * state;                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;              //@synthesize duration=_duration - In the implementation block
-(BOOL)hasState;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setState:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(NSString *)state;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)duration;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
