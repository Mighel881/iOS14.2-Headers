/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSDictionary, NSString, NSURLSession;

@interface ADServer : ADSingleton <NSURLSessionDelegate> {

	int _configurationExpirationTime;
	NSDictionary* _configurations;
	NSString* _resourceConnectProxyURL;
	NSURLSession* _session;

}

@property (retain) NSURLSession * session;                          //@synthesize session=_session - In the implementation block
@property (retain) NSDictionary * configurations;                   //@synthesize configurations=_configurations - In the implementation block
@property (assign) int configurationExpirationTime;                 //@synthesize configurationExpirationTime=_configurationExpirationTime - In the implementation block
@property (retain) NSString * resourceConnectProxyURL;              //@synthesize resourceConnectProxyURL=_resourceConnectProxyURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)workQueue;
+(void)initialize;
-(id)init;
-(NSString *)resourceConnectProxyURL;
-(void)setConfigurationExpirationTime:(int)arg1 ;
-(void)setConfigurations:(NSDictionary *)arg1 ;
-(id)routingHeaderForClass:(Class)arg1 serverURL:(id)arg2 ;
-(void)saveConfig;
-(void)saveProxyURL;
-(void)handleRequest:(id)arg1 serverURL:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)restoreConfiguration;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)buildConfigurationDictionary:(id)arg1 ;
-(id)serverURLForMessageClass:(Class)arg1 serverURL:(id)arg2 ;
-(id)deserializeMessage:(id)arg1 error:(id*)arg2 ;
-(void)setResourceConnectProxyURL:(NSString *)arg1 ;
-(BOOL)shouldRestoreConfiguration;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSDictionary *)configurations;
-(int)configurationExpirationTime;
-(id)serializeMessage:(id)arg1 ;
-(NSURLSession *)session;
@end

