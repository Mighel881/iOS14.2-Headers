/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PowerUI/PowerUI-Structs.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <PowerUI/PowerUISmartChargeManagingAudioAccessoriesPrivate.h>
#import <PowerUI/PowerUISignalMonitorDelegate.h>
#import <PowerUI/PowerUISmartChargeManagingAudioAccessories.h>

@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_semaphore;
@class NSObject, PowerUIMLAudioAccessoryModelPredictor, NSMutableArray, NSLock, NSMutableDictionary, NSNumber, NSDistributedNotificationCenter, PowerUIWalletSignalMonitor, PowerUIBluetoothHandler, UNUserNotificationCenter, NSXPCListener, NSString;

@interface PowerUIAudioAccessorySmartChargeManager : NSObject <UNUserNotificationCenterDelegate, NSXPCListenerDelegate, PowerUISmartChargeManagingAudioAccessoriesPrivate, PowerUISignalMonitorDelegate, PowerUISmartChargeManagingAudioAccessories> {

	BOOL _firstNotificationDisplayed;
	NSObject*<OS_dispatch_queue> _queue;
	PowerUIMLAudioAccessoryModelPredictor* _predictor;
	BTSessionImplRef _session;
	NSObject*<OS_os_log> _accessoryLog;
	NSMutableArray* _deviceArray;
	NSLock* _deviceArrayLock;
	NSMutableDictionary* _accessoryStates;
	NSNumber* _hardcodedTimeDelta;
	NSNumber* _hardcodedTimeBetweenUpdates;
	NSDistributedNotificationCenter* _notificationCenter;
	NSObject*<OS_dispatch_semaphore> _btConnectionSemaphore;
	PowerUIWalletSignalMonitor* _walletMonitor;
	NSMutableDictionary* _acceptMessageFromRightBudForDevice;
	NSMutableDictionary* _acceptMessageFromLeftBudForDevice;
	PowerUIBluetoothHandler* _btHandler;
	UNUserNotificationCenter* _unCenter;
	NSMutableDictionary* _latestAnalyticsForDevice;
	NSXPCListener* _listener;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) PowerUIMLAudioAccessoryModelPredictor * predictor;                 //@synthesize predictor=_predictor - In the implementation block
