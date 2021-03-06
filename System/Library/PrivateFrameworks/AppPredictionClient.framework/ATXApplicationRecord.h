/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ATXApplicationRecord : NSObject
+(BOOL)isArcadeAppForBundle:(id)arg1 ;
+(BOOL)isLaunchProhibitedForBundle:(id)arg1 ;
+(id)recordForBundleId:(id)arg1 ;
+(id)parentAppBundleIdForClipBundleID:(id)arg1 ;
+(BOOL)isAppClipForBundleId:(id)arg1 ;
+(id)appInfoForBundle:(id)arg1 ;
+(id)genreForBundle:(id)arg1 ;
+(BOOL)isInstallingForBundle:(id)arg1 ;
+(BOOL)isOffloadedForBundle:(id)arg1 ;
+(void)getDeviceManagementPolicyForBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(BOOL)isAppClipGivenAppRecord:(id)arg1 ;
+(BOOL)isAppClipWebClipBundleId:(id)arg1 ;
+(id)bundleIdForAdamIdIfInstalled:(unsigned long long)arg1 ;
+(BOOL)isBetaAppForBundle:(id)arg1 ;
+(BOOL)isInstalledAndNotRestrictedForBundle:(id)arg1 ;
+(BOOL)isWebClipInstalledWithBundleId:(id)arg1 ;
+(BOOL)isEnterpriseAppForBundle:(id)arg1 ;
+(id)schemaWithoutFallbackForBundle:(id)arg1 ;
+(BOOL)isInstalledForBundle:(id)arg1 ;
+(BOOL)isInstalledOrIsPlaceholderForBundle:(id)arg1 ;
+(BOOL)isUPPValidatedForBundle:(id)arg1 ;
+(id)localizedNameForBundle:(id)arg1 ;
+(id)recordForAdamId:(unsigned long long)arg1 ;
@end

