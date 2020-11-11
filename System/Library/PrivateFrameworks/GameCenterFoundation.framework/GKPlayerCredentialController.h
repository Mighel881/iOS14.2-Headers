/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccountStore, GKThreadsafeDictionary;

@interface GKPlayerCredentialController : NSObject {

	long long _loginCancelledCount;
	ACAccountStore* _store;
	GKThreadsafeDictionary* _primaryCredentialCache;
	GKThreadsafeDictionary* _allCredentialsCache;

}

@property (nonatomic,retain) ACAccountStore * store;                                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) GKThreadsafeDictionary * primaryCredentialCache;              //@synthesize primaryCredentialCache=_primaryCredentialCache - In the implementation block
@property (nonatomic,retain) GKThreadsafeDictionary * allCredentialsCache;                 //@synthesize allCredentialsCache=_allCredentialsCache - In the implementation block
@property (assign) long long loginCancelledCount;                                          //@synthesize loginCancelledCount=_loginCancelledCount - In the implementation block
@property (readonly) BOOL loginDisabled; 
+(id)accessQueue;
+(id)sharedController;
+(void)migrateOldAccountInformation;
-(id)accessQueue;
-(id)allCredentialsForEnvironment:(long long)arg1 ;
-(unsigned long long)loginStatusForCredential:(id)arg1 ;
-(void)setCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)removeAllCredentialsForEnvironment:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)primaryCredentialForEnvironment:(long long)arg1 ;
-(id)_transactAndWait:(/*^block*/id)arg1 ;
-(void)accountStoreEmailDidChange:(id)arg1 ;
-(id)pushCredentialForEnvironment:(long long)arg1 ;
-(void)accountStoreDidChange:(id)arg1 ;
-(void)setAllCredentialsCache:(GKThreadsafeDictionary *)arg1 ;
-(id)suggestedUsername;
-(id)credentialForUsername:(id)arg1 environment:(long long)arg2 ;
-(GKThreadsafeDictionary *)primaryCredentialCache;
-(ACAccountStore *)store;
-(void)setPrimaryCredentialCache:(GKThreadsafeDictionary *)arg1 ;
-(BOOL)loginDisabled;
-(void)getAltDSIDFromIDMSForCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_transact:(/*^block*/id)arg1 complete:(/*^block*/id)arg2 ;
-(void)setStore:(ACAccountStore *)arg1 ;
-(GKThreadsafeDictionary *)allCredentialsCache;
-(void)setPrimaryCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)replaceCredential:(id)arg1 withCredential:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)invalidateCredentialCaches;
-(id)credentialForPlayer:(id)arg1 environment:(long long)arg2 ;
-(void)removeCredential:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)loginCancelledCount;
-(void)setLoginCancelledCount:(long long)arg1 ;
-(void)dealloc;
@end
