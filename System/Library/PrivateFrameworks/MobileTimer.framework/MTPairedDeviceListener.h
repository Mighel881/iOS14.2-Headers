/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, NAScheduler;
@class NSObject, MTObserverStore, NRDevice, NSString;

@interface MTPairedDeviceListener : NSObject {

	BOOL _sleepEnabled;
	NSObject*<OS_dispatch_queue> _serializerQueue;
	id<NAScheduler> _serializer;
	MTObserverStore* _observers;
	NRDevice* _pairedDevice;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serializerQueue;              //@synthesize serializerQueue=_serializerQueue - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                                //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) MTObserverStore * observers;                               //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL sleepEnabled;                                         //@synthesize sleepEnabled=_sleepEnabled - In the implementation block
@property (nonatomic,retain) NRDevice * pairedDevice;                                   //@synthesize pairedDevice=_pairedDevice - In the implementation block
@property (readonly) NSString * pairedDeviceVersion; 
@property (readonly) BOOL hasActivePairedDevice; 
@property (readonly) BOOL hasActivePairedDeviceSupportingSyncing; 
+(id)_handledNotifications;
+(id)sharedListener;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(NRDevice *)pairedDevice;
-(void)didReceiveNotificationNamed:(id)arg1 ;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(BOOL)hasActivePairedDeviceSupportingSyncing;
-(void)setSleepEnabled:(BOOL)arg1 ;
-(void)printDiagnostics;
-(void)notifyObserversWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(MTObserverStore *)observers;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id<NAScheduler>)serializer;
-(BOOL)hasActivePairedDevice;
-(void)didReceiveNotification:(id)arg1 ;
-(void)setObservers:(MTObserverStore *)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(BOOL)sleepEnabled;
-(NSString *)pairedDeviceVersion;
-(void)_registerForLocalNotifications;
-(BOOL)hasActivePairedDeviceCheckSyncing:(BOOL)arg1 ;
-(void)setSerializerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)serializerQueue;
-(void)updateActiveDeviceInfo;
-(void)setPairedDevice:(NRDevice *)arg1 ;
@end

