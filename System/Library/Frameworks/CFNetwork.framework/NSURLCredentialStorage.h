/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLCredentialStorageInternal, NSDictionary;

@interface NSURLCredentialStorage : NSObject {

	NSURLCredentialStorageInternal* _internal;

}

@property (assign,nonatomic) BOOL _useSystemKeychain; 
@property (copy,readonly) NSDictionary * allCredentials; 
+(id)sharedCredentialStorage;
-(void)getDefaultCredentialForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 task:(id)arg4 ;
-(void)getCredentialsForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_allCredentialsWithAccessControlGroup:(id)arg1 includeLegacyKeychain:(BOOL)arg2 ;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 ;
-(void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3 ;
-(void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(id)defaultCredentialForProtectionSpace:(id)arg1 ;
-(id)init;
-(void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3 ;
-(id)_initWithCFURLCredentialStorage:(CFURLCredentialStorageRef)arg1 ;
-(id)_initWithIdentifier:(id)arg1 private:(BOOL)arg2 ;
-(id)credentialsForProtectionSpace:(id)arg1 ;
-(NSDictionary *)allCredentials;
-(void)set_useSystemKeychain:(BOOL)arg1 ;
-(CFURLCredentialStorageRef)_CFURLCredentialStorage;
-(BOOL)_useSystemKeychain;
-(void)dealloc;
@end
