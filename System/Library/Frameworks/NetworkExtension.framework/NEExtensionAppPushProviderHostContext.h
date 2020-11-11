/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEExtensionProviderHostContext.h>
#import <libobjc.A.dylib/NEExtensionAppPushProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionAppPushProviderHostProtocol.h>

@class NSString;

@interface NEExtensionAppPushProviderHostContext : NEExtensionProviderHostContext <NEExtensionAppPushProviderProtocol, NEExtensionAppPushProviderHostProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(int)requiredEntitlement;
-(void)setProviderConfiguration:(id)arg1 ;
-(void)reportIncomingCall:(id)arg1 ;
-(void)sendTimerEvent;
-(void)startConnectionWithProviderConfig:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopWithReason:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendOutgoingCallMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)validateWithCompletionHandler:(/*^block*/id)arg1 ;
@end
