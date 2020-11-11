/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CBCentralManagerDelegate.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>

@protocol BTLEConnectionTable;
@class CBCentralManager, NSMutableArray, NSTimer, NSString;

@interface AMSBTLEConnectionManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {

	CBCentralManager* centralManager;
	NSMutableArray* peripheralList;
	NSMutableArray* connectedBTPeripherals;
	NSMutableArray* connectedAMSPeripherals;
	NSTimer* refreshTimer;
	NSTimer* connectionTimer;
	id<BTLEConnectionTable> controller;
	long long centralState;
	BOOL isAdvertising;

}

@property (readonly) NSMutableArray * peripheralList; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)startScan;
-(void)stopScan;
-(void)startTimer;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)timerFired:(id)arg1 ;
-(long long)bluetoothState;
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)dealloc;
-(BOOL)isLECapableHardware;
-(void)createPeripheralList;
-(void)updateAdvertisingState:(id)arg1 ;
-(unsigned)midiDeviceForUUID:(id)arg1 ;
-(id)amsPeripheralForCBPeripheral:(id)arg1 ;
-(void)checkAlreadyConnectedPeripherals;
-(void)connectionTimerFired:(id)arg1 ;
-(BOOL)peripheralIsConnectedCentral:(id)arg1 ;
-(id)initWithUIController:(id)arg1 ;
-(void)setUIController:(id)arg1 ;
-(void)killTimer;
-(void)removeAMSPeripheralForCBPeripheral:(id)arg1 ;
-(NSMutableArray *)peripheralList;
@end
