/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ICStateHandlerProvider.h>

@class ACAccount, ACAccountStore, NSDictionary, NSMutableDictionary, NSString;

@interface ICAccountUtilities : NSObject <ICStateHandlerProvider> {

	BOOL _primaryICloudACAccountValid;
	ACAccount* _primaryICloudACAccount;
	ACAccountStore* _accountStore;
	NSDictionary* _currentICloudAccountState;
	NSMutableDictionary* _accountIsManagedByIdentifier;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                                                      //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,copy) NSDictionary * currentICloudAccountState;                                             //@synthesize currentICloudAccountState=_currentICloudAccountState - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountIsManagedByIdentifier;                                 //@synthesize accountIsManagedByIdentifier=_accountIsManagedByIdentifier - In the implementation block
@property (assign,getter=isPrimaryICloudACAccountValid,nonatomic) BOOL primaryICloudACAccountValid;              //@synthesize primaryICloudACAccountValid=_primaryICloudACAccountValid - In the implementation block
@property (readonly) ACAccount * primaryICloudACAccount;                                                         //@synthesize primaryICloudACAccount=_primaryICloudACAccount - In the implementation block
@property (nonatomic,readonly) BOOL primaryICloudAccountEnabled; 
@property (nonatomic,readonly) BOOL didChooseToMigratePrimaryICloudAccount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)registerStateHandler;
-(void)internalInvalidatePrimaryICloudACAccount;
-(id)init;
-(id)allICloudACAccounts;
-(id)temporaryDirectoryURLForAccountIdentifier:(id)arg1 ;
-(BOOL)didChooseToMigratePrimaryICloudAccount;
-(id)iCloudACAccountWithIdentifier:(id)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(void)accountStoreDidChange:(id)arg1 ;
-(BOOL)primaryICloudAccountEnabled;
-(id)applicationDocumentsURLForAccountIdentifier:(id)arg1 ;
-(ACAccount *)primaryICloudACAccount;
-(id)initForObservingAccountStoreChanges:(BOOL)arg1 ;
-(void)invalidatePrimaryICloudACAccount;
-(void)setPrimaryICloudACAccountValid:(BOOL)arg1 ;
-(void)setCurrentICloudAccountState:(NSDictionary *)arg1 ;
-(NSDictionary *)currentICloudAccountState;
-(BOOL)isPrimaryICloudACAccountValid;
-(void)updateICloudACAccountFromStore;
-(NSMutableDictionary *)accountIsManagedByIdentifier;
-(void)createDirectoryIfNecessaryUsingURL:(id)arg1 ;
-(void)setAccountIsManagedByIdentifier:(NSMutableDictionary *)arg1 ;
-(BOOL)isManagedACAccountWithIdentifer:(id)arg1 ;
-(void)dealloc;
-(void)performBlockInPersonaContextIfNecessary:(/*^block*/id)arg1 forAccountIdentifier:(id)arg2 ;
@end
