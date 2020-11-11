/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NRDevicePropertyObserver.h>

@protocol OS_dispatch_queue;
@class NSConditionLock, NSObject, NSNumber, NRDevice, NSString;

@interface GEONanoInfo : NSObject <NRDevicePropertyObserver> {

	NSConditionLock* _pairedDeviceLock;
	NSObject*<OS_dispatch_queue> _nanoregQueue;
	NSNumber* _hasPairedDevice;
	NRDevice* _currentDevice;
	NSString* _deviceSystemVersion;
	NSString* _deviceSystemBuildVersion;
	NSString* _deviceProductType;
	NSNumber* _deviceIsAltAccount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInfo;
-(id)hasPairedDevice;
-(id)deviceIsAltAcctIfAvailable;
-(id)_deviceSystemBuildVersionBlocking:(BOOL)arg1 ;
-(id)_hasPairedDeviceBlocking:(BOOL)arg1 ;
-(id)init;
-(id)deviceIsAltAcct;
-(id)deviceSystemVersionIfAvailable;
-(void)_readDeviceInfo:(id)arg1 ;
-(id)deviceSystemBuildVersionIfAvailable;
-(void)setupClient;
-(id)deviceOsVersionIfAvailable;
-(id)deviceProductTypeIfAvailable;
-(id)_deviceIsAltAcctBlocking:(BOOL)arg1 ;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
-(id)_observingProperties;
-(id)deviceProductType;
-(void)_startObservingDevice:(id)arg1 ;
-(id)_deviceSystemVersionBlocking:(BOOL)arg1 ;
-(void)_stopObservingDevice:(id)arg1 ;
-(id)deviceSystemVersion;
-(id)hasPairedDeviceIfAvailable;
-(id)deviceSystemBuildVersion;
-(id)_deviceProductTypeBlocking:(BOOL)arg1 ;
@end
