/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricActiveProbeStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _avgRTTLargePktSize;
	unsigned _avgRTTMediumPktSize;
	unsigned _avgRTTSmallPktSize;
	unsigned _maxRTTLargePktSize;
	unsigned _maxRTTMediumPktSize;
	unsigned _maxRTTSmallPktSize;
	unsigned _minRTTLargePktSize;
	unsigned _minRTTMediumPktSize;
	unsigned _minRTTSmallPktSize;
	unsigned _perLargePktSize;
	unsigned _perMediumPktSize;
	unsigned _perSmallPktSize;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMinRTTSmallPktSize; 
@property (assign,nonatomic) unsigned minRTTSmallPktSize;               //@synthesize minRTTSmallPktSize=_minRTTSmallPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRTTSmallPktSize; 
@property (assign,nonatomic) unsigned maxRTTSmallPktSize;               //@synthesize maxRTTSmallPktSize=_maxRTTSmallPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasAvgRTTSmallPktSize; 
@property (assign,nonatomic) unsigned avgRTTSmallPktSize;               //@synthesize avgRTTSmallPktSize=_avgRTTSmallPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasPerSmallPktSize; 
@property (assign,nonatomic) unsigned perSmallPktSize;                  //@synthesize perSmallPktSize=_perSmallPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasMinRTTMediumPktSize; 
@property (assign,nonatomic) unsigned minRTTMediumPktSize;              //@synthesize minRTTMediumPktSize=_minRTTMediumPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRTTMediumPktSize; 
@property (assign,nonatomic) unsigned maxRTTMediumPktSize;              //@synthesize maxRTTMediumPktSize=_maxRTTMediumPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasAvgRTTMediumPktSize; 
@property (assign,nonatomic) unsigned avgRTTMediumPktSize;              //@synthesize avgRTTMediumPktSize=_avgRTTMediumPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasPerMediumPktSize; 
@property (assign,nonatomic) unsigned perMediumPktSize;                 //@synthesize perMediumPktSize=_perMediumPktSize - In the implementation block
@property (assign,nonatomic) BOOL hasMinRTTLargePktSize; 
@property (assign,nonatomic) unsigned minRTTLargePktSize;               //@synthesize minRTTLargePktSize=_minRTTLargePktSize - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRTTLargePktSize; 
@property (assign,nonatomic) unsigned maxRTTLargePktSize;               //@synthesize maxRTTLargePktSize=_maxRTTLargePktSize - In the implementation block
@property (assign,nonatomic) BOOL hasAvgRTTLargePktSize; 
@property (assign,nonatomic) unsigned avgRTTLargePktSize;               //@synthesize avgRTTLargePktSize=_avgRTTLargePktSize - In the implementation block
@property (assign,nonatomic) BOOL hasPerLargePktSize; 
@property (assign,nonatomic) unsigned perLargePktSize;                  //@synthesize perLargePktSize=_perLargePktSize - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setHasMinRTTMediumPktSize:(BOOL)arg1 ;
-(BOOL)hasMaxRTTLargePktSize;
-(void)setHasMaxRTTMediumPktSize:(BOOL)arg1 ;
-(unsigned)minRTTSmallPktSize;
-(void)setHasMaxRTTSmallPktSize:(BOOL)arg1 ;
-(BOOL)hasAvgRTTSmallPktSize;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasMinRTTLargePktSize;
-(BOOL)hasPerMediumPktSize;
-(void)setMaxRTTLargePktSize:(unsigned)arg1 ;
-(void)setAvgRTTMediumPktSize:(unsigned)arg1 ;
-(unsigned)perLargePktSize;
-(unsigned)maxRTTSmallPktSize;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(void)setHasAvgRTTLargePktSize:(BOOL)arg1 ;
-(void)setMaxRTTMediumPktSize:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)avgRTTLargePktSize;
-(void)setHasMinRTTLargePktSize:(BOOL)arg1 ;
-(id)description;
-(void)setHasAvgRTTSmallPktSize:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasMaxRTTMediumPktSize;
-(void)setPerMediumPktSize:(unsigned)arg1 ;
-(void)setPerSmallPktSize:(unsigned)arg1 ;
-(unsigned)maxRTTLargePktSize;
-(void)copyTo:(id)arg1 ;
-(void)setHasAvgRTTMediumPktSize:(BOOL)arg1 ;
-(void)setHasMinRTTSmallPktSize:(BOOL)arg1 ;
-(void)setAvgRTTLargePktSize:(unsigned)arg1 ;
-(void)setMaxRTTSmallPktSize:(unsigned)arg1 ;
-(void)setMinRTTSmallPktSize:(unsigned)arg1 ;
-(BOOL)hasAvgRTTMediumPktSize;
-(BOOL)hasMaxRTTSmallPktSize;
-(void)setHasPerSmallPktSize:(BOOL)arg1 ;
-(unsigned)avgRTTMediumPktSize;
-(unsigned)minRTTLargePktSize;
-(void)setMinRTTLargePktSize:(unsigned)arg1 ;
-(void)setHasPerMediumPktSize:(BOOL)arg1 ;
-(BOOL)hasPerLargePktSize;
-(unsigned)maxRTTMediumPktSize;
-(void)writeTo:(id)arg1 ;
-(unsigned)perSmallPktSize;
-(void)setAvgRTTSmallPktSize:(unsigned)arg1 ;
-(unsigned)avgRTTSmallPktSize;
-(unsigned long long)timestamp;
-(void)setMinRTTMediumPktSize:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)minRTTMediumPktSize;
-(BOOL)hasPerSmallPktSize;
-(void)setPerLargePktSize:(unsigned)arg1 ;
-(unsigned)perMediumPktSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasMaxRTTLargePktSize:(BOOL)arg1 ;
-(void)setHasPerLargePktSize:(BOOL)arg1 ;
-(BOOL)hasMinRTTSmallPktSize;
-(BOOL)hasAvgRTTLargePktSize;
-(BOOL)hasMinRTTMediumPktSize;
@end

