/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Platform/BatteryPackAnalytics.platform/BatteryPackAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BatteryPackAnalytics/BatteryPackAnalytics-Structs.h>
#import <libobjc.A.dylib/ACCPlatformBatteryPackAnalyticsPluginProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSNumber, NSString, NSMutableDictionary, NSDictionary;

@interface ACCPlatformPluginBatteryPackAnalytics : NSObject <ACCPlatformBatteryPackAnalyticsPluginProtocol> {

	BOOL _isRunning;
	int _batteryPackConnectionState;
	unsigned _batteryPackIOService;
	CFRunLoopSourceRef _powerSourcesChangedRunLoopSource;
	CFRunLoopSourceRef _accessoriesChangedRunLoopSource;
	CFRunLoopSourceRef _accessoriesLimitedPowerRunLoopSource;
	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _batteryPackCurrentCapacity;
	NSNumber* _batteryPackMaxCapacity;
	NSNumber* _deviceBatteryCurrentCapacity;
	NSNumber* _deviceBatteryMaxCapacity;
	NSString* _batteryPackAccessoryName;
	NSString* _batteryPackAccessoryManufacturer;
	NSString* _batteryPackAccessoryModel;
	NSString* _batteryPackAccessoryHardwareVersion;
	NSString* _batteryPackAccessorySoftwareVersion;
	NSString* _batteryPackPowerSource;
	NSString* _oldBatteryPackPowerSource;
	NSNumber* _batteryPackPowerSourceVoltage;
	NSNumber* _oldBatteryPackPowerSourceVoltage;
	NSString* _connectedBatteryPackKey;
	unsigned long long _batteryPackConnectedTimestamp;
	unsigned long long _batteryPackChargeSourceConnectedTimestamp;
	unsigned long long _wiredChargeTime;
	unsigned long long _qiChargeTime;
	unsigned long long _inductiveChargeTime;
	unsigned long long _onBatteryTime;
	NSObject*<OS_dispatch_source> _batteryPackPendingConnectionTimerSource;
	NSMutableDictionary* _batteryPackAnalyticsDictionary;
	NSNumber* _batteryPackChargeAmperage;
	NSDictionary* _batteryPackDetails;

}