@property (assign) BTSessionImplRef session;                                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> accessoryLog;                                 //@synthesize accessoryLog=_accessoryLog - In the implementation block
@property (nonatomic,retain) NSMutableArray * deviceArray;                                      //@synthesize deviceArray=_deviceArray - In the implementation block
@property (nonatomic,retain) NSLock * deviceArrayLock;                                          //@synthesize deviceArrayLock=_deviceArrayLock - In the implementation block
@property (retain) NSMutableDictionary * accessoryStates;                                       //@synthesize accessoryStates=_accessoryStates - In the implementation block
@property (nonatomic,retain) NSNumber * hardcodedTimeDelta;                                     //@synthesize hardcodedTimeDelta=_hardcodedTimeDelta - In the implementation block
@property (nonatomic,retain) NSNumber * hardcodedTimeBetweenUpdates;                            //@synthesize hardcodedTimeBetweenUpdates=_hardcodedTimeBetweenUpdates - In the implementation block
@property (nonatomic,retain) NSDistributedNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> btConnectionSemaphore;                      //@synthesize btConnectionSemaphore=_btConnectionSemaphore - In the implementation block
@property (nonatomic,retain) PowerUIWalletSignalMonitor * walletMonitor;                        //@synthesize walletMonitor=_walletMonitor - In the implementation block
@property (retain) NSMutableDictionary * acceptMessageFromRightBudForDevice;                    //@synthesize acceptMessageFromRightBudForDevice=_acceptMessageFromRightBudForDevice - In the implementation block
@property (retain) NSMutableDictionary * acceptMessageFromLeftBudForDevice;                     //@synthesize acceptMessageFromLeftBudForDevice=_acceptMessageFromLeftBudForDevice - In the implementation block
@property (retain) PowerUIBluetoothHandler * btHandler;                                         //@synthesize btHandler=_btHandler - In the implementation block
@property (nonatomic,retain) UNUserNotificationCenter * unCenter;                               //@synthesize unCenter=_unCenter - In the implementation block
@property (assign,nonatomic) BOOL firstNotificationDisplayed;                                   //@synthesize firstNotificationDisplayed=_firstNotificationDisplayed - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * latestAnalyticsForDevice;                    //@synthesize latestAnalyticsForDevice=_latestAnalyticsForDevice - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                          //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)readStringForPreferenceKeyPrefix:(id)arg1 andDevice:(id)arg2 ;
+(void)bulkDeleteDefaultsEntries:(id)arg1 ;
+(void)setArray:(id)arg1 forPreferenceKey:(id)arg2 ;
+(id)readNumberForPreferenceKeyPrefix:(id)arg1 andDevice:(id)arg2 ;
+(id)readArrayForPreferenceKey:(id)arg1 ;
+(void)setNumber:(id)arg1 forPreferenceKeyPrefix:(id)arg2 andDevice:(id)arg3 ;
+(void)setString:(id)arg1 forPreferenceKeyPrefix:(id)arg2 andDevice:(id)arg3 ;
-(NSDistributedNotificationCenter *)notificationCenter;
-(void)setListener:(NSXPCListener *)arg1 ;
-(BOOL)firstNotificationDisplayed;
-(void)setHardcodedTimeDelta:(NSNumber *)arg1 ;
-(BOOL)runUpdateForDevice:(BTDeviceImplRef)arg1 withHash:(id)arg2 asInitialUpdate:(BOOL)arg3 ;
-(id)init;
-(NSXPCListener *)listener;
-(id)defaultDateToDisableUntilGivenDate:(id)arg1 ;
-(id)firsUseNotificationRequest;
-(void)attachToBluetoothSession;
-(NSLock *)deviceArrayLock;
-(void)persistentlySetLastSentDate:(id)arg1 forDevice:(id)arg2 ;
-(void)fakeConnectionForDevice:(id)arg1 ;
-(void)clearLastActionForDevice:(id)arg1 ;
-(void)setHardcodedTimeBetweenUpdates:(NSNumber *)arg1 ;
-(void)setLatestAnalyticsForDevice:(NSMutableDictionary *)arg1 ;
-(void)getAvailableDevicesWithHandler:(/*^block*/id)arg1 ;
-(void)setNotificationCenter:(NSDistributedNotificationCenter *)arg1 ;
-(void)lastActionForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setPredictor:(PowerUIMLAudioAccessoryModelPredictor *)arg1 ;
-(void)monitor:(id)arg1 maySuggestNewFullChargeDeadline:(id)arg2 ;
-(PowerUIBluetoothHandler *)btHandler;
-(void)setAccessoryStates:(NSMutableDictionary *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSMutableDictionary *)acceptMessageFromRightBudForDevice;
-(void)setBtHandler:(PowerUIBluetoothHandler *)arg1 ;
-(void)setWalletMonitor:(PowerUIWalletSignalMonitor *)arg1 ;
-(void)setAcceptMessageFromRightBudForDevice:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)latestAnalyticsForDevice;
-(void)engageUntil:(id)arg1 forDevice:(id)arg2 overrideAllSignals:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)stopMockingBluetooth;
-(void)setAccessoryLog:(NSObject*<OS_os_log>)arg1 ;
-(void)client:(id)arg1 setState:(unsigned long long)arg2 forDevice:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(NSMutableArray *)deviceArray;
-(UNUserNotificationCenter *)unCenter;
-(BOOL)runUpdateForDevice:(BTDeviceImplRef)arg1 withHash:(id)arg2 ;
-(void)persistentlySetExpectedHash:(id)arg1 forDevice:(id)arg2 ;
-(void)setDeviceArray:(NSMutableArray *)arg1 ;
-(void)setFirstNotificationDisplayed:(BOOL)arg1 ;
-(void)setAcceptMessageFromLeftBudForDevice:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)btConnectionSemaphore;
-(void)persistentlySetStatusForDevice:(id)arg1 withCurrentState:(unsigned long long)arg2 withEnabled:(BOOL)arg3 withDisabledUntilDate:(id)arg4 withTemporarilyDisabled:(BOOL)arg5 ;
-(void)deleteRecordsForDevices:(id)arg1 ;
-(void)recordBudMetricsLocallyForDevice:(id)arg1 withTimeSpendAtLowerSoC:(unsigned short)arg2 timeSpentAtHigherSoC:(unsigned short)arg3 engagementEventsSinceLastReport:(unsigned char)arg4 underchargeEventsSinceLastReport:(unsigned char)arg5 chargingEventsSinceLastReport:(unsigned char)arg6 budSocAtLastEngagement:(unsigned char)arg7 successRatio:(unsigned short)arg8 ;
-(NSNumber *)hardcodedTimeDelta;
-(PowerUIMLAudioAccessoryModelPredictor *)predictor;
-(NSObject*<OS_os_log>)accessoryLog;
-(NSMutableDictionary *)accessoryStates;
-(void)setSession:(BTSessionImplRef)arg1 ;
-(BOOL)setOBCState:(BOOL)arg1 forDevice:(id)arg2 ;
-(void)client:(id)arg1 updateOBCDeadline:(id)arg2 forDevice:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(NSMutableDictionary *)acceptMessageFromLeftBudForDevice;
-(NSNumber *)hardcodedTimeBetweenUpdates;
-(void)persistentlyHandleSeeingDevice:(id)arg1 ;
-(id)stringFromState:(unsigned long long)arg1 ;
-(id)returnAccessoryStatusForDevice:(id)arg1 ;
-(long long)secondsLeftInHourForDate:(id)arg1 ;
-(void)reportSessionMetricsForSide:(unsigned char)arg1 withTimeSpendAtLowerSoC:(unsigned short)arg2 timeSpentAtHigherSoC:(unsigned short)arg3 engagementEventsSinceLastReport:(unsigned char)arg4 underchargeEventsSinceLastReport:(unsigned char)arg5 chargingEventsSinceLastReport:(unsigned char)arg6 budSocAtLastEngagement:(unsigned char)arg7 successRatio:(unsigned short)arg8 ;
-(void)client:(id)arg1 connectAndDisableOBCforDevice:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)unfilteredDeadlineForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setDeviceArrayLock:(NSLock *)arg1 ;
-(void)setBtConnectionSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)reportDailyMetrics;
-(void)setFakeConnectionStatusTo:(BOOL)arg1 ;
-(void)persistentlySetLastUnderchargeRecordedForPrediction:(id)arg1 forDevice:(id)arg2 ;
-(BTSessionImplRef)session;
-(void)isSmartChargingCurrentlyEnabledForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUnCenter:(UNUserNotificationCenter *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)getStatusForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(PowerUIWalletSignalMonitor *)walletMonitor;
-(unsigned long long)sendTimeDeltaInSeconds:(unsigned)arg1 toAccessory:(BTDeviceImplRef)arg2 ;
-(void)fullChargeDeadlineForDevice:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)startMockingBluetoothForFakeDevice:(id)arg1 ;
@end

