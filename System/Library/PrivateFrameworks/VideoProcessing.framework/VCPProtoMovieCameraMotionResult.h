/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoTimeRange;

@interface VCPProtoMovieCameraMotionResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	int _motionType;
	VCPProtoTimeRange* _timeRange;
	BOOL _isFast;

}

@property (nonatomic,retain) VCPProtoTimeRange * timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) int motionType;                             //@synthesize motionType=_motionType - In the implementation block
@property (assign,nonatomic) BOOL isFast;                                //@synthesize isFast=_isFast - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTimeRange:(VCPProtoTimeRange *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isFast;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(VCPProtoTimeRange *)timeRange;
-(id)description;
-(int)motionType;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMotionType:(int)arg1 ;
-(void)setIsFast:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)exportToLegacyDictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

