/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, ICURLBag, NSNumber, ICDelegateToken;

@interface ICStoreURLRequestBuilderProperties : NSObject {

	NSString* _iCloudPersonID;
	ICURLBag* _URLBag;
	NSNumber* _DSID;
	NSString* _storefrontIdentifier;
	NSNumber* _delegatedDSID;
	NSString* _delegatedStorefrontIdentifier;
	ICDelegateToken* _delegateToken;
	ICURLBag* _delegatedURLBag;

}

@property (nonatomic,copy) NSString * iCloudPersonID;                             //@synthesize iCloudPersonID=_iCloudPersonID - In the implementation block
@property (nonatomic,retain) ICURLBag * URLBag;                                   //@synthesize URLBag=_URLBag - In the implementation block
@property (nonatomic,copy) NSNumber * DSID;                                       //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * storefrontIdentifier;                       //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * delegatedDSID;                              //@synthesize delegatedDSID=_delegatedDSID - In the implementation block
@property (nonatomic,copy) NSString * delegatedStorefrontIdentifier;              //@synthesize delegatedStorefrontIdentifier=_delegatedStorefrontIdentifier - In the implementation block
@property (nonatomic,copy) ICDelegateToken * delegateToken;                       //@synthesize delegateToken=_delegateToken - In the implementation block
@property (nonatomic,retain) ICURLBag * delegatedURLBag;                          //@synthesize delegatedURLBag=_delegatedURLBag - In the implementation block
-(NSNumber *)DSID;
-(NSString *)storefrontIdentifier;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(NSNumber *)delegatedDSID;
-(void)setDSID:(NSNumber *)arg1 ;
-(void)setDelegateToken:(ICDelegateToken *)arg1 ;
-(NSString *)delegatedStorefrontIdentifier;
-(void)setICloudPersonID:(NSString *)arg1 ;
-(void)setURLBag:(ICURLBag *)arg1 ;
-(ICDelegateToken *)delegateToken;
-(ICURLBag *)URLBag;
-(ICURLBag *)delegatedURLBag;
-(NSString *)iCloudPersonID;
-(void)setDelegatedStorefrontIdentifier:(NSString *)arg1 ;
-(void)setDelegatedDSID:(NSNumber *)arg1 ;
-(void)setDelegatedURLBag:(ICURLBag *)arg1 ;
@end
