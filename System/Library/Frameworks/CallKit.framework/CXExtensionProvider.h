/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CallKit/CXProvider.h>
#import <libobjc.A.dylib/CXProviderExtensionVendorContextDelegate.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class CXProviderExtensionVendorContext, NSString;

@interface CXExtensionProvider : CXProvider <CXProviderExtensionVendorContextDelegate, NSExtensionRequestHandling> {

	CXProviderExtensionVendorContext* _extensionContext;

}

@property (nonatomic,retain) CXProviderExtensionVendorContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)hostProtocolDelegate;
-(void)setExtensionContext:(CXProviderExtensionVendorContext *)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(CXProviderExtensionVendorContext *)extensionContext;
-(void)invalidate;
-(void)providerExtensionVendorContext:(id)arg1 receivedCommittedTransaction:(id)arg2 ;
-(void)providerExtensionVendorContext:(id)arg1 handledActionTimeout:(id)arg2 ;
-(void)providerExtensionVendorContext:(id)arg1 handledAudioSessionActivationStateChangedTo:(BOOL)arg2 ;
-(BOOL)requiresProxyingAVAudioSessionState;
@end
