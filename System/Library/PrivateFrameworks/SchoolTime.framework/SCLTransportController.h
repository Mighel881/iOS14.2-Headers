/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SCLSettingsSyncTransport.h>

@protocol SCLTransportControllerDelegate;
@class NRDevice, NRPairedDeviceRegistry, IDSService, NSString, SCLTransportService, SCLSettingsSyncCoordinator, IDSDevice;

@interface SCLTransportController : NSObject <SCLSettingsSyncTransport> {

	NRDevice* _NRDevice;
	NRPairedDeviceRegistry* _deviceRegistry;
	IDSService* _service;
	NSString* _IDSDeviceIdentifier;
	SCLTransportService* _transportService;
	id<SCLTransportControllerDelegate> _delegate;
	SCLSettingsSyncCoordinator* _settingsSyncCoordinator;

}

@property (nonatomic,readonly) NRDevice * NRDevice;                                                    //@synthesize NRDevice=_NRDevice - In the implementation block
@property (nonatomic,readonly) NRPairedDeviceRegistry * deviceRegistry;                                //@synthesize deviceRegistry=_deviceRegistry - In the implementation block
@property (nonatomic,readonly) IDSService * service;                                                   //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSString * IDSDeviceIdentifier;                                         //@synthesize IDSDeviceIdentifier=_IDSDeviceIdentifier - In the implementation block
@property (nonatomic,readonly) IDSDevice * device; 
@property (assign,nonatomic,__weak) SCLTransportService * transportService;                            //@synthesize transportService=_transportService - In the implementation block
@property (assign,nonatomic,__weak) id<SCLTransportControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) SCLSettingsSyncCoordinator * settingsSyncCoordinator;              //@synthesize settingsSyncCoordinator=_settingsSyncCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IDSDevice *)device;
-(id<SCLTransportControllerDelegate>)delegate;
-(void)setDelegate:(id<SCLTransportControllerDelegate>)arg1 ;
-(IDSService *)service;
-(NRPairedDeviceRegistry *)deviceRegistry;
-(void)setTransportService:(SCLTransportService *)arg1 ;
-(NSString *)IDSDeviceIdentifier;
-(void)service:(id)arg1 incomingProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg1 didDeliverMessageWithIdentifier:(id)arg2 ;
-(void)applySchedule:(id)arg1 ;
-(NRDevice *)NRDevice;
-(void)handleIncomingSchedule:(id)arg1 forType:(int)arg2 ;
-(void)handleIncomingHistoryItem:(id)arg1 ;
-(void)handleRemoteScheduleSettingsRequest;
-(SCLSettingsSyncCoordinator *)settingsSyncCoordinator;
-(SCLTransportService *)transportService;
-(BOOL)sendSchedule:(id)arg1 identifier:(id*)arg2 error:(id*)arg3 ;
-(id)initWithNRDevice:(id)arg1 deviceRegistry:(id)arg2 service:(id)arg3 deviceIdentifier:(id)arg4 ;
-(void)addUnlockHistoryItem:(id)arg1 ;
-(void)requestRemoteSettings;
-(void)setSettingsSyncCoordinator:(SCLSettingsSyncCoordinator *)arg1 ;
@end
