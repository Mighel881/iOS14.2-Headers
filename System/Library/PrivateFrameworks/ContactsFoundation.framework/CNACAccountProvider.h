/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNACAccountProvider.h>

@protocol CNACAccountProvider <NSObject>
@required
-(BOOL)isAccountSyncable:(id)arg1;
-(BOOL)isAnyAccountSyncableIgnoringAccount:(id)arg1;
-(id)allAccountTypes;
-(id)accountsWithAccountType:(id)arg1;
-(id)childAccountsForAccount:(id)arg1;

@end


@class NSString;

@interface CNACAccountProvider : NSObject <CNACAccountProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerWithStore:(id)arg1 ;
+(id)providerWithAccounts:(id)arg1 ;
-(BOOL)isAccountSyncable:(id)arg1 ;
-(BOOL)isAnyAccountSyncableIgnoringAccount:(id)arg1 ;
-(id)allAccountTypes;
-(id)accountsWithAccountType:(id)arg1 ;
-(id)childAccountsForAccount:(id)arg1 ;
@end

