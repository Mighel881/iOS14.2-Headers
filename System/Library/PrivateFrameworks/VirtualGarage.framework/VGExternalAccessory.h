/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VGExternalAccessory.h>
@class NSString, VGExternalAccessoryState;


@protocol VGExternalAccessory <NSObject,VGVehicleStateProviding>
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) BOOL isConnectedToElectricVehicle; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * bluetoothIdentifier; 
@property (nonatomic,readonly) VGExternalAccessoryState * currentState; 
@required
-(BOOL)isConnected;
-(VGExternalAccessoryState *)currentState;
-(BOOL)isConnectedToElectricVehicle;
-(NSString *)identifier;
-(NSString *)bluetoothIdentifier;

@end


@protocol VGExternalAccessoryUpdating;
@class NSString, VGExternalAccessoryState, EAAccessory, VGVehicleState, VGVehicle;

@interface VGExternalAccessory : NSObject <VGExternalAccessory> {

	EAAccessory* _accessory;
	VGExternalAccessoryState* _accessoryState;
	VGVehicleState* _currentVehicleState;
	VGVehicle* _currentVehicle;
	id<VGExternalAccessoryUpdating> _accessoryUpdateDelegate;

}

@property (assign,nonatomic,__weak) id<VGExternalAccessoryUpdating> accessoryUpdateDelegate;              //@synthesize accessoryUpdateDelegate=_accessoryUpdateDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) BOOL isConnectedToElectricVehicle; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * bluetoothIdentifier; 
@property (nonatomic,readonly) VGExternalAccessoryState * currentState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isConnected;
-(VGExternalAccessoryState *)currentState;
-(id)init;
-(BOOL)isConnectedToElectricVehicle;
-(void)_updateFromVehicleInfo:(id)arg1 ;
-(NSString *)identifier;
-(void)_loadInitialAccessoryState;
-(id<VGExternalAccessoryUpdating>)accessoryUpdateDelegate;
-(void)_accessoryDidUpdateVehicle:(id)arg1 ;
-(void)_accessoryDidConnect:(id)arg1 ;
-(void)_accessoryDidUpdate:(id)arg1 ;
-(void)listCarsWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)bluetoothIdentifier;
-(void)getStateOfChargeForVehicle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_accessoryDidDisconnect:(id)arg1 ;
-(void)dealloc;
-(void)setAccessoryUpdateDelegate:(id<VGExternalAccessoryUpdating>)arg1 ;
@end
