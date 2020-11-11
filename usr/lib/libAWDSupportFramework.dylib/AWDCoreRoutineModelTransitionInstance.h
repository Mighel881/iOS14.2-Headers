/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDCoreRoutineTransitionMotionType, NSString;

@interface AWDCoreRoutineModelTransitionInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned _distance;
	unsigned _duration;
	AWDCoreRoutineTransitionMotionType* _transitionHistogram;
	SCD_Struct_AW3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                                     //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitionHistogram; 
@property (nonatomic,retain) AWDCoreRoutineTransitionMotionType * transitionHistogram;              //@synthesize transitionHistogram=_transitionHistogram - In the implementation block
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(id)_init;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)description;
-(unsigned)distance;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)duration;
-(BOOL)hasDistance;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(void)dealloc;
-(void)setTransitionHistogram:(AWDCoreRoutineTransitionMotionType *)arg1 ;
-(BOOL)hasTransitionHistogram;
-(AWDCoreRoutineTransitionMotionType *)transitionHistogram;
@end
