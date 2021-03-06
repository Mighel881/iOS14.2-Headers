/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CBStateReporting
@property (nonatomic,readonly) long long bluetoothState; 
@property (nonatomic,copy) id bluetoothStateChangedHandler; 
@required
-(id)bluetoothStateChangedHandler;
-(void)setBluetoothStateChangedHandler:(/*^block*/id)arg1;
-(long long)bluetoothState;

@end

