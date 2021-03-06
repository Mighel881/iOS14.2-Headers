/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXMPBFeedbackRecordedTracker : PBCodable <NSCopying> {

	NSString* _consumerSubType;
	int _engagementType;
	SCD_Struct_AT1 _has;

}

@property (assign,nonatomic) BOOL hasEngagementType; 
@property (assign,nonatomic) int engagementType;                      //@synthesize engagementType=_engagementType - In the implementation block
@property (nonatomic,readonly) BOOL hasConsumerSubType; 
@property (nonatomic,retain) NSString * consumerSubType;              //@synthesize consumerSubType=_consumerSubType - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(int)engagementType;
-(NSString *)consumerSubType;
-(id)engagementTypeAsString:(int)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEngagementType:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConsumerSubType:(NSString *)arg1 ;
-(void)setHasEngagementType:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)StringAsEngagementType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasConsumerSubType;
-(BOOL)hasEngagementType;
@end

