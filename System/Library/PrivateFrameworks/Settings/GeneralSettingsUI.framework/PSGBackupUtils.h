/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PSGBackupUtils : NSObject
+(BOOL)isDomainWhitelisted:(id)arg1 ;
+(void)fetchBackupDisabledAppsWithBackupManager:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)configureAlertMessageOfType:(unsigned long long)arg1 AndTitleForBackUpDisabledApps:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)shouldIgnoreBundleId:(id)arg1 ;
+(BOOL)isiCloudPhotosEnabled;
+(BOOL)isDomainNameIgnored:(id)arg1 ;
+(id)displayNameForDomainInfo:(id)arg1 ;
+(BOOL)hasValidDisplayNameOfDomain:(id)arg1 ;
+(id)alertTitleForBackupDisabledAppsInfo:(id)arg1 ;
+(id)alertBodyForBackupDisabledAppsInfo:(id)arg1 ofType:(unsigned long long)arg2 ;
+(id)bundleIdForDomainInfo:(id)arg1 ;
@end
