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

@class NSString;

@interface AWDCoreRoutineHintSourceSubmissionInstance : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	int _hintSource;
	SCD_Struct_AW5 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasHintSource; 
@property (assign,nonatomic) int hintSource;                        //@synthesize hintSource=_hintSource - In the implementation block
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(id)_init;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHintSource:(int)arg1 ;
-(int)hintSource;
-(void)setHasHintSource:(BOOL)arg1 ;
-(BOOL)hasHintSource;
@end

