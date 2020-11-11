/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSLock, NSArray;

@interface SUScriptAccountManager : NSObject {

	NSMutableArray* _accounts;
	NSLock* _lock;

}

@property (retain,readonly) NSArray * accounts; 
+(void)endAccountManagerSessionForObject:(id)arg1 ;
+(id)beginAccountManagerSessionForObject:(id)arg1 ;
-(NSArray *)accounts;
-(id)init;
-(id)accountForDSID:(id)arg1 ;
-(void)dealloc;
-(void)_accountsChangedNotification:(id)arg1 ;
-(void)_dispatchEvent:(id)arg1 forName:(id)arg2 ;
-(void)_ntsReloadAccounts;
@end
