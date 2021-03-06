/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICNanoPairedDeviceStatusObserver.h>

@class NSString, NSData, NSNumber;

@interface ICDeviceInfo : NSObject <ICNanoPairedDeviceStatusObserver> {

	atomic_flag _hasRegisteredForNameNotifications;
	MGNotificationTokenStructRef _nameNotificationToken;
	NSString* _productVersion;
	NSString* _deviceModel;
	NSString* _rawDeviceModel;
	NSString* _hardwarePlatform;
	NSString* _buildVersion;
	int _deviceClass;
	unsigned _fairPlayDeviceType;
	NSString* _currentLocale;
	NSData* _deviceGUIDData;
	NSString* _deviceGUID;
	NSString* _name;
	NSString* _serialNumber;
	NSData* _macAddressData;
	CGSize _mainScreenSize;
	NSNumber* _hasCellularDataCapabilityNumber;
	NSNumber* _hasTelephonyCapabilityNumber;
	NSNumber* _hasWiFiCapabilityValue;
	NSNumber* _hasWAPICapabilityValue;
	NSNumber* _has720pCapabilityValue;
	NSNumber* _has1080pCapabilityValue;
	NSNumber* _screenClassValue;
	NSNumber* _isInternalBuildNumber;
	NSNumber* _supportsMusicStreamingValue;
	NSString* _systemReleaseType;
	os_unfair_lock_s _lock;

}

@property (getter=isMultiUserDevice,nonatomic,readonly) BOOL multiUserDevice; 
@property (nonatomic,copy,readonly) NSString * deviceModel; 
@property (nonatomic,copy,readonly) NSString * rawDeviceModel; 
@property (nonatomic,copy,readonly) NSString * hardwarePlatform; 
@property (nonatomic,copy,readonly) NSString * deviceGUID; 
@property (nonatomic,copy,readonly) NSData * deviceFairPlayGUIDData; 
@property (nonatomic,copy,readonly) NSString * serialNumber; 
@property (nonatomic,copy,readonly) NSString * macAddress; 
@property (nonatomic,copy,readonly) NSData * macAddressData; 
@property (nonatomic,readonly) CGSize mainScreenSize; 
@property (nonatomic,readonly) BOOL hasCellularDataCapability; 
@property (nonatomic,readonly) BOOL hasTelephonyCapability; 
@property (nonatomic,readonly) BOOL hasWiFiCapability; 
@property (nonatomic,readonly) BOOL hasWAPICapability; 
@property (nonatomic,readonly) BOOL has720pCapability; 
@property (nonatomic,readonly) BOOL has1080pCapability; 
@property (nonatomic,readonly) int screenClass; 
@property (nonatomic,readonly) int deviceClass; 
@property (nonatomic,readonly) BOOL isIPhone; 
@property (nonatomic,readonly) BOOL isAppleTV; 
@property (nonatomic,readonly) BOOL isIPad; 
@property (nonatomic,readonly) BOOL isIPod; 
@property (nonatomic,readonly) BOOL isWatch; 
@property (nonatomic,readonly) BOOL isAudioAccessory; 
@property (nonatomic,readonly) BOOL isMac; 
@property (nonatomic,copy,readonly) NSString * productVersion; 
@property (nonatomic,copy,readonly) NSString * productPlatform; 
@property (nonatomic,copy,readonly) NSString * buildVersion; 
@property (getter=isInternalBuild,nonatomic,readonly) BOOL internalBuild; 
@property (nonatomic,copy,readonly) NSString * systemReleaseType; 
@property (nonatomic,readonly) unsigned fairPlayDeviceType; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * currentLocale; 
@property (nonatomic,readonly) BOOL supportsSideLoadedMediaContent; 
@property (nonatomic,readonly) BOOL supportsMusicStreaming; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultInfo;
+(id)currentDeviceInfo;
-(BOOL)isMultiUserDevice;
-(BOOL)isMac;
-(BOOL)isWatch;
-(NSString *)currentLocale;
-(BOOL)isInternalBuild;
-(NSString *)deviceModel;
-(NSString *)serialNumber;
-(BOOL)isIPad;
-(NSData *)deviceFairPlayGUIDData;
-(BOOL)isIPod;
-(BOOL)isIPhone;
-(int)deviceClass;
-(NSString *)deviceGUID;
-(BOOL)hasTelephonyCapability;
-(NSString *)buildVersion;
-(NSString *)rawDeviceModel;
-(int)_gestaltDeviceClass;
-(CGSize)mainScreenSize;
-(unsigned)fairPlayDeviceType;
-(BOOL)supportsSideLoadedMediaContent;
-(BOOL)supportsMusicStreaming;
-(NSString *)productPlatform;
-(NSString *)name;
-(NSString *)systemReleaseType;
-(BOOL)hasWiFiCapability;
-(NSString *)macAddress;
-(NSData *)macAddressData;
-(NSString *)hardwarePlatform;
-(NSString *)productVersion;
-(BOOL)has720pCapability;
-(BOOL)has1080pCapability;
-(BOOL)hasCellularDataCapability;
-(BOOL)isAudioAccessory;
-(id)_init;
-(BOOL)hasWAPICapability;
-(void)dealloc;
-(int)screenClass;
-(BOOL)isAppleTV;
@end

