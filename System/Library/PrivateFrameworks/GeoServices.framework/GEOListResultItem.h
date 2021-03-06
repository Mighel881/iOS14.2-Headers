/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOListResultItem : PBCodable <NSCopying> {

	unsigned long long _businessId;
	long long _latency;
	int _resultType;
	int _tappedCount;
	BOOL _eventuallyVisible;
	BOOL _initiallyVisible;
	struct {
		unsigned has_businessId : 1;
		unsigned has_latency : 1;
		unsigned has_resultType : 1;
		unsigned has_tappedCount : 1;
		unsigned has_eventuallyVisible : 1;
		unsigned has_initiallyVisible : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType; 
@property (assign,nonatomic) BOOL hasInitiallyVisible; 
@property (assign,nonatomic) BOOL initiallyVisible; 
@property (assign,nonatomic) BOOL hasEventuallyVisible; 
@property (assign,nonatomic) BOOL eventuallyVisible; 
@property (assign,nonatomic) BOOL hasLatency; 
@property (assign,nonatomic) long long latency; 
@property (assign,nonatomic) BOOL hasTappedCount; 
@property (assign,nonatomic) int tappedCount; 
@property (assign,nonatomic) BOOL hasBusinessId; 
@property (assign,nonatomic) unsigned long long businessId; 
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setResultType:(int)arg1 ;
-(int)resultType;
-(void)setBusinessId:(unsigned long long)arg1 ;
-(void)setHasEventuallyVisible:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setHasInitiallyVisible:(BOOL)arg1 ;
-(long long)latency;
-(unsigned long long)hash;
-(int)StringAsResultType:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasLatency:(BOOL)arg1 ;
-(BOOL)eventuallyVisible;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasTappedCount:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasEventuallyVisible;
-(BOOL)isEqual:(id)arg1 ;
-(void)setInitiallyVisible:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLatency;
-(BOOL)hasBusinessId;
-(void)setHasResultType:(BOOL)arg1 ;
-(void)setHasBusinessId:(BOOL)arg1 ;
-(BOOL)hasResultType;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setTappedCount:(int)arg1 ;
-(unsigned long long)businessId;
-(BOOL)hasInitiallyVisible;
-(void)setEventuallyVisible:(BOOL)arg1 ;
-(BOOL)initiallyVisible;
-(BOOL)hasTappedCount;
-(void)setLatency:(long long)arg1 ;
-(id)resultTypeAsString:(int)arg1 ;
-(int)tappedCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end

