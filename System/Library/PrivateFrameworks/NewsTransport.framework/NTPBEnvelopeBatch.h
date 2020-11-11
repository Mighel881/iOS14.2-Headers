/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBEnvelopeBatch : PBCodable <NSCopying> {

	int _envelopeDroppedCountDueToSizeLimit;
	NSMutableArray* _envelopes;
	int _majorVersion;
	int _minorVersion;
	int _patchVersion;
	SCD_Struct_NT2 _has;

}

@property (nonatomic,retain) NSMutableArray * envelopes;                              //@synthesize envelopes=_envelopes - In the implementation block
@property (assign,nonatomic) BOOL hasMajorVersion; 
@property (assign,nonatomic) int majorVersion;                                        //@synthesize majorVersion=_majorVersion - In the implementation block
@property (assign,nonatomic) BOOL hasMinorVersion; 
@property (assign,nonatomic) int minorVersion;                                        //@synthesize minorVersion=_minorVersion - In the implementation block
@property (assign,nonatomic) BOOL hasPatchVersion; 
@property (assign,nonatomic) int patchVersion;                                        //@synthesize patchVersion=_patchVersion - In the implementation block
@property (assign,nonatomic) BOOL hasEnvelopeDroppedCountDueToSizeLimit; 
@property (assign,nonatomic) int envelopeDroppedCountDueToSizeLimit;                  //@synthesize envelopeDroppedCountDueToSizeLimit=_envelopeDroppedCountDueToSizeLimit - In the implementation block
+(Class)envelopeType;
-(void)mergeFrom:(id)arg1 ;
-(int)patchVersion;
-(void)setMajorVersion:(int)arg1 ;
-(void)setMinorVersion:(int)arg1 ;
-(unsigned long long)hash;
-(void)addEnvelope:(id)arg1 ;
-(void)clearEnvelopes;
-(unsigned long long)envelopesCount;
-(BOOL)hasMajorVersion;
-(id)envelopeAtIndex:(unsigned long long)arg1 ;
-(void)setHasMajorVersion:(BOOL)arg1 ;
-(void)setHasMinorVersion:(BOOL)arg1 ;
-(BOOL)hasMinorVersion;
-(void)setEnvelopeDroppedCountDueToSizeLimit:(int)arg1 ;
-(void)setHasEnvelopeDroppedCountDueToSizeLimit:(BOOL)arg1 ;
-(BOOL)hasEnvelopeDroppedCountDueToSizeLimit;
-(int)envelopeDroppedCountDueToSizeLimit;
-(id)dictionaryRepresentation;
-(NSMutableArray *)envelopes;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(int)majorVersion;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPatchVersion:(int)arg1 ;
-(void)setHasPatchVersion:(BOOL)arg1 ;
-(BOOL)hasPatchVersion;
-(void)setEnvelopes:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)minorVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
