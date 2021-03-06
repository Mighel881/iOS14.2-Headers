/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariShared/WBSPerSitePreferenceManager.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerStorageDelegate.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerDefaultsDelegate.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceBinaryToggleItemManager.h>

@class WBSPerSitePreferencesSQLiteStore, WBSPerSitePreference, NSString;

@interface WBSAutomaticReaderActivationManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager> {

	WBSPerSitePreferencesSQLiteStore* _perSitePreferencesStore;
	WBSPerSitePreference* _readerPreference;

}

@property (nonatomic,readonly) WBSPerSitePreference * readerPreference;                                 //@synthesize readerPreference=_readerPreference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WBSPerSitePreferencesSQLiteStore * perSitePreferencesStore; 
-(id)preferences;
-(id)init;
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2 ;
-(id)onValueForPreference:(id)arg1 ;
-(WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1 ;
-(void)getAutomaticReaderEnabledByDefaultUsingBlock:(/*^block*/id)arg1 ;
-(void)getAutomaticReaderEnabledForDomain:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_submitOptInOutStateForAnalyticsGivenAutomaticReaderIsNotGloballyEnabled;
-(WBSPerSitePreference *)readerPreference;
-(id)initWithPerSitePreferencesStore:(id)arg1 ;
-(void)getAutomaticReaderStateForDomain:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setAutomaticReaderEnabled:(BOOL)arg1 forDomain:(id)arg2 ;
-(void)submitOptInOutStateForAnalytics;
-(void)setAutomaticReaderEnabledByDefault:(BOOL)arg1 removingExistingPreferencesForSites:(BOOL)arg2 ;
-(id)valuesForPreference:(id)arg1 ;
-(long long)preferencesStoreKeyForPreference:(id)arg1 ;
-(void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3 ;
-(id)offValueForPreference:(id)arg1 ;
@end

