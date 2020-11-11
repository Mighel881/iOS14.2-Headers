/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICRequestContext.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICUserIdentity, ICUserIdentityStore, ICStoreDialogResponseHandler;

@interface ICStoreRequestContext : ICRequestContext <NSSecureCoding> {

	ICUserIdentity* _delegatedIdentity;
	ICUserIdentity* _identity;
	ICUserIdentityStore* _identityStore;
	ICStoreDialogResponseHandler* _storeDialogResponseHandler;
	long long _personalizationStyle;
	BOOL _allowsExpiredBags;

}

@property (nonatomic,copy,readonly) ICUserIdentity * identity;                                              //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy,readonly) ICUserIdentity * delegatedIdentity;                                     //@synthesize delegatedIdentity=_delegatedIdentity - In the implementation block
@property (nonatomic,readonly) ICUserIdentityStore * identityStore;                                         //@synthesize identityStore=_identityStore - In the implementation block
@property (nonatomic,copy,readonly) ICStoreDialogResponseHandler * storeDialogResponseHandler;              //@synthesize storeDialogResponseHandler=_storeDialogResponseHandler - In the implementation block
@property (nonatomic,readonly) BOOL allowsExpiredBags;                                                      //@synthesize allowsExpiredBags=_allowsExpiredBags - In the implementation block
@property (nonatomic,readonly) long long personalizationStyle;                                              //@synthesize personalizationStyle=_personalizationStyle - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)activeStoreAccountRequestContext;
-(void)setPersonalizationStyle:(long long)arg1 ;
-(ICUserIdentityStore *)identityStore;
-(void)setIdentity:(ICUserIdentity *)arg1 ;
-(long long)personalizationStyle;
-(ICUserIdentity *)identity;
-(id)copyWithBlock:(/*^block*/id)arg1 ;
-(id)initWithIdentity:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)allowsExpiredBags;
-(void)setDelegatedIdentity:(ICUserIdentity *)arg1 ;
-(void)setIdentityStore:(ICUserIdentityStore *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentity:(id)arg1 clientInfo:(id)arg2 ;
-(ICUserIdentity *)delegatedIdentity;
-(id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3 authenticationProvider:(id)arg4 ;
-(void)setStoreDialogResponseHandler:(ICStoreDialogResponseHandler *)arg1 ;
-(ICStoreDialogResponseHandler *)storeDialogResponseHandler;
-(void)setAllowsExpiredBags:(BOOL)arg1 ;
@end
