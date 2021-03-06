/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailCore/ECSASLAuthenticator.h>

@class NSData;

@interface _MFDigestMD5Authenticator : ECSASLAuthenticator {

	unsigned _maxbuf : 16;
	unsigned _securityLevel : 2;
	NSData* _expectedResponse;
	void* _cryptInfo;

}
-(long long)securityLevel;
-(id)responseForServerData:(id)arg1 ;
-(void)setAuthenticationState:(long long)arg1 ;
-(void)setSecurityLevel:(long long)arg1 ;
-(void)setMaxBuffer:(unsigned)arg1 ;
-(void)setCryptInfo:(void*)arg1 ;
-(void)setExpectedResponse:(id)arg1 ;
-(void)dealloc;
@end

