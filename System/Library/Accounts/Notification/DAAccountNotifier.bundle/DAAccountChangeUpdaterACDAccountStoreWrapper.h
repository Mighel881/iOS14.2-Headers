/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Accounts/Notification/DAAccountNotifier.bundle/DAAccountNotifier
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DAAccountNotifier/DAAccountChangeHandlerAccountStoreUpdater.h>

@class ACAccount, ACDAccountStore, NSString;

@interface DAAccountChangeUpdaterACDAccountStoreWrapper : NSObject <DAAccountChangeHandlerAccountStoreUpdater> {

	ACAccount* _account;
	ACDAccountStore* _store;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
@end
