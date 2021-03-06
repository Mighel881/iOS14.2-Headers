/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteConfiguration/RCOperation.h>

@protocol OS_dispatch_queue;
@class RCConfigurationSettings, NSDictionary, NSURL, NSObject;

@interface RCEndpointOperation : RCOperation {

	RCConfigurationSettings* _configurationSettings;
	NSDictionary* _changeTagsByRequestKey;
	NSURL* _endpointURL;
	/*^block*/id _configurationCompletionHandler;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSDictionary* _configurationResourcesByRequestKey;

}

@property (nonatomic,retain) NSDictionary * configurationResourcesByRequestKey;              //@synthesize configurationResourcesByRequestKey=_configurationResourcesByRequestKey - In the implementation block
@property (nonatomic,retain) RCConfigurationSettings * configurationSettings;                //@synthesize configurationSettings=_configurationSettings - In the implementation block
@property (nonatomic,retain) NSDictionary * changeTagsByRequestKey;                          //@synthesize changeTagsByRequestKey=_changeTagsByRequestKey - In the implementation block
@property (nonatomic,retain) NSURL * endpointURL;                                            //@synthesize endpointURL=_endpointURL - In the implementation block
@property (nonatomic,copy) id configurationCompletionHandler;                                //@synthesize configurationCompletionHandler=_configurationCompletionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;                   //@synthesize completionQueue=_completionQueue - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(void)resetForRetry;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSURL *)endpointURL;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(RCConfigurationSettings *)configurationSettings;
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(id)configurationCompletionHandler;
-(void)setConfigurationCompletionHandler:(id)arg1 ;
-(unsigned long long)maxRetries;
-(void)setConfigurationSettings:(RCConfigurationSettings *)arg1 ;
-(void)setEndpointURL:(NSURL *)arg1 ;
-(void)_fetchConfigurationWithSettings:(id)arg1 ;
-(NSDictionary *)configurationResourcesByRequestKey;
-(id)requestDataForSettings:(id)arg1 ;
-(void)setConfigurationResourcesByRequestKey:(NSDictionary *)arg1 ;
-(void)_parseEndpointResponse:(id)arg1 configurationSettings:(id)arg2 maxAge:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSDictionary *)changeTagsByRequestKey;
-(id)_configurationErrorForErrorDicts:(id)arg1 ;
-(void)setChangeTagsByRequestKey:(NSDictionary *)arg1 ;
@end

