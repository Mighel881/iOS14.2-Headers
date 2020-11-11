/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchRemote/TRRequestMessage.h>

@class ACAccount, NSString, NSSet;

@interface TRSetupProxyAuthenticationRequest : TRRequestMessage {

	ACAccount* _account;
	NSString* _rawPassword;
	NSSet* _targetedAccountServices;

}

@property (nonatomic,retain) ACAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * rawPassword;                       //@synthesize rawPassword=_rawPassword - In the implementation block
@property (nonatomic,retain) NSSet * targetedAccountServices;              //@synthesize targetedAccountServices=_targetedAccountServices - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRawPassword:(NSString *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)rawPassword;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)targetedAccountServices;
-(void)setTargetedAccountServices:(NSSet *)arg1 ;
@end
