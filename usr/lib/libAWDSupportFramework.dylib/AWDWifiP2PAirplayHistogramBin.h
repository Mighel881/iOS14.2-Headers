/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWifiP2PAirplayHistogramBin : PBCodable <NSCopying> {

	int _binEnd;
	int _binStart;
	unsigned _count;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasBinStart; 
@property (assign,nonatomic) int binStart;                  //@synthesize binStart=_binStart - In the implementation block
@property (assign,nonatomic) BOOL hasBinEnd; 
@property (assign,nonatomic) int binEnd;                    //@synthesize binEnd=_binEnd - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                //@synthesize count=_count - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(BOOL)hasCount;
-(void)setBinStart:(int)arg1 ;
-(BOOL)hasBinEnd;
-(void)setHasBinStart:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(unsigned)count;
-(void)setBinEnd:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)binEnd;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasBinEnd:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)binStart;
-(BOOL)hasBinStart;
-(void)writeTo:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

