/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSURL, NSString;

@interface SSVServerAuthenticateResponse : NSObject <SSXPCCoding> {

	NSNumber* _authenticatedAccountIdentifier;
	long long _performedButtonIndex;
	NSURL* _redirectURL;
	long long _selectedButtonIndex;

}

@property (nonatomic,copy) NSNumber * authenticatedAccountIdentifier;              //@synthesize authenticatedAccountIdentifier=_authenticatedAccountIdentifier - In the implementation block
@property (assign,nonatomic) long long performedButtonIndex;                       //@synthesize performedButtonIndex=_performedButtonIndex - In the implementation block
@property (nonatomic,copy) NSURL * redirectURL;                                    //@synthesize redirectURL=_redirectURL - In the implementation block
@property (assign,nonatomic) long long selectedButtonIndex;                        //@synthesize selectedButtonIndex=_selectedButtonIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setRedirectURL:(NSURL *)arg1 ;
-(long long)selectedButtonIndex;
-(void)setSelectedButtonIndex:(long long)arg1 ;
-(NSURL *)redirectURL;
-(NSNumber *)authenticatedAccountIdentifier;
-(void)setAuthenticatedAccountIdentifier:(NSNumber *)arg1 ;
-(long long)performedButtonIndex;
-(void)setPerformedButtonIndex:(long long)arg1 ;
@end
