/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SFStartSearchFeedback.h>

@class NSString, NSDictionary;

@interface SFStartNetworkSearchFeedback : SFStartSearchFeedback {

	NSString* _url;
	NSDictionary* _headers;
	unsigned long long _endpoint;
	NSString* _experimentId;
	NSString* _treatmentId;

}

@property (nonatomic,copy) NSString * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSDictionary * headers;                     //@synthesize headers=_headers - In the implementation block
@property (assign,nonatomic) unsigned long long endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,copy) NSString * experimentId;                    //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,copy) NSString * treatmentId;                     //@synthesize treatmentId=_treatmentId - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)treatmentId;
-(void)setExperimentId:(NSString *)arg1 ;
-(id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 queryId:(unsigned long long)arg6 ;
-(NSString *)url;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)experimentId;
-(NSDictionary *)headers;
-(void)setUrl:(NSString *)arg1 ;
-(unsigned long long)endpoint;
-(id)initWithCoder:(id)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(void)setTreatmentId:(NSString *)arg1 ;
-(id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 queryId:(unsigned long long)arg6 experimentId:(id)arg7 treatmentId:(id)arg8 ;
-(void)setEndpoint:(unsigned long long)arg1 ;
-(id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 ;
@end