@property (assign,nonatomic) BOOL isRunning;                                                                     //@synthesize isRunning=_isRunning - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef powerSourcesChangedRunLoopSource;                                //@synthesize powerSourcesChangedRunLoopSource=_powerSourcesChangedRunLoopSource - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef accessoriesChangedRunLoopSource;                                 //@synthesize accessoriesChangedRunLoopSource=_accessoriesChangedRunLoopSource - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef accessoriesLimitedPowerRunLoopSource;                            //@synthesize accessoriesLimitedPowerRunLoopSource=_accessoriesLimitedPowerRunLoopSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSNumber * batteryPackCurrentCapacity;                                              //@synthesize batteryPackCurrentCapacity=_batteryPackCurrentCapacity - In the implementation block
@property (nonatomic,retain) NSNumber * batteryPackMaxCapacity;                                                  //@synthesize batteryPackMaxCapacity=_batteryPackMaxCapacity - In the implementation block
@property (nonatomic,retain) NSNumber * deviceBatteryCurrentCapacity;                                            //@synthesize deviceBatteryCurrentCapacity=_deviceBatteryCurrentCapacity - In the implementation block
@property (nonatomic,retain) NSNumber * deviceBatteryMaxCapacity;                                                //@synthesize deviceBatteryMaxCapacity=_deviceBatteryMaxCapacity - In the implementation block
@property (nonatomic,retain) NSString * batteryPackAccessoryName;                                                //@synthesize batteryPackAccessoryName=_batteryPackAccessoryName - In the implementation block
@property (nonatomic,retain) NSString * batteryPackAccessoryManufacturer;                                        //@synthesize batteryPackAccessoryManufacturer=_batteryPackAccessoryManufacturer - In the implementation block
@property (nonatomic,retain) NSString * batteryPackAccessoryModel;                                               //@synthesize batteryPackAccessoryModel=_batteryPackAccessoryModel - In the implementation block
@property (nonatomic,retain) NSString * batteryPackAccessoryHardwareVersion;                                     //@synthesize batteryPackAccessoryHardwareVersion=_batteryPackAccessoryHardwareVersion - In the implementation block
@property (nonatomic,retain) NSString * batteryPackAccessorySoftwareVersion;                                     //@synthesize batteryPackAccessorySoftwareVersion=_batteryPackAccessorySoftwareVersion - In the implementation block
@property (nonatomic,retain) NSString * batteryPackPowerSource;                                                  //@synthesize batteryPackPowerSource=_batteryPackPowerSource - In the implementation block
@property (nonatomic,retain) NSString * oldBatteryPackPowerSource;                                               //@synthesize oldBatteryPackPowerSource=_oldBatteryPackPowerSource - In the implementation block
@property (nonatomic,retain) NSNumber * batteryPackPowerSourceVoltage;                                           //@synthesize batteryPackPowerSourceVoltage=_batteryPackPowerSourceVoltage - In the implementation block
@property (nonatomic,retain) NSNumber * oldBatteryPackPowerSourceVoltage;                                        //@synthesize oldBatteryPackPowerSourceVoltage=_oldBatteryPackPowerSourceVoltage - In the implementation block
@property (nonatomic,retain) NSString * connectedBatteryPackKey;                                                 //@synthesize connectedBatteryPackKey=_connectedBatteryPackKey - In the implementation block
@property (assign,nonatomic) unsigned long long batteryPackConnectedTimestamp;                                   //@synthesize batteryPackConnectedTimestamp=_batteryPackConnectedTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long batteryPackChargeSourceConnectedTimestamp;                       //@synthesize batteryPackChargeSourceConnectedTimestamp=_batteryPackChargeSourceConnectedTimestamp - In the implementation block
@property (assign,nonatomic) int batteryPackConnectionState;                                                     //@synthesize batteryPackConnectionState=_batteryPackConnectionState - In the implementation block
@property (assign,nonatomic) unsigned long long wiredChargeTime;                                                 //@synthesize wiredChargeTime=_wiredChargeTime - In the implementation block
@property (assign,nonatomic) unsigned long long qiChargeTime;                                                    //@synthesize qiChargeTime=_qiChargeTime - In the implementation block
@property (assign,nonatomic) unsigned long long inductiveChargeTime;                                             //@synthesize inductiveChargeTime=_inductiveChargeTime - In the implementation block
@property (assign,nonatomic) unsigned long long onBatteryTime;                                                   //@synthesize onBatteryTime=_onBatteryTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> batteryPackPendingConnectionTimerSource;              //@synthesize batteryPackPendingConnectionTimerSource=_batteryPackPendingConnectionTimerSource - In the implementation block
@property (assign,nonatomic) unsigned batteryPackIOService;                                                      //@synthesize batteryPackIOService=_batteryPackIOService - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * batteryPackAnalyticsDictionary;                               //@synthesize batteryPackAnalyticsDictionary=_batteryPackAnalyticsDictionary - In the implementation block
@property (nonatomic,retain) NSNumber * batteryPackChargeAmperage;                                               //@synthesize batteryPackChargeAmperage=_batteryPackChargeAmperage - In the implementation block
@property (nonatomic,retain) NSDictionary * batteryPackDetails;                                                  //@synthesize batteryPackDetails=_batteryPackDetails - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(void)initPlugin;
-(unsigned long long)qiChargeTime;
-(void)startPlugin;
-(void)stopPlugin;
-(NSString *)pluginName;
-(void)setBatteryPackAccessoryHardwareVersion:(NSString *)arg1 ;
-(void)setIsRunning:(BOOL)arg1 ;
-(NSNumber *)batteryPackMaxCapacity;
-(void)setBatteryPackPowerSource:(NSString *)arg1 ;
-(NSDictionary *)batteryPackDetails;
-(unsigned long long)batteryPackChargeSourceConnectedTimestamp;
-(NSString *)batteryPackAccessoryHardwareVersion;
-(void)setBatteryPackAccessorySoftwareVersion:(NSString *)arg1 ;
-(unsigned long long)wiredChargeTime;
-(void)setBatteryPackAccessoryManufacturer:(NSString *)arg1 ;
-(void)setBatteryPackDetails:(NSDictionary *)arg1 ;
-(void)handleBatteryPackStateChange:(id)arg1 ;
-(BOOL)handleBatteryPackDetach;
-(CFRunLoopSourceRef)accessoriesLimitedPowerRunLoopSource;
-(void)setBatteryPackIOService:(unsigned)arg1 ;
-(NSNumber *)oldBatteryPackPowerSourceVoltage;
-(void)setConnectedBatteryPackKey:(NSString *)arg1 ;
-(void)setAccessoriesChangedRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(void)setBatteryPackCurrentCapacity:(NSNumber *)arg1 ;
-(void)cleanBatteryPackAnalyticsInternals;
-(BOOL)isRunning;
-(void)setInductiveChargeTime:(unsigned long long)arg1 ;
-(void)stopBatteryPackAnalytics;
-(void)trimBatteryPackAnalyticsDictionary;
-(NSNumber *)deviceBatteryMaxCapacity;
-(void)initPersistentBatteryPackAnalyticsDictionary;
-(void)setQiChargeTime:(unsigned long long)arg1 ;
-(NSString *)batteryPackPowerSource;
-(void)setOldBatteryPackPowerSource:(NSString *)arg1 ;
-(void)setOnBatteryTime:(unsigned long long)arg1 ;
-(int)batteryPackConnectionState;
-(unsigned long long)inductiveChargeTime;
-(NSString *)batteryPackAccessoryManufacturer;
-(void)setDeviceBatteryMaxCapacity:(NSNumber *)arg1 ;
-(void)setBatteryPackMaxCapacity:(NSNumber *)arg1 ;
-(void)setPowerSourcesChangedRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(unsigned long long)batteryPackConnectedTimestamp;
-(NSString *)oldBatteryPackPowerSource;
-(void)setBatteryPackConnectionState:(int)arg1 ;
-(void)setBatteryPackPowerSourceVoltage:(NSNumber *)arg1 ;
-(void)handleBatteryPackPowerSourceChange;
-(NSString *)batteryPackAccessorySoftwareVersion;
-(NSString *)connectedBatteryPackKey;
-(void)setBatteryPackAccessoryName:(NSString *)arg1 ;
-(void)setBatteryPackAnalyticsDictionary:(NSMutableDictionary *)arg1 ;
-(CFRunLoopSourceRef)accessoriesChangedRunLoopSource;
-(void)setWiredChargeTime:(unsigned long long)arg1 ;
-(NSString *)batteryPackAccessoryModel;
-(int)chargePercentForCurrentCapacity:(id)arg1 andMaxCapacity:(id)arg2 updateZeroValue:(BOOL)arg3 ;
-(void)setAccessoriesLimitedPowerRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(void)setBatteryPackConnectedTimestamp:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_source>)batteryPackPendingConnectionTimerSource;
-(NSString *)batteryPackAccessoryName;
-(BOOL)handleBatteryPackAttach;
-(unsigned)batteryPackIOService;
-(void)setBatteryPackAccessoryModel:(NSString *)arg1 ;
-(void)setDeviceBatteryCurrentCapacity:(NSNumber *)arg1 ;
-(CFRunLoopSourceRef)powerSourcesChangedRunLoopSource;
-(void)setBatteryPackPendingConnectionTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned long long)onBatteryTime;
-(void)startBatteryPackAnalytics;
-(NSNumber *)batteryPackChargeAmperage;
-(NSNumber *)batteryPackPowerSourceVoltage;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSNumber *)deviceBatteryCurrentCapacity;
-(void)setBatteryPackChargeAmperage:(NSNumber *)arg1 ;
-(void)handlePowerSourceChange;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSNumber *)batteryPackCurrentCapacity;
-(void)setBatteryPackChargeSourceConnectedTimestamp:(unsigned long long)arg1 ;
-(NSMutableDictionary *)batteryPackAnalyticsDictionary;
-(void)setOldBatteryPackPowerSourceVoltage:(NSNumber *)arg1 ;
-(void)commitPersistentBatteryPackAnalyticsDictionary;
-(void)queue_handlePowerSourceChange;
-(void)queue_performUpdateWithPowerSourcesBlob:(void*)arg1 andPowerSourcesList:(CFArrayRef)arg2 ;
@end

