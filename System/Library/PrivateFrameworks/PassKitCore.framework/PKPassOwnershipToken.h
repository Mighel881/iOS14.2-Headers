/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PKPassOwnershipToken : NSObject {

	NSString* _ownershipToken;
	NSString* _ownershipTokenIdentifier;

}

@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier;              //@synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier - In the implementation block
@property (nonatomic,copy) NSString * ownershipToken; 
+(void)queryKeychainForOwnershipTokens:(/*^block*/id)arg1 ;
+(void)deleteAllLocalKeychainOwnershipTokens;
-(NSString *)ownershipTokenIdentifier;
-(id)description;
-(id)initWithIdentifier:(id)arg1 ;
-(void)_readFromKeychain;
-(void)_writeToKeychain;
-(void)deleteTokenFromLocalKeychain;
-(void)setOwnershipToken:(NSString *)arg1 ;
-(id)initWithOwnershipToken:(id)arg1 identifier:(id)arg2 ;
-(NSString *)ownershipToken;
-(void)deleteTokenFromKeychain;
-(id)_wrapperWithType:(unsigned long long)arg1 identifier:(id)arg2 ;
@end

