/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SSAccount;

@interface SSUpdateAccountResponse : NSObject {

	unsigned long long _credentialSource;
	SSAccount* _updatedAccount;

}

@property (nonatomic,readonly) unsigned long long credentialSource;              //@synthesize credentialSource=_credentialSource - In the implementation block
@property (nonatomic,readonly) SSAccount * updatedAccount;                       //@synthesize updatedAccount=_updatedAccount - In the implementation block
-(unsigned long long)credentialSource;
-(SSAccount *)updatedAccount;
-(id)initWithUpdatedAccount:(id)arg1 credentialSource:(unsigned long long)arg2 ;
@end

