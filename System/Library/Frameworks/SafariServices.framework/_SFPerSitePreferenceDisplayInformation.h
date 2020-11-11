/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _SFPerSitePreferenceDisplayInformation : NSObject {

	NSString* _localizedSiteSpecificSettingsTitle;
	NSString* _localizedAllWebsiteSettingsTitle;
	NSString* _localizedClearAllSettingsPrompt;
	unsigned long long _displayOption;

}

@property (nonatomic,copy,readonly) NSString * localizedSiteSpecificSettingsTitle;              //@synthesize localizedSiteSpecificSettingsTitle=_localizedSiteSpecificSettingsTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedAllWebsiteSettingsTitle;                //@synthesize localizedAllWebsiteSettingsTitle=_localizedAllWebsiteSettingsTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedClearAllSettingsPrompt;                 //@synthesize localizedClearAllSettingsPrompt=_localizedClearAllSettingsPrompt - In the implementation block
@property (nonatomic,readonly) unsigned long long displayOption;                                //@synthesize displayOption=_displayOption - In the implementation block
+(void)_buildMapIfNeeded;
+(id)displayInformationForPerSitePreference:(id)arg1 ;
-(unsigned long long)displayOption;
-(id)_initWithLocalizedSiteSpecificSettingsTitle:(id)arg1 localizedAllWebsiteSettingsTitle:(id)arg2 localizedClearAllSettingsPrompt:(id)arg3 displayOption:(unsigned long long)arg4 ;
-(NSString *)localizedSiteSpecificSettingsTitle;
-(NSString *)localizedAllWebsiteSettingsTitle;
-(NSString *)localizedClearAllSettingsPrompt;
@end
