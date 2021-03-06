/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBTelemetryNetworkEvent : PBCodable <NSCopying> {

	long long _connectDuration;
	long long _dnsDuration;
	long long _errorCode;
	long long _httpStatusCode;
	long long _requestDuration;
	long long _responseDuration;
	long long _responseSize;
	long long _startTime;
	int _cacheState;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) long long startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasDnsDuration; 
@property (assign,nonatomic) long long dnsDuration;                   //@synthesize dnsDuration=_dnsDuration - In the implementation block
@property (assign,nonatomic) BOOL hasConnectDuration; 
@property (assign,nonatomic) long long connectDuration;               //@synthesize connectDuration=_connectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRequestDuration; 
@property (assign,nonatomic) long long requestDuration;               //@synthesize requestDuration=_requestDuration - In the implementation block
@property (assign,nonatomic) BOOL hasResponseDuration; 
@property (assign,nonatomic) long long responseDuration;              //@synthesize responseDuration=_responseDuration - In the implementation block
@property (assign,nonatomic) BOOL hasResponseSize; 
@property (assign,nonatomic) long long responseSize;                  //@synthesize responseSize=_responseSize - In the implementation block
@property (assign,nonatomic) BOOL hasCacheState; 
@property (assign,nonatomic) int cacheState;                          //@synthesize cacheState=_cacheState - In the implementation block
@property (assign,nonatomic) BOOL hasHttpStatusCode; 
@property (assign,nonatomic) long long httpStatusCode;                //@synthesize httpStatusCode=_httpStatusCode - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                     //@synthesize errorCode=_errorCode - In the implementation block
-(long long)responseSize;
-(void)mergeFrom:(id)arg1 ;
-(long long)dnsDuration;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasHttpStatusCode;
-(BOOL)hasResponseSize;
-(unsigned long long)hash;
-(long long)startTime;
-(long long)requestDuration;
-(long long)connectDuration;
-(BOOL)hasStartTime;
-(void)setHasResponseSize:(BOOL)arg1 ;
-(long long)responseDuration;
-(int)cacheState;
-(void)setResponseSize:(long long)arg1 ;
-(void)setHttpStatusCode:(long long)arg1 ;
-(long long)httpStatusCode;
-(void)setResponseDuration:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setConnectDuration:(long long)arg1 ;
-(void)setHasConnectDuration:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasCacheState;
-(void)setHasRequestDuration:(BOOL)arg1 ;
-(void)setStartTime:(long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasResponseDuration;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasCacheState:(BOOL)arg1 ;
-(BOOL)hasDnsDuration;
-(BOOL)hasRequestDuration;
-(void)setHasHttpStatusCode:(BOOL)arg1 ;
-(void)setHasResponseDuration:(BOOL)arg1 ;
-(void)setCacheState:(int)arg1 ;
-(void)setHasDnsDuration:(BOOL)arg1 ;
-(void)setDnsDuration:(long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasConnectDuration;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasErrorCode;
-(void)setRequestDuration:(long long)arg1 ;
@end

