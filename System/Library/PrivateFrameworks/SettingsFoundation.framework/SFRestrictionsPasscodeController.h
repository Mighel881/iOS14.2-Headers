/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsFoundation.framework/SettingsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SFRestrictionsPasscodeController : NSObject
+(BOOL)settingEnabled;
+(BOOL)legacyRestrictionsInEffect;
+(id)saltForHashAndSaltLegacyRestrictions;
+(id)hashForHashAndSaltLegacyRestrictions;
+(id)newHashDataForPassword:(id)arg1 andSalt:(id)arg2 ;
+(id)_generateSalt;
+(void)_setKeychainPasswordForRestrictions:(id)arg1 ;
+(id)_keychainPasswordForRestrictions;
+(BOOL)validatePIN:(id)arg1 ;
+(BOOL)hasHashAndSaltLegacyPassword;
+(void)removePasswordForHashAndSaltLegacyRestrictions;
+(id)pinFromHashAndSaltLegacyPassword;
+(void)migrateRestrictionsPasscode;
+(void)_removeKeychainPasswordForRestrictions;
+(void)_migrateRestrictionsPasscodeIfNeeded;
+(void)setPIN:(id)arg1 ;
@end

