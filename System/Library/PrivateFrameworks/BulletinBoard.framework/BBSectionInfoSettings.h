/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSDictionary;

@interface BBSectionInfoSettings : NSObject <NSCopying, NSSecureCoding> {

	BOOL _showsOnExternalDevices;
	BOOL _showsCustomSettingsLink;
	long long _authorizationStatus;
	NSDate* _authorizationExpirationDate;
	NSDate* _lastUserGrantedAuthorizationDate;
	long long _notificationCenterSetting;
	long long _lockScreenSetting;
	long long _contentPreviewSetting;
	unsigned long long _alertType;
	unsigned long long _pushSettings;
	long long _carPlaySetting;
	long long _criticalAlertSetting;
	long long _spokenNotificationSetting;
	long long _bulletinGroupingSetting;

}

@property (assign,nonatomic) BOOL showsInLockScreen; 
@property (assign,nonatomic) BOOL showsInNotificationCenter; 
@property (assign,nonatomic) BOOL showsMessagePreview; 
@property (nonatomic,copy,readonly) NSDictionary * stateCapture; 
@property (assign,nonatomic) long long authorizationStatus;                          //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (nonatomic,retain) NSDate * authorizationExpirationDate;                   //@synthesize authorizationExpirationDate=_authorizationExpirationDate - In the implementation block
@property (assign,nonatomic) BOOL allowsNotifications; 
@property (nonatomic,retain) NSDate * lastUserGrantedAuthorizationDate;              //@synthesize lastUserGrantedAuthorizationDate=_lastUserGrantedAuthorizationDate - In the implementation block
@property (nonatomic,readonly) BOOL isAuthorizedTemporarily; 
@property (assign,nonatomic) long long notificationCenterSetting;                    //@synthesize notificationCenterSetting=_notificationCenterSetting - In the implementation block
@property (assign,nonatomic) long long lockScreenSetting;                            //@synthesize lockScreenSetting=_lockScreenSetting - In the implementation block
@property (assign,nonatomic) BOOL showsOnExternalDevices;                            //@synthesize showsOnExternalDevices=_showsOnExternalDevices - In the implementation block
@property (assign,nonatomic) BOOL showsCustomSettingsLink;                           //@synthesize showsCustomSettingsLink=_showsCustomSettingsLink - In the implementation block
@property (assign,nonatomic) long long contentPreviewSetting;                        //@synthesize contentPreviewSetting=_contentPreviewSetting - In the implementation block
@property (assign,nonatomic) unsigned long long alertType;                           //@synthesize alertType=_alertType - In the implementation block
@property (assign,nonatomic) unsigned long long pushSettings;                        //@synthesize pushSettings=_pushSettings - In the implementation block
@property (assign,nonatomic) long long carPlaySetting;                               //@synthesize carPlaySetting=_carPlaySetting - In the implementation block
@property (assign,nonatomic) long long criticalAlertSetting;                         //@synthesize criticalAlertSetting=_criticalAlertSetting - In the implementation block
@property (assign,nonatomic) long long spokenNotificationSetting;                    //@synthesize spokenNotificationSetting=_spokenNotificationSetting - In the implementation block
@property (assign,nonatomic) long long bulletinGroupingSetting;                      //@synthesize bulletinGroupingSetting=_bulletinGroupingSetting - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sectionInfoSettingsForManagedBundleID:(id)arg1 ;
-(long long)lockScreenSetting;
-(void)setShowsMessagePreview:(BOOL)arg1 ;
-(void)setAlertType:(unsigned long long)arg1 ;
-(unsigned long long)alertType;
-(id)_authorizationStatusDescription;
-(BOOL)showsInLockScreen;
-(long long)authorizationStatus;
-(void)setShowsInNotificationCenter:(BOOL)arg1 ;
-(BOOL)allowsNotifications;
-(long long)criticalAlertSetting;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(id)initWithDefaultsForSectionType:(long long)arg1 ;
-(unsigned long long)hash;
-(void)setAuthorizationExpirationDate:(NSDate *)arg1 ;
-(BOOL)isAuthorizedTemporarily;
-(id)_bulletinGroupingSettingDescription;
-(void)setNotificationCenterSetting:(long long)arg1 ;
-(BOOL)showsCustomSettingsLink;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setShowsInLockScreen:(BOOL)arg1 ;
-(void)setShowsOnExternalDevices:(BOOL)arg1 ;
-(NSDate *)authorizationExpirationDate;
-(long long)notificationCenterSetting;
-(id)description;
-(BOOL)showsInNotificationCenter;
-(BOOL)isEqual:(id)arg1 ;
-(long long)bulletinGroupingSetting;
-(void)setAllowsNotifications:(BOOL)arg1 ;
-(NSDate *)lastUserGrantedAuthorizationDate;
-(void)setBulletinGroupingSetting:(long long)arg1 ;
-(void)setLastUserGrantedAuthorizationDate:(NSDate *)arg1 ;
-(void)setContentPreviewSetting:(long long)arg1 ;
-(id)_alertTypeDescription;
-(id)_contentPreviewSettingDescription;
-(BOOL)showsMessagePreview;
-(void)setShowsCustomSettingsLink:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPushSettings:(unsigned long long)arg1 ;
-(long long)contentPreviewSetting;
-(NSDictionary *)stateCapture;
-(unsigned long long)pushSettings;
-(long long)carPlaySetting;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)showsOnExternalDevices;
-(void)setLockScreenSetting:(long long)arg1 ;
-(long long)spokenNotificationSetting;
-(void)setCarPlaySetting:(long long)arg1 ;
-(void)setCriticalAlertSetting:(long long)arg1 ;
-(void)setSpokenNotificationSetting:(long long)arg1 ;
@end

