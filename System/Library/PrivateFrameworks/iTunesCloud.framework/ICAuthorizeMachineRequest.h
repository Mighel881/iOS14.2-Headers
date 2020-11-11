/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ICStoreRequestContext, NSData;

@interface ICAuthorizeMachineRequest : NSObject <NSCopying> {

	NSString* _keybagPath;
	long long _qualityOfService;
	NSString* _reason;
	ICStoreRequestContext* _requestContext;
	NSData* _tokenData;

}

@property (nonatomic,copy) NSString * keybagPath;                               //@synthesize keybagPath=_keybagPath - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                        //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) NSString * reason;                                   //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy) NSData * tokenData;                                  //@synthesize tokenData=_tokenData - In the implementation block
-(NSString *)reason;
-(NSString *)keybagPath;
-(void)setQualityOfService:(long long)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(long long)qualityOfService;
-(void)setKeybagPath:(NSString *)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setTokenData:(NSData *)arg1 ;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(NSData *)tokenData;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
