/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiKit/WiFiKit-Structs.h>
#import <WiFiKit/WFUserPromptOperation.h>
#import <libobjc.A.dylib/WFCredentialsProvider.h>

@protocol WFCredentialsProviderContext;
@class NSString;

@interface WFPasswordPromptOperation : WFUserPromptOperation <WFCredentialsProvider> {

	NSString* password;
	SecIdentityRef TLSIdentity;
	NSString* username;
	id<WFCredentialsProviderContext> _credentialsProviderContext;

}

@property (nonatomic,retain) id<WFCredentialsProviderContext> credentialsProviderContext;              //@synthesize credentialsProviderContext=_credentialsProviderContext - In the implementation block
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,readonly) SecIdentityRef TLSIdentity; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
+(id)passwordPromptOperationWithCredentialsContext:(id)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(SecIdentityRef)TLSIdentity;
-(void)setCredentialsProviderContext:(id<WFCredentialsProviderContext>)arg1 ;
-(id<WFCredentialsProviderContext>)credentialsProviderContext;
@end
