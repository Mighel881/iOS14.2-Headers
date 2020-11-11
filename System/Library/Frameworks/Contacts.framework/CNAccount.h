/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNAccount : NSObject <NSCopying, NSSecureCoding> {

	int _iOSLegacyIdentifier;
	NSString* _identifier;
	NSString* _externalIdentifierString;

}

@property (nonatomic,readonly) NSString * _cnui_displayName; 
@property (nonatomic,readonly) int iOSLegacyIdentifier;                               //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalIdentifierString;              //@synthesize externalIdentifierString=_externalIdentifierString - In the implementation block
+(id)_cnui_accountStore;
+(id)_cnui_displayNameForLocal;
+(id)_cnui_displayNameForACAccount:(id)arg1 ;
+(BOOL)_cnui_isFacebookACAccount:(id)arg1 ;
+(void)_cnui_canRequestRefreshWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)_cnui_requestRefreshWithUserAction:(BOOL)arg1 ;
+(id)makeIdentifier;
+(BOOL)supportsSecureCoding;
+(BOOL)requestAccountSyncWithOptions:(unsigned long long)arg1 ;
+(BOOL)ios_requestAccountSyncWithOptions:(unsigned long long)arg1 ;
+(BOOL)requestAccountSyncWithDefaultOptions;
+(id)identifierProvider;
+(id)makeIdentifierString;
+(id)localAccount;
+(id)os_log;
+(id)predicateForAccountWithExternalIdentifier:(id)arg1 ;
+(id)predicateForAccountsWithIdentifiers:(id)arg1 ;
+(id)predicateForAccountForContainerWithIdentifier:(id)arg1 ;
-(NSString *)_cnui_displayName;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2 ;
-(id)initWithExternalIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2 iOSLegacyIdentifier:(int)arg3 ;
-(int)iOSLegacyIdentifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)externalIdentifierString;
@end
