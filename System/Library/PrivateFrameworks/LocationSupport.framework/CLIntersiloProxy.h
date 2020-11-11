/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSProxy.h>

@protocol CLIntersiloProxyDelegateProtocol;
@class CLSilo;

@interface CLIntersiloProxy : NSProxy {

	id<CLIntersiloProxyDelegateProtocol> _delegate;
	CLSilo* _delegateSilo;

}

@property (nonatomic,__weak,readonly) id<CLIntersiloProxyDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) CLSilo * delegateSilo;                                      //@synthesize delegateSilo=_delegateSilo - In the implementation block
+(Class)initiatorRepresentingClass;
+(id)proxyForRecipientObject:(id)arg1 inSilo:(id)arg2 recipientName:(id)arg3 ;
+(Class)recipientRepresentingClass;
-(id)peer;
-(void)setDelegateEntityName:(const char*)arg1 ;
-(id)init;
-(BOOL)offsiloHandleInvocation:(id)arg1 selectorInfo:(id)arg2 peer:(id)arg3 ;
-(id<CLIntersiloProxyDelegateProtocol>)delegate;
-(CLSilo *)delegateSilo;
-(id)description;
-(void)registerDelegate:(id)arg1 inSilo:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)initWithDelegateObject:(id)arg1 delegateSilo:(id)arg2 ;
-(void)forwardInvocation:(id)arg1 ;
@end
