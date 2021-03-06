/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCCoreConfigurationObserving.h>

@protocol FCCoreConfigurationManager;
@class FCEndpointConnection, FCAsyncSerialQueue, NSURL, NSString;

@interface FCNewsletterEndpointConnection : NSObject <FCCoreConfigurationObserving> {

	FCEndpointConnection* _endpointConnection;
	FCAsyncSerialQueue* _serialQueue;
	id<FCCoreConfigurationManager> _configurationManager;
	NSURL* _baseURL;

}

@property (nonatomic,retain) FCEndpointConnection * endpointConnection;                        //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * serialQueue;                                 //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) id<FCCoreConfigurationManager> configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                  //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setConfigurationManager:(id<FCCoreConfigurationManager>)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(FCAsyncSerialQueue *)serialQueue;
-(FCEndpointConnection *)endpointConnection;
-(void)setSerialQueue:(FCAsyncSerialQueue *)arg1 ;
-(void)updateBaseURL:(id)arg1 ;
-(void)getNewsletterSubscriptionWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithConfigurationManager:(id)arg1 ;
-(void)newsletterSubscribeTo:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setEndpointConnection:(FCEndpointConnection *)arg1 ;
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)configurationManager:(id)arg1 configurationDidChange:(id)arg2 ;
-(void)submitPersonalizationVector:(id)arg1 withCallbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deletePersonalizationVectorWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithEndpointConnection:(id)arg1 configurationManager:(id)arg2 ;
@end

