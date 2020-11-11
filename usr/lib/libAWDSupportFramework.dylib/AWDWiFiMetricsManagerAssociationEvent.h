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

@class AWDWiFiMetricsManagerEvent;

@interface AWDWiFiMetricsManagerAssociationEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDWiFiMetricsManagerEvent* _eventInfo;
	int _eventType;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasEventInfo; 
@property (nonatomic,retain) AWDWiFiMetricsManagerEvent * eventInfo;              //@synthesize eventInfo=_eventInfo - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) int eventType;                                       //@synthesize eventType=_eventType - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setEventType:(int)arg1 ;
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(int)StringAsEventType:(id)arg1 ;
-(int)eventType;
-(id)eventTypeAsString:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)hasEventInfo;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEventInfo:(AWDWiFiMetricsManagerEvent *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(AWDWiFiMetricsManagerEvent *)eventInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end
